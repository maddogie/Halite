
//         Copyright E�in O'Callaghan 2006 - 2007.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#pragma once

namespace hal 
{
class TorrentInternal;
}

BOOST_CLASS_VERSION(hal::TorrentInternal, 6)

namespace hal 
{

namespace lbt = libtorrent;
namespace fs = boost::filesystem;

using fs::path;
using fs::ifstream;
using fs::ofstream;
using boost::serialization::make_nvp;

class TorrentInternal
{
	friend class BitTorrent_impl;
	
	template<typename T>
	class TransferTracker
	{
	public:
		TransferTracker() :
			total_(0),
			total_offset_(0)
		{}
		
		TransferTracker(T total) :
			total_(total),
			total_offset_(0)
		{}
		
		TransferTracker(T total, T offset) :
			total_(total),
			total_offset_(offset)
		{}
		
		void reset(T total) const
		{
			total_ = total;
			total_offset_ = 0;
		}
		
		T update(T rel_total) const
		{
			total_ += (rel_total - total_offset_);
			total_offset_ = rel_total;
			
			return total_;
		}
		
		void setOffset(T offset) const
		{
			total_offset_ = offset;
		}
		
		operator T() const { return total_; }
		
		friend class boost::serialization::access;
		template<class Archive>
		void serialize(Archive& ar, const unsigned int version)
		{
			ar & make_nvp("total", total_);
		}
		
	private:
		mutable T total_;
		mutable T total_offset_;
	};
	
	class DurationTracker
	{
	public:
		DurationTracker() :
			total_(boost::posix_time::time_duration(0,0,0,0),boost::posix_time::time_duration(0,0,0,0)),
			start_(boost::posix_time::second_clock::universal_time())
		{}
		
		boost::posix_time::time_duration update() const
		{
			return total_.update(boost::posix_time::second_clock::universal_time() - start_);
		}
		
		void reset() const
		{
			total_.setOffset(boost::posix_time::time_duration(0,0,0,0));
			start_ = boost::posix_time::second_clock::universal_time();
		}
		
		friend class boost::serialization::access;
		template<class Archive>
		void serialize(Archive& ar, const unsigned int version)
		{
			ar & make_nvp("total", total_);
		}
		
		operator boost::posix_time::time_duration() const { return total_; }
		
	private:
		TransferTracker<boost::posix_time::time_duration> total_;	
		mutable boost::posix_time::ptime start_;
		
	};
	
public:
	TorrentInternal() :	
		transferLimit_(std::pair<float, float>(-1, -1)),
		connections_(-1),
		uploads_(-1),
		ratio_(0),
		resolve_countries_(true),
		state_(TorrentDetail::torrent_active),
		in_session_(false),
		totalUploaded_(0),
		totalBase_(0),
		startTime_(boost::posix_time::second_clock::universal_time())
	{}
	
	TorrentInternal(libtorrent::torrent_handle h, std::wstring f, wpath saveDirectory) :
		transferLimit_(std::pair<float, float>(bittorrent().defTorrentDownload(), bittorrent().defTorrentUpload())),
		connections_(bittorrent().defTorrentMaxConn()),
		uploads_(bittorrent().defTorrentMaxUpload()),
		ratio_(0),
		resolve_countries_(true),                            // **********
		state_(TorrentDetail::torrent_active),
		filename_(f),
		save_directory_(saveDirectory.string()),
		in_session_(true),
		handle_(h),
		totalUploaded_(0),
		totalBase_(0),
		startTime_(boost::posix_time::second_clock::universal_time())
	{}
	
	TorrentDetail_ptr getTorrentDetail_ptr() const;
	void setTransferSpeed(float down, float up);
	void setConnectionLimit(int maxConn, int maxUpload);
	void setTransferSpeed();
	void setConnectionLimit();
	pair<float, float> getTransferSpeed();
	pair<int, int> getConnectionLimit();
	
	void setRatio(float ratio) 
	{ 
		if (ratio < 0) ratio = 0;
		
		handle_.set_ratio(ratio);
		ratio_ = ratio; 
	}
	
	void setRatio()
	{ 		
		handle_.set_ratio(ratio_);
	}
	
	float getRatio()
	{
		return ratio_;
	}
	
	void setResolveCountries()
	{
		handle_.resolve_countries(resolve_countries_);
	}
	
	void resume()
	{
		if (!in_session_ && the_session_) 
		{
			handle_ = the_session_->add_torrent(metadata_, 
				to_utf8(save_directory_.c_str()), resumedata_);
				
			in_session_ = true;
			applySettings();
		}		
		assert(in_session_);
		
		handle_.resume();
		state_ = TorrentDetail::torrent_active;
		
		activeDuration_.reset();
		seedingDuration_.reset();
		
		assert(!handle_.is_paused());
	}
	
	void pause()
	{
		if (state_ != TorrentDetail::torrent_stopped)
		{	
			if (!in_session_ && the_session_) 
			{
				handle_ = the_session_->add_torrent(metadata_, 
					to_utf8(save_directory_.c_str()), resumedata_);
					
				in_session_ = true;
				applySettings();
			}
			assert(in_session_);
			
			handle_.pause();
			state_ = TorrentDetail::torrent_paused;	
			
			assert(handle_.is_paused());
		}
	}
	
	void stop()
	{
		if (in_session_ && the_session_) 
		{
			the_session_->remove_torrent(handle_);
			in_session_ = false;
		}
		assert(!in_session_);
		
		state_ = TorrentDetail::torrent_stopped;	
	}
	
	bool isActive() const { return state_ == TorrentDetail::torrent_active;	}
	
	unsigned state() const { return state_; }
	
	void setTrackerLogin()
	{
		if (trackerUsername_ != L"")
		{
			handle_.set_tracker_login(hal::to_utf8(trackerUsername_),
				hal::to_utf8(trackerPassword_));
		}
	}
	
	void setTrackerLogin(wstring username, wstring password)
	{
		trackerUsername_ = username;
		trackerPassword_ = password;
		setTrackerLogin();
	}	
	
	pair<wstring, wstring> getTrackerLogin() const
	{
		return make_pair(trackerUsername_, trackerPassword_);
	}
	
	const std::wstring& filename() const { return filename_; }
	
	const libtorrent::torrent_handle& handle() const { return handle_; }

	void setHandle(libtorrent::torrent_handle h) 
	{ 
		handle_ = h; 
		in_session_ = true;
	}
	
	void resetTrackers()
	{
		handle_.replace_trackers(torrent_trackers_);		
		trackers_.clear();	
	}
	
	const std::vector<TrackerDetail>& getTrackers()
	{
		if (trackers_.empty())
		{
			std::vector<lbt::announce_entry> trackers = handle_.trackers();
			
			foreach (const lbt::announce_entry& entry, trackers)
			{
				trackers_.push_back(
					TrackerDetail(hal::from_utf8(entry.url), entry.tier));
			}
		}		
		return trackers_;
	}
	
	void applyTrackers()
	{
		if (torrent_trackers_.empty())
			torrent_trackers_ = handle_.trackers();
		
		if (!trackers_.empty())
		{
			std::vector<lbt::announce_entry> trackers;
			
			foreach (const TrackerDetail& tracker, trackers_)
			{
				trackers.push_back(
					lbt::announce_entry(hal::to_utf8(tracker.url)));
				trackers.back().tier = tracker.tier;
			}
			handle_.replace_trackers(trackers);
		}
	}
	
	void setTrackers(const std::vector<TrackerDetail>& trackerDetails)
	{
		trackers_.clear();
		trackers_.assign(trackerDetails.begin(), trackerDetails.end());
		
		applyTrackers();
	}
	
	void setFilePriorities(std::vector<int> fileIndices, int priority)
	{
		if (!filePriorities_.empty())
		{
			foreach(int i, fileIndices)
				filePriorities_[i] = priority;
				
			applyFilePriorities();
		}
	}
	
	void applyFilePriorities()
	{		
		if (in_session_ && the_session_) 
		{
			if (!filePriorities_.empty())
				handle_.prioritize_files(filePriorities_);
		}
	}

	bool inSession() const { return in_session_; }
	const wstring& saveDirectory() { return save_directory_; }
	
    friend class boost::serialization::access;
    template<class Archive>
    void serialize(Archive& ar, const unsigned int version)
    {
        ar & make_nvp("transferLimit", transferLimit_);
        ar & make_nvp("connections", connections_);
        ar & make_nvp("uploads", uploads_);
        ar & make_nvp("filename", filename_);
        ar & make_nvp("saveDirectory", save_directory_);
		
		if (version > 3) {
			ar & make_nvp("payloadUploaded_", payloadUploaded_);
			ar & make_nvp("payloadDownloaded_", payloadDownloaded_);
			ar & make_nvp("uploaded_", uploaded_);
			ar & make_nvp("downloaded_", downloaded_);		
		} 
		else if (version > 1)
		{
			ar & make_nvp("totalUploaded", totalUploaded_);
			ar & make_nvp("ratio", ratio_);
			
			payloadUploaded_.reset(totalUploaded_);
		}
		
		if (version > 0) {
			ar & make_nvp("trackerUsername", trackerUsername_);
			ar & make_nvp("trackerPassword", trackerPassword_);
		}
		if (version > 1) {
			ar & make_nvp("state", state_);
			ar & make_nvp("trackers", trackers_);
		}
	
		if (version > 2) {
			ar & make_nvp("resolve_countries", resolve_countries_);
		}
		if (version > 4) {
			ar & make_nvp("file_priorities", filePriorities_);
		}
		if (version > 5) {
			ar & make_nvp("startTime", startTime_);
			ar & make_nvp("activeDuration", activeDuration_);
			ar & make_nvp("seedingDuration", seedingDuration_);
		}
    }
	
	void setEntryData(libtorrent::entry metadata, libtorrent::entry resumedata)
	{		
		metadata_ = metadata;
		resumedata_ = resumedata;
	}
	
	void applySettings()
	{		
		setTransferSpeed();
		setConnectionLimit();
		setRatio();
		applyTrackers();
		applyFilePriorities();
		setResolveCountries();
	}
	
	std::vector<lbt::peer_info>& peers() { return peers_; }
	
	void updatePeers() const
	{
		if (in_session_)
			handle_.get_peer_info(peers_);
		else
			peers_.clear();
	}
	
	void getPeerDetails(PeerDetails& peerDetails) const
	{
		if (in_session_)
			foreach (lbt::peer_info peer, peers_) 
			{
				peerDetails.push_back(peer);
			}	
	}

	void getFileDetails(FileDetails& fileDetails) const
	{
		if (in_session_)
		{
			lbt::torrent_info info = handle_.get_torrent_info();
			std::vector<lbt::file_entry> files;
			
			std::copy(info.begin_files(), info.end_files(), 
				std::back_inserter(files));
			
			std::vector<float> fileProgress;			
			handle_.file_progress(fileProgress);
			
			if (filePriorities_.size() != files.size())
			{
				filePriorities_.clear();
				filePriorities_.assign(files.size(), 1);
			}
			
			for(size_t i=0, e=files.size(); i<e; ++i)
			{
				wstring fullPath = hal::from_utf8(files[i].path.string());
				
				fileDetails.push_back(FileDetail(fullPath, files[i].size, fileProgress[i], filePriorities_[i], i));
			}			
		}
	}

private:
	static libtorrent::session* the_session_;
	
	std::pair<float, float> transferLimit_;
	
	unsigned state_;
	int connections_;
	int uploads_;
	bool in_session_;
	float ratio_;
	bool resolve_countries_;
	
	std::wstring filename_;
	std::wstring save_directory_;
	mutable libtorrent::torrent_handle handle_;	
	
	libtorrent::entry metadata_;
	libtorrent::entry resumedata_;
	
	std::wstring trackerUsername_;	
	std::wstring trackerPassword_;
	
	mutable boost::int64_t totalUploaded_;
	mutable boost::int64_t totalBase_;
	
	TransferTracker<boost::int64_t> payloadUploaded_;
	TransferTracker<boost::int64_t> payloadDownloaded_;
	TransferTracker<boost::int64_t> uploaded_;
	TransferTracker<boost::int64_t> downloaded_;
	
	boost::posix_time::ptime startTime_;
	DurationTracker activeDuration_;
	DurationTracker seedingDuration_;
	
	std::vector<TrackerDetail> trackers_;
	std::vector<lbt::announce_entry> torrent_trackers_;
	mutable std::vector<lbt::peer_info> peers_;	
	mutable std::vector<int> filePriorities_;
	
	mutable lbt::torrent_status statusMemory_;
};

typedef std::map<std::string, TorrentInternal> TorrentMap;
typedef std::pair<std::string, TorrentInternal> TorrentPair;

void TorrentInternal::setConnectionLimit(int maxConn, int maxUpload)
{
	handle_.set_max_connections(maxConn);
	handle_.set_max_uploads(maxUpload);

	connections_ = 	maxConn;
	uploads_ = maxUpload;
}

void TorrentInternal::setConnectionLimit()
{
	handle_.set_max_connections(connections_);
	handle_.set_max_uploads(uploads_);
}

pair<int, int> TorrentInternal::getConnectionLimit()
{
	return make_pair(connections_, uploads_);
}

void TorrentInternal::setTransferSpeed(float download, float upload)
{
	int down = (download > 0) ? static_cast<int>(download*1024) : -1;
	handle_.set_download_limit(down);
	int up = (upload > 0) ? static_cast<int>(upload*1024) : -1;
	handle_.set_upload_limit(up);
	
	transferLimit_ = make_pair(download, upload);
}

void TorrentInternal::setTransferSpeed()
{
	int down = (transferLimit_.first > 0) ? static_cast<int>(transferLimit_.first*1024) : -1;
	handle_.set_download_limit(down);
	int up = (transferLimit_.second > 0) ? static_cast<int>(transferLimit_.second*1024) : -1;
	handle_.set_upload_limit(up);
}

pair<float, float> TorrentInternal::getTransferSpeed()
{
	return transferLimit_;
}

TorrentDetail_ptr TorrentInternal::getTorrentDetail_ptr() const
{	
	try
	{

	if (inSession())
	{
		statusMemory_ = handle_.status();
	}
	
	wstring state;
	
	if (state_ == TorrentDetail::torrent_paused)
		state = app().res_wstr(HAL_TORRENT_PAUSED);
	else if (state_ == TorrentDetail::torrent_stopped)
		state = app().res_wstr(HAL_TORRENT_STOPPED);
	else
	{
		switch (statusMemory_.state)
		{
		case lbt::torrent_status::queued_for_checking:
			state = app().res_wstr(HAL_TORRENT_QUEUED_CHECKING);
			break;
		case lbt::torrent_status::checking_files:
			state = app().res_wstr(HAL_TORRENT_CHECKING_FILES);
			break;
		case lbt::torrent_status::connecting_to_tracker:
			state = app().res_wstr(HAL_TORRENT_CONNECTING);
			break;
		case lbt::torrent_status::downloading_metadata:
			state = app().res_wstr(HAL_TORRENT_METADATA);
			break;
		case lbt::torrent_status::downloading:
			state = app().res_wstr(HAL_TORRENT_DOWNLOADING);
			break;
		case lbt::torrent_status::finished:
			state = app().res_wstr(HAL_TORRENT_FINISHED);
			break;
		case lbt::torrent_status::seeding:
			state = app().res_wstr(HAL_TORRENT_SEEDING);
			break;
		case lbt::torrent_status::allocating:
			state = app().res_wstr(HAL_TORRENT_ALLOCATING);
			break;
		}	
	}
	
	boost::posix_time::time_duration td(boost::posix_time::pos_infin);
	
	if (statusMemory_.download_payload_rate != 0)
	{
		td = boost::posix_time::seconds(	
			long(float(statusMemory_.total_wanted-statusMemory_.total_wanted_done) / statusMemory_.download_payload_rate));
	}
	
	totalUploaded_ += (statusMemory_.total_payload_upload - totalBase_);
	totalBase_ = statusMemory_.total_payload_upload;
	
	uploaded_.update(statusMemory_.total_upload);
	payloadUploaded_.update(statusMemory_.total_payload_upload);
	downloaded_.update(statusMemory_.total_download);
	payloadDownloaded_.update(statusMemory_.total_payload_download);
	
	if (isActive())
	{
		activeDuration_.update();
	}
	
	updatePeers();
	
	size_t totalPeers = 0;
	size_t peersConnected = 0;
	size_t totalSeeds = 0;
	size_t seedsConnected = 0;
	
	foreach (lbt::peer_info peer, peers_) 
	{
		float speedSum = peer.down_speed + peer.up_speed;
		
		if (!(peer.flags & lbt::peer_info::seed))
		{
			++totalPeers;
			
			if (speedSum > 0)
				++peersConnected;
		}
		else
		{
			++totalSeeds;
			
			if (speedSum > 0)
				++seedsConnected;
		}
	}			

	return TorrentDetail_ptr(new TorrentDetail(filename_, state, hal::from_utf8(statusMemory_.current_tracker), 
		pair<float, float>(statusMemory_.download_payload_rate, statusMemory_.upload_payload_rate),
		statusMemory_.progress, statusMemory_.distributed_copies, statusMemory_.total_wanted_done, statusMemory_.total_wanted, uploaded_, payloadUploaded_,
		downloaded_, payloadDownloaded_, totalPeers, peersConnected, totalSeeds, seedsConnected, ratio_, td, statusMemory_.next_announce, activeDuration_, seedingDuration_, startTime_));

	}
	catch (const lbt::invalid_handle&)
	{
		event().post(shared_ptr<EventDetail>(
			new EventInvalidTorrent(Event::critical, Event::invalidTorrent, "addTorrent", "addTorrent")));\
	}
	catch (const std::exception& e)
	{
		event().post(shared_ptr<EventDetail>(
			new EventTorrentException(Event::critical, Event::torrentException, e.what(), "addTorrent", "addTorrent")));
	}
	
	return TorrentDetail_ptr(new TorrentDetail(filename_, app().res_wstr(HAL_TORRENT_STOPPED),  app().res_wstr(IDS_NA)));
}

} //namespace hal
