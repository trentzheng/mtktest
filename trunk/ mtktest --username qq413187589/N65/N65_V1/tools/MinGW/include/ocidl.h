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
* $CVSHeader: P_U25U26_06B_V30/codes/06BW0712MP_1_U26_06B_V30_gprs_MMI/tools/MinGW/include/ocidl.h,v 1.1 2007/05/17 07:25:31 bw Exp $
*
* $Id: ocidl.h,v 1.1 2007/05/17 07:25:31 bw Exp $
*
* $Date: 2007/05/17 07:25:31 $
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
* $Log: ocidl.h,v $
* Revision 1.1  2007/05/17 07:25:31  bw
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
* ~CVSHeader: P_U25U26_06B_V28/codes/06BW0712MP_1_U26_06B_V28_gprs_MMI/tools/MinGW/include/ocidl.h,v 1.1 2007/05/14 09:46:45 bw Exp $
*
* ~Id: ocidl.h,v 1.1 2007/05/14 09:46:45 bw Exp $
*
* ~Date: 2007/05/14 09:46:45 $
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
* ~Log: ocidl.h,v $
* Revision 1.1  2007/05/14 09:46:45  bw
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
* ~CVSHeader: P_U25U26_06B/codes/U25U26_06B_W07.12_MMI/tools/MinGW/include/ocidl.h,v 1.2 2007/04/04 06:51:33 bw Exp $
*
* ~Id: ocidl.h,v 1.2 2007/04/04 06:51:33 bw Exp $
*
* ~Date: 2007/04/04 06:51:33 $
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
* ~Log: ocidl.h,v $
* Revision 1.2  2007/04/04 06:51:33  bw
* 增加.c.h文件头模板
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/

#ifndef _OCIDL_H
#define _OCIDL_H
#ifdef __cplusplus
extern "C" {
#endif

#include <ole2.h>
#include <olectl.h>

typedef enum tagREADYSTATE {
	READYSTATE_UNINITIALIZED = 0,
	READYSTATE_LOADING = 1,
	READYSTATE_LOADED = 2,
	READYSTATE_INTERACTIVE = 3,
	READYSTATE_COMPLETE = 4
} READYSTATE;

EXTERN_C const IID IID_IOleControl;
#undef INTERFACE
#define INTERFACE IOleControl
DECLARE_INTERFACE_(IOleControl,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetControlInfo)(THIS_ LPCONTROLINFO) PURE;
	STDMETHOD(OnMnemonic)(THIS_ LPMSG) PURE;
	STDMETHOD(OnAmbientPropertyChange)(THIS_ DISPID) PURE;
	STDMETHOD(FreezeEvents)(THIS_ BOOL) PURE;
};

EXTERN_C const IID IID_IOleControlSite;
#undef INTERFACE
#define INTERFACE IOleControlSite
DECLARE_INTERFACE_(IOleControlSite,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(OnControlInfoChanged)(THIS) PURE;
	STDMETHOD(LockInPlaceActive)(THIS_ BOOL) PURE;
	STDMETHOD(GetExtendedControl)(THIS_ LPDISPATCH*) PURE;
	STDMETHOD(TransformCoords)(THIS_ POINTL*,POINTF*,DWORD) PURE;
	STDMETHOD(TranslateAccelerator)(THIS_ LPMSG,DWORD) PURE;
	STDMETHOD(OnFocus)(THIS_ BOOL) PURE;
	STDMETHOD(ShowPropertyFrame)(THIS) PURE;
};

EXTERN_C const IID IID_ISimpleFrameSite;
#undef INTERFACE
#define INTERFACE ISimpleFrameSite
DECLARE_INTERFACE_(ISimpleFrameSite,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(PreMessageFilter)(THIS_ HWND,UINT,WPARAM,LPARAM,LRESULT*,PDWORD) PURE;
	STDMETHOD(PostMessageFilter)(THIS_ HWND,UINT,WPARAM,LPARAM,LRESULT*,DWORD) PURE;
};

EXTERN_C const IID IID_IErrorLog;
#undef INTERFACE
#define INTERFACE IErrorLog
DECLARE_INTERFACE_(IErrorLog,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(AddError)(THIS_ LPCOLESTR,LPEXCEPINFO) PURE;
};

EXTERN_C const IID IID_IPropertyBag;
#undef INTERFACE
#define INTERFACE IPropertyBag
DECLARE_INTERFACE_(IPropertyBag,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(Read)(THIS_ LPCOLESTR,LPVARIANT,LPERRORLOG) PURE;
	STDMETHOD(Write)(THIS_ LPCOLESTR,LPVARIANT) PURE;
};

EXTERN_C const IID IID_IPersistPropertyBag;
#undef INTERFACE
#define INTERFACE IPersistPropertyBag
DECLARE_INTERFACE_(IPersistPropertyBag,IPersist)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetClassID)(THIS_ LPCLSID) PURE;
	STDMETHOD(InitNew)(THIS) PURE;
	STDMETHOD(Load)(THIS_ LPPROPERTYBAG,LPERRORLOG) PURE;
	STDMETHOD(Save)(THIS_ LPPROPERTYBAG,BOOL,BOOL) PURE;
};

EXTERN_C const IID IID_IPersistStreamInit;
#undef INTERFACE
#define INTERFACE IPersistStreamInit
DECLARE_INTERFACE_(IPersistStreamInit,IPersist)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetClassID)(THIS_ LPCLSID) PURE;
	STDMETHOD(IsDirty)(THIS) PURE;
	STDMETHOD(Load)(THIS_ LPSTREAM) PURE;
	STDMETHOD(Save)(THIS_ LPSTREAM,BOOL) PURE;
	STDMETHOD(GetSizeMax)(THIS_ PULARGE_INTEGER) PURE;
	STDMETHOD(InitNew)(THIS) PURE;
};

EXTERN_C const IID IID_IPersistMemory;
#undef INTERFACE
#define INTERFACE IPersistMemory
DECLARE_INTERFACE_(IPersistMemory,IPersist)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetClassID)(THIS_ LPCLSID) PURE;
	STDMETHOD(IsDirty)(THIS) PURE;
	STDMETHOD(Load)(THIS_ PVOID,ULONG) PURE;
	STDMETHOD(Save)(THIS_ PVOID,BOOL,ULONG) PURE;
	STDMETHOD(GetSizeMax)(THIS_ PULONG) PURE;
	STDMETHOD(InitNew)(THIS) PURE;
};

EXTERN_C const IID IID_IPropertyNotifySink;
#undef INTERFACE
#define INTERFACE IPropertyNotifySink
DECLARE_INTERFACE_(IPropertyNotifySink,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(OnChanged)(THIS_ DISPID) PURE;
	STDMETHOD(OnRequestEdit)(THIS_ DISPID) PURE;
};

EXTERN_C const IID IID_IProvideClassInfo;
#undef INTERFACE
#define INTERFACE IProvideClassInfo
DECLARE_INTERFACE_(IProvideClassInfo,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetClassInfo)(THIS_ LPTYPEINFO*) PURE;
};

EXTERN_C const IID IID_IProvideClassInfo2;
#undef INTERFACE
#define INTERFACE IProvideClassInfo2
DECLARE_INTERFACE_(IProvideClassInfo2,IProvideClassInfo)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetClassInfo)(THIS_ LPTYPEINFO*) PURE;
	STDMETHOD(GetGUID)(THIS_ DWORD,GUID*) PURE;
};

EXTERN_C const IID IID_IConnectionPointContainer;
#undef INTERFACE
#define INTERFACE IConnectionPointContainer
DECLARE_INTERFACE_(IConnectionPointContainer,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(EnumConnectionPoints)(THIS_ LPENUMCONNECTIONPOINTS*) PURE;
	STDMETHOD(FindConnectionPoint)(THIS_ REFIID,LPCONNECTIONPOINT*) PURE;
};

EXTERN_C const IID IID_IEnumConnectionPoints;
#undef INTERFACE
#define INTERFACE IEnumConnectionPoints
DECLARE_INTERFACE_(IEnumConnectionPoints,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(Next)(THIS_ ULONG,LPCONNECTIONPOINT*,ULONG*) PURE;
	STDMETHOD(Skip)(THIS_ ULONG) PURE;
	STDMETHOD(Reset)(THIS) PURE;
	STDMETHOD(Clone)(THIS_ LPENUMCONNECTIONPOINTS*) PURE;
};

EXTERN_C const IID IID_IConnectionPoint;
#undef INTERFACE
#define INTERFACE IConnectionPoint
DECLARE_INTERFACE_(IConnectionPoint,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetConnectionInterface)(THIS_ IID*) PURE;
	STDMETHOD(GetConnectionPointContainer)(THIS_ IConnectionPointContainer**) PURE;
	STDMETHOD(Advise)(THIS_ LPUNKNOWN,PDWORD) PURE;
	STDMETHOD(Unadvise)(THIS_ DWORD) PURE;
	STDMETHOD(EnumConnections)(THIS_ LPENUMCONNECTIONS*) PURE;
};

EXTERN_C const IID IID_IEnumConnections;
#undef INTERFACE
#define INTERFACE IEnumConnections
DECLARE_INTERFACE_(IEnumConnections,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(Next)(THIS_ ULONG,LPCONNECTDATA,PULONG) PURE;
	STDMETHOD(Skip)(THIS_ ULONG) PURE;
	STDMETHOD(Reset)(THIS) PURE;
	STDMETHOD(Clone)(THIS_ LPENUMCONNECTIONS*) PURE;
};

EXTERN_C const IID IID_IClassFactory2;
#undef INTERFACE
#define INTERFACE IClassFactory2
DECLARE_INTERFACE_(IClassFactory2,IClassFactory)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(CreateInstance)(THIS_ LPUNKNOWN,REFIID,PVOID*) PURE;
	STDMETHOD(LockServer)(THIS_ BOOL) PURE;
	STDMETHOD(GetLicInfo)(THIS_ LPLICINFO) PURE;
	STDMETHOD(RequestLicKey)(THIS_ DWORD,BSTR*) PURE;
	STDMETHOD(CreateInstanceLic)(THIS_ LPUNKNOWN,LPUNKNOWN,REFIID,BSTR,PVOID*) PURE;
};

EXTERN_C const IID IID_ISpecifyPropertyPages;
#undef INTERFACE
#define INTERFACE ISpecifyPropertyPages
DECLARE_INTERFACE_(ISpecifyPropertyPages,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetPages)(THIS_ CAUUID*) PURE;
};

EXTERN_C const IID IID_IPerPropertyBrowsing;
#undef INTERFACE
#define INTERFACE IPerPropertyBrowsing
DECLARE_INTERFACE_(IPerPropertyBrowsing,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetDisplayString)(THIS_ DISPID,BSTR*) PURE;
	STDMETHOD(MapPropertyToPage)(THIS_ DISPID,LPCLSID) PURE;
	STDMETHOD(GetPredefinedStrings)(THIS_ DISPID,CALPOLESTR*,CADWORD*) PURE;
	STDMETHOD(GetPredefinedValue)(THIS_ DISPID,DWORD,VARIANT*) PURE;
};

EXTERN_C const IID IID_IPropertyPageSite;
#undef INTERFACE
#define INTERFACE IPropertyPageSite
DECLARE_INTERFACE_(IPropertyPageSite,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(OnStatusChange)(THIS_ DWORD) PURE;
	STDMETHOD(GetLocaleID)(THIS_ LCID*) PURE;
	STDMETHOD(GetPageContainer)(THIS_ LPUNKNOWN*) PURE;
	STDMETHOD(TranslateAccelerator)(THIS_ LPMSG) PURE;
};

EXTERN_C const IID IID_IPropertyPage;
#undef INTERFACE
#define INTERFACE IPropertyPage
DECLARE_INTERFACE_(IPropertyPage,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(SetPageSite)(THIS_ LPPROPERTYPAGESITE) PURE;
	STDMETHOD(Activate)(THIS_ HWND,LPCRECT,BOOL) PURE;
	STDMETHOD(Deactivate)(THIS) PURE;
	STDMETHOD(GetPageInfo)(THIS_ LPPROPPAGEINFO) PURE;
	STDMETHOD(SetObjects)(THIS_ ULONG,LPUNKNOWN*) PURE;
	STDMETHOD(Show)(THIS_ UINT) PURE;
	STDMETHOD(Move)(THIS_ LPCRECT) PURE;
	STDMETHOD(IsPageDirty)(THIS) PURE;
	STDMETHOD(Apply)(THIS) PURE;
	STDMETHOD(Help)(THIS_ LPCOLESTR) PURE;
	STDMETHOD(TranslateAccelerator)(THIS_ LPMSG) PURE;
};

EXTERN_C const IID IID_IPropertyPage2;
#undef INTERFACE
#define INTERFACE IPropertyPage2
DECLARE_INTERFACE_(IPropertyPage2,IPropertyPage)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(SetPageSite)(THIS_ LPPROPERTYPAGESITE) PURE;
	STDMETHOD(Activate)(THIS_ HWND,LPCRECT,BOOL) PURE;
	STDMETHOD(Deactivate)(THIS) PURE;
	STDMETHOD(GetPageInfo)(THIS_ LPPROPPAGEINFO) PURE;
	STDMETHOD(SetObjects)(THIS_ ULONG,LPUNKNOWN*) PURE;
	STDMETHOD(Show)(THIS_ UINT) PURE;
	STDMETHOD(Move)(THIS_ LPCRECT) PURE;
	STDMETHOD(IsPageDirty)(THIS) PURE;
	STDMETHOD(Apply)(THIS) PURE;
	STDMETHOD(Help)(THIS_ LPCOLESTR) PURE;
	STDMETHOD(TranslateAccelerator)(THIS_ LPMSG) PURE;
	STDMETHOD(EditProperty)(THIS_ DISPID) PURE;
};

EXTERN_C const IID IID_IFont;
#undef INTERFACE
#define INTERFACE IFont
DECLARE_INTERFACE_(IFont,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(get_Name)(THIS_ BSTR*) PURE;
	STDMETHOD(put_Name)(THIS_ BSTR) PURE;
	STDMETHOD(get_Size)(THIS_ CY*) PURE;
	STDMETHOD(put_Size)(THIS_ CY) PURE;
	STDMETHOD(get_Bold)(THIS_ BOOL*) PURE;
	STDMETHOD(put_Bold)(THIS_ BOOL) PURE;
	STDMETHOD(get_Italic)(THIS_ BOOL*) PURE;
	STDMETHOD(put_Italic)(THIS_ BOOL) PURE;
	STDMETHOD(get_Underline)(THIS_ BOOL*) PURE;
	STDMETHOD(put_Underline)(THIS_ BOOL) PURE;
	STDMETHOD(get_Strikethrough)(THIS_ BOOL*) PURE;
	STDMETHOD(put_Strikethrough)(THIS_ BOOL) PURE;
	STDMETHOD(get_Weight)(THIS_ short*) PURE;
	STDMETHOD(put_Weight)(THIS_ short) PURE;
	STDMETHOD(get_Charset)(THIS_ short*) PURE;
	STDMETHOD(put_Charset)(THIS_ short) PURE;
	STDMETHOD(get_hFont)(THIS_ HFONT*) PURE;
	STDMETHOD(Clone)(THIS_ IFont**) PURE;
	STDMETHOD(IsEqual)(THIS_ IFont*) PURE;
	STDMETHOD(SetRatio)(THIS_ long,long) PURE;
	STDMETHOD(QueryTextMetrics)(THIS_ LPTEXTMETRICOLE) PURE;
	STDMETHOD(AddRefHfont)(THIS_ HFONT) PURE;
	STDMETHOD(ReleaseHfont)(THIS_ HFONT) PURE;
	STDMETHOD(SetHdc)(THIS_ HDC) PURE;
};

EXTERN_C const IID IID_IFontDisp;
#undef INTERFACE
#define INTERFACE IFontDisp
DECLARE_INTERFACE_(IFontDisp,IDispatch)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetTypeInfoCount)(THIS_ UINT*) PURE;
	STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,LPTYPEINFO*) PURE;
	STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*) PURE;
	STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*) PURE;
};

EXTERN_C const IID IID_IPicture;
#undef INTERFACE
#define INTERFACE IPicture
DECLARE_INTERFACE_(IPicture,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(get_Handle)(THIS_ OLE_HANDLE*) PURE;
	STDMETHOD(get_hPal)(THIS_ OLE_HANDLE*) PURE;
	STDMETHOD(get_Type)(THIS_ short*) PURE;
	STDMETHOD(get_Width)(THIS_ OLE_XSIZE_HIMETRIC*) PURE;
	STDMETHOD(get_Height)(THIS_ OLE_YSIZE_HIMETRIC*) PURE;
	STDMETHOD(Render)(THIS_ HDC,long,long,long,long,OLE_XPOS_HIMETRIC,OLE_YPOS_HIMETRIC,OLE_XSIZE_HIMETRIC,OLE_YSIZE_HIMETRIC,LPCRECT) PURE;
	STDMETHOD(set_hPal)(THIS_ OLE_HANDLE) PURE;
	STDMETHOD(get_CurDC)(THIS_ HDC*) PURE;
	STDMETHOD(SelectPicture)(THIS_ HDC,HDC*,OLE_HANDLE*) PURE;
	STDMETHOD(get_KeepOriginalFormat)(THIS_ BOOL*) PURE;
	STDMETHOD(put_KeepOriginalFormat)(THIS_ BOOL) PURE;
	STDMETHOD(PictureChanged)(THIS) PURE;
	STDMETHOD(SaveAsFile)(THIS_ LPSTREAM,BOOL,LONG*) PURE;
	STDMETHOD(get_Attributes)(THIS_ PDWORD) PURE;
};

EXTERN_C const IID IID_IPictureDisp;
#undef INTERFACE
#define INTERFACE IPictureDisp
DECLARE_INTERFACE_(IPictureDisp,IDispatch)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetTypeInfoCount)(THIS_ UINT*) PURE;
	STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,LPTYPEINFO*) PURE;
	STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*) PURE;
	STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*) PURE;
};

EXTERN_C const IID IID_IOleInPlaceSiteEx;
#undef INTERFACE
#define INTERFACE IOleInPlaceSiteEx
DECLARE_INTERFACE_(IOleInPlaceSiteEx,IOleInPlaceSite)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetWindow)(THIS_ HWND*) PURE;
	STDMETHOD(ContextSensitiveHelp)(THIS_ BOOL) PURE;
	STDMETHOD(CanInPlaceActivate)(THIS) PURE;
	STDMETHOD(OnInPlaceActivate)(THIS) PURE;
	STDMETHOD(OnUIActivate)(THIS) PURE;
	STDMETHOD(GetWindowContext)(THIS_ IOleInPlaceFrame**,IOleInPlaceUIWindow**,LPRECT,LPRECT,LPOLEINPLACEFRAMEINFO) PURE;
	STDMETHOD(Scroll)(THIS_ SIZE) PURE;
	STDMETHOD(OnUIDeactivate)(THIS_ BOOL) PURE;
	STDMETHOD(OnInPlaceDeactivate)(THIS) PURE;
	STDMETHOD(DiscardUndoState)(THIS) PURE;
	STDMETHOD(DeactivateAndUndo)(THIS) PURE;
	STDMETHOD(OnPosRectChange)(THIS_ LPCRECT) PURE;

	STDMETHOD(OnInPlaceActivateEx)(THIS_ BOOL*,DWORD) PURE;
	STDMETHOD(OnInPlaceDeactivateEx)(THIS_ BOOL) PURE;
	STDMETHOD(RequestUIActivate)(THIS) PURE;
};

EXTERN_C const IID IID_IObjectWithSite;
#undef INTERFACE
#define INTERFACE IObjectWithSite
DECLARE_INTERFACE_(IObjectWithSite,IUnknown)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(SetSite)(THIS_ IUnknown*) PURE;
	STDMETHOD(GetSite)(THIS_ REFIID, void**) PURE;
};

EXTERN_C const IID IID_IOleInPlaceSiteWindowless;
#undef INTERFACE
#define INTERFACE IOleInPlaceSiteWindowless
DECLARE_INTERFACE_(IOleInPlaceSiteWindowless,IOleInPlaceSiteEx)
{
	STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
	STDMETHOD_(ULONG,AddRef)(THIS) PURE;
	STDMETHOD_(ULONG,Release)(THIS) PURE;
	STDMETHOD(GetWindow)(THIS_ HWND*) PURE;
	STDMETHOD(ContextSensitiveHelp)(THIS_ BOOL) PURE;
	STDMETHOD(CanInPlaceActivate)(THIS) PURE;
	STDMETHOD(OnInPlaceActivate)(THIS) PURE;
	STDMETHOD(OnUIActivate)(THIS) PURE;
	STDMETHOD(GetWindowContext)(THIS_ IOleInPlaceFrame**,IOleInPlaceUIWindow**,LPRECT,LPRECT,LPOLEINPLACEFRAMEINFO) PURE;
	STDMETHOD(Scroll)(THIS_ SIZE) PURE;
	STDMETHOD(OnUIDeactivate)(THIS_ BOOL) PURE;
	STDMETHOD(OnInPlaceDeactivate)(THIS) PURE;
	STDMETHOD(DiscardUndoState)(THIS) PURE;
	STDMETHOD(DeactivateAndUndo)(THIS) PURE;
	STDMETHOD(OnPosRectChange)(THIS_ LPCRECT) PURE;

	STDMETHOD(OnInPlaceActivateEx)(THIS_ BOOL*,DWORD) PURE;
	STDMETHOD(OnInPlaceDeactivateEx)(THIS_ BOOL) PURE;
	STDMETHOD(RequestUIActivate)(THIS) PURE;

	STDMETHOD(CanWindowlessActivate)(THIS) PURE;
	STDMETHOD(GetCapture)(THIS) PURE;
	STDMETHOD(SetCapture)(THIS_ BOOL) PURE;
	STDMETHOD(GetFocus)(THIS) PURE;
	STDMETHOD(SetFocus)(THIS_ BOOL) PURE;
	STDMETHOD(GetDC)(THIS_ LPCRECT,DWORD,HDC*) PURE;
	STDMETHOD(ReleaseDC)(THIS_ HDC) PURE;
	STDMETHOD(InvalidateRect)(THIS_ LPCRECT,BOOL) PURE;
	STDMETHOD(InvalidateRgn)(THIS_ HRGN,BOOL) PURE;
	STDMETHOD(ScrollRect)(THIS_ INT,INT,LPCRECT,LPCRECT) PURE;
	STDMETHOD(AdjustRect)(THIS_ LPCRECT) PURE;
	STDMETHOD(OnDefWindowMessage)(THIS_ UINT,WPARAM,LPARAM,LRESULT*) PURE;
};

#ifdef __cplusplus
}
#endif
#endif
