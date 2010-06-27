/*****************************************************************************
* Copyright Statement:
* --------------------
* This software is protected by Copyright and the information contained
* herein is confidential. The software may not be copied and the information
* contained herein may not be used or disclosed except with the written
* permission of BEIWEI Inc. (C) 2005
*
*****************************************************************************/
/*============================================================================
*
* $CVSHeader: P_U25U26_06B_V30/codes/06BW0712MP_1_U26_06B_V30_gprs_MMI/tools/MinGW/include/winsvc.h,v 1.1 2007/05/17 07:25:37 bw Exp $
*
* $Id: winsvc.h,v 1.1 2007/05/17 07:25:37 bw Exp $
*
* $Date: 2007/05/17 07:25:37 $
*
* $Name: 1.1 $
*
* $Locker$
*
* $Revision: 1.1 $
*
* $State: Exp $
*
* HISTORY
* Below this line, this part is controlled by CVS. DO NOT MODIFY!!
*----------------------------------------------------------------------------
* $Log: winsvc.h,v $
* Revision 1.1  2007/05/17 07:25:37  bw
* UNI@bw_20070517 15:10:01 MTK U25 U26 06B V30 version
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/
/*****************************************************************************
* Copyright Statement:
* --------------------
* This software is protected by Copyright and the information contained
* herein is confidential. The software may not be copied and the information
* contained herein may not be used or disclosed except with the written
* permission of BEIWEI Inc. (C) 2007
*
*****************************************************************************/
/*============================================================================
*
* ~CVSHeader: P_U25U26_06B_V28/codes/06BW0712MP_1_U26_06B_V28_gprs_MMI/tools/MinGW/include/winsvc.h,v 1.1 2007/05/14 09:46:55 bw Exp $
*
* ~Id: winsvc.h,v 1.1 2007/05/14 09:46:55 bw Exp $
*
* ~Date: 2007/05/14 09:46:55 $
*
* ~Name: 1.1 $
*
* ~Locker$
*
* ~Revision: 1.1 $
*
* ~State: Exp $
*
* HISTORY
* Below this line, this part is controlled by CVS. DO NOT MODIFY!!
*----------------------------------------------------------------------------
* ~Log: winsvc.h,v $
* Revision 1.1  2007/05/14 09:46:55  bw
* UNI@bw_20070514 17:21:01 MTK初始版本.合并U25V20到U26V28.
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/
/*****************************************************************************
* Copyright Statement:
* --------------------
* This software is protected by Copyright and the information contained
* herein is confidential. The software may not be copied and the information
* contained herein may not be used or disclosed except with the written
* permission of BEIWEI Inc. (C) 2005
*
*****************************************************************************/
/*============================================================================
*
* ~CVSHeader: P_U25U26_06B/codes/U25U26_06B_W07.12_MMI/tools/MinGW/include/winsvc.h,v 1.2 2007/04/04 06:51:35 bw Exp $
*
* ~Id: winsvc.h,v 1.2 2007/04/04 06:51:35 bw Exp $
*
* ~Date: 2007/04/04 06:51:35 $
*
* ~Name: 1.2 $
*
* ~Locker$
*
* ~Revision: 1.2 $
*
* ~State: Exp $
*
* HISTORY
* Below this line, this part is controlled by CVS. DO NOT MODIFY!!
*----------------------------------------------------------------------------
* ~Log: winsvc.h,v $
* Revision 1.2  2007/04/04 06:51:35  bw
* 增加.c.h文件头模板
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/

#ifndef _WINSVC_H
#define _WINSVC_H
#if __GNUC__ >=3
#pragma GCC system_header
#endif

#ifdef __cplusplus
extern "C" {
#endif
#define SERVICES_ACTIVE_DATABASEA "ServicesActive"
#define SERVICES_ACTIVE_DATABASEW L"ServicesActive"
#define SERVICES_FAILED_DATABASEA "ServicesFailed"
#define SERVICES_FAILED_DATABASEW L"ServicesFailed"
#define SC_GROUP_IDENTIFIERA '+'
#define SC_GROUP_IDENTIFIERW L'+'
#define SC_MANAGER_ALL_ACCESS	0xf003f
#define SC_MANAGER_CONNECT	1
#define SC_MANAGER_CREATE_SERVICE	2
#define SC_MANAGER_ENUMERATE_SERVICE	4
#define SC_MANAGER_LOCK	8
#define SC_MANAGER_QUERY_LOCK_STATUS	16
#define SC_MANAGER_MODIFY_BOOT_CONFIG	32
#define SERVICE_NO_CHANGE 0xffffffff
#define SERVICE_STOPPED	1
#define SERVICE_START_PENDING	2
#define SERVICE_STOP_PENDING	3
#define SERVICE_RUNNING	4
#define SERVICE_CONTINUE_PENDING	5
#define SERVICE_PAUSE_PENDING	6
#define SERVICE_PAUSED	7
#define SERVICE_ACCEPT_STOP	1
#define SERVICE_ACCEPT_PAUSE_CONTINUE	2
#define SERVICE_ACCEPT_SHUTDOWN 4
#define SERVICE_ACCEPT_PARAMCHANGE    8
#define SERVICE_ACCEPT_NETBINDCHANGE  16
#define SERVICE_ACCEPT_HARDWAREPROFILECHANGE   32
#define SERVICE_ACCEPT_POWEREVENT              64
#define SERVICE_ACCEPT_SESSIONCHANGE           128
#define SERVICE_CONTROL_STOP	1
#define SERVICE_CONTROL_PAUSE	2
#define SERVICE_CONTROL_CONTINUE	3
#define SERVICE_CONTROL_INTERROGATE	4
#define SERVICE_CONTROL_SHUTDOWN	5
#define SERVICE_CONTROL_PARAMCHANGE     6
#define SERVICE_CONTROL_NETBINDADD      7
#define SERVICE_CONTROL_NETBINDREMOVE   8
#define SERVICE_CONTROL_NETBINDENABLE   9
#define SERVICE_CONTROL_NETBINDDISABLE  10
#define SERVICE_CONTROL_DEVICEEVENT     11
#define SERVICE_CONTROL_HARDWAREPROFILECHANGE 12
#define SERVICE_CONTROL_POWEREVENT            13
#define SERVICE_CONTROL_SESSIONCHANGE         14
#define SERVICE_ACTIVE 1
#define SERVICE_INACTIVE 2
#define SERVICE_STATE_ALL 3
#define SERVICE_QUERY_CONFIG 1
#define SERVICE_CHANGE_CONFIG 2
#define SERVICE_QUERY_STATUS 4
#define SERVICE_ENUMERATE_DEPENDENTS 8
#define SERVICE_START 16
#define SERVICE_STOP 32
#define SERVICE_PAUSE_CONTINUE 64
#define SERVICE_INTERROGATE 128
#define SERVICE_USER_DEFINED_CONTROL 256
#define SERVICE_ALL_ACCESS (STANDARD_RIGHTS_REQUIRED|SERVICE_QUERY_CONFIG|SERVICE_CHANGE_CONFIG|SERVICE_QUERY_STATUS|SERVICE_ENUMERATE_DEPENDENTS|SERVICE_START|SERVICE_STOP|SERVICE_PAUSE_CONTINUE|SERVICE_INTERROGATE|SERVICE_USER_DEFINED_CONTROL)
#define SERVICE_RUNS_IN_SYSTEM_PROCESS 1
#define SERVICE_CONFIG_DESCRIPTION     1
#define SERVICE_CONFIG_FAILURE_ACTIONS 2

typedef struct _SERVICE_STATUS {
	DWORD dwServiceType;
	DWORD dwCurrentState;
	DWORD dwControlsAccepted;
	DWORD dwWin32ExitCode;
	DWORD dwServiceSpecificExitCode;
	DWORD dwCheckPoint;
	DWORD dwWaitHint;
} SERVICE_STATUS,*LPSERVICE_STATUS;
typedef struct _SERVICE_STATUS_PROCESS {
	DWORD dwServiceType;
	DWORD dwCurrentState;
	DWORD dwControlsAccepted;
	DWORD dwWin32ExitCode;
	DWORD dwServiceSpecificExitCode;
	DWORD dwCheckPoint;
	DWORD dwWaitHint;
	DWORD dwProcessId;
	DWORD dwServiceFlags;
} SERVICE_STATUS_PROCESS, *LPSERVICE_STATUS_PROCESS;
typedef enum _SC_STATUS_TYPE {
	SC_STATUS_PROCESS_INFO = 0
} SC_STATUS_TYPE;
typedef enum _SC_ENUM_TYPE {
        SC_ENUM_PROCESS_INFO = 0
} SC_ENUM_TYPE;
typedef struct _ENUM_SERVICE_STATUSA {
	LPSTR lpServiceName;
	LPSTR lpDisplayName;
	SERVICE_STATUS ServiceStatus;
} ENUM_SERVICE_STATUSA,*LPENUM_SERVICE_STATUSA;
typedef struct _ENUM_SERVICE_STATUSW {
	LPWSTR lpServiceName;
	LPWSTR lpDisplayName;
	SERVICE_STATUS ServiceStatus;
} ENUM_SERVICE_STATUSW,*LPENUM_SERVICE_STATUSW;
typedef struct _ENUM_SERVICE_STATUS_PROCESSA {
	LPSTR lpServiceName;
	LPSTR lpDisplayName;
	SERVICE_STATUS_PROCESS ServiceStatusProcess;
} ENUM_SERVICE_STATUS_PROCESSA,*LPENUM_SERVICE_STATUS_PROCESSA;
typedef struct _ENUM_SERVICE_STATUS_PROCESSW {
	LPWSTR lpServiceName;
	LPWSTR lpDisplayName;
	SERVICE_STATUS_PROCESS ServiceStatusProcess;
} ENUM_SERVICE_STATUS_PROCESSW,*LPENUM_SERVICE_STATUS_PROCESSW;
typedef struct _QUERY_SERVICE_CONFIGA {
	DWORD dwServiceType;
	DWORD dwStartType;
	DWORD dwErrorControl;
	LPSTR lpBinaryPathName;
	LPSTR lpLoadOrderGroup;
	DWORD dwTagId;
	LPSTR lpDependencies;
	LPSTR lpServiceStartName;
	LPSTR lpDisplayName;
} QUERY_SERVICE_CONFIGA,*LPQUERY_SERVICE_CONFIGA;
typedef struct _QUERY_SERVICE_CONFIGW {
	DWORD dwServiceType;
	DWORD dwStartType;
	DWORD dwErrorControl;
	LPWSTR lpBinaryPathName;
	LPWSTR lpLoadOrderGroup;
	DWORD dwTagId;
	LPWSTR lpDependencies;
	LPWSTR lpServiceStartName;
	LPWSTR lpDisplayName;
} QUERY_SERVICE_CONFIGW,*LPQUERY_SERVICE_CONFIGW;
typedef struct _QUERY_SERVICE_LOCK_STATUSA {
	DWORD fIsLocked;
	LPSTR lpLockOwner;
	DWORD dwLockDuration;
} QUERY_SERVICE_LOCK_STATUSA,*LPQUERY_SERVICE_LOCK_STATUSA;
typedef struct _QUERY_SERVICE_LOCK_STATUSW {
	DWORD fIsLocked;
	LPWSTR lpLockOwner;
	DWORD dwLockDuration;
} QUERY_SERVICE_LOCK_STATUSW,*LPQUERY_SERVICE_LOCK_STATUSW;
typedef void (WINAPI *LPSERVICE_MAIN_FUNCTIONA)(DWORD,LPSTR*);
typedef void (WINAPI *LPSERVICE_MAIN_FUNCTIONW)(DWORD,LPWSTR*);
typedef struct _SERVICE_TABLE_ENTRYA {
	LPSTR lpServiceName;
	LPSERVICE_MAIN_FUNCTIONA lpServiceProc;
} SERVICE_TABLE_ENTRYA,*LPSERVICE_TABLE_ENTRYA;
typedef struct _SERVICE_TABLE_ENTRYW {
	LPWSTR lpServiceName;
	LPSERVICE_MAIN_FUNCTIONW lpServiceProc;
} SERVICE_TABLE_ENTRYW,*LPSERVICE_TABLE_ENTRYW;
DECLARE_HANDLE(SC_HANDLE);
typedef SC_HANDLE *LPSC_HANDLE;
typedef PVOID SC_LOCK;
typedef DWORD SERVICE_STATUS_HANDLE;
typedef VOID(WINAPI *LPHANDLER_FUNCTION)(DWORD);
typedef DWORD (WINAPI *LPHANDLER_FUNCTION_EX)(DWORD,DWORD,LPVOID,LPVOID);
typedef struct _SERVICE_DESCRIPTIONA {
	LPSTR lpDescription;
} SERVICE_DESCRIPTIONA,*LPSERVICE_DESCRIPTIONA;
typedef struct _SERVICE_DESCRIPTIONW {
	LPWSTR lpDescription;
} SERVICE_DESCRIPTIONW,*LPSERVICE_DESCRIPTIONW;
typedef enum _SC_ACTION_TYPE {
        SC_ACTION_NONE          = 0,
        SC_ACTION_RESTART       = 1,
        SC_ACTION_REBOOT        = 2,
        SC_ACTION_RUN_COMMAND   = 3
} SC_ACTION_TYPE;
typedef struct _SC_ACTION {
	SC_ACTION_TYPE	Type;
	DWORD		Delay;
} SC_ACTION,*LPSC_ACTION;
typedef struct _SERVICE_FAILURE_ACTIONSA {
	DWORD	dwResetPeriod;
	LPSTR	lpRebootMsg;
	LPSTR	lpCommand;
	DWORD	cActions;
	SC_ACTION * lpsaActions;
} SERVICE_FAILURE_ACTIONSA,*LPSERVICE_FAILURE_ACTIONSA;
typedef struct _SERVICE_FAILURE_ACTIONSW {
	DWORD	dwResetPeriod;
	LPWSTR	lpRebootMsg;
	LPWSTR	lpCommand;
	DWORD	cActions;
	SC_ACTION * lpsaActions;
} SERVICE_FAILURE_ACTIONSW,*LPSERVICE_FAILURE_ACTIONSW;

BOOL WINAPI ChangeServiceConfigA(SC_HANDLE,DWORD,DWORD,DWORD,LPCSTR,LPCSTR,LPDWORD,LPCSTR,LPCSTR,LPCSTR,LPCSTR);
BOOL WINAPI ChangeServiceConfigW(SC_HANDLE,DWORD,DWORD,DWORD,LPCWSTR,LPCWSTR,LPDWORD,LPCWSTR,LPCWSTR,LPCWSTR,LPCWSTR);
BOOL WINAPI ChangeServiceConfig2A(SC_HANDLE,DWORD,LPVOID);
BOOL WINAPI ChangeServiceConfig2W(SC_HANDLE,DWORD,LPVOID);
BOOL WINAPI CloseServiceHandle(SC_HANDLE);
BOOL WINAPI ControlService(SC_HANDLE,DWORD,LPSERVICE_STATUS);
SC_HANDLE WINAPI CreateServiceA(SC_HANDLE,LPCSTR,LPCSTR,DWORD,DWORD,DWORD,DWORD,LPCSTR,LPCSTR,PDWORD,LPCSTR,LPCSTR,LPCSTR);
SC_HANDLE WINAPI CreateServiceW(SC_HANDLE,LPCWSTR,LPCWSTR,DWORD,DWORD,DWORD,DWORD,LPCWSTR,LPCWSTR,PDWORD,LPCWSTR,LPCWSTR,LPCWSTR);
BOOL WINAPI DeleteService(SC_HANDLE);
BOOL WINAPI EnumDependentServicesA(SC_HANDLE,DWORD,LPENUM_SERVICE_STATUSA,DWORD,PDWORD,PDWORD);
BOOL WINAPI EnumDependentServicesW(SC_HANDLE,DWORD,LPENUM_SERVICE_STATUSW,DWORD,PDWORD,PDWORD);
BOOL WINAPI EnumServicesStatusA(SC_HANDLE,DWORD,DWORD,LPENUM_SERVICE_STATUSA,DWORD,PDWORD,PDWORD,PDWORD);
BOOL WINAPI EnumServicesStatusW(SC_HANDLE,DWORD,DWORD,LPENUM_SERVICE_STATUSW,DWORD,PDWORD,PDWORD,PDWORD);
BOOL WINAPI EnumServicesStatusExA(SC_HANDLE,SC_ENUM_TYPE,DWORD,DWORD,LPBYTE,DWORD,LPDWORD,LPDWORD,LPDWORD,LPCSTR);
BOOL WINAPI EnumServicesStatusExW(SC_HANDLE,SC_ENUM_TYPE,DWORD,DWORD,LPBYTE,DWORD,LPDWORD,LPDWORD,LPDWORD,LPCWSTR);
BOOL WINAPI GetServiceDisplayNameA(SC_HANDLE,LPCSTR,LPSTR,PDWORD);
BOOL WINAPI GetServiceDisplayNameW(SC_HANDLE,LPCWSTR,LPWSTR,PDWORD);
BOOL WINAPI GetServiceKeyNameA(SC_HANDLE,LPCSTR,LPSTR,PDWORD);
BOOL WINAPI GetServiceKeyNameW(SC_HANDLE,LPCWSTR,LPWSTR,PDWORD);
SC_LOCK WINAPI LockServiceDatabase(SC_HANDLE);
BOOL WINAPI NotifyBootConfigStatus(BOOL);
SC_HANDLE WINAPI OpenSCManagerA(LPCSTR,LPCSTR,DWORD);
SC_HANDLE WINAPI OpenSCManagerW(LPCWSTR,LPCWSTR,DWORD);
SC_HANDLE WINAPI OpenServiceA(SC_HANDLE,LPCSTR,DWORD);
SC_HANDLE WINAPI OpenServiceW(SC_HANDLE,LPCWSTR,DWORD);
BOOL WINAPI QueryServiceConfigA(SC_HANDLE,LPQUERY_SERVICE_CONFIGA,DWORD,PDWORD);
BOOL WINAPI QueryServiceConfigW(SC_HANDLE,LPQUERY_SERVICE_CONFIGW,DWORD,PDWORD);
BOOL WINAPI QueryServiceConfig2A(SC_HANDLE,DWORD,LPBYTE,DWORD,LPDWORD);
BOOL WINAPI QueryServiceConfig2W(SC_HANDLE,DWORD,LPBYTE,DWORD,LPDWORD);
BOOL WINAPI QueryServiceLockStatusA(SC_HANDLE,LPQUERY_SERVICE_LOCK_STATUSA,DWORD,PDWORD);
BOOL WINAPI QueryServiceLockStatusW(SC_HANDLE,LPQUERY_SERVICE_LOCK_STATUSW,DWORD,PDWORD);
BOOL WINAPI QueryServiceObjectSecurity(SC_HANDLE,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR,DWORD,LPDWORD);
BOOL WINAPI QueryServiceStatus(SC_HANDLE,LPSERVICE_STATUS);
BOOL WINAPI QueryServiceStatusEx(SC_HANDLE,SC_STATUS_TYPE,LPBYTE,DWORD,LPDWORD);
SERVICE_STATUS_HANDLE WINAPI RegisterServiceCtrlHandlerA(LPCSTR,LPHANDLER_FUNCTION);
SERVICE_STATUS_HANDLE WINAPI RegisterServiceCtrlHandlerW(LPCWSTR,LPHANDLER_FUNCTION);
SERVICE_STATUS_HANDLE WINAPI RegisterServiceCtrlHandlerExA(LPCSTR,LPHANDLER_FUNCTION_EX,LPVOID);
SERVICE_STATUS_HANDLE WINAPI RegisterServiceCtrlHandlerExW(LPCWSTR,LPHANDLER_FUNCTION_EX,LPVOID);
BOOL WINAPI SetServiceObjectSecurity(SC_HANDLE,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR);
BOOL WINAPI SetServiceStatus(SERVICE_STATUS_HANDLE,LPSERVICE_STATUS);
BOOL WINAPI StartServiceA(SC_HANDLE,DWORD,LPCSTR*);
BOOL WINAPI StartServiceCtrlDispatcherA(LPSERVICE_TABLE_ENTRYA);
BOOL WINAPI StartServiceCtrlDispatcherW(LPSERVICE_TABLE_ENTRYW);
BOOL WINAPI StartServiceW(SC_HANDLE,DWORD,LPCWSTR*);
BOOL WINAPI UnlockServiceDatabase(SC_LOCK);

#ifdef UNICODE
typedef ENUM_SERVICE_STATUSW ENUM_SERVICE_STATUS,*LPENUM_SERVICE_STATUS;
typedef ENUM_SERVICE_STATUS_PROCESSW ENUM_SERVICE_STATUS_PROCESS;
typedef LPENUM_SERVICE_STATUS_PROCESSW LPENUM_SERVICE_STATUS_PROCESS;
typedef QUERY_SERVICE_CONFIGW QUERY_SERVICE_CONFIG,*LPQUERY_SERVICE_CONFIG;
typedef QUERY_SERVICE_LOCK_STATUSW QUERY_SERVICE_LOCK_STATUS,*LPQUERY_SERVICE_LOCK_STATUS;
typedef SERVICE_TABLE_ENTRYW SERVICE_TABLE_ENTRY,*LPSERVICE_TABLE_ENTRY;
typedef LPSERVICE_MAIN_FUNCTIONW LPSERVICE_MAIN_FUNCTION;
typedef SERVICE_DESCRIPTIONW SERVICE_DESCRIPTION;
typedef LPSERVICE_DESCRIPTIONW LPSERVICE_DESCRIPTION;
typedef SERVICE_FAILURE_ACTIONSW SERVICE_FAILURE_ACTIONS;
typedef LPSERVICE_FAILURE_ACTIONSW LPSERVICE_FAILURE_ACTIONS;
#define SERVICES_ACTIVE_DATABASE SERVICES_ACTIVE_DATABASEW
#define SERVICES_FAILED_DATABASE SERVICES_FAILED_DATABASEW
#define SC_GROUP_IDENTIFIER SC_GROUP_IDENTIFIERW
#define ChangeServiceConfig ChangeServiceConfigW
#define ChangeServiceConfig2 ChangeServiceConfig2W
#define CreateService CreateServiceW
#define EnumDependentServices EnumDependentServicesW
#define EnumServicesStatus EnumServicesStatusW
#define EnumServicesStatusEx  EnumServicesStatusExW
#define GetServiceDisplayName GetServiceDisplayNameW
#define GetServiceKeyName GetServiceKeyNameW
#define OpenSCManager OpenSCManagerW
#define OpenService OpenServiceW
#define QueryServiceConfig QueryServiceConfigW
#define QueryServiceConfig2 QueryServiceConfig2W
#define QueryServiceLockStatus QueryServiceLockStatusW
#define RegisterServiceCtrlHandler RegisterServiceCtrlHandlerW
#define RegisterServiceCtrlHandlerEx RegisterServiceCtrlHandlerExW
#define StartService StartServiceW
#define StartServiceCtrlDispatcher StartServiceCtrlDispatcherW
#else
typedef ENUM_SERVICE_STATUSA ENUM_SERVICE_STATUS,*LPENUM_SERVICE_STATUS;
typedef ENUM_SERVICE_STATUS_PROCESSA ENUM_SERVICE_STATUS_PROCESS;
typedef LPENUM_SERVICE_STATUS_PROCESSA LPENUM_SERVICE_STATUS_PROCESS;
typedef QUERY_SERVICE_CONFIGA QUERY_SERVICE_CONFIG,*LPQUERY_SERVICE_CONFIG;
typedef QUERY_SERVICE_LOCK_STATUSA QUERY_SERVICE_LOCK_STATUS,*LPQUERY_SERVICE_LOCK_STATUS;
typedef SERVICE_TABLE_ENTRYA SERVICE_TABLE_ENTRY,*LPSERVICE_TABLE_ENTRY;
typedef LPSERVICE_MAIN_FUNCTIONA LPSERVICE_MAIN_FUNCTION;
typedef SERVICE_DESCRIPTIONA SERVICE_DESCRIPTION;
typedef LPSERVICE_DESCRIPTIONA LPSERVICE_DESCRIPTION;
typedef SERVICE_FAILURE_ACTIONSA SERVICE_FAILURE_ACTIONS;
typedef LPSERVICE_FAILURE_ACTIONSA LPSERVICE_FAILURE_ACTIONS;
#define SERVICES_ACTIVE_DATABASE SERVICES_ACTIVE_DATABASEA
#define SERVICES_FAILED_DATABASE SERVICES_FAILED_DATABASEA
#define SC_GROUP_IDENTIFIER SC_GROUP_IDENTIFIERA
#define ChangeServiceConfig ChangeServiceConfigA
#define ChangeServiceConfig2 ChangeServiceConfig2A
#define CreateService CreateServiceA
#define EnumDependentServices EnumDependentServicesA
#define EnumServicesStatus EnumServicesStatusA
#define EnumServicesStatusEx  EnumServicesStatusExA
#define GetServiceDisplayName GetServiceDisplayNameA
#define GetServiceKeyName GetServiceKeyNameA
#define OpenSCManager OpenSCManagerA
#define OpenService OpenServiceA
#define QueryServiceConfig QueryServiceConfigA
#define QueryServiceConfig2 QueryServiceConfig2A
#define QueryServiceLockStatus QueryServiceLockStatusA
#define RegisterServiceCtrlHandler RegisterServiceCtrlHandlerA
#define RegisterServiceCtrlHandlerEx RegisterServiceCtrlHandlerExA
#define StartService StartServiceA
#define StartServiceCtrlDispatcher StartServiceCtrlDispatcherA
#endif
#ifdef __cplusplus
}
#endif
#endif /* _WINSVC_H */
