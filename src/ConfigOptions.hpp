
//         Copyright Eóin O'Callaghan 2006 - 2009.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#pragma once

#define ID_CONFIG_BEGIN	 					12000
#define HAL_SECURITY_IPF_GB					ID_CONFIG_BEGIN + 1
#define HAL_SECURITY_PE_GB	 				ID_CONFIG_BEGIN + 2
#define HAL_SECURITY_CP_GB	 				ID_CONFIG_BEGIN + 3
#define HAL_SECURITY_EL_GB	 				ID_CONFIG_BEGIN + 4
#define HAL_SECURITY_OUTGOING 				ID_CONFIG_BEGIN + 5
#define HAL_SECURITY_INCOMING			 	ID_CONFIG_BEGIN + 6
#define HAL_SECURITY_ENABLED			 	ID_CONFIG_BEGIN + 7
#define HAL_SECURITY_FORCED	 				ID_CONFIG_BEGIN + 8
#define HAL_SECURITY_DISABLED 				ID_CONFIG_BEGIN + 9
#define HAL_BITT_OPENPORT 					ID_CONFIG_BEGIN + 10
#define HAL_BITT_GDHT	 					ID_CONFIG_BEGIN + 11
#define HAL_BITT_DHT_NOTE				 	ID_CONFIG_BEGIN + 12
#define HAL_BITT_GSETTINGS	 				ID_CONFIG_BEGIN + 13
#define HAL_BITT_SELECT_TEXT 				ID_CONFIG_BEGIN + 14
#define HAL_CONFIGT_TOTALMAX 				ID_CONFIG_BEGIN + 15
#define HAL_CONFIGT_TOTALUP	 				ID_CONFIG_BEGIN + 16
#define HAL_CONFIGT_DOWNRATE			 	ID_CONFIG_BEGIN + 17
#define HAL_CONFIGT_UPRATE	 				ID_CONFIG_BEGIN + 18
#define HAL_CONFIGT_TORMAX 				ID_CONFIG_BEGIN + 19
#define HAL_CONFIGT_TORUP 					ID_CONFIG_BEGIN + 20
#define HAL_CONFIGT_TORDOWNRATE			ID_CONFIG_BEGIN + 21
#define HAL_CONFIGT_TORUPRATE				ID_CONFIG_BEGIN + 22
#define HAL_CONFIGT_GLOBAL_TEXT				ID_CONFIG_BEGIN + 23
#define HAL_CONFIGT_TOR_TEXT 				ID_CONFIG_BEGIN + 24
#define HAL_CONFIGT_DEF_FOLDER 				ID_CONFIG_BEGIN + 25
#define HAL_CONFIGT_GLOBALG 				ID_CONFIG_BEGIN + 26
#define HAL_CONFIGT_TORRENTG 				ID_CONFIG_BEGIN + 27
#define HAL_CONFIGT_TDOWNRATE 				ID_CONFIG_BEGIN + 28
#define HAL_GENERAL_GROUP					ID_CONFIG_BEGIN + 29
#define HAL_GENERAL_LANG					ID_CONFIG_BEGIN + 30
#define HAL_GENERAL_CLOSETRAY				ID_CONFIG_BEGIN + 31
#define HAL_GENERAL_CONFIRMCLOSE			ID_CONFIG_BEGIN + 32
#define HAL_ABOUT_GROUP     				ID_CONFIG_BEGIN + 33
#define HAL_ABOUT_VERSION					ID_CONFIG_BEGIN + 34
#define HAL_BITT_GPORTFORWARDING			ID_CONFIG_BEGIN + 35
#define HAL_BITT_GPORTFORWARD_NONE		ID_CONFIG_BEGIN + 36
#define HAL_BITT_GPORTFORWARD_UPNG		ID_CONFIG_BEGIN + 37
#define HAL_BIT_GPORTFORWARD_NATPMP		ID_CONFIG_BEGIN + 38
#define HAL_BITT_GPORTFORWARD_TEST			ID_CONFIG_BEGIN + 39
#define HAL_BITT_GPORTFORWARD_LIST			ID_CONFIG_BEGIN + 40
#define HAL_BC_MOVETO_FOLDER				ID_CONFIG_BEGIN + 41
#define HAL_BC_MOVETO_BROWSE				ID_CONFIG_BEGIN + 42
#define HAL_BC_MOVETO_TEXT					ID_CONFIG_BEGIN + 43
#define HAL_BC_MOVETO_CHECK				ID_CONFIG_BEGIN + 44
#define HAL_BC_DHT_EXT						ID_CONFIG_BEGIN + 45
#define HAL_BC_METADATADHT_EXT				ID_CONFIG_BEGIN + 46
#define HAL_BC_uT_METADATA_EXT				ID_CONFIG_BEGIN + 47
#define HAL_BC_uT_PEEER_EX_EXT				ID_CONFIG_BEGIN + 48
#define HAL_BC_SMART_BAN_PLUGIN_EXT		ID_CONFIG_BEGIN + 49
#define HAL_BC_EXT_GROUP					ID_CONFIG_BEGIN + 50

#define HAL_CGLOBAL_QUEUEG					ID_CONFIG_BEGIN + 51
#define HAL_CGLOBAL_ACTDOWNT				ID_CONFIG_BEGIN + 52
#define HAL_CGLOBAL_ACTDOWN				ID_CONFIG_BEGIN + 53
#define HAL_CGLOBAL_ACTSEEDT				ID_CONFIG_BEGIN + 54
#define HAL_CGLOBAL_ACTSEED				ID_CONFIG_BEGIN + 55
#define HAL_CGLOBAL_DISCOUNTSLOW			ID_CONFIG_BEGIN + 56
#define HAL_CGLOBAL_ACTSEEDHARDT			ID_CONFIG_BEGIN + 57
#define HAL_CGLOBAL_ACTSEEDHARD			ID_CONFIG_BEGIN + 58
#define HAL_CGLOBAL_SEEDINGG				ID_CONFIG_BEGIN + 59
#define HAL_CGLOBAL_SHARERATIOT			ID_CONFIG_BEGIN + 60
#define HAL_CGLOBAL_SHARERATIO				ID_CONFIG_BEGIN + 61
#define HAL_CGLOBAL_SHARERATIOTIMET		ID_CONFIG_BEGIN + 62
#define HAL_CGLOBAL_SHARERATIOTIME			ID_CONFIG_BEGIN + 63
#define HAL_CGLOBAL_SHARETIMET				ID_CONFIG_BEGIN + 64
#define HAL_CGLOBAL_SHARETIME				ID_CONFIG_BEGIN + 65
#define HAL_BITT_RANDOMIZE_PORT				ID_CONFIG_BEGIN + 66
#define HAL_BIT_GPORTFORWARD_MODELTEXT	ID_CONFIG_BEGIN + 67
#define HAL_BIT_GPORTFORWARD_MODEL		ID_CONFIG_BEGIN + 68
#define HAL_BC_CACHE_GROUP					ID_CONFIG_BEGIN + 69
#define HAL_BC_CACHE_RS_L					ID_CONFIG_BEGIN + 70
#define HAL_BC_CACHE_RS_T					ID_CONFIG_BEGIN + 71
#define HAL_BC_CACHE_WS_L					ID_CONFIG_BEGIN + 72
#define HAL_BC_CACHE_WS_T					ID_CONFIG_BEGIN + 73
#define HAL_BC_CACHE_TOTAL_L				ID_CONFIG_BEGIN + 74
#define HAL_BC_CACHE_TOTAL_T				ID_CONFIG_BEGIN + 75
#define HAL_BC_CACHE_MS_L					ID_CONFIG_BEGIN + 76
#define HAL_BC_CACHE_MS_E					ID_CONFIG_BEGIN + 77
#define HAL_BC_CACHE_PE_L					ID_CONFIG_BEGIN + 78
#define HAL_BC_CACHE_PE_E					ID_CONFIG_BEGIN + 79
#define HAL_BC_CACHE_WR_L					ID_CONFIG_BEGIN + 80
#define HAL_BC_CACHE_WR_T					ID_CONFIG_BEGIN + 81
#define HAL_BC_CACHE_RR_L					ID_CONFIG_BEGIN + 82
#define HAL_BC_CACHE_RR_T					ID_CONFIG_BEGIN + 83
#define HAL_BC_CACHE_TIMER					ID_CONFIG_BEGIN + 84
#define HAL_BC_CACHE_GROUP_TEXT			ID_CONFIG_BEGIN + 85
#define HAL_BC_DHT_MAXREPLIES_T				ID_CONFIG_BEGIN + 86
#define HAL_BC_DHT_MAXREPLIES_S				ID_CONFIG_BEGIN + 87
#define HAL_BC_DHT_BRANCHING_T				ID_CONFIG_BEGIN + 88
#define HAL_BC_DHT_BRANCHING_S				ID_CONFIG_BEGIN + 89
#define HAL_BC_DHT_MAXFAILS_T				ID_CONFIG_BEGIN + 90
#define HAL_BC_DHT_MAXFAILS_S				ID_CONFIG_BEGIN + 91
#define HAL_BC_DHT_PORT_R					ID_CONFIG_BEGIN + 92
#define HAL_BC_DHT_PORT_LISTEN_R			ID_CONFIG_BEGIN + 94
#define HAL_BC_DHT_PORT_E					ID_CONFIG_BEGIN + 95
#define HAL_BC_DHT_RAND_PORT_R				ID_CONFIG_BEGIN + 96
#define HAL_BC_DHT_PORT_UPPER_E			ID_CONFIG_BEGIN + 97
#define HAL_BC_RESOLVE_COUNTRIES			ID_CONFIG_BEGIN + 98
#define HAL_GENERAL_COMPLETE_BALLOON		ID_CONFIG_BEGIN + 99
#define HAL_GENERAL_BALLOON_TIMEOUT		ID_CONFIG_BEGIN + 100
#define HAL_GENERAL_BALLOON_STATIC			ID_CONFIG_BEGIN + 101
#define HAL_BC_NET_INTERFACE				ID_CONFIG_BEGIN + 102
#define HAL_BC_USE_INTERFACE				ID_CONFIG_BEGIN + 103
#define HAL_BC_ALL_TRACKERS					ID_CONFIG_BEGIN + 104
#define HAL_BC_ALL_TIERS						ID_CONFIG_BEGIN + 105
#define HAL_BC_LT_TRACKERS_EXT				ID_CONFIG_BEGIN + 106

#ifndef RC_INVOKED

#include "stdAfx.hpp"

#include "Halite.hpp"
#include "halConfig.hpp"
#include "HaliteWindow.hpp"
#include "HaliteEditCtrl.hpp"

#include "DdxEx.hpp"
#include "AtlAutosizeDlg.h"

class GeneralOptions :
    public WTL::CPropertyPageImpl<GeneralOptions>,
	public ATL::CAutoSizeWindow<GeneralOptions, false>,
    public WTL::CWinDataExchange<GeneralOptions>
{
	typedef GeneralOptions this_class_t;
	typedef WTL::CPropertyPageImpl<this_class_t> propPageClass;
	typedef ATL::CAutoSizeWindow<this_class_t, false> autosizeClass;
	
public:
    enum { IDD = HAL_CONFIGGENERAL };

	GeneralOptions(HaliteWindow* haliteWindow) :
		haliteWindow_(haliteWindow)
	{}

	~GeneralOptions()
	{}

	BEGIN_MSG_MAP_EX(GeneralOptions)
		try
		{
		MSG_WM_INITDIALOG(OnInitDialog)
		COMMAND_ID_HANDLER_EX(HAL_GENERAL_COMPLETE_BALLOON, onCompleteBalloonCheck)
		}
		HAL_ALL_EXCEPTION_CATCH(L"in GeneralOptions MSG_MAP")
		CHAIN_MSG_MAP(CPropertyPageImpl<GeneralOptions>)
		CHAIN_MSG_MAP(autosizeClass)
	END_MSG_MAP()

	BEGIN_DDX_MAP(GeneralOptions)
		DDX_CHECK(HAL_GENERAL_ONEINST, halite().oneInst)
		DDX_CHECK(HAL_GENERAL_TRAY, haliteWindow_->use_tray)
		DDX_CHECK(HAL_GENERAL_ADVGUI, haliteWindow_->advancedUI)
		DDX_CHECK(HAL_GENERAL_CLOSETRAY, haliteWindow_->closeToTray)
		DDX_CHECK(HAL_GENERAL_CONFIRMCLOSE, haliteWindow_->confirmClose)
		DDX_CHECK(HAL_GENERAL_COMPLETE_BALLOON, haliteWindow_->torrent_complete_balloon_)
		DDX_INT(HAL_GENERAL_BALLOON_TIMEOUT, haliteWindow_->balloons_timout_)		
	END_DDX_MAP()

#define GENERAL_CONFIG_LAYOUT \
	WMB_HEAD(WMB_COLNOMAX(_exp)), \
		WMB_ROW(_gap,	_d), \
		WMB_ROW(_auto,	HAL_GENERAL_ONEINST), \
		WMB_ROW(_auto,	HAL_GENERAL_ADVGUI), \
		WMB_ROW(_auto,	HAL_GENERAL_TRAY), \
		WMB_ROW(_auto,	HAL_GENERAL_CLOSETRAY), \
		WMB_ROW(_auto,	HAL_GENERAL_CONFIRMCLOSE), \
	WMB_END()

#define GENERAL_LANGUAGE_LAYOUT \
	WMB_HEAD(WMB_COLNOMAX(_exp)), \
		WMB_ROW(_auto,	HAL_GENERAL_LANG), \
		WMB_ROW(_auto,	HAL_LANGLIST), \
	WMB_END()

#define GENERAL_BALLOON_LAYOUT \
	WMB_HEAD(WMB_COLNOMAX(_exp|70), WMB_COLNOMAX(_exp|30), WMB_COLNOMAX(_exp|30)), \
		WMB_ROW(_auto,	HAL_GENERAL_COMPLETE_BALLOON, HAL_GENERAL_BALLOON_STATIC, HAL_GENERAL_BALLOON_TIMEOUT), \
	WMB_END()

	BEGIN_WINDOW_MAP(this_class_t, 6, 6, 3, 3)
		WMB_HEAD(WMB_COL(_gap), WMB_COLNOMAX(_exp), WMB_COLNOMAX(_exp), WMB_COL(_gap)),
			WMB_ROW(_gap|3,	HAL_GENERAL_GROUP, _r, _r, _r), 
			WMB_ROW(_auto,	_d, GENERAL_CONFIG_LAYOUT, GENERAL_LANGUAGE_LAYOUT), 
			WMB_ROW(_gap, _d, 0, _d), 
			WMB_ROW(_auto,	_d, GENERAL_BALLOON_LAYOUT, _r), 
			WMB_ROW(_gap,	_d),
		WMB_END()
	END_WINDOW_MAP()	

    BOOL OnInitDialog(HWND hwndFocus, LPARAM lParam);
    int OnApply();	

	void onCompleteBalloonCheck(UINT, int, HWND hWnd)
	{
		LRESULT result = ::SendMessage(hWnd, BM_GETCHECK, 0, 0);

		if (result == BST_CHECKED)
		{
			::EnableWindow(GetDlgItem(HAL_GENERAL_BALLOON_STATIC), true);
			::EnableWindow(GetDlgItem(HAL_GENERAL_BALLOON_TIMEOUT), true);
		}
		else
		{
			::EnableWindow(GetDlgItem(HAL_GENERAL_BALLOON_STATIC), false);
			::EnableWindow(GetDlgItem(HAL_GENERAL_BALLOON_TIMEOUT), false);
		}		
	}


private:
	WTL::CListBox lang_list_;
	std::map<wstring, wpath> lang_map_;
	HaliteWindow* haliteWindow_;
};

class BitTorrentOptions :
    public WTL::CPropertyPageImpl<BitTorrentOptions>,
	public ATL::CAutoSizeWindow<BitTorrentOptions, false>,
    public WTLx::WinDataExchangeEx<BitTorrentOptions>
{
	typedef BitTorrentOptions this_class_t;
	typedef ATL::CAutoSizeWindow<this_class_t, false> autosizeClass;
	
public:
    enum { IDD = HAL_CONFIGBIT };

	BitTorrentOptions()
	{}

	BEGIN_MSG_MAP_EX(this_class_t)
		try
		{
		MSG_WM_INITDIALOG(OnInitDialog)
		MSG_WM_TIMER(OnTimer)
		
		COMMAND_ID_HANDLER_EX(HAL_BC_ALL_TRACKERS, onAnnounceAllCheck)
		}
		HAL_ALL_EXCEPTION_CATCH(L"in BitTorrentOptions MSG_MAP")

		CHAIN_MSG_MAP(CPropertyPageImpl<this_class_t>)
		CHAIN_MSG_MAP(autosizeClass)
	END_MSG_MAP()

	BEGIN_DDX_MAP(this_class_t)
		DDX_CHECK(HAL_BC_uT_METADATA_EXT, hal::config().ut_metadata_plugin_)
		DDX_CHECK(HAL_BC_uT_PEEER_EX_EXT, hal::config().ut_pex_plugin_)
		DDX_CHECK(HAL_BC_SMART_BAN_PLUGIN_EXT, hal::config().smart_ban_plugin_)
		DDX_CHECK(HAL_BC_LT_TRACKERS_EXT, hal::config().lt_trackers_plugin_)
		DDX_CHECK(HAL_BC_RESOLVE_COUNTRIES, hal::config().resolve_countries_)
		DDX_CHECK(HAL_BC_ALL_TRACKERS, hal::config().announce_all_trackers_)
		DDX_CHECK(HAL_BC_ALL_TIERS, hal::config().announce_all_tiers_)

		DDX_FLOAT(HAL_BC_CACHE_MS_E, cache_size_)
		DDX_INT(HAL_BC_CACHE_PE_E, hal::config().cache_settings_.cache_expiry)		
	END_DDX_MAP()

#define BITT_EXT_LAYOUT \
	WMB_HEAD(WMB_COL(_gap), WMB_COLNOMAX(_exp), WMB_COLNOMAX(_exp), WMB_COL(_gap)), \
		WMB_ROW(_gap|3,	HAL_BC_EXT_GROUP, _r, _r, _r), \
		WMB_ROW(_auto,	_d, HAL_BC_LT_TRACKERS_EXT, HAL_BC_uT_PEEER_EX_EXT), \
		WMB_ROW(_auto,	_d, HAL_BC_uT_METADATA_EXT, HAL_BC_SMART_BAN_PLUGIN_EXT), \
		WMB_ROW(_auto,	_d, HAL_BC_RESOLVE_COUNTRIES, _r), \
		WMB_ROW(_auto,	_d, HAL_BC_ALL_TRACKERS, HAL_BC_ALL_TIERS), \
		WMB_ROW(_gap,	_d), \
	WMB_END()

#define BITT_CACHE_UPPER_LAYOUT \
	WMB_HEAD(WMB_COLNOMAX(_exp), WMB_COLNOMAX(_exp|80), WMB_COLNOMAX(_exp), WMB_COLNOMAX(_exp|80), WMB_COL(_gap)), \
		WMB_ROW(_auto,	HAL_BC_CACHE_MS_L, HAL_BC_CACHE_MS_E, HAL_BC_CACHE_PE_L, HAL_BC_CACHE_PE_E), \
		WMB_ROW(_auto,	HAL_BC_CACHE_WR_L, HAL_BC_CACHE_WR_T, HAL_BC_CACHE_RR_L, HAL_BC_CACHE_RR_T), \
		WMB_ROW(_auto,	HAL_BC_CACHE_WS_L, HAL_BC_CACHE_WS_T, HAL_BC_CACHE_RS_L, HAL_BC_CACHE_RS_T), \
	WMB_END()

#define BITT_CACHE_LAYOUT \
	WMB_HEAD(WMB_COL(_gap), WMB_COLNOMAX(_exp), WMB_COLNOMAX(_exp|80), WMB_COLNOMAX(_exp|60), WMB_COLNOMAX(_exp|80), WMB_COLNOMAX(_exp|60), WMB_COLNOMAX(_exp|80), WMB_COL(_gap)), \
		WMB_ROW(_gap|6,	HAL_BC_CACHE_GROUP, _r, _r, _r, _r, _r, _r, _r), \
		WMB_ROW(_auto,	_d, BITT_CACHE_UPPER_LAYOUT, _r, _r, _r, _r, _r, _r), \
		WMB_ROW(_gap,	_d), \
	WMB_END()

	BEGIN_WINDOW_MAP(this_class_t, 6, 6, 3, 3)
		WMB_HEAD(WMB_COL(_gap), WMB_COLNOMAX(_exp), WMB_COL(_gap)),
			WMB_ROW(_auto,	BITT_EXT_LAYOUT, _r, _r), 
			WMB_ROW(_auto,	BITT_CACHE_LAYOUT, _r, _r), 
			WMB_ROW(_gap,	_d),
		WMB_END()
	END_WINDOW_MAP()

    BOOL OnInitDialog(HWND hwndFocus, LPARAM lParam)
	{	
		cache_ =  hal::bittorrent().get_cache_details();
		cache_size_ = static_cast<double>(hal::config().cache_settings_.cache_size) / 1024 * 16;

		BOOL retval = DoDataExchange(false);
		
		SetTimer(HAL_BC_CACHE_TIMER, 1000);
		OnTimer(HAL_BC_CACHE_TIMER);
		
		onAnnounceAllCheck(0, 0, GetDlgItem(HAL_BC_ALL_TRACKERS));

		autosizeClass::CtrlsArrange();
		return retval;
	}

    int OnApply()
	{
		hal::event_log().post(shared_ptr<hal::EventDetail>(
			new hal::EventMsg(L"Applying bittorrent options.", hal::event_logger::info)));

		DoDataExchange(true);
		hal::config().cache_settings_.cache_size = static_cast<int>(cache_size_ * 1024 / 16);

		return 1;
	}	

	void onAnnounceAllCheck(UINT, int, HWND hWnd)
	{
		LRESULT result = ::SendMessage(hWnd, BM_GETCHECK, 0, 0);

		if (result == BST_CHECKED)
		{
			::EnableWindow(GetDlgItem(HAL_BC_ALL_TIERS), true);
		}
		else
		{
			::EnableWindow(GetDlgItem(HAL_BC_ALL_TIERS), false);
		}
	}

	void OnTimer(UINT_PTR uTimerID)
	{		
		if (uTimerID == HAL_BC_CACHE_TIMER) 
		{	
			cache_ =  hal::bittorrent().get_cache_details();		
			SetDlgItemText(HAL_BC_CACHE_GROUP, (hal::wform(hal::app().res_wstr(HAL_BC_CACHE_GROUP_TEXT))
				% (static_cast<double>(cache_.cache_size) / 1024 * 16)).str().c_str());

			SetDlgItemText(HAL_BC_CACHE_WR_T, (hal::wform(L"%1.2f") 
				% cache_.write_ratio).str().c_str());
			SetDlgItemText(HAL_BC_CACHE_RR_T, (hal::wform(L"%1.2f") 
				% cache_.read_ratio).str().c_str());

			SetDlgItemText(HAL_BC_CACHE_WS_T, (hal::wform(L"%1.2f MiB") 
				% (static_cast<double>(cache_.write_cache_size) / 1024 * 16)).str().c_str());
			SetDlgItemText(HAL_BC_CACHE_RS_T, (hal::wform(L"%1.2f MiB") 
				% (static_cast<double>(cache_.read_cache_size) / 1024 * 16)).str().c_str());
		}
	}

private:
	wstring cache_title_;
	double cache_size_;
	hal::cache_details cache_;
};

class PortOptions :
	public WTL::CPropertyPageImpl<PortOptions>,
	public ATL::CAutoSizeWindow<PortOptions, false>,
	public WTLx::WinDataExchangeEx<PortOptions>
{
	typedef PortOptions this_class_t;
	typedef ATL::CAutoSizeWindow<this_class_t, false> autosizeClass;
	
public:
	enum { IDD = HAL_CONFIGPORTS };

	PortOptions()
	{}

	BEGIN_MSG_MAP_EX(this_class_t)
		try
		{
		MSG_WM_INITDIALOG(OnInitDialog)
		COMMAND_ID_HANDLER_EX(HAL_BC_PORTCHECK, onPortCheck)
		COMMAND_ID_HANDLER_EX(HAL_BC_HALFCONN_CHECK, onHalfCheck)
		COMMAND_ID_HANDLER_EX(HAL_BC_DHT, onDHTCheck)
		COMMAND_ID_HANDLER_EX(HAL_BC_USE_INTERFACE, onInterfaceCheck)
		COMMAND_RANGE_HANDLER_EX(HAL_BC_DHT_PORT_R, HAL_BC_DHT_PORT_LISTEN_R, onDHTRadio)
		COMMAND_ID_HANDLER_EX(HAL_BC_DHT_RAND_PORT_R, onDHTRandCheck)
		}
		HAL_ALL_EXCEPTION_CATCH(L"in PortOptions MSG_MAP")

		CHAIN_MSG_MAP(CPropertyPageImpl<this_class_t>)
		CHAIN_MSG_MAP(autosizeClass)
	END_MSG_MAP()

	BEGIN_DDX_MAP(this_class_t)
		DDX_CHECK(HAL_BC_PORTCHECK, hal::config().use_port_range_)
		DDX_CHECK(HAL_BITT_RANDOMIZE_PORT, hal::config().randomize_port_)
		DDX_INT(HAL_BC_PORTFROM, hal::config().port_range_.first)
		DDX_INT(HAL_BC_PORTTO, hal::config().port_range_.second)		
		DDX_CHECK(HAL_BC_HALFCONN_CHECK, hal::config().half_connections_)
		DDX_EX_INT_POSITIVE(HAL_BC_HALFCONN_NUM, hal::config().half_connections_limit_)

		DDX_CHECK(HAL_BC_DHT, hal::config().enable_dht_)
		DDX_INT(HAL_BC_DHT_PORT_E, hal::config().dht_settings_.service_port)
		DDX_INT(HAL_BC_DHT_PORT_UPPER_E, hal::config().dht_upper_port_)
		DDX_CHECK(HAL_BC_DHT_RAND_PORT_R, hal::config().dht_random_port_)

		DDX_INT(HAL_BC_DHT_MAXFAILS_T, hal::config().dht_settings_.max_fail_count)
		DDX_INT(HAL_BC_DHT_BRANCHING_T, hal::config().dht_settings_.search_branching)
		DDX_INT(HAL_BC_DHT_MAXREPLIES_T, hal::config().dht_settings_.max_peers_reply)

		DDX_CHECK(HAL_BITT_GPORTFORWARD_UPNG, hal::config().mapping_upnp_)
		DDX_CHECK(HAL_BIT_GPORTFORWARD_NATPMP, hal::config().mapping_nat_pmp_)
		DDX_RADIO(HAL_BC_DHT_PORT_R, hal::config().dht_radio_)

		DDX_CHECK(HAL_BC_USE_INTERFACE, hal::config().use_custom_interface_)
		DDX_EX_STDWSTRING(HAL_BC_NET_INTERFACE, hal::config().custom_interface_);
	END_DDX_MAP()
	
#define BITT_GS_LAYOUT \
	WMB_HEAD(WMB_COLNOMAX(_exp|250), WMB_COLNOMAX(_exp), WMB_COLNOMAX(_exp), WMB_COLNOMAX(_exp)), \
		WMB_ROW(_auto,	HAL_BITT_SELECT_TEXT, _r, _r, _r), \
		WMB_ROW(_auto,	HAL_BITT_OPENPORT, HAL_BC_PORTFROM, HAL_BC_PORTCHECK, HAL_BC_PORTTO), \
		WMB_ROW(_auto,	0, HAL_BITT_RANDOMIZE_PORT, _r, _r), \
		WMB_ROW(_auto,	HAL_BC_HALFCONN_CHECK, _r, HAL_BC_HALFCONN_NUM), \
	/*	WMB_ROW(_auto,	HAL_BC_USE_INTERFACE, _r, HAL_BC_NET_INTERFACE, _r), */\
	WMB_END()

#define BITT_DHT_LAYOUT \
	WMB_HEAD(WMB_COL(_gap|6), WMB_COLNOMAX(_exp), WMB_COLNOMAX(_exp), WMB_COLNOMAX(_exp), WMB_COLNOMAX(_exp)), \
		WMB_ROW(_auto,	HAL_BC_DHT, _r, _r, _r, _r), \
		WMB_ROW(_auto,	HAL_BC_DHT_PORT_R, _r, HAL_BC_DHT_PORT_E, HAL_BC_DHT_MAXREPLIES_S, HAL_BC_DHT_MAXREPLIES_T), \
		WMB_ROW(_auto,	0, HAL_BC_DHT_RAND_PORT_R, HAL_BC_DHT_PORT_UPPER_E, HAL_BC_DHT_BRANCHING_S, HAL_BC_DHT_BRANCHING_T), \
		WMB_ROW(_auto,	HAL_BC_DHT_PORT_LISTEN_R, _r, _r, HAL_BC_DHT_MAXFAILS_S, HAL_BC_DHT_MAXFAILS_T), \
	WMB_END()

#define BITT_FOR_LAYOUT \
	WMB_HEAD(WMB_COL(_gap), WMB_COLNOMAX(_exp|50), WMB_COLNOMAX(_exp), WMB_COL(_gap)), \
		WMB_ROW(_gap|6,	HAL_BITT_GPORTFORWARDING, _r, _r, _r),\
		WMB_ROW(_auto,	_d, HAL_BITT_GPORTFORWARD_UPNG, HAL_BIT_GPORTFORWARD_MODEL), \
		WMB_ROW(_auto,	_d, HAL_BIT_GPORTFORWARD_NATPMP, HAL_BIT_GPORTFORWARD_MODELTEXT), \
		WMB_ROW(_gap,	_d), \
	WMB_END()

	BEGIN_WINDOW_MAP(this_class_t, 6, 6, 3, 3)
		WMB_HEAD(WMB_COL(_gap), WMB_COLNOMAX(_exp), WMB_COL(_gap)),
			WMB_ROW(_gap|6,	HAL_BITT_GSETTINGS, _r, _r), 
			WMB_ROW(_auto,	_d, BITT_GS_LAYOUT),
			WMB_ROW(_gap,	_d),
			WMB_ROW(_gap|6,	HAL_BITT_GDHT, _r, _r),
			WMB_ROW(_auto,	_d, BITT_DHT_LAYOUT), 
			WMB_ROW(_gap,	_d),
			WMB_ROW(_auto,	BITT_FOR_LAYOUT, _r, _r), 
			WMB_ROW(_gap,	_d),
		WMB_END()
	END_WINDOW_MAP()

    BOOL OnInitDialog (HWND hwndFocus, LPARAM lParam)
	{	
//		helpLink.SubclassWindow(GetDlgItem(HAL_BC_EXT_GROUP));
//		helpLink.SetHyperLink(L"http://www.binarynotions.com/");
		
//		whyHalfConn.SubclassWindow(GetDlgItem(HAL_BC_CON_WHY));
//		whyHalfConn.SetHyperLink(L"http://www.binarynotions.com/");
		
		BOOL retval = DoDataExchange(false);

		onHalfCheck(0, 0, GetDlgItem(HAL_BC_HALFCONN_CHECK));
		onInterfaceCheck(0, 0, GetDlgItem(HAL_BC_USE_INTERFACE));
		onPortCheck(0, 0, GetDlgItem(HAL_BC_PORTCHECK));
		onDHTCheck(0, 0, GetDlgItem(HAL_BC_DHT));

		SetDlgItemText(HAL_BIT_GPORTFORWARD_MODELTEXT, hal::bittorrent().upnp_router_model().c_str());

	//	autosizeClass::CtrlsArrange();
		return retval;
	}

    int OnApply()
	{
		hal::event_log().post(shared_ptr<hal::EventDetail>(
			new hal::EventMsg(L"Applying bittorrent options.", hal::event_logger::info)));

		onPortCheck(0, 0, GetDlgItem(HAL_BC_PORTCHECK));

		return DoDataExchange(true);
	}

	void onDHTCheck(UINT, int, HWND hWnd)
	{
		LRESULT result = ::SendMessage(hWnd, BM_GETCHECK, 0, 0);

		
	//	WMB_ROW(_auto,	HAL_BC_DHT_PORT_R, _r, HAL_BC_DHT_PORT_E, HAL_BC_DHT_MAXREPLIES_S, HAL_BC_DHT_MAXREPLIES_T), \
	//	WMB_ROW(_auto,	0, HAL_BC_DHT_RAND_PORT_R, HAL_BC_DHT_PORT_UPPER_E, HAL_BC_DHT_BRANCHING_S, HAL_BC_DHT_BRANCHING_T), \
	//	WMB_ROW(_auto,	HAL_BC_DHT_PORT_LISTEN_R, _r, _r, HAL_BC_DHT_MAXFAILS_S, HAL_BC_DHT_MAXFAILS_T), \

		if (result == BST_CHECKED)
		{
		//	::EnableWindow(GetDlgItem(HAL_BC_DHT_PORT_R), true);
		//	::EnableWindow(GetDlgItem(HAL_BC_DHT_PORT_E), true);
			::EnableWindow(GetDlgItem(HAL_BC_DHT_MAXREPLIES_T), true);
		//	::EnableWindow(GetDlgItem(HAL_BC_DHT_RAND_PORT_R), true);
		//	::EnableWindow(GetDlgItem(HAL_BC_DHT_PORT_UPPER_E), true);
			::EnableWindow(GetDlgItem(HAL_BC_DHT_BRANCHING_T), true);
			::EnableWindow(GetDlgItem(HAL_BC_DHT_PORT_LISTEN_R), true);
			::EnableWindow(GetDlgItem(HAL_BC_DHT_MAXFAILS_T), true);
			::EnableWindow(GetDlgItem(HAL_BC_DHT_MAXREPLIES_S), true);
			::EnableWindow(GetDlgItem(HAL_BC_DHT_BRANCHING_S), true);
			::EnableWindow(GetDlgItem(HAL_BC_DHT_MAXFAILS_S), true);
			
			onDHTRadio(0, 0, GetDlgItem(HAL_BC_DHT_PORT_R));
		}
		else
		{
			::EnableWindow(GetDlgItem(HAL_BC_DHT_PORT_R), false);
			::EnableWindow(GetDlgItem(HAL_BC_DHT_PORT_E), false);
			::EnableWindow(GetDlgItem(HAL_BC_DHT_MAXREPLIES_T), false);
			::EnableWindow(GetDlgItem(HAL_BC_DHT_RAND_PORT_R), false);
			::EnableWindow(GetDlgItem(HAL_BC_DHT_PORT_UPPER_E), false);
			::EnableWindow(GetDlgItem(HAL_BC_DHT_BRANCHING_T), false);
			::EnableWindow(GetDlgItem(HAL_BC_DHT_PORT_LISTEN_R), false);
			::EnableWindow(GetDlgItem(HAL_BC_DHT_MAXFAILS_T), false);
			::EnableWindow(GetDlgItem(HAL_BC_DHT_MAXREPLIES_S), false);
			::EnableWindow(GetDlgItem(HAL_BC_DHT_BRANCHING_S), false);
			::EnableWindow(GetDlgItem(HAL_BC_DHT_MAXFAILS_S), false);
		}
	}
	
	void onDHTRadio(UINT, int, HWND hWnd)
	{
		LRESULT result = ::SendMessage(GetDlgItem(HAL_BC_DHT_PORT_R), BM_GETCHECK, 0, 0);

		if (result == BST_CHECKED)
		{
			::EnableWindow(GetDlgItem(HAL_BC_DHT_PORT_E), true);
			::EnableWindow(GetDlgItem(HAL_BC_DHT_RAND_PORT_R), true);	

			onDHTRandCheck(0, 0, GetDlgItem(HAL_BC_DHT_RAND_PORT_R));
		}
		else
		{
			::EnableWindow(GetDlgItem(HAL_BC_DHT_PORT_E), false);
			::EnableWindow(GetDlgItem(HAL_BC_DHT_RAND_PORT_R), false);
			::EnableWindow(GetDlgItem(HAL_BC_DHT_PORT_UPPER_E), false);
		}
	}
	
	void onDHTRandCheck(UINT, int, HWND hWnd)
	{
		LRESULT result = ::SendMessage(hWnd, BM_GETCHECK, 0, 0);

		if (result == BST_CHECKED)
		{
			::EnableWindow(GetDlgItem(HAL_BC_DHT_PORT_UPPER_E), true);
		}
		else
		{
			::EnableWindow(GetDlgItem(HAL_BC_DHT_PORT_UPPER_E), false);

			hal::win_c_str<std::wstring> str(MAX_PATH);
			GetDlgItemText(HAL_BC_DHT_PORT_E, str, numeric_cast<int>(str.size()));
			SetDlgItemText(HAL_BC_DHT_PORT_UPPER_E, str);
		}
	}

	void onPortCheck(UINT, int, HWND hWnd)
	{
		LRESULT result = ::SendMessage(hWnd, BM_GETCHECK, 0, 0);

		if (result == BST_CHECKED)
		{
			::EnableWindow(GetDlgItem(HAL_BC_PORTTO), true);
			::EnableWindow(GetDlgItem(HAL_BITT_RANDOMIZE_PORT), true);
		}
		else
		{
			::EnableWindow(GetDlgItem(HAL_BC_PORTTO), false);
			::EnableWindow(GetDlgItem(HAL_BITT_RANDOMIZE_PORT), false);

			hal::win_c_str<std::wstring> str(MAX_PATH);
			GetDlgItemText(HAL_BC_PORTFROM, str, numeric_cast<int>(str.size()));
			SetDlgItemText(HAL_BC_PORTTO, str);
		}
	}

	void onHalfCheck(UINT, int, HWND hWnd)
	{
		LRESULT result = ::SendMessage(hWnd, BM_GETCHECK, 0, 0);

		if (result == BST_CHECKED)
		{
			::EnableWindow(GetDlgItem(HAL_BC_HALFCONN_NUM), true);
		}
		else
		{
			::EnableWindow(GetDlgItem(HAL_BC_HALFCONN_NUM), false);
			SetDlgItemText(HAL_BC_HALFCONN_NUM, L"");
		}
	}

	void onInterfaceCheck(UINT, int, HWND hWnd)
	{
		LRESULT result = ::SendMessage(hWnd, BM_GETCHECK, 0, 0);

		if (result == BST_CHECKED)
		{
			::EnableWindow(GetDlgItem(HAL_BC_NET_INTERFACE), true);
		}
		else
		{
			::EnableWindow(GetDlgItem(HAL_BC_NET_INTERFACE), false);
			SetDlgItemText(HAL_BC_NET_INTERFACE, hal::bittorrent().get_external_interface().c_str());
		}
	}

private:
//	WTL::CHyperLink helpLink;
//	WTL::CHyperLink whyHalfConn;
};

class ProxyOptions :
    public WTL::CPropertyPageImpl<ProxyOptions>,
    public WTLx::WinDataExchangeEx<ProxyOptions>
{
public:
    enum { IDD = HAL_CONFIGPROXY };

	ProxyOptions()
	{}

	~ProxyOptions()
	{}

	BEGIN_MSG_MAP_EX(ProxyOptions)
		try
		{
		MSG_WM_INITDIALOG(OnInitDialog)
		COMMAND_ID_HANDLER_EX(HAL_BC_PROXYCHECK, onProxyCheck)
		}
		HAL_ALL_EXCEPTION_CATCH(L"in ProxyOptions MSG_MAP")
		CHAIN_MSG_MAP(CPropertyPageImpl<ProxyOptions>)
	END_MSG_MAP()

	BEGIN_DDX_MAP(ProxyOptions)

	END_DDX_MAP()

	BOOL OnInitDialog (HWND hwndFocus, LPARAM lParam)
	{
		BOOL retval =  DoDataExchange(false);

		onProxyCheck(0, 0, GetDlgItem(HAL_BC_PROXYCHECK));

		return retval;
	}

    int OnApply()
	{
		hal::event_log().post(shared_ptr<hal::EventDetail>(
			new hal::EventMsg(L"Applying proxy options.", hal::event_logger::info)));

		return DoDataExchange(true);
	}

	void onPortCheck(UINT, int, HWND hWnd)
	{
		LRESULT result = ::SendMessage(hWnd, BM_GETCHECK, 0, 0);

		if (result == BST_CHECKED)
		{
			::EnableWindow(GetDlgItem(HAL_BC_PORTTO), true);
		}
		else
		{
			::EnableWindow(GetDlgItem(HAL_BC_PORTTO), false);
			boost::array<wchar_t, MAX_PATH> buffer;
			GetDlgItemText(HAL_BC_PORTFROM, buffer.elems, MAX_PATH);
			SetDlgItemText(HAL_BC_PORTTO, buffer.elems);
		}
	}

	void onProxyCheck(UINT, int, HWND hWnd)
	{
		LRESULT result = ::SendMessage(hWnd, BM_GETCHECK, 0, 0);

		if (result == BST_CHECKED)
		{
			::EnableWindow(GetDlgItem(HAL_BC_PROXYIP), true);
			::EnableWindow(GetDlgItem(HAL_BC_PROXYPORT), true);
			::EnableWindow(GetDlgItem(HAL_BC_PROXYUSER), true);
			::EnableWindow(GetDlgItem(HAL_BC_PROXYPASS), true);
			::EnableWindow(GetDlgItem(HAL_BC_PROXYIP_S), true);
			::EnableWindow(GetDlgItem(HAL_BC_PROXYPORT_S), true);
			::EnableWindow(GetDlgItem(HAL_BC_PROXYUSER_S), true);
			::EnableWindow(GetDlgItem(HAL_BC_PROXYPASS_S), true);
		}
		else
		{
			::EnableWindow(GetDlgItem(HAL_BC_PROXYIP), false);
			::EnableWindow(GetDlgItem(HAL_BC_PROXYPORT), false);
			::EnableWindow(GetDlgItem(HAL_BC_PROXYUSER), false);
			::EnableWindow(GetDlgItem(HAL_BC_PROXYPASS), false);
			::EnableWindow(GetDlgItem(HAL_BC_PROXYIP_S), false);
			::EnableWindow(GetDlgItem(HAL_BC_PROXYPORT_S), false);
			::EnableWindow(GetDlgItem(HAL_BC_PROXYUSER_S), false);
			::EnableWindow(GetDlgItem(HAL_BC_PROXYPASS_S), false);
		}
	}
};

class SecurityOptions :
	public WTL::CPropertyPageImpl<SecurityOptions>,
	public ATL::CAutoSizeWindow<SecurityOptions, false>,
	public WTLx::WinDataExchangeEx<SecurityOptions>
{
	typedef SecurityOptions this_class_t;
	typedef ATL::CAutoSizeWindow<this_class_t, false> autosizeClass;
	
public:
	enum { IDD = HAL_CONFIGSECURITY };

	BEGIN_MSG_MAP_EX(this_class_t)
		try
		{
		MSG_WM_INITDIALOG(OnInitDialog)

		COMMAND_ID_HANDLER_EX(HAL_BC_FILTERLOAD, onFilterImport)
		COMMAND_ID_HANDLER_EX(HAL_BC_FILTERCLEAR, onFilterClear)
		COMMAND_ID_HANDLER_EX(HAL_BC_FILTERCHECK, onFilterCheck)

		COMMAND_ID_HANDLER_EX(HAL_SC_ENABLE_PE, onPeCheck)
		}
		HAL_ALL_EXCEPTION_CATCH(L"in SecurityOptions MSG_MAP")

		CHAIN_MSG_MAP(autosizeClass)
		CHAIN_MSG_MAP(CPropertyPageImpl<this_class_t>)
	//		MSG_WM_SIZE(OnSize)
	END_MSG_MAP()

	BEGIN_DDX_MAP(this_class_t)
		DDX_CHECK(HAL_BC_FILTERCHECK, hal::config().enable_ip_filter_)
		DDX_CHECK(HAL_SC_ENABLE_PE, hal::config().enable_pe_)
		DDX_RADIO(HAL_SC_PE_ENC_PLAIN, hal::config().pe_settings_.encrypt_level)
		DDX_CHECK(HAL_SC_PE_ENC_RC4_PERFER, hal::config().pe_settings_.prefer_rc4)
		DDX_RADIO(HAL_SC_PE_CP_IN_FORCED, hal::config().pe_settings_.conn_in_policy)
		DDX_RADIO(HAL_SC_PE_CP_OUT_FORCED, hal::config().pe_settings_.conn_out_policy)
	END_DDX_MAP()
	
/*	void OnSize(UINT type, CSize)
	{
		
		SetMsgHandled(false);
	}
*/
#define SECURITY_IPF_LAYOUT \
	WMB_HEAD(WMB_COLNOMAX(_exp), WMB_COLNOMAX(_exp), WMB_COLNOMAX(_exp)), \
		WMB_ROW(_auto,	HAL_BC_FILTERCHECK,	HAL_BC_FILTERCLEAR, HAL_BC_FILTERLOAD), \
	WMB_END()

#define SECURITY_ENCODING_LAYOUT \
	WMB_HEAD(WMB_COL(_gap), WMB_COLNOMAX(_exp), WMB_COLNOMAX(_exp), WMB_COL(_gap)), \
		WMB_ROW(_auto,	HAL_SC_ENABLE_PE,	_r,_r,_r), \
		WMB_ROW(_gap|6,	HAL_SECURITY_EL_GB,	_r,_r,_r), \
		WMB_ROW(_auto,	_d,	HAL_SC_PE_ENC_PLAIN, _r), \
		WMB_ROW(_auto,	_d,	HAL_SC_PE_ENC_RC4, _r), \
		WMB_ROW(_auto,	_d,	HAL_SC_PE_ENC_BOTH, HAL_SC_PE_ENC_RC4_PERFER), \
		WMB_ROW(_gap,	_d), \
	WMB_END()

#define SECURITY_CONNECTION_LAYOUT \
	WMB_HEAD(WMB_COL(_gap), WMB_COLNOMAX(_exp), WMB_COLNOMAX(_exp), WMB_COLNOMAX(_exp), WMB_COLNOMAX(_exp), WMB_COL(_gap)), \
		WMB_ROW(_gap|6,	HAL_SECURITY_CP_GB,	_r, _r, _r, _r, _r), \
		WMB_ROW(_auto,	_d,	HAL_SECURITY_INCOMING, _r, HAL_SECURITY_OUTGOING, _r), \
		WMB_ROW(_auto,	_d,	HAL_SC_PE_CP_IN_FORCED, HAL_SECURITY_FORCED, _r, HAL_SC_PE_CP_OUT_FORCED), \
		WMB_ROW(_auto,	_d,	HAL_SC_PE_CP_IN_ENABLED, HAL_SECURITY_ENABLED, _r, HAL_SC_PE_CP_OUT_ENABLED), \
		WMB_ROW(_auto,	_d,	HAL_SC_PE_CP_IN_DISABLED, HAL_SECURITY_DISABLED, _r, HAL_SC_PE_CP_OUT_DISABLED), \
		WMB_ROW(_gap,	_d), \
	WMB_END()
	
#define SECURITY_PE_LAYOUT \
	WMB_HEAD(WMB_COLNOMAX(_exp|150), WMB_COLNOMAX(_exp)), \
		WMB_ROW(_auto,	SECURITY_ENCODING_LAYOUT, SECURITY_CONNECTION_LAYOUT), \
	WMB_END()

	BEGIN_WINDOW_MAP(this_class_t, 6, 6, 3, 3)
		WMB_HEAD(WMB_COL(_gap), WMB_COLNOMAX(_exp), WMB_COL(_gap)), 
			WMB_ROW(_gap|6,	HAL_SECURITY_IPF_GB, _r, _r), 
			WMB_ROW(_auto,	_d, SECURITY_IPF_LAYOUT), 
			WMB_ROW(_gap,	_d),  
			WMB_ROW(_gap|6,	HAL_SECURITY_PE_GB, _r, _r), 
			WMB_ROW(_auto,	_d, SECURITY_PE_LAYOUT),
			WMB_ROW(_gap,	_d),
		WMB_END()
	END_WINDOW_MAP()	

    BOOL OnInitDialog (HWND hwndFocus, LPARAM lParam)
	{
	//	helpLink.SubclassWindow(GetDlgItem(HAL_SC_HELP_LINK));
	//	helpLink.SetHyperLink(L"http://www.binarynotions.com/");

		BOOL retval =  DoDataExchange(false);

		onFilterCheck(0, 0, GetDlgItem(HAL_BC_FILTERCHECK));
		onPeCheck(0, 0, GetDlgItem(HAL_SC_ENABLE_PE));

		autosizeClass::CtrlsArrange();
		return retval;
	}

    int OnApply()
	{
		hal::event_log().post(shared_ptr<hal::EventDetail>(
			new hal::EventMsg(L"Applying security options.", hal::event_logger::info)));

		return DoDataExchange(true);
	}

	void onFilterCheck(UINT, int, HWND hWnd)
	{
		LRESULT result = ::SendMessage(hWnd, BM_GETCHECK, 0, 0);

		if (result == BST_CHECKED)
		{
			::EnableWindow(GetDlgItem(HAL_BC_FILTERCLEAR), true);
			::EnableWindow(GetDlgItem(HAL_BC_FILTERLOAD), true);
		}
		else
		{
			::EnableWindow(GetDlgItem(HAL_BC_FILTERCLEAR), false);
			::EnableWindow(GetDlgItem(HAL_BC_FILTERLOAD), false);
		}
	}

	void onPeCheck(UINT, int, HWND hWnd)
	{
		LRESULT result = ::SendMessage(hWnd, BM_GETCHECK, 0, 0);

		if (result == BST_CHECKED)
		{
			::EnableWindow(GetDlgItem(HAL_SC_PE_ENC_BOTH), true);
			::EnableWindow(GetDlgItem(HAL_SC_PE_ENC_RC4), true);
			::EnableWindow(GetDlgItem(HAL_SC_PE_ENC_PLAIN), true);
			::EnableWindow(GetDlgItem(HAL_SC_PE_ENC_RC4_PERFER), true);
			::EnableWindow(GetDlgItem(HAL_SC_PE_CP_IN_FORCED), true);
			::EnableWindow(GetDlgItem(HAL_SC_PE_CP_IN_DISABLED), true);
			::EnableWindow(GetDlgItem(HAL_SC_PE_CP_IN_ENABLED), true);
			::EnableWindow(GetDlgItem(HAL_SC_PE_CP_OUT_DISABLED), true);
			::EnableWindow(GetDlgItem(HAL_SC_PE_CP_OUT_ENABLED), true);
			::EnableWindow(GetDlgItem(HAL_SC_PE_CP_OUT_FORCED), true);
		}
		else
		{
			::EnableWindow(GetDlgItem(HAL_SC_PE_ENC_BOTH), false);
			::EnableWindow(GetDlgItem(HAL_SC_PE_ENC_RC4), false);
			::EnableWindow(GetDlgItem(HAL_SC_PE_ENC_PLAIN), false);
			::EnableWindow(GetDlgItem(HAL_SC_PE_ENC_RC4_PERFER), false);
			::EnableWindow(GetDlgItem(HAL_SC_PE_CP_IN_FORCED), false);
			::EnableWindow(GetDlgItem(HAL_SC_PE_CP_IN_DISABLED), false);
			::EnableWindow(GetDlgItem(HAL_SC_PE_CP_IN_ENABLED), false);
			::EnableWindow(GetDlgItem(HAL_SC_PE_CP_OUT_DISABLED), false);
			::EnableWindow(GetDlgItem(HAL_SC_PE_CP_OUT_ENABLED), false);
			::EnableWindow(GetDlgItem(HAL_SC_PE_CP_OUT_FORCED), false);
		}
	}

	void onFilterClear(UINT, int, HWND hWnd)
	{
		hal::bittorrent().clear_ip_filter();
	}

	void onFilterImport(UINT, int, HWND hWnd);

private:
	WTL::CHyperLink helpLink;
};

class GlobalOptions :
    public WTL::CPropertyPageImpl<GlobalOptions>,
	public ATL::CAutoSizeWindow<GlobalOptions, false>,
    public WTLx::WinDataExchangeEx<GlobalOptions>
{
	typedef GlobalOptions this_class_t;
	typedef ATL::CAutoSizeWindow<this_class_t, false> autosizeClass;
public:
    enum { IDD = HAL_CONFIGGLOBAL };
	
	GlobalOptions() :
		total_connections_(0, false, false),
		upload_connections_(0, false, false),
		download_rate_(0, false, false),
		upload_rate_(0, false, false)
	{}

	BEGIN_MSG_MAP_EX(this_class_t)
		try
		{
		MSG_WM_INITDIALOG(OnInitDialog)
		}
		HAL_ALL_EXCEPTION_CATCH(L"in GlobalOptions MSG_MAP")

		CHAIN_MSG_MAP(CPropertyPageImpl<this_class_t>)
		CHAIN_MSG_MAP(autosizeClass)
		REFLECT_NOTIFICATIONS()
	END_MSG_MAP()
	
#define CONFIGT_GLOBAL_LAYOUT \
	WMB_HEAD(WMB_COLNOMAX(_exp), WMB_COLNOMAX(_exp|30), WMB_COLNOMAX(_eq|0), WMB_COLNOMAX(_eq|1)), \
		WMB_ROW(_auto,	HAL_CONFIGT_GLOBAL_TEXT, _r, _r, _r), \
		WMB_ROW(_auto,	HAL_CONFIGT_TOTALMAX, HAL_BC_MAXCONN, HAL_CONFIGT_DOWNRATE, HAL_BC_DOWNRATE), \
		WMB_ROW(_auto,	HAL_CONFIGT_TOTALUP, HAL_BC_MAXUP, HAL_CONFIGT_UPRATE, HAL_BC_UPRATE), \
	WMB_END()

#define CONFIGT_ACTIVE_LAYOUT \
	WMB_HEAD(WMB_COLNOMAX(_exp), WMB_COLNOMAX(_exp|70)), \
		WMB_ROW(_gap|3), \
		WMB_ROW(_auto, HAL_CGLOBAL_ACTDOWNT, HAL_CGLOBAL_ACTDOWN), \
		WMB_ROW(_auto, HAL_CGLOBAL_ACTSEEDT, HAL_CGLOBAL_ACTSEED), \
		WMB_ROW(_auto, HAL_CGLOBAL_ACTSEEDHARDT, HAL_CGLOBAL_ACTSEEDHARD), \
	WMB_END()

#define CONFIGT_SEEDING_LAYOUT \
	WMB_HEAD(WMB_COL(_gap), WMB_COLNOMAX(_exp), WMB_COLNOMAX(_exp|70), WMB_COL(_gap)), \
		WMB_ROW(_gap|3,	HAL_CGLOBAL_SEEDINGG, _r, _r, _r), \
		WMB_ROW(_auto,	_d, HAL_CGLOBAL_SHARERATIOT, HAL_CGLOBAL_SHARERATIO), \
		WMB_ROW(_auto,	_d, HAL_CGLOBAL_SHARERATIOTIMET, HAL_CGLOBAL_SHARERATIOTIME), \
		WMB_ROW(_auto,	_d, HAL_CGLOBAL_SHARETIMET, HAL_CGLOBAL_SHARETIME), \
		WMB_ROW(_gap,	_d), \
	WMB_END()

#define CONFIGT_QUEUE_LAYOUT \
	WMB_HEAD(WMB_COLNOMAX(_exp), WMB_COL(_gap), WMB_COLNOMAX(_exp)), \
		WMB_ROW(_auto, CONFIGT_ACTIVE_LAYOUT, 0,  CONFIGT_SEEDING_LAYOUT), \
		WMB_ROW(_auto, HAL_CGLOBAL_DISCOUNTSLOW, _r, _r), \
	WMB_END()

	BEGIN_WINDOW_MAP(this_class_t, 6, 6, 3, 3)
		WMB_HEAD(WMB_COL(_gap), WMB_COLNOMAX(_exp), WMB_COL(_gap)), 
			WMB_ROW(_gap|3,	HAL_CONFIGT_GLOBALG, _r, _r), 
			WMB_ROW(_auto,	_d, CONFIGT_GLOBAL_LAYOUT), 
			WMB_ROW(_gap,	_d),
			WMB_ROW(_gap|3,	HAL_CGLOBAL_QUEUEG, _r, _r), 
			WMB_ROW(_auto,	_d, CONFIGT_QUEUE_LAYOUT), 
			WMB_ROW(_gap,	_d),
		WMB_END()
	END_WINDOW_MAP()

    BEGIN_DDX_MAP(this_class_t)
		
	{	hal::queue_settings qs = hal::config().queue_settings_;
		DDX_CHECK(HAL_CGLOBAL_DISCOUNTSLOW, qs.dont_count_slow_torrents);
		hal::config().queue_settings_ = qs;
	}

    END_DDX_MAP()	

    BOOL OnInitDialog(HWND hwndFocus, LPARAM lParam)
	{
 		total_connections_.Attach(GetDlgItem(HAL_BC_MAXCONN));
		upload_connections_.Attach(GetDlgItem(HAL_BC_MAXUP));
		download_rate_.Attach(GetDlgItem(HAL_BC_DOWNRATE));
		upload_rate_.Attach(GetDlgItem(HAL_BC_UPRATE));

		total_connections_ = hal::config().globals_.total;
		upload_connections_ = hal::config().globals_.uploads;
		download_rate_ = hal::config().globals_.download_rate;
		upload_rate_ = hal::config().globals_.upload_rate;

		active_downloads_.Attach(GetDlgItem(HAL_CGLOBAL_ACTDOWN));
		active_seeds_.Attach(GetDlgItem(HAL_CGLOBAL_ACTSEED));
		seeds_hard_limit_.Attach(GetDlgItem(HAL_CGLOBAL_ACTSEEDHARD));

		seed_ratio_limit_.Attach(GetDlgItem(HAL_CGLOBAL_SHARERATIO));
		seed_ratio_time_limit_.Attach(GetDlgItem(HAL_CGLOBAL_SHARERATIOTIME));
		seed_time_limit_.Attach(GetDlgItem(HAL_CGLOBAL_SHARETIME));		

		{	hal::queue_settings qs = hal::config().queue_settings_;
	
			active_downloads_ = qs.active_downloads;
			active_seeds_ = qs.active_seeds;
			seeds_hard_limit_ = qs.seeds_hard_limit;
			seed_ratio_limit_ = qs.seed_ratio_limit;
			seed_ratio_time_limit_ = qs.seed_ratio_time_limit;
			seed_time_limit_ = qs.seed_time_limit;
		}

		BOOL retval =  DoDataExchange(false);

		autosizeClass::CtrlsArrange();
		return retval;
	}

    int OnApply()
	{
		hal::event_log().post(shared_ptr<hal::EventDetail>(
			new hal::EventMsg(L"Applying torrent options.", hal::event_logger::info)));

		hal::config().globals_.total = total_connections_;
		hal::config().globals_.uploads = upload_connections_;
		hal::config().globals_.download_rate = download_rate_;
		hal::config().globals_.upload_rate = upload_rate_;

		{	hal::queue_settings qs = hal::config().queue_settings_;
	
			qs.active_downloads = active_downloads_;
			qs.active_seeds = active_seeds_;
			qs.seeds_hard_limit = seeds_hard_limit_;
			qs.seed_ratio_limit = seed_ratio_limit_;
			qs.seed_ratio_time_limit = seed_ratio_time_limit_;
			qs.seed_time_limit = seed_time_limit_;

			hal::config().queue_settings_ = qs;
		}
		
		return DoDataExchange(true);
	}
	
private:
	CHaliteEditCtrl<int> total_connections_;
	CHaliteEditCtrl<int> upload_connections_;
	CHaliteEditCtrl<float> download_rate_;
	CHaliteEditCtrl<float> upload_rate_;

	CHaliteEditCtrl<int> active_downloads_;
	CHaliteEditCtrl<int> active_seeds_;
	CHaliteEditCtrl<int> seeds_hard_limit_;
	CHaliteEditCtrl<float> seed_ratio_limit_;
	CHaliteEditCtrl<float> seed_ratio_time_limit_;
	CHaliteEditCtrl<int> seed_time_limit_;
};

class TorrentsOptions :
    public WTL::CPropertyPageImpl<TorrentsOptions>,
	public ATL::CAutoSizeWindow<TorrentsOptions, false>,
    public WTLx::WinDataExchangeEx<TorrentsOptions>
{
	typedef TorrentsOptions this_class_t;
	typedef ATL::CAutoSizeWindow<this_class_t, false> autosizeClass;
public:
    enum { IDD = HAL_CONFIGTORRENT };
	
	TorrentsOptions() :
		tTotalConnections_(0, false, false),
		tUploadConnections_(0, false, false),
		tDownloadRate_(0, false, false),
		tUploadRate_(0, false, false)
	{}

	BEGIN_MSG_MAP_EX(TorrentsOptions)
		try
		{
		MSG_WM_INITDIALOG(OnInitDialog)

		COMMAND_ID_HANDLER_EX(HAL_BC_SAVEBROWSE, onFolderBrowse)
		COMMAND_ID_HANDLER_EX(HAL_BC_MOVETO_BROWSE, onMoveToFolderBrowse)
		COMMAND_ID_HANDLER_EX(HAL_BC_MOVETO_CHECK, onMoveToCheck)
		}
		HAL_ALL_EXCEPTION_CATCH(L"in TorrentsOptions MSG_MAP")

		CHAIN_MSG_MAP(CPropertyPageImpl<TorrentsOptions>)
		CHAIN_MSG_MAP(autosizeClass)
		REFLECT_NOTIFICATIONS()
	END_MSG_MAP()

#define CONFIGT_TORRENT_LAYOUT \
	WMB_HEAD(WMB_COLNOMAX(_exp), WMB_COLNOMAX(_exp|30), WMB_COLNOMAX(_eq|0), WMB_COLNOMAX(_eq|1)), \
		WMB_ROW(_auto,	HAL_CONFIGT_TOR_TEXT, _r, _r, _r), \
		WMB_ROW(_auto,	HAL_CONFIGT_TORMAX, HAL_BC_TMAXCONN, HAL_CONFIGT_TDOWNRATE, HAL_BC_TDOWNRATE), \
		WMB_ROW(_auto,	HAL_CONFIGT_TORUP, HAL_BC_TMAXUP, HAL_CONFIGT_TORUPRATE, HAL_BC_TUPRATE), \
	WMB_END()

#define CONFIGT_TORRENT_FOLDER_MOVETO_LAYOUT \
	WMB_HEAD(WMB_COL(_auto), WMB_COLNOMAX(_exp|50)), \
		WMB_ROW(_auto,	HAL_BC_MOVETO_CHECK, HAL_BC_MOVETO_TEXT), \
	WMB_END()

#define CONFIGT_TORRENT_FOLDER_LAYOUT \
	WMB_HEAD( WMB_COLNOMAX(_exp|50), WMB_COLNOMAX(_exp), WMB_COLNOMAX(_auto)), \
		WMB_ROW(_auto,	HAL_CONFIGT_DEF_FOLDER, HAL_BC_SAVEFOLDER, HAL_BC_SAVEBROWSE), \
		WMB_ROW(_auto,	CONFIGT_TORRENT_FOLDER_MOVETO_LAYOUT, HAL_BC_MOVETO_FOLDER, HAL_BC_MOVETO_BROWSE), \
		WMB_ROW(_auto, 0, HAL_BC_PROMPTSAVE, _r), \
	WMB_END()

	BEGIN_WINDOW_MAP(this_class_t, 6, 6, 3, 3)
		WMB_HEAD(WMB_COL(_gap), WMB_COLNOMAX(_exp), WMB_COL(_gap)), 
			WMB_ROW(_gap|3,	HAL_CONFIGT_TORRENTG, _r, _r),
			WMB_ROW(_auto,	_d, CONFIGT_TORRENT_LAYOUT),
			WMB_ROW(_gap,	_d),
			WMB_ROW(_auto,	CONFIGT_TORRENT_FOLDER_LAYOUT, _r, _r), 
		WMB_END()
	END_WINDOW_MAP()

    BEGIN_DDX_MAP(TorrentsOptions)
/*      DDX_EX_INT_POSITIVE_LIMIT(HAL_BC_MAXCONN, hal::config().maxConnections, 2, true)
        DDX_EX_INT_POSITIVE_LIMIT(HAL_BC_MAXUP, hal::config().maxUploads, 2, true)
        DDX_EX_FLOAT_POSITIVE(HAL_BC_DOWNRATE, hal::config().downRate)
        DDX_EX_FLOAT_POSITIVE(HAL_BC_UPRATE, hal::config().upRate)

        DDX_EX_INT_POSITIVE_LIMIT(HAL_BC_TMAXCONN, hal::config().torrentMaxConnections, 2, true)
        DDX_EX_INT_POSITIVE_LIMIT(HAL_BC_TMAXUP, hal::config().torrentMaxUploads, 2, true)
        DDX_EX_FLOAT_POSITIVE(HAL_BC_TDOWNRATE, hal::config().torrentDownRate)
        DDX_EX_FLOAT_POSITIVE(HAL_BC_TUPRATE, hal::config().torrentUpRate)
*/
		DDX_EX_STDWSTRING(HAL_BC_SAVEFOLDER, hal::config().default_save_folder_);
		DDX_EX_STDWSTRING(HAL_BC_MOVETO_FOLDER, hal::config().default_move_folder_);
        DDX_CHECK(HAL_BC_MOVETO_CHECK, hal::config().use_move_to_);
        DDX_CHECK(HAL_BC_PROMPTSAVE, hal::config().save_prompt_);
    END_DDX_MAP()	

    BOOL OnInitDialog(HWND hwndFocus, LPARAM lParam)
	{
		tTotalConnections_.Attach(GetDlgItem(HAL_BC_TMAXCONN));
		tUploadConnections_.Attach(GetDlgItem(HAL_BC_TMAXUP));
		tDownloadRate_.Attach(GetDlgItem(HAL_BC_TDOWNRATE));
		tUploadRate_.Attach(GetDlgItem(HAL_BC_TUPRATE));
	
		tTotalConnections_ = hal::config().torrent_defaults_.total;
		tUploadConnections_ = hal::config().torrent_defaults_.uploads;
		tDownloadRate_ = hal::config().torrent_defaults_.download_rate;
		tUploadRate_ = hal::config().torrent_defaults_.upload_rate;
	
		BOOL retval =  DoDataExchange(false);
		onMoveToCheck(0, 0, GetDlgItem(HAL_BC_MOVETO_CHECK));

		autosizeClass::CtrlsArrange();
		return retval;
	}

	void onFolderBrowse(UINT, int, HWND hWnd)
	{		
		wstring folderSelect = hal::app().res_wstr(HAL_FOLDER_SELECT);

		WTL::CFolderDialog fldDlg (NULL, folderSelect.c_str(),
			BIF_RETURNONLYFSDIRS|BIF_NEWDIALOGSTYLE);

		if (IDOK == fldDlg.DoModal())
			SetDlgItemText(HAL_BC_SAVEFOLDER, fldDlg.m_szFolderPath);
	}

	void onMoveToFolderBrowse(UINT, int, HWND hWnd)
	{		
		wstring folderSelect = hal::app().res_wstr(HAL_FOLDER_SELECT);

		WTL::CFolderDialog fldDlg (NULL, folderSelect.c_str(),
			BIF_RETURNONLYFSDIRS|BIF_NEWDIALOGSTYLE);

		if (IDOK == fldDlg.DoModal())
			SetDlgItemText(HAL_BC_MOVETO_FOLDER, fldDlg.m_szFolderPath);
	}

	void onMoveToCheck(UINT, int, HWND hWnd)
	{
		LRESULT result = ::SendMessage(hWnd, BM_GETCHECK, 0, 0);

		if (result == BST_CHECKED)
		{
			::EnableWindow(GetDlgItem(HAL_BC_MOVETO_FOLDER), true);
			::EnableWindow(GetDlgItem(HAL_BC_MOVETO_BROWSE), true);
		}
		else
		{
			::EnableWindow(GetDlgItem(HAL_BC_MOVETO_FOLDER), false);
			::EnableWindow(GetDlgItem(HAL_BC_MOVETO_BROWSE), false);
		}		
	}

    int OnApply()
	{
		hal::event_log().post(shared_ptr<hal::EventDetail>(
			new hal::EventMsg(L"Applying torrent options.", hal::event_logger::info)));

		hal::config().torrent_defaults_.total = tTotalConnections_;
		hal::config().torrent_defaults_.uploads = tUploadConnections_;
		hal::config().torrent_defaults_.download_rate = tDownloadRate_;
		hal::config().torrent_defaults_.upload_rate = tUploadRate_;
		
		return DoDataExchange(true);
	}
	
private:	
	CHaliteEditCtrl<int> tTotalConnections_;
	CHaliteEditCtrl<int> tUploadConnections_;
	CHaliteEditCtrl<float> tDownloadRate_;
	CHaliteEditCtrl<float> tUploadRate_;
};

class RemoteOptions :
    public WTL::CPropertyPageImpl<RemoteOptions>,
    public WTL::CWinDataExchange<RemoteOptions>
{
public:
    enum { IDD = HAL_CONFIGREMOTE };

	RemoteOptions()
	{}

	~RemoteOptions()
	{}

	BEGIN_MSG_MAP_EX(RemoteOptions)
		try
		{
		MSG_WM_INITDIALOG(OnInitDialog)
		}
		HAL_ALL_EXCEPTION_CATCH(L"in RemoteOptions MSG_MAP")
		CHAIN_MSG_MAP(CPropertyPageImpl<RemoteOptions>)
	END_MSG_MAP()

	BEGIN_DDX_MAP(RemoteOptions)
	//    	DDX_CHECK(HAL_REMOTECTRL, INI().remoteConfig().isEnabled)
	//    	DDX_INT(HAL_REMOTEPORT, INI().remoteConfig().port)
	END_DDX_MAP()

	BOOL OnInitDialog ( HWND hwndFocus, LPARAM lParam )
	{
		return DoDataExchange(false);
	}

	int OnApply()
	{
		hal::event_log().post(shared_ptr<hal::EventDetail>(
			new hal::EventMsg(L"Applying remote options.", hal::event_logger::info)));

		return DoDataExchange(true);
	}
};

class AboutOptions :
	public WTL::CPropertyPageImpl<AboutOptions>,
	public WTL::CDialogResize<AboutOptions>
{
	typedef AboutOptions this_class_t;
	typedef WTL::CDialogResize<this_class_t> resize_class_t;

public:
	enum { IDD = HAL_ABOUT };

	BEGIN_MSG_MAP_EX(this_class_t)
		try
		{
		MSG_WM_INITDIALOG(OnInitDialog)
		}
		HAL_ALL_EXCEPTION_CATCH(L"in AboutOptions MSG_MAP")
		CHAIN_MSG_MAP(resize_class_t)
		CHAIN_MSG_MAP(CPropertyPageImpl<this_class_t>)
	END_MSG_MAP()

	BEGIN_DLGRESIZE_MAP(this_class_t)
		DLGRESIZE_CONTROL(HAL_RICHEDITABOUT, DLSZ_SIZE_X|DLSZ_SIZE_Y)
		DLGRESIZE_CONTROL(HAL_ABOUT_VERSION, DLSZ_MOVE_X|DLSZ_MOVE_Y)
	END_DLGRESIZE_MAP()

	BOOL OnInitDialog (HWND hwndFocus, LPARAM lParam)
	{
		richEdit_.Attach(GetDlgItem(HAL_RICHEDITABOUT));

		std::pair<void*, size_t> res = hal::app().res_find_lock(HAL_ABOUT_TEXT, HALITE_RTF_RES_TYPE);

		string rtf(static_cast<char*>(res.first), res.second);
		wstring wrtf = hal::from_utf8_safe(rtf);

		richEdit_.SendMessage(WM_SETTEXT, 0, (LPARAM)wrtf.c_str());
		richEdit_.SetSelNone();
		//		richEdit_.SetEventMask(ENM_REQUESTRESIZE);

		resize_class_t::DlgResize_Init(false, true, WS_CLIPCHILDREN);

		return true;
	}

private:

	WTL::CRichEditCtrl richEdit_;
	RECT richRect_;
};

class ConfigOptionsProp :
	public WTL::CPropertySheet,
	public hal::IniBase<ConfigOptionsProp>,
	public WTL::CDialogResize<ConfigOptionsProp>
{
	typedef ConfigOptionsProp this_class_t;
	typedef hal::IniBase<this_class_t> ini_class_t;
	typedef WTL::CDialogResize<this_class_t> resize_class_t;

public:
	ConfigOptionsProp(HaliteWindow* haliteWindow, LPCTSTR title = (LPCTSTR)NULL,
			UINT uStartPage = 0, HWND hWndParent = NULL) :
		CPropertySheet(title, uStartPage, hWndParent),
		ini_class_t(L"config_options", L"dialog"),
		inited_(false),
		rect_(0,0,0,0),
		generalOptions(haliteWindow)
	{
		load_from_ini();

		AddPage(generalOptions);
		AddPage(bitTorrentOptions);
		AddPage(portOptions);
		AddPage(globalOptions);
		AddPage(securityOptions);
		AddPage(torrentsOptions);
	//	AddPage(remoteControlOptions);
		AddPage(aboutOptions);
	}

	BEGIN_MSG_MAP_EX(this_class_t)
		try
		{
		MSG_WM_SHOWWINDOW(OnShowWindow)
		MSG_WM_SIZE(OnSize)
		MSG_WM_CLOSE(OnClose)	
		MSG_WM_DESTROY(OnDestroy)
		}
		HAL_ALL_EXCEPTION_CATCH(L"in ConfigOptionsProp MSG_MAP")

		//	COMMAND_ID_HANDLER(0x1, OnSave)

		CHAIN_MSG_MAP(resize_class_t)
		CHAIN_MSG_MAP(CPropertySheet)
	END_MSG_MAP()

	BEGIN_DLGRESIZE_MAP(this_class_t)
		DLGRESIZE_CONTROL(0x3020, DLSZ_SIZE_X|DLSZ_SIZE_Y)

		DLGRESIZE_CONTROL(0x1, DLSZ_MOVE_X|DLSZ_MOVE_Y)
		DLGRESIZE_CONTROL(0x2, DLSZ_MOVE_X|DLSZ_MOVE_Y)
		DLGRESIZE_CONTROL(0x3021, DLSZ_MOVE_X|DLSZ_MOVE_Y)
	END_DLGRESIZE_MAP()

    void OnShowWindow(BOOL bShow, UINT nStatus)
	{
		resize_class_t::DlgResize_Init(false, true, WS_CLIPCHILDREN);

		hal::event_log().post(shared_ptr<hal::EventDetail>(
			new hal::EventMsg(L"NewTorrentDialog::OnShowWindow()")));

		if (bShow && !inited_)
		{
			WTL::CMenuHandle pSysMenu = GetSystemMenu(FALSE);

    		if (pSysMenu != NULL)
				pSysMenu.InsertMenu(-1, MF_BYPOSITION|MF_STRING, SC_SIZE, L"&Size");

			ModifyStyle(0, WS_THICKFRAME, 0);

			if (rect_.left == rect_.right)
			{
				GetWindowRect(rect_);
				MoveWindow(rect_.left, rect_.top, 
					rect_.right-rect_.left, rect_.bottom-rect_.top+80, true);	
				CenterWindow();
			}
			else
			{
				MoveWindow(rect_.left, rect_.top, 
					rect_.right-rect_.left, rect_.bottom-rect_.top, true);	
			}

//			::SetWindowText(GetDlgItem(0x1), hal::app().res_wstr(HAL_SAVE_TEXT).c_str());
//			::EnableWindow(GetDlgItem(0x1), false);

			inited_ = true;
			resizeActiveSheet();
		}
		else
		{
			SetMsgHandled(false);
		}
	}

	void OnSize(UINT, WTL::CSize)
	{
        SetMsgHandled(false);

		resizeActiveSheet();
	}
	
	void OnClose()
	{
	//	SetMsgHandled(false);

		OnDestroy();
	}

	void OnDestroy() 
	{
	//	SetMsgHandled(false);

		GetWindowRect(rect_);
		save_to_ini();
	}

	friend class boost::serialization::access;
    template<class Archive>
    void serialize(Archive& ar, const unsigned int version)
	{
		using boost::serialization::make_nvp;
		switch (version)
		{
		case 2:			
			ar & boost::serialization::make_nvp("rect", rect_);
		
		break;

		case 1:
		default:
			assert(false);
		}
	}

private:
	bool inited_;
	WTL::CRect rect_;

	void resizeActiveSheet()
	{
        HWND propTabs = GetDlgItem(0x3020);

		RECT rect;
		::GetWindowRect(propTabs, &rect);

		::MapWindowPoints(NULL, m_hWnd, (LPPOINT)&rect, 2);
		::SendMessage(propTabs, TCM_ADJUSTRECT, false, (LPARAM)&rect);

		::MoveWindow(GetActivePage(), rect.left, rect.top,
            rect.right-rect.left, rect.bottom-rect.top, true);
	}

	GeneralOptions generalOptions;
	BitTorrentOptions bitTorrentOptions;
	PortOptions portOptions;
	GlobalOptions globalOptions;
	SecurityOptions securityOptions;
	TorrentsOptions torrentsOptions;
	RemoteOptions remoteControlOptions;
	AboutOptions aboutOptions;
};

BOOST_CLASS_VERSION(ConfigOptionsProp, 2)

#endif // RC_INVOKED
