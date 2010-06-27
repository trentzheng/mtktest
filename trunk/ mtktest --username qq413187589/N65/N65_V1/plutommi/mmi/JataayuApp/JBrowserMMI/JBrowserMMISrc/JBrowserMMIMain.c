/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 * JBrowserMMIMain.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for common browser functions.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "MMI_include.h"
#ifndef _MMI_JBROWSERMMIMAIN_C
#define _MMI_JBROWSERMMIMAIN_C

/*  Include: MMI header file */
#if defined (JATAAYU_SUPPORT) && defined (WAP_SUPPORT)
#include "SettingProfile.h"
#include "CommonScreens.h"
#include "wgui_inputs.h"
#include "OrganizerDef.h"
#include "DateTimeGprot.h"
#include "settingGprots.h"
#include "wgui_status_icons.h"
#include "JBrowserResDef.h"
#include "JBrowserMMIProts.h"
#include "JBrowserMMITypes.h"
#include "JBrowserMMIGprots.h"
#include "JProfileHandlerTypes.h"
#include "JProfileHandlerProts.h"
#include "FileManagerGProt.h"
#include "FileManagerDef.h"
#include "JPushInboxCommonUI.h"
#include "wapadp.h"
#include "jdd_ui_datatypes.h"
#include "jdd_ui_utils.h"
#include "JProfileHandlerProts.h"

#ifdef __MMI_FILE_MANAGER__
#include "FileMgr.h"
#endif 

#ifdef __MMI_IRDA_SUPPORT__
#include "IrdaMMIGprots.h"
#endif 

#include "JPushInboxCommonUI.h"
/* included for primitives handling */
#include "sat_def.h"
#include "wap_ps_struct.h"
#include "JProfileHandlerTypes.h"

#if (defined (JATAAYU_SUPPORT) && defined(MMS_SUPPORT))
#include "JMMSMessageSettings.h"
#include "JMMSGprot.h"
#endif /* (defined (JATAAYU_SUPPORT) && defined(MMS_SUPPORT)) */ 

/*  Include: NVRAM header file */

/*  Include: Jataayu header file */
#include "ddl.h"
#include "jcal.h"
#include "jdd_memapi.h"
#include "jdd_ui_window.h"
#ifdef JBROWSER_USE_ASM
#endif 

#ifdef __MMI_TOUCH_SCREEN__
#include "jdd_ui_pen_support.h"
#endif 

#include "wapadp.h"     /* wap_dl_error_enum and wap_dl_status_enum are defined here */

mmi_brw_context_struct g_mmi_brw_cntx;
mmi_brw_page_context_struct g_mmi_brw_page_cntx;
mmi_brw_push_context_struct g_mmi_brw_push_cntx;    /* Added By Vikas Lal - For Push Handling */

/* Animation handle of splash screen image */
static GDI_HANDLE g_mmi_brw_splash_ani_handle = GDI_ERROR_HANDLE;

/* This array defines the currently registered Accesskeys  - (Shantanu-20061027) */
static U16 g_mmi_brw_jbrowser_accesskeys[MMI_BRW_MAX_ACCESSKEY] = 
{
    KEY_STAR,
    KEY_0,
    KEY_1,
    KEY_2,
    KEY_3,
    KEY_4,
    KEY_5,
    KEY_6,
    KEY_7,
    KEY_8,
    KEY_9,
    KEY_POUND
#ifdef BROWSER_SENDKEY_AS_ACCESSKEY
        ,
    KEY_SEND
#endif /* BROWSER_SENDKEY_AS_ACCESSKEY */ 
};

extern U8 g_mmi_brw_notification_flag;

#ifdef __MMI_URI_SCHEME_SUPPORT__
extern JC_CHAR *g_scheme_data_ptr;
extern JC_CHAR *g_rtsp_ege_url;
#endif /* __MMI_URI_SCHEME_SUPPORT__ */ 

#if (defined (JATAAYU_SUPPORT) && defined(MMS_SUPPORT))
extern nvram_mms_profile_content_struct NVRAM_EF_MMS_PROFILE_CONTENT_DEFAULT[];
extern nvram_mms_profile_name_struct NVRAM_EF_MMS_PROFILE_NAMES_DEFAULT[];
#endif /* (defined (JATAAYU_SUPPORT) && defined(MMS_SUPPORT)) */ 

extern nvram_brw_bkm_title_struct NVRAM_EF_BRW_BOOKMARK_TITLE_DEFAULT[];
extern nvram_brw_bkm_url_struct NVRAM_EF_BRW_BOOKMARK_URL_DEFAULT[];
extern nvram_wap_profile_content_struct NVRAM_EF_WAP_PROFILE_CONTENT_DEFAULT[];
extern nvram_wap_profile_name_struct NVRAM_EF_WAP_PROFILE_NAMES_DEFAULT[];

/* extern jdd_MemSetActiveModuleID(ETaskID taskId); */
extern void mmi_jdd_ui_entry_notification_msg_popup(void);
extern JC_RETCODE jdd_MemDeinitBrowserASMPool(void);


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_wap_init
 * DESCRIPTION
 *  Init function for browser application
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_wap_init(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    jdd_MemSetActiveModuleID(E_TASK_BROWSER_UI);

    g_mmi_brw_cntx.is_browser_ready = FALSE;
    g_mmi_brw_cntx.is_browser_init_in_progress = TRUE;
    mmi_brw_jbrowser_startup();

    /* Set Highlight handlers */
    SetHiliteHandler(MENU_ID_BRW_HOMEPAGE, mmi_brw_homepage_highlight_hdlr);

    SetHiliteHandler(MENU_ID_BRW_BOOKMARKS, mmi_brw_bookmark_menu_highlight_hdlr);
    SetHiliteHandler(MENU_ID_BRW_BKM_GOTO, mmi_brw_goto_bookmark_menu_highlight_hdlr);
    SetHiliteHandler(MENU_ID_BRW_BKM_EDIT, mmi_brw_edit_bookmark_menu_highlight_hdlr);
    SetHiliteHandler(MENU_ID_BRW_BKM_DELETE, mmi_brw_delete_bookmark_menu_highlight_hdlr);
    SetHiliteHandler(MENU_ID_BRW_BKM_DELETE_ALL, mmi_brw_delete_all_bookmark_menu_highlight_hdlr);
    SetHiliteHandler(MENU_ID_BRW_ADD_BOOKMARK, mmi_brw_add_bookmark_menu_highlight_hdlr);
    SetHiliteHandler(MENU_ID_BRW_SET_AS_HOMEPAGE, mmi_brw_bookmark_set_as_homepage_menu_highlight_hdlr);

    SetHiliteHandler(MENU_ID_BRW_RECENT_PAGES, mmi_brw_recent_pages_menu_highlight_hdlr);
    SetHiliteHandler(MENU_ID_BRW_RECENT_PAGE_GOTO, mmi_brw_goto_recent_page_menu_highlight_hdlr);
    SetHiliteHandler(MENU_ID_BRW_RECENT_PAGE_DELETE, mmi_brw_delete_recent_page_menu_highlight_hdlr);
    SetHiliteHandler(MENU_ID_BRW_RECENT_PAGE_DELETE_ALL, mmi_brw_delete_all_recent_pages_menu_highlight_hdlr);

    SetHiliteHandler(MENU_ID_BRW_ENTER_ADDRESS, mmi_brw_enter_address_menu_highlight_hdlr);

    SetHiliteHandler(MENU_ID_BRW_SERVICE_INBOX, mmi_brw_service_inbox_menu_highlight_hdlr);
    SetHiliteHandler(MENU_ID_BRW_PUSH_MSG_READ, mmi_brw_service_inbox_read_menu_highlight_hdlr);
    SetHiliteHandler(MENU_ID_BRW_PUSH_MSG_DELETE, mmi_brw_service_inbox_delete_menu_highlight_hdlr);
    SetHiliteHandler(MENU_ID_BRW_PUSH_MSG_DELETE_ALL, mmi_brw_service_inbox_delete_all_menu_highlight_hdlr);

    SetHiliteHandler(MENU_ID_BRW_PUSH_MSG_READ_ACCEPT, mmi_brw_service_inbox_read_accept_menu_highlight_hdlr);
    SetHiliteHandler(MENU_ID_BRW_PUSH_MSG_READ_DELETE, mmi_brw_service_inbox_read_delete_menu_highlight_hdlr);

    /* Hilite handlers for Enter Address Options List */
    SetHiliteHandler(MENU_ID_BRW_ENTER_ADR_GOTO, mmi_brw_enter_address_goto_menu_highlight_hdlr);
    SetHiliteHandler(MENU_ID_BRW_ENTER_ADR_EDIT, mmi_brw_enter_address_edit_menu_highlight_hdlr);
    SetHiliteHandler(MENU_ID_BRW_ENTER_ADR_ADD_TO_BOOKMARK, mmi_brw_enter_address_add_to_bmk_menu_highlight_hdlr);
    SetHiliteHandler(MENU_ID_BRW_ENTER_ADR_DELETE, mmi_brw_enter_address_delete_menu_highlight_hdlr);
    SetHiliteHandler(MENU_ID_BRW_ENTER_ADR_DELETE_ALL, mmi_brw_enter_address_delete_all_menu_highlight_hdlr);

    /* Set highlight handlers for settings menu items */
    mmi_brw_setting_init();

    /* Set highhandlers for rendered page options menu itmes */
    mmi_brw_rendered_page_init();
#ifdef __MMI_JATAAYU_BRW_OFFLINE_PAGES__
    /* Set hilite handlers for offline browsing */
    mmi_brw_offline_pages_init();
    mmi_brw_offline_pages_reset_sync();
#endif /* __MMI_JATAAYU_BRW_OFFLINE_PAGES__ */ 
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_homepage_highlight_hdlr
 * DESCRIPTION
 *  Highlight handler of homepage menu item.
 *  Register key handlers.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_homepage_highlight_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);

    SetLeftSoftkeyFunction(mmi_brw_entry_homepage, KEY_EVENT_UP);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_bookmark_menu_highlight_hdlr
 * DESCRIPTION
 *  Highlight handler of bookmark menu item.
 *  Register key handlers.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_bookmark_menu_highlight_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);
    SetLeftSoftkeyFunction(mmi_brw_entry_bookmark_list, KEY_EVENT_UP);
    SetKeyHandler(mmi_brw_entry_bookmark_list, KEY_RIGHT_ARROW, KEY_EVENT_DOWN);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_ren_page_add_to_bmk_highlight_hdlr
 * DESCRIPTION
 *  Highlight handler of Add to Bookmark menu item.
 *  Register key handlers.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_ren_page_add_to_bmk_highlight_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    SetLeftSoftkeyFunction(mmi_brw_save_page_url_title_to_bookmark, KEY_EVENT_UP);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_goto_bookmark_menu_highlight_hdlr
 * DESCRIPTION
 *  Highlight handler of goto menu item.
 *  Register key handlers.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_goto_bookmark_menu_highlight_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);
    SetLeftSoftkeyFunction(mmi_brw_goto_highlighted_bookmark, KEY_EVENT_UP);
    /* SetKeyHandler(mmi_brw_goto_highlighted_bookmark,KEY_RIGHT_ARROW,KEY_EVENT_DOWN); */
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_edit_bookmark_menu_highlight_hdlr
 * DESCRIPTION
 *  Highlight handler of edit bookmark menu item.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_edit_bookmark_menu_highlight_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);
    SetLeftSoftkeyFunction(mmi_brw_pre_entry_edit_bookmark, KEY_EVENT_UP);
    SetKeyHandler(mmi_brw_pre_entry_edit_bookmark, KEY_RIGHT_ARROW, KEY_EVENT_DOWN);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_delete_bookmark_menu_highlight_hdlr
 * DESCRIPTION
 *  Highlight handler of delete menu item.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_delete_bookmark_menu_highlight_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);
    SetLeftSoftkeyFunction(mmi_brw_delete_confirm, KEY_EVENT_UP);
    /* SetKeyHandler(mmi_brw_delete_confirm,KEY_RIGHT_ARROW,KEY_EVENT_DOWN); */
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_delete_all_bookmark_menu_highlight_hdlr
 * DESCRIPTION
 *  Highlight handler of Delete all menu item.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_delete_all_bookmark_menu_highlight_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);
    SetLeftSoftkeyFunction(mmi_brw_confirm_delete_all_bookmark, KEY_EVENT_UP);
    /* SetKeyHandler(mmi_brw_confirm_delete_all_bookmark,KEY_RIGHT_ARROW,KEY_EVENT_DOWN); */
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_add_bookmark_menu_highlight_hdlr
 * DESCRIPTION
 *  Highlight handler of add bookmark menu item.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_add_bookmark_menu_highlight_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);
    SetLeftSoftkeyFunction(mmi_brw_pre_entry_add_bookmark, KEY_EVENT_UP);
    SetKeyHandler(mmi_brw_pre_entry_add_bookmark, KEY_RIGHT_ARROW, KEY_EVENT_DOWN);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_bookmark_set_as_homepage_menu_highlight_hdlr
 * DESCRIPTION
 *  Highlight handler of 'Set as homepage' menu item.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_bookmark_set_as_homepage_menu_highlight_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);
    SetLeftSoftkeyFunction(mmi_brw_bookmark_set_as_homepage, KEY_EVENT_UP);
    /* SetKeyHandler(mmi_brw_bookmark_set_as_homepage,KEY_RIGHT_ARROW,KEY_EVENT_DOWN); */
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_enter_address_goto_menu_highlight_hdlr
 * DESCRIPTION
 *  Highlight handler of Enter Address Goto Menu item.
 *  Register key handlers.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_enter_address_goto_menu_highlight_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* Fetch the highlighted page and update the address history list */
    SetLeftSoftkeyFunction(mmi_brw_update_address_history_list, KEY_EVENT_UP);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_enter_address_edit_menu_highlight_hdlr
 * DESCRIPTION
 *  Highlight handler of Enter Address Goto Menu item.
 *  Register key handlers.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_enter_address_edit_menu_highlight_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* Fetch the highlighted page and update the address history list */
    SetLeftSoftkeyFunction(mmi_brw_enter_address_edit_menu, KEY_EVENT_UP);
    SetKeyHandler(mmi_brw_enter_address_edit_menu, KEY_RIGHT_ARROW, KEY_EVENT_DOWN);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_enter_address_add_to_bmk_menu_highlight_hdlr
 * DESCRIPTION
 *  Highlight handler of Enter Address Add To BookMarks Menu item.
 *  Register key handlers.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_enter_address_add_to_bmk_menu_highlight_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    SetLeftSoftkeyFunction(mmi_brw_pre_entry_add_enter_address_bookmark, KEY_EVENT_UP);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_enter_address_delete_menu_highlight_hdlr
 * DESCRIPTION
 *  Highlight handler of Enter Address Delete Menu item.
 *  Register key handlers.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_enter_address_delete_menu_highlight_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    SetLeftSoftkeyFunction(mmi_brw_enter_address_delete_confirm, KEY_EVENT_UP);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_enter_address_delete_all_menu_highlight_hdlr
 * DESCRIPTION
 *  Highlight handler of Enter Address DeleteAll Menu item.
 *  Register key handlers.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_enter_address_delete_all_menu_highlight_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    SetLeftSoftkeyFunction(mmi_brw_enter_address_delete_all_confirm, KEY_EVENT_UP);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_recent_pages_menu_highlight_hdlr
 * DESCRIPTION
 *  Highlight handler of Recent pages menu item.
 *  Register key handlers.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_recent_pages_menu_highlight_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);
    SetLeftSoftkeyFunction(mmi_brw_entry_recent_page_list, KEY_EVENT_UP);
    SetKeyHandler(mmi_brw_entry_recent_page_list, KEY_RIGHT_ARROW, KEY_EVENT_DOWN);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_goto_recent_page_menu_highlight_hdlr
 * DESCRIPTION
 *  Highlight handler of goto menu item.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_goto_recent_page_menu_highlight_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);
    SetLeftSoftkeyFunction(mmi_brw_goto_highlighted_recent_page, KEY_EVENT_UP);
    /* SetKeyHandler(mmi_brw_goto_highlighted_recent_page,KEY_RIGHT_ARROW,KEY_EVENT_DOWN); */
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_delete_recent_page_menu_highlight_hdlr
 * DESCRIPTION
 *  Highlight handler of delete menu item.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_delete_recent_page_menu_highlight_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);
    SetLeftSoftkeyFunction(mmi_brw_confirm_delete_recent_page, KEY_EVENT_UP);
    /* SetKeyHandler(mmi_brw_confirm_delete_recent_page,KEY_RIGHT_ARROW,KEY_EVENT_DOWN); */
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_delete_all_recent_pages_menu_highlight_hdlr
 * DESCRIPTION
 *  Highlight handler of Delete all menu item.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_delete_all_recent_pages_menu_highlight_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);
    SetLeftSoftkeyFunction(mmi_brw_confirm_delete_all_recent_pages, KEY_EVENT_UP);
    /* SetKeyHandler(mmi_brw_confirm_delete_all_recent_pages,KEY_RIGHT_ARROW,KEY_EVENT_DOWN); */
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_enter_address_menu_highlight_hdlr
 * DESCRIPTION
 *  Highlight handler of enter address menu item.
 *  Register key handlers.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_enter_address_menu_highlight_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);
    SetLeftSoftkeyFunction(mmi_brw_entry_enter_address, KEY_EVENT_UP);
    SetKeyHandler(mmi_brw_entry_enter_address, KEY_RIGHT_ARROW, KEY_EVENT_DOWN);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_service_inbox_menu_highlight_hdlr
 * DESCRIPTION
 *  Highlight handler of service inbox menu item.
 *  Register key handlers.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_service_inbox_menu_highlight_hdlr(void)
{
#ifndef __MMI_UNIFIED_MESSAGE__
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);
    SetLeftSoftkeyFunction(mmi_brw_entry_service_inbox, KEY_EVENT_UP);
    SetKeyHandler(mmi_brw_entry_service_inbox, KEY_RIGHT_ARROW, KEY_EVENT_DOWN);
#endif /* __MMI_UNIFIED_MESSAGE__ */ 
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_service_inbox_read_menu_highlight_hdlr
 * DESCRIPTION
 *  Highlight handler of read menu item.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_service_inbox_read_menu_highlight_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);
    SetLeftSoftkeyFunction(mmi_brw_entry_read_push_message, KEY_EVENT_UP);
    /* SetKeyHandler(mmi_brw_entry_read_push_message,KEY_RIGHT_ARROW,KEY_EVENT_DOWN); */
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_service_inbox_delete_menu_highlight_hdlr
 * DESCRIPTION
 *  Highlight handler of Delete menu item.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_service_inbox_delete_menu_highlight_hdlr(void)
{
#ifndef __MMI_UNIFIED_MESSAGE__
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);
    SetLeftSoftkeyFunction(mmi_brw_confirm_delete_push_message, KEY_EVENT_UP);
    /* SetKeyHandler(mmi_brw_confirm_delete_push_message,KEY_RIGHT_ARROW,KEY_EVENT_DOWN); */
#endif /* __MMI_UNIFIED_MESSAGE__ */ 
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_service_inbox_delete_all_menu_highlight_hdlr
 * DESCRIPTION
 *  Highlight handler of Delete all menu item.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_service_inbox_delete_all_menu_highlight_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);
    SetLeftSoftkeyFunction(mmi_brw_confirm_delete_all_push_messages, KEY_EVENT_UP);
    /* SetKeyHandler(mmi_brw_confirm_delete_all_push_messages,KEY_RIGHT_ARROW,KEY_EVENT_DOWN); */
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_service_inbox_read_accept_menu_highlight_hdlr
 * DESCRIPTION
 *  Highlight handler of Accept menu item.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_service_inbox_read_accept_menu_highlight_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);
    SetLeftSoftkeyFunction(mmi_brw_accept_push_message, KEY_EVENT_UP);
    /* SetKeyHandler(mmi_brw_accept_push_message,KEY_RIGHT_ARROW,KEY_EVENT_DOWN); */
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_service_inbox_read_delete_menu_highlight_hdlr
 * DESCRIPTION
 *  Highlight handler of Delete push message after reading
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_service_inbox_read_delete_menu_highlight_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);
    SetLeftSoftkeyFunction(mmi_brw_confirm_delete_push_message, KEY_EVENT_UP);
    /* SetKeyHandler(mmi_brw_confirm_delete_push_message,KEY_RIGHT_ARROW,KEY_EVENT_DOWN); */
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_pre_entry_internet_services
 * DESCRIPTION
 *  Pre Entry function for Internet services screen
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_pre_entry_internet_services(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    JC_RETCODE ret = JC_OK;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef JBROWSER_USE_ASM
    g_mmi_brw_cntx.init_app_flag = BRW_INIT_APP_GOTO_INTERNET_SERVICES;
#endif 

    ret = mmi_brw_jbrowser_init_app();
    if (ret != JC_OK)
    {
        return;
    }

    /* Added to indicate that SAT is not active */
    g_mmi_brw_cntx.is_saturl = E_FALSE;

    mmi_brw_entry_internet_services();
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_entry_internet_services
 * DESCRIPTION
 *  Entry function for Internet services screen
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_entry_internet_services(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
#ifndef __MMI_JATAAYU_BRW_OFFLINE_PAGES__
    U16 uc_list_of_items[6];
    U16 uc_list_of_icons[6];
#else /* __MMI_JATAAYU_BRW_OFFLINE_PAGES__ */ 
    U16 uc_list_of_items[7];
    U16 uc_list_of_icons[7];
#endif /* __MMI_JATAAYU_BRW_OFFLINE_PAGES__ */ 

    U8 *gui_buffer_p;
    S32 num_of_items;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* Free the memory if already allocated */
    /* mmi_brw_wap_deinit(); */

    /* PIXTEL_JATAAYU added */
    /* mmi_brw_jbrowser_init_app(); */
    /* PIXTEL_JATAAYU added */

    /* Added to indicate that SAT is not active */
    /* g_mmi_brw_cntx.isSATURL = E_FALSE; */

    jdd_MemSetActiveModuleID(E_TASK_BROWSER_UI);

    g_mmi_brw_cntx.enter_add_hist_flag = 0;
    EntryNewScreen(SCR_ID_BRW_INTERNET_SERVICES, NULL, mmi_brw_entry_internet_services, NULL);

    gui_buffer_p = GetCurrGuiBuffer(SCR_ID_BRW_INTERNET_SERVICES);
    num_of_items = GetNumOfChild(SERVICES_WAP_MENU_ID);
    GetSequenceStringIds(SERVICES_WAP_MENU_ID, uc_list_of_items);
    GetSequenceImageIds(SERVICES_WAP_MENU_ID, uc_list_of_icons);
    SetParentHandler(SERVICES_WAP_MENU_ID);
    RegisterHighlightHandler(ExecuteCurrHiliteHandler);

    ShowCategory15Screen(
        STR_ID_BRW_INTERNET_SERVICES,
        GetRootTitleIcon(SERVICES_WAP_MENU_ID),
        STR_GLOBAL_OK,
        0,
        STR_GLOBAL_BACK,
        0,
        num_of_items,
        uc_list_of_items,
        uc_list_of_icons,
        LIST_MENU,
        0,
        gui_buffer_p);

    SetRightSoftkeyFunction(mmi_brw_go_back_services_menu, KEY_EVENT_UP);
    SetKeyHandler(mmi_brw_go_back_services_menu, KEY_LEFT_ARROW, KEY_EVENT_DOWN);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_go_back_services_menu
 * DESCRIPTION
 *  Function to go back to services menu
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_go_back_services_menu(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* mmi_JBrowserDeInitApp(); */
    mmi_brw_wap_deinit();
    GoBackHistory();
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_entry_homepage
 * DESCRIPTION
 *  Entry function for homepage menu
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_entry_homepage(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    MMI_BOOL is_valid_url = MMI_FALSE;
    U8 curr_act_profile_url[MMI_BRW_WAP_PROFILE_HOMEPAGE_URL_LEN * ENCODING_LENGTH];

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    strcpy((S8*) curr_act_profile_url, (S8*) mmi_ph_brw_get_activated_profile_homepage());
    mmi_asc_to_ucs2((S8*) g_mmi_brw_cntx.brw_current_url, (S8*) curr_act_profile_url);

    is_valid_url = mmi_brw_validate_url(g_mmi_brw_cntx.brw_current_url);

    if (is_valid_url == MMI_TRUE)
    {
        /* added by tk to set the current fetch url */
        mmi_brw_set_current_url((S8*) g_mmi_brw_cntx.brw_current_url);
        mmi_brw_pre_entry_goto_url();
    }
    else
    {
        DisplayPopup((PU8) GetString(STR_ID_BRW_INVALID_URL), IMG_GLOBAL_ERROR, 1, MMI_BRW_POPUP_TIME, ERROR_TONE);
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_clear_key_handler
 * DESCRIPTION
 *  Clear all key types handler for agiven key code
 * PARAMETERS
 *  key_code        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_clear_key_handler(U16 key_code)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ClearKeyHandler(key_code, KEY_EVENT_UP);
    ClearKeyHandler(key_code, KEY_EVENT_DOWN);
    ClearKeyHandler(key_code, KEY_LONG_PRESS);
    ClearKeyHandler(key_code, KEY_REPEAT);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_wap_deinit
 * DESCRIPTION
 *  Free the memory allocated and close the browser window.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_wap_deinit(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* Added by tk to free allocated memory for URL */
    PRINT_INFORMATION_2(MMI_TRACE_INFO, "%s", "Inside mmi_brw_wap_deinit");

    if (g_mmi_brw_cntx.call_back_prompt)
    {
        g_mmi_brw_cntx.call_back_prompt(g_mmi_brw_cntx.arg_p, NULL, E_FALSE);
        g_mmi_brw_cntx.call_back_prompt = NULL;
    }
    if (g_mmi_brw_cntx.call_back_confirm)
    {
        g_mmi_brw_cntx.call_back_confirm(g_mmi_brw_cntx.arg_p, E_FALSE);
        g_mmi_brw_cntx.call_back_confirm = NULL;
    }
    if (g_mmi_brw_cntx.call_back_alert)
    {
        g_mmi_brw_cntx.call_back_alert(g_mmi_brw_cntx.arg_p);
        g_mmi_brw_cntx.call_back_alert = NULL;
    }

    if (g_mmi_brw_cntx.pm_msg != NULL)
    {
        jdd_MemFree(g_mmi_brw_cntx.pm_msg);
        g_mmi_brw_cntx.pm_msg = NULL;
    }

    if (g_mmi_brw_cntx.pm_default_value != NULL)
    {
        jdd_MemFree(g_mmi_brw_cntx.pm_default_value);
        g_mmi_brw_cntx.pm_default_value = NULL;
    }

    if (g_mmi_brw_cntx.confirm_soft1)
    {
        jdd_MemFree(g_mmi_brw_cntx.confirm_soft1);
        g_mmi_brw_cntx.confirm_soft1 = NULL;
    }

    if (g_mmi_brw_cntx.confirm_soft2)
    {
        jdd_MemFree(g_mmi_brw_cntx.confirm_soft2);
        g_mmi_brw_cntx.confirm_soft2 = NULL;
    }

    if (g_mmi_brw_cntx.fetch_url_info.psUrl != NULL)
    {
        jdd_MemFree(g_mmi_brw_cntx.fetch_url_info.psUrl);
        g_mmi_brw_cntx.fetch_url_info.psUrl = NULL;
    }

    /* Free memory allocated to bookmarks */
    if (g_mmi_brw_cntx.bookmark_title_p != NULL)
    {
        jdd_MemFree(g_mmi_brw_cntx.bookmark_title_p);
        g_mmi_brw_cntx.bookmark_title_p = NULL;
    }

    /* Free memory allocated to bookmarks */
    if (g_mmi_brw_cntx.bookmark_url_p != NULL)
    {
        jdd_MemFree(g_mmi_brw_cntx.bookmark_url_p);
        g_mmi_brw_cntx.bookmark_url_p = NULL;
    }

    /* Free memory allocated to address history title */
    if (g_mmi_brw_cntx.address_history_title_p != NULL)
    {
        jdd_MemFree(g_mmi_brw_cntx.address_history_title_p);
        g_mmi_brw_cntx.address_history_title_p = NULL;
    }

    /* Free memory allocated to address history url */
    if (g_mmi_brw_cntx.address_history_url_p != NULL)
    {
        jdd_MemFree(g_mmi_brw_cntx.address_history_url_p);
        g_mmi_brw_cntx.address_history_url_p = NULL;
    }

    g_mmi_brw_cntx.total_address_history_items = 0;
    g_mmi_brw_cntx.total_bookmark_items = 0;
    g_mmi_brw_cntx.index_highlighted_item = 0;
    g_mmi_brw_cntx.enter_add_hist_flag = 0;
    g_mmi_brw_cntx.brw_csd_call_disconnect = FALSE;
    g_mmi_brw_cntx.end_key_pressed = FALSE;
    g_mmi_brw_cntx.jbrowser_frm_ext_app = MMI_FALSE;

    /* Free the do list if exists */
    if (g_mmi_brw_cntx.do_element_list != NULL)
    {
        mmi_brw_free_do_list();
    }
    /* Added by Pawan (31-07-06) */
    /* Free memory allocated to prompt edit buffer */
    if (g_mmi_brw_cntx.prompt_buffer != NULL)
    {
        jdd_MemFree(g_mmi_brw_cntx.prompt_buffer);
        g_mmi_brw_cntx.prompt_buffer = NULL;
    }

    /* Added by Vivek - 31072006 */
    mmi_brw_push_free_service_value_struct(&g_mmi_brw_push_cntx.current_service_message);

    /* URI schemes related memory: Added by Sandeep - 28022007 */
#ifdef __MMI_URI_SCHEME_SUPPORT__
    if (g_rtsp_ege_url != NULL)
    {
        jdd_MemFree(g_rtsp_ege_url);
        g_rtsp_ege_url = NULL;
    }

    if (g_scheme_data_ptr != NULL)
    {
        jdd_MemFree(g_scheme_data_ptr);
        g_scheme_data_ptr = NULL;
    }
#endif /* __MMI_URI_SCHEME_SUPPORT__ */ 
#if defined WAP_SEC_SUPPORT
    mmi_brw_deinit_wap_security();
#endif 
    if (g_mmi_brw_cntx.is_layout_initialized == E_TRUE)
    {

    #ifdef __SAT__
        if (g_mmi_brw_cntx.is_saturl == E_TRUE)
        {
            mmi_brw_send_termination_to_mmi(BRW_SAT_ERROR_TERMINATION);
        }
    #endif /* __SAT__ */ 
    #ifdef __JBROWSER_DLS_SUPPORT__
        if (g_mmi_brw_page_cntx.brw_page_fetch_status || g_mmi_brw_dls_cntx.download_state < BRW_DLS_COMPLETE)
    #else /* __JBROWSER_DLS_SUPPORT__ */ 
        if (g_mmi_brw_page_cntx.brw_page_fetch_status || g_mmi_brw_cntx.is_download_suspended == TRUE ||
            g_mmi_brw_cntx.is_downloading == TRUE)
    #endif /* __JBROWSER_DLS_SUPPORT__ */ 
        {
        #ifdef __JBROWSER_DLS_SUPPORT__
            if (g_mmi_brw_dls_cntx.download_state == BRW_DLS_SUSPENDED)
            {
                if (g_mmi_brw_dls_cntx.has_more_content_data)
                {
                    jdi_BrowserFetchStop(g_mmi_brw_pbrowser_ctxt);
                }
                else if (g_mmi_brw_page_cntx.brw_page_fetch_status)
                {
                    jdi_BrowserFetchStop(g_mmi_brw_pbrowser_ctxt);
                }
            }
            else
            {
                jdi_BrowserFetchStop(g_mmi_brw_pbrowser_ctxt);
            }

            if (g_mmi_brw_dls_cntx.download_state == BRW_DLS_DOWNLOADING)
            {
                mmi_brw_dls_free_dwnld_info(TRUE);
            }
            mmi_brw_dls_free_cntx_memory();
            g_mmi_brw_dls_cntx.download_state = BRW_DLS_IDLE;
        #else /* __JBROWSER_DLS_SUPPORT__ */ 
            jdi_BrowserFetchStop(g_mmi_brw_pbrowser_ctxt);
            if (g_mmi_brw_cntx.dwnld_file_handle)
            {
                jdd_FSClose(g_mmi_brw_cntx.dwnld_file_handle);
                g_mmi_brw_cntx.dwnld_file_handle = NULL;
            }
            if (g_mmi_brw_cntx.dwnld_fs_handle)
            {
                if (g_mmi_brw_cntx.dwnld_mime_info.psFileName)
                {
                    jdd_FSDelete(g_mmi_brw_cntx.dwnld_fs_handle, g_mmi_brw_cntx.dwnld_mime_info.psFileName);
                }
                jdd_FSDeinitialize(g_mmi_brw_cntx.dwnld_fs_handle);
                g_mmi_brw_cntx.dwnld_fs_handle = NULL;
            }

            g_mmi_brw_cntx.is_download_suspended = FALSE;
            g_mmi_brw_cntx.is_downloading = FALSE;
            mmi_brw_free_dwnld_info_memory();
            g_mmi_brw_cntx.show_download_aborted_popup = FALSE;

        #endif /* __JBROWSER_DLS_SUPPORT__ */ 
        }
        jdi_BrowserClose(g_mmi_brw_pbrowser_ctxt, E_TRUE);
    #ifdef __MMI_JATAAYU_BRW_OFFLINE_PAGES__
        mmi_brw_deinit_offline_pages_app(); /* REMOVABLE */
    #endif 
        mmi_brw_jbrowser_deinit_app();
        /* jdd_QueuePurge(E_TASK_BROWSER_UI); *//* Fixed MAUI_00023952 */
        /* Release all the allocated memory from browser pool before it */
    #ifdef JBROWSER_USE_ASM
        applib_mem_ap_free_all(APPLIB_MEM_AP_ID_JATAAYU_WAP);
        jdd_MemDeinitBrowserASMPool();
        g_mmi_brw_cntx.wap_heap_space = NULL;
    #endif /* JBROWSER_USE_ASM */ 
        jdd_MemSetActiveModuleID(E_TASK_BROWSER_UI);
    }

    g_mmi_brw_notification_flag = 0;
    memset(&g_mmi_brw_page_cntx, 0, sizeof(g_mmi_brw_page_cntx));
    g_mmi_brw_cntx.title_icon_animation_status = MMI_FALSE;
    memset(g_mmi_brw_page_cntx.brw_page_status_code_stack, -1, sizeof(g_mmi_brw_page_cntx.brw_page_status_code_stack));
    g_mmi_brw_cntx.page_fetch_req_src = 0;
    g_mmi_brw_cntx.csd_call_aborted_status = FALSE;
    g_mmi_brw_push_cntx.push_delete_notification = MMI_FALSE;

    PRINT_INFORMATION_2(MMI_TRACE_INFO, "%s", "Exit mmi_brw_wap_deinit");
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_clear_brw_soft_keys
 * DESCRIPTION
 *  Clear browser left and right soft keys
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_clear_brw_soft_keys(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    g_mmi_brw_page_cntx.brw_lsk_label = 0;
    g_mmi_brw_page_cntx.brw_rsk_label = 0;
    g_mmi_brw_page_cntx.brw_lsk_fun_ptr = NULL;
    g_mmi_brw_page_cntx.brw_rsk_fun_ptr = NULL;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_pre_entry_goto_url
 * DESCRIPTION
 *  Pre Entry function for fetching url i.e when the user wants to fetch a page
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_pre_entry_goto_url(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    MMI_JDD_UI_WINDOW_INFO_STRUCT *jdd_window_info_struct_p = NULL;
    JC_UINT32 ui_window_id = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ui_window_id = mmi_jdd_ui_get_appWindowID(E_TASK_BROWSER_CORE);
    jdd_window_info_struct_p = (MMI_JDD_UI_WINDOW_INFO_STRUCT*) ui_window_id;

    g_mmi_brw_page_cntx.brw_rsk_label = 0;
    g_mmi_brw_page_cntx.brw_rsk_label = STR_GLOBAL_CANCEL;
    g_mmi_brw_page_cntx.brw_lsk_fun_ptr = NULL;
    g_mmi_brw_page_cntx.brw_rsk_fun_ptr = mmi_brw_stop_fetch;

    mmi_brw_entry_goto_url();
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_entry_goto_url
 * DESCRIPTION
 *  Entry function for fetching url i.e when the user wants to fetch a page
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_entry_goto_url(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    MMI_JDD_UI_WINDOW_INFO_STRUCT *jdd_window_info_struct_p = NULL;
    JC_UINT32 ui_window_id = 0;

    U8 *gui_buffer_p;
    U8 flag = 0;
    U8 category501_msgStr[4] = {0, };

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ui_window_id = mmi_jdd_ui_get_appWindowID(E_TASK_BROWSER_CORE);
    jdd_window_info_struct_p = (MMI_JDD_UI_WINDOW_INFO_STRUCT*) ui_window_id;

    /* This will redraw the Primary MMI Window screen after any interrupt */
    PRINT_INFORMATION_2(MMI_TRACE_INFO, "%s", "Enter Browser Screen 501");
    EntryNewScreen(SCR_ID_BRW_JBROWSER_MAIN, mmi_brw_exit_goto_url, mmi_brw_entry_goto_url, NULL);
    gui_buffer_p = GetCurrGuiBuffer(SCR_ID_BRW_JBROWSER_MAIN);

    if (gui_buffer_p != NULL)
    {
        flag = 1;
    }

    if ((IsScreenPresent(SCR_ID_BRW_JBROWSER_MAIN)) && (GetCurrScrnId() != SCR_ID_BRW_JBROWSER_MAIN))
    {
        if (g_mmi_brw_cntx.jbrowser_frm_ext_app)
        {
            DeleteScreenIfPresent(SCR_ID_BRW_JBROWSER_MAIN);
        }
        else
        {
            DeleteNScrId(SCR_ID_BRW_JBROWSER_MAIN);
            DeleteScreenIfPresent(SCR_FMGR_DA_FILE_OPTION);
        }
    }
    g_mmi_brw_cntx.jbrowser_frm_ext_app = MMI_FALSE;

    /* Here we are applying one hack to remove the DALMATIAN DOG IMAGE from the category screen.
       We will display the image whenever the browser is launched for the first time.
       For the first time we will pass category501_msgID = 0 so it will display the DOG IMAGE 
       and after this we will pass a string ID which has been populated for this specially to 
       display one blank space.Because, a single chracter can restrict the DALMATIAN DOG IMAGE
       to be rendered on Screen. */
#ifdef __MMI_UI_DALMATIAN_EDITOR__
    mmi_asc_to_ucs2((PS8) category501_msgStr, " ");
#endif 

#ifdef __MMI_JBROWSER_SCREEN_LOCKING_ENABLED__
    mmi_brw_set_screen_visibility(BRW_SCREEN_LOCK);
#endif 

    ShowCategory501Screen(
        0,  /* STR_ID_BRW_INTERNET_SERVICES, */
        0,  /* GetRootTitleIcon(SERVICES_WAP_MENU_ID), */
        0,  /* g_mmi_brw_page_cntx.brw_LskLabel, */
        0,
        0,  /* g_mmi_brw_page_cntx.brw_RskLabel, */
        0,
        category501_msgStr,
        gui_buffer_p);

    /* PIXTEL_JATAAYU added */
    if (jdd_window_info_struct_p != NULL)
    {
        if (jdd_window_info_struct_p->focussedCtrlTitleControlID != 0)
        {
            MMI_title_string = (UI_string_type) mmi_brw_get_focussed_ctrl_title();
        }
        else if (jdd_window_info_struct_p->winProp.pszCaptionValue != NULL)
        {
            MMI_title_string = (UI_string_type) jdd_window_info_struct_p->winProp.pszCaptionValue;
        }
        else
        {
            /* MMI_title_string = (UI_string_type) g_mmi_brw_cntx.brw_current_url; */
        }
    }

    if (g_mmi_brw_page_cntx.brw_page_fetch_status)
    {
        g_mmi_brw_cntx.title_icon_animation_status = MMI_FALSE;
        mmi_brw_show_animated_title();
    }
    else
    {
        mmi_brw_show_normal_title();
    }

    if (E_FALSE == mmi_jdd_ui_get_jdd_flag(JDD_RENDERING_STARTED))
    {
        mmi_brw_start_animated_splash_screen();
    }

    mmi_brw_register_key_handler();

    if (flag == 0 && !mmi_is_redrawing_bk_screens())
    {
        mmi_brw_goto_url();
    }
    else if (g_mmi_brw_page_cntx.brw_page_fetch_status)
    {
        g_mmi_brw_page_cntx.brw_lsk_label = 0;
        g_mmi_brw_page_cntx.brw_rsk_label = STR_GLOBAL_CANCEL;
        g_mmi_brw_page_cntx.brw_lsk_fun_ptr = NULL;
        g_mmi_brw_page_cntx.brw_rsk_fun_ptr = mmi_brw_stop_fetch;
    }
    else if (g_mmi_brw_page_cntx.brw_page_refresh_disp_status)
    {
        g_mmi_brw_page_cntx.brw_lsk_label = 0;
        g_mmi_brw_page_cntx.brw_rsk_label = STR_GLOBAL_CANCEL;
        g_mmi_brw_page_cntx.brw_lsk_fun_ptr = NULL;
        g_mmi_brw_page_cntx.brw_rsk_fun_ptr = NULL;

    }
    /*
     * else
     * {
     * if (!g_brw_ActiveScreenFlag)
     * {
     * g_mmi_brw_page_cntx.brw_LskLabel = STR_GLOBAL_OPTIONS;
     * g_mmi_brw_page_cntx.brw_LskFunPtr = mmi_brw_rendered_page_options;
     * g_mmi_brw_page_cntx.brw_RskLabel = 0;
     * g_brw_RskFunPtr = NULL;
     * 
     * if (E_TRUE == mmi_brw_is_back())
     * {
     * g_mmi_brw_page_cntx.brw_RskLabel = STR_GLOBAL_BACK;
     * g_brw_RskFunPtr = mmi_brw_goto_prev_page;
     * 
     * }
     * g_brw_ActiveScreenFlag = 0;
     * }
     * 
     * if (jdd_window_info_struct_p != NULL)
     * {
     * jdd_MMIShowWindow(ui_window_id, E_TRUE);
     * }
     * 
     * }
     */
    if (flag && (jdd_window_info_struct_p != NULL))
    {
        /*
         * The following API is to set the Double Buffer Status while entering
         * the browser screen
         */
        jdd_MMIShowWindow(ui_window_id, E_TRUE);
    }
    /* g_mmi_brw_page_cntx.brw_isRefreshDisplay = MMI_FALSE; */
    ChangeRightSoftkey(g_mmi_brw_page_cntx.brw_rsk_label, 0);
    ChangeLeftSoftkey(g_mmi_brw_page_cntx.brw_lsk_label, 0);
    SetLeftSoftkeyFunction((FuncPtr) g_mmi_brw_page_cntx.brw_lsk_fun_ptr, KEY_EVENT_UP);
    SetRightSoftkeyFunction((FuncPtr) g_mmi_brw_page_cntx.brw_rsk_fun_ptr, KEY_EVENT_UP);

    if (g_mmi_brw_notification_flag)
    {
        g_mmi_brw_notification_flag = 0;
        mmi_jdd_ui_entry_notification_msg_popup();
    }

}

#ifdef __MMI_JBROWSER_SCREEN_LOCKING_ENABLED__


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_set_screen_visibility
 * DESCRIPTION
 *  This function is invoked to lock and unlock the Browser Screen
 * PARAMETERS
 *  status      [IN]        This specify the job to be done.(Lock or Unlock)
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_set_screen_visibility(mmi_brw_screen_display_enum status)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (status)
    {
        case BRW_SCREEN_LOCK:
        {
            ASSERT(!g_mmi_brw_cntx.is_brw_screen_locked);
            g_mmi_brw_cntx.is_brw_screen_locked = E_TRUE;
            gui_lock_double_buffer();
            break;
        }

        case BRW_SCREEN_UNLOCK:
        {
            if (E_TRUE == g_mmi_brw_cntx.is_brw_screen_locked)
            {
                g_mmi_brw_cntx.is_brw_screen_locked = E_FALSE;
                gui_unlock_double_buffer();
                gui_BLT_double_buffer(0, 0, UI_device_width - 1, UI_device_height - 1);
            }
            break;
        }

        default:
            ASSERT(0);
    }
}
#endif /* __MMI_JBROWSER_SCREEN_LOCKING_ENABLED__ */ 


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_register_key_handler
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_register_key_handler(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_brw_clear_key_handler(KEY_VOL_UP);
    mmi_brw_clear_key_handler(KEY_VOL_DOWN);

    SetKeyHandler(mmi_jdd_ui_left_key_hdlr, KEY_LEFT_ARROW, KEY_EVENT_DOWN);
    SetKeyHandler(mmi_jdd_ui_right_key_hdlr, KEY_RIGHT_ARROW, KEY_EVENT_DOWN);
    SetKeyHandler(mmi_jdd_ui_down_key_hdlr, KEY_DOWN_ARROW, KEY_EVENT_DOWN);
    SetKeyHandler(mmi_jdd_ui_down_key_hdlr, KEY_VOL_DOWN, KEY_EVENT_DOWN);
    SetKeyHandler(mmi_jdd_ui_up_key_hdlr, KEY_UP_ARROW, KEY_EVENT_DOWN);
    SetKeyHandler(mmi_jdd_ui_up_key_hdlr, KEY_VOL_UP, KEY_EVENT_DOWN);
    SetKeyHandler(mmi_jdd_ui_wap_key_hdlr, KEY_WAP, KEY_EVENT_UP);      /* replaced key event down to key event up added by tk */
    SetKeyHandler(mmi_jdd_ui_wap_key_hdlr, KEY_SEND, KEY_EVENT_UP);     /* replaced key event down to key event up added by tk */
#ifdef JATAAYU_ADVANCED_SCROLLBAR_BUTTON
    SetKeyHandler(mmi_jdd_ui_up_key_up_event_hdlr, KEY_UP_ARROW, KEY_EVENT_UP);
    SetKeyHandler(mmi_jdd_ui_down_key_up_event_hdlr, KEY_DOWN_ARROW, KEY_EVENT_UP);
    SetKeyHandler(mmi_jdd_ui_left_key_up_event_hdlr, KEY_LEFT_ARROW, KEY_EVENT_UP);
    SetKeyHandler(mmi_jdd_ui_right_key_up_event_hdlr, KEY_RIGHT_ARROW, KEY_EVENT_UP);

    SetKeyHandler(mmi_jdd_ui_down_key_up_event_hdlr, KEY_VOL_DOWN, KEY_EVENT_UP);
    SetKeyHandler(mmi_jdd_ui_up_key_up_event_hdlr, KEY_VOL_UP, KEY_EVENT_UP);
#endif /* JATAAYU_ADVANCED_SCROLLBAR_BUTTON */ 
    mmi_brw_register_endkey_handler();

    /* Below added by Shantanu for accesskey Support - 20060412 */
    mmi_brw_register_accesskey_handler();

#ifdef __MMI_TOUCH_SCREEN__
    mmi_jdd_ui_register_pen_handler();
#endif 
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_start_animated_splash_screen
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_start_animated_splash_screen(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    DeviceCharacteristics dev_ch = {0};
    U8 *splash_img_p = NULL;
    S32 img_x = 0, img_y = 0, img_width = 0, img_height = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_brw_stop_animated_splash_screen();
    jdd_MMIGetDeviceCharacteristics(&dev_ch);

    splash_img_p = (PU8) GetImage(IMG_ID_BRW_SPLASH_SCREEN);
    gui_measure_image(splash_img_p, &img_width, &img_height);

    if ((dev_ch.uiRenderingWidth + dev_ch.uiScrollBarWidth) > img_width)
    {
        img_x = dev_ch.uiWindowX + ((dev_ch.uiRenderingWidth + dev_ch.uiScrollBarWidth - img_width) >> 1);
    }
    else
    {
        img_x = dev_ch.uiWindowX;
    }

    if ((dev_ch.uiRenderingHeight + dev_ch.uiScrollBarWidth) > img_height)
    {
        img_y = dev_ch.uiWindowY + ((dev_ch.uiRenderingHeight + dev_ch.uiScrollBarWidth - img_height) >> 1);
    }
    else
    {
        img_y = dev_ch.uiWindowY;
    }

    gui_lock_double_buffer();
    gui_push_clip();
    gui_set_clip(
        dev_ch.uiWindowX,
        dev_ch.uiWindowY,
        dev_ch.uiWindowX + dev_ch.uiRenderingWidth + dev_ch.uiScrollBarWidth - 1,
        dev_ch.uiWindowY + dev_ch.uiRenderingHeight + dev_ch.uiScrollBarWidth - 1);

    gui_fill_rectangle(
        dev_ch.uiWindowX,
        dev_ch.uiWindowY,
        dev_ch.uiWindowX + dev_ch.uiRenderingWidth + dev_ch.uiScrollBarWidth - 1,
        dev_ch.uiWindowY + dev_ch.uiRenderingHeight + dev_ch.uiScrollBarWidth - 1,
        gui_color(255, 255, 255));

    gdi_image_draw_animation(img_x, img_y, splash_img_p, &g_mmi_brw_splash_ani_handle);
    gui_pop_clip();
    gui_unlock_double_buffer();
    gui_BLT_double_buffer(
        dev_ch.uiWindowX,
        dev_ch.uiWindowY,
        dev_ch.uiWindowX + dev_ch.uiRenderingWidth + dev_ch.uiScrollBarWidth - 1,
        dev_ch.uiWindowY + dev_ch.uiRenderingHeight + dev_ch.uiScrollBarWidth - 1);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_stop_animated_splash_screen
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_stop_animated_splash_screen(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    DeviceCharacteristics dev_ch = {0};

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (g_mmi_brw_splash_ani_handle != GDI_ERROR_HANDLE)
    {
        if (GetActiveScreenId() == SCR_ID_BRW_JBROWSER_MAIN)
        {
            gui_lock_double_buffer();
            gdi_image_stop_animation(g_mmi_brw_splash_ani_handle);
            g_mmi_brw_splash_ani_handle = GDI_ERROR_HANDLE;

            /* Now fill the area with WHITE COLOR */
            jdd_MMIGetDeviceCharacteristics(&dev_ch);

            gui_push_clip();
            gui_set_clip(
                dev_ch.uiWindowX,
                dev_ch.uiWindowY,
                dev_ch.uiWindowX + dev_ch.uiRenderingWidth + dev_ch.uiScrollBarWidth - 1,
                dev_ch.uiWindowY + dev_ch.uiRenderingHeight + dev_ch.uiScrollBarWidth - 1);

            gui_fill_rectangle(
                dev_ch.uiWindowX,
                dev_ch.uiWindowY,
                dev_ch.uiWindowX + dev_ch.uiRenderingWidth + dev_ch.uiScrollBarWidth - 1,
                dev_ch.uiWindowY + dev_ch.uiRenderingHeight + dev_ch.uiScrollBarWidth - 1,
                gui_color(255, 255, 255));

            gui_pop_clip();
            gui_unlock_double_buffer();
            gui_BLT_double_buffer(
                dev_ch.uiWindowX,
                dev_ch.uiWindowY,
                dev_ch.uiWindowX + dev_ch.uiRenderingWidth + dev_ch.uiScrollBarWidth - 1,
                dev_ch.uiWindowY + dev_ch.uiRenderingHeight + dev_ch.uiScrollBarWidth - 1);
        }
        else
        {
            gdi_image_stop_animation(g_mmi_brw_splash_ani_handle);
            g_mmi_brw_splash_ani_handle = GDI_ERROR_HANDLE;
        }
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_register_endkey_handler
 * DESCRIPTION
 *  Function for registration of end key handler in case of CSD bearer
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_register_endkey_handler(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    nvram_wap_profile_content_struct *activated_wap_profile_p;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    activated_wap_profile_p = mmi_ph_get_activated_wap_profile();

    if (mmi_ph_check_data_account_type(activated_wap_profile_p->data_account) == PH_DATA_ACCOUNT_CSD)
    {
        SetKeyHandler(mmi_brw_goto_idle_screen_event, KEY_END, KEY_EVENT_DOWN);
    }

}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_goto_idle_screen
 * DESCRIPTION
 *  Function for displaying the idle screen
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_goto_idle_screen(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (g_mmi_brw_page_cntx.brw_page_fetch_status && (!g_mmi_brw_page_cntx.brw_page_render_status))
    {
        jdi_BrowserDisconnect(g_mmi_brw_pbrowser_ctxt);
    }
    else
    {
        DisplayIdleScreen();
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_register_accesskey_handler
 * DESCRIPTION
 *  Function for registration of Groupkey handler for Accesskey Support
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_register_accesskey_handler(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* Added by Shantanu for Accesskey Support -20060412 */
    SetGroupKeyHandler(
        mmi_brw_fill_accesskey_info_and_send_event_to_queue,
        g_mmi_brw_jbrowser_accesskeys,
        MMI_BRW_MAX_ACCESSKEY - 1,
        KEY_EVENT_UP);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_clear_accesskey_handler
 * DESCRIPTION
 *  Function for clearing of Groupkey handler for Accesskey Support
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_clear_accesskey_handler(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* Added by Shantanu for Accesskey Support -20060412 */
    SetGroupKeyHandler(NULL, g_mmi_brw_jbrowser_accesskeys, MMI_BRW_MAX_ACCESSKEY - 1, KEY_EVENT_UP);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_exit_goto_url
 * DESCRIPTION
 *  Exit function for fetching url.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_exit_goto_url(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    JC_UINT32 ui_window_id = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __MMI_JBROWSER_SCREEN_LOCKING_ENABLED__
    mmi_brw_set_screen_visibility(BRW_SCREEN_UNLOCK);
#endif 
    ui_window_id = mmi_jdd_ui_get_appWindowID(E_TASK_BROWSER_CORE);
    jdi_GetDisplayStatus(g_mmi_brw_pbrowser_ctxt);
    jdd_MMIShowWindow(ui_window_id, E_FALSE);
    /*
     * The following API is to get the Double Buffer Status while exiting
     * the browser screen and if the double buffer is locked then we will
     * unlock the double buffer
     */

#ifdef JATAAYU_IMAGE_CACHING_ENABLE
    /*
     * Whenever we exit the Browser screen we have to corrupt the 8 byte signature for both
     * hintData and subMenuData.So that it will reload the images again if signature is found corrupted
     */
    memset((S8*) hintData, 0, 8);
    memset((S8*) subMenuData, 0, 8);
#endif /* JATAAYU_IMAGE_CACHING_ENABLE */ 

    mmi_brw_stop_animated_splash_screen();

    PRINT_INFORMATION_2(MMI_TRACE_INFO, "%s", "Exit Browser Screen 501");
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_set_current_url
 * DESCRIPTION
 *  Set the current url to fetch
 * PARAMETERS
 *  brw_url_p       [?]     [?]
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_set_current_url(S8 *brw_url_p)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    JC_UINT32 ui_go_url_len = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ui_go_url_len = mmi_ucs2strlen((S8*) brw_url_p);

    if (g_mmi_brw_cntx.fetch_url_info.psUrl != NULL)
    {
        jdd_MemFree(g_mmi_brw_cntx.fetch_url_info.psUrl);
        g_mmi_brw_cntx.fetch_url_info.psUrl = NULL;
    }
    if (mmi_brw_check_http_prefix((PS8) brw_url_p) == FALSE)
    {
        ui_go_url_len += 7;
        g_mmi_brw_cntx.fetch_url_info.psUrl = (JC_CHAR*) jdd_MemAlloc(ui_go_url_len + 1, sizeof(JC_CHAR));

        mmi_asc_to_ucs2((S8*) g_mmi_brw_cntx.fetch_url_info.psUrl, (S8*) ("http://"));

        mmi_ucs2ncat((S8*) g_mmi_brw_cntx.fetch_url_info.psUrl, (S8*) brw_url_p, ui_go_url_len - 7);
    }
    else
    {
        g_mmi_brw_cntx.fetch_url_info.psUrl = (JC_CHAR*) jdd_MemAlloc(ui_go_url_len + 1, sizeof(JC_CHAR));
        mmi_ucs2cpy((S8*) g_mmi_brw_cntx.fetch_url_info.psUrl, (S8*) brw_url_p);
    }

    if (0 == ui_go_url_len)
    {
        jdd_MemFree(g_mmi_brw_cntx.fetch_url_info.psUrl);
        g_mmi_brw_cntx.fetch_url_info.psUrl = NULL; /* added by tk */
        return;
    }

    g_mmi_brw_cntx.fetch_url_info.pPostData = NULL;
    g_mmi_brw_cntx.fetch_url_info.uiPostDataLen = 0;

}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_goto_url
 * DESCRIPTION
 *  Interface function to fetch the url
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_goto_url(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (!g_mmi_brw_cntx.is_saturl)
    {
        mmi_brw_jbrowser_go_event();
    }
    else
    {
        mmi_brw_jbrowser_sat_goto_url_event();
    }
}

/* added by tk */


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_get_title_length
 * DESCRIPTION
 *  Interface function to get the max title length
 * PARAMETERS
 *  void
 * RETURNS
 *  S16
 *****************************************************************************/
S16 mmi_brw_get_title_length(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return MMI_BRW_ADDRESS_HISTORY_MAX_TITLE_LENGTH;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_show_title
 * DESCRIPTION
 *  Interface function to get the max title length
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_show_title(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (GetActiveScreenId() == SCR_ID_BRW_JBROWSER_MAIN)
    {
        draw_title();
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_paint_outside_look
 * DESCRIPTION
 *  Interface function to redraw status,title and button bar,
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
extern JC_BOOLEAN mmi_brw_is_browser_window_active(void);

void mmi_brw_paint_outside_look(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (GetActiveScreenId() == SCR_ID_BRW_JBROWSER_MAIN)
    {
        show_status_icons();
        draw_title();
        show_softkey_background();
        redraw_softkey(MMI_LEFT_SOFTKEY);
        redraw_softkey(MMI_RIGHT_SOFTKEY);
    }
}

/* tk end */


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_is_browser_screen_present
 * DESCRIPTION
 *  Check whether browser screen is present in history or not
 * PARAMETERS
 *  void
 * RETURNS
 *  pBOOL
 *****************************************************************************/
pBOOL mmi_brw_is_browser_screen_present(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return IsScreenPresent(SCR_ID_BRW_JBROWSER_MAIN);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_validate_url
 * DESCRIPTION
 *  Utility function to validate the url.
 * PARAMETERS
 *  url_p       [?]     [?]     Url to be validated
 * RETURNS
 *  MMI_BOOL
 *****************************************************************************/
MMI_BOOL mmi_brw_validate_url(U8 *url_p)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S8 *temp_url = NULL, *url = NULL;
    JC_UINT32 uilen = 0;
    MMI_BOOL retcode;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    uilen = mmi_ucs2strlen((S8*) url_p);
    uilen += 7; /* for appending http:// if not present */
    temp_url = (S8*) jdd_MemAlloc(uilen + 1, sizeof(JC_CHAR));
    if (NULL == temp_url)
    {
        retcode = MMI_FALSE;    /* will be handled later */
        goto error;
    }
    if (mmi_brw_check_http_prefix((PS8) url_p) == FALSE)
    {

        url = (S8*) jdd_MemAlloc(uilen + 1, sizeof(JC_CHAR));
        if (NULL == url)
        {
            retcode = MMI_FALSE;    /* will be handled later */
            goto error;
        }

        mmi_asc_to_ucs2((S8*) url, (S8*) ("http://"));

        mmi_ucs2ncat((S8*) url, (S8*) url_p, uilen - 7);
        mmi_ucs2_to_asc((S8*) temp_url, (S8*) url);

    }
    else
    {

        mmi_ucs2_to_asc((S8*) temp_url, (S8*) url_p);
    }

    if (jdi_isValidUrl((JC_UINT8*) temp_url))
    {
        retcode = MMI_TRUE;

    }
    else
    {

        retcode = MMI_FALSE;

    }
  error:
    if (url != NULL)
    {
        jdd_MemFree(url);
        url = NULL;
    }
    if (temp_url != NULL)
    {
        jdd_MemFree(temp_url);
        temp_url = NULL;
    }
    return retcode;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_set_as_homepage
 * DESCRIPTION
 *  Interface function to set the url as homepage
 * PARAMETERS
 *  url_p       [?]     [?]
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_set_as_homepage(U8 *url_p)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 homepage_url[MMI_BRW_WAP_PROFILE_HOMEPAGE_URL_LEN * ENCODING_LENGTH];

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_ucs2_to_asc((PS8) homepage_url, (PS8) url_p);
    mmi_ph_brw_set_activated_profile_homepage(homepage_url);
    DisplayPopup((PU8) GetString(STR_GLOBAL_DONE), IMG_GLOBAL_ACTIVATED, 1, MMI_BRW_POPUP_TIME, SUCCESS_TONE);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_go_back_authentication_screen
 * DESCRIPTION
 *  back button(LSK) handling for authentication screen.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_go_back_authentication_screen(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    JC_UINT32 navlist_count = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    jdi_BrowserSetAuthInfo(g_mmi_brw_pbrowser_ctxt, NULL);
    jdi_BrowserGetNavListCount(g_mmi_brw_pbrowser_ctxt, &navlist_count);
    if (navlist_count != 0)
    {
        GoBackHistory();
    }
    else
    {
        mmi_brw_auth_go_back_history();
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_go_back_confirm_submit_screen
 * DESCRIPTION
 *  back button(LSK) handling for submit confirm screen.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_go_back_confirm_submit_screen(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    JC_UINT32 navlist_count = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    jdi_BrowserSetAuthInfo(g_mmi_brw_pbrowser_ctxt, NULL);
    jdi_BrowserGetNavListCount(g_mmi_brw_pbrowser_ctxt, &navlist_count);
    if (navlist_count != 0)
    {
        GoBackToHistory(SCR_ID_BRW_JBROWSER_MAIN);
    }
    else
    {
        mmi_brw_auth_go_back_history();
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_confirm_submit
 * DESCRIPTION
 *  Confirm Screen before submitting the form.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_confirm_submit(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    DisplayConfirm(
        STR_GLOBAL_YES,
        IMG_GLOBAL_YES,
        STR_GLOBAL_NO,
        IMG_GLOBAL_NO,
        get_string(STR_GLOBAL_SUBMIT),
        IMG_GLOBAL_QUESTION,
        WARNING_TONE);

    SetLeftSoftkeyFunction(mmi_brw_auth_entry_confirmation_hdlr, KEY_EVENT_UP);
    /* SetRightSoftkeyFunction(brw_auth_GoBackHistory, KEY_EVENT_UP); */
    SetRightSoftkeyFunction(mmi_brw_go_back_confirm_submit_screen, KEY_EVENT_UP);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_entry_auth_handler
 * DESCRIPTION
 *  Entry function for authentication screen
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_entry_auth_handler(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 *gui_buffer_p;
    U8 *input_buffer;
    U16 input_buffer_size;
    InlineItem brw_authenticate_list[4];
    U16 icons_image_list[4] = {0};

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    EntryNewScreen(SCR_ID_BRW_AUTHENTICATION, mmi_brw_exit_auth_handler, NULL, NULL);

    gui_buffer_p = GetCurrGuiBuffer(SCR_ID_BRW_AUTHENTICATION);

    InitializeCategory57Screen();
    memset(brw_authenticate_list, 0, sizeof(brw_authenticate_list));

    /* For username caption */
    SetInlineItemActivation(
        &brw_authenticate_list[BRW_INLINE_USERNAME_CAPTION],
        INLINE_ITEM_ACTIVATE_WITHOUT_KEY_EVENT,
        0);
    SetInlineItemCaption(&brw_authenticate_list[BRW_INLINE_USERNAME_CAPTION], (U8*) GetString(STR_ID_BRW_USER_NAME));

    /* For username string */
    SetInlineItemActivation(&brw_authenticate_list[BRW_INLINE_USERNAME], KEY_LSK, KEY_EVENT_UP);
    SetInlineItemFullScreenEdit(
        &brw_authenticate_list[BRW_INLINE_USERNAME],
        STR_ID_BRW_USER_NAME,
        GetRootTitleIcon(SERVICES_WAP_MENU_ID),
        (U8*) g_mmi_brw_cntx.brw_auth_username,
        MMI_BRW_AUTH_USERNAME_LEN,
        INPUT_TYPE_ALPHANUMERIC_SENTENCECASE | INPUT_TYPE_USE_ONLY_ENGLISH_MODES);
    SetInlineFullScreenEditCustomFunction(
        &brw_authenticate_list[BRW_INLINE_USERNAME],
        mmi_brw_auth_full_screen_editor_options);

    /* For password caption */
    SetInlineItemActivation(
        &brw_authenticate_list[BRW_INLINE_PASSWORD_CAPTION],
        INLINE_ITEM_ACTIVATE_WITHOUT_KEY_EVENT,
        0);
    SetInlineItemCaption(&brw_authenticate_list[BRW_INLINE_PASSWORD_CAPTION], (U8*) GetString(STR_ID_BRW_PASSWORD));

    /* For password string */
    SetInlineItemActivation(&brw_authenticate_list[BRW_INLINE_PASSWORD], KEY_LSK, KEY_EVENT_UP);
    SetInlineItemFullScreenEdit(
        &brw_authenticate_list[BRW_INLINE_PASSWORD],
        STR_ID_BRW_PASSWORD,
        GetRootTitleIcon(SERVICES_WAP_MENU_ID),
        (U8*) g_mmi_brw_cntx.brw_auth_password,
        MMI_BRW_AUTH_PASSWORD_LEN,
        INPUT_TYPE_ALPHANUMERIC_PASSWORD | INPUT_TYPE_USE_ONLY_ENGLISH_MODES);
    SetInlineFullScreenEditCustomFunction(
        &brw_authenticate_list[BRW_INLINE_PASSWORD],
        mmi_brw_auth_full_screen_editor_options);

    input_buffer = GetCurrNInputBuffer(SCR_ID_BRW_AUTHENTICATION, &input_buffer_size);

    if (input_buffer != NULL)
    {
        SetCategory57Data(brw_authenticate_list, 4, input_buffer);
    }

    SetParentHandler(0);

    icons_image_list[0] = IMG_ID_BRW_AUTH_USER_NAME;
    icons_image_list[2] = IMG_ID_BRW_AUTH_PASSWD;

    ShowCategory57Screen(
        STR_ID_BRW_AUTHENTICATION,
        GetRootTitleIcon(SERVICES_WAP_MENU_ID),
        STR_GLOBAL_EDIT,
        0,
        STR_GLOBAL_BACK,
        0,
        4,
        (U16*) icons_image_list,
        brw_authenticate_list,
        0,
        gui_buffer_p);

    SetCategory57RightSoftkeyFunctions(mmi_brw_confirm_submit, mmi_brw_go_back_authentication_screen);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_exit_auth_handler
 * DESCRIPTION
 *  Exit function for authentication screen
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_exit_auth_handler(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    history scr;
    S16 nhistory = 0;
    U16 input_buffer_size;  /* added for inline edit history */

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    scr.scrnID = SCR_ID_BRW_AUTHENTICATION;
    CloseCategory57Screen();
    scr.entryFuncPtr = mmi_brw_entry_auth_handler;
    mmi_ucs2cpy((S8*) scr.inputBuffer, (S8*) & nhistory);
    GetCategory57History(scr.guiBuffer);
    input_buffer_size = (U16) GetCategory57DataSize();  /* added for inline edit history */
    GetCategory57Data((U8*) scr.inputBuffer);           /* added for inline edit history */
    AddNHistory(scr, (U16) input_buffer_size);          /* added for inline edit history */
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_auth_entry_confirmation_hdlr
 * DESCRIPTION
 *  Function for submitting the authentication information
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_auth_entry_confirmation_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    JC_RETCODE ret;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    GoBacknHistory(1);

    mmi_ucs2cpy((PS8) g_mmi_brw_cntx.pauthinfo.sUsername, (PS8) g_mmi_brw_cntx.brw_auth_username);
    mmi_ucs2cpy((PS8) g_mmi_brw_cntx.pauthinfo.sPassword, (PS8) g_mmi_brw_cntx.brw_auth_password);

    ret = jdi_BrowserSetAuthInfo(g_mmi_brw_pbrowser_ctxt, &g_mmi_brw_cntx.pauthinfo);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_auth_go_back_history
 * DESCRIPTION
 *  Go back history by 1
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_auth_go_back_history(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* GoBacknHistory(1); */
    DeleteNScrId(SCR_ID_BRW_JBROWSER_MAIN);
    mmi_brw_set_data_connection_deactive_flag(E_TRUE);
    mmi_brw_deinit_all();
    GoBackHistory();
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_auth_full_screen_editor_options
 * DESCRIPTION
 *  Callback for full screen edit from inline edit screen.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_auth_full_screen_editor_options(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ChangeLeftSoftkey(STR_GLOBAL_OPTIONS, IMG_GLOBAL_OPTIONS);
    SetLeftSoftkeyFunction(EntryScrForInputMethodAndDone, KEY_EVENT_UP);
    SetInputMethodAndDoneCaptionIcon(GetRootTitleIcon(SERVICES_WAP_MENU_ID));
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_wap_startup_req_hdlr
 * DESCRIPTION
 *  Request handler for MSG_ID_WAP_BROWSER_STARTUP_REQ
 * PARAMETERS
 *  data_buf_p      [?]     [?]     Buffer containing data
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_wap_startup_req_hdlr(void *data_buf_p)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    wap_browser_startup_req_struct *brw_startup_p = (wap_browser_startup_req_struct*) data_buf_p;
    JC_RETCODE ret = JC_OK;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* Added to indicate that SAT is not active */
    g_mmi_brw_cntx.is_saturl = E_FALSE;

    if (brw_startup_p == NULL)
    {
        ASSERT(0);
    }

    switch (brw_startup_p->type)
    {
        case WAP_BROWSER_GOTO_MAIN_MENU:
        {
            ASSERT(0);
            break;
        }

        case WAP_BROWSER_GOTO_HOMEPAGE:
        {
            /* Long press of WAP key from idle screen is handled in this case */
            ClearKeyHandler(KEY_WAP, KEY_LONG_PRESS);
        #ifdef JBROWSER_USE_ASM
            g_mmi_brw_cntx.init_app_flag = BRW_INIT_APP_GOTO_HOMEPAGE;
        #endif 

            ret = mmi_brw_jbrowser_init_app();
            if (ret != JC_OK)
            {
                return;
            }

            /* Added by tk to set page req source flag */
            g_mmi_brw_cntx.page_fetch_req_src = 1;
            mmi_brw_entry_homepage();
            break;
        }

        case WAP_BROWSER_GOTO_URL:
        {
            /* Opening url from sms is handled in this case */
            U32 len = 0;
            MMI_BOOL is_valid_url;

            len = strlen((S8*) brw_startup_p->url);

            /* added by tk */
            if (len >= MMI_BRW_BKM_MAX_URL_LENGTH)
            {
                len = MMI_BRW_BKM_MAX_URL_LENGTH - 1;
            }
            memset((void*)g_mmi_brw_cntx.brw_current_url, 0, sizeof(g_mmi_brw_cntx.brw_current_url));
            mmi_asc_n_to_ucs2((S8*) g_mmi_brw_cntx.brw_current_url, (S8*) brw_startup_p->url, len);

            is_valid_url = mmi_brw_validate_url(g_mmi_brw_cntx.brw_current_url);

            if (is_valid_url == MMI_TRUE)
            {
                /* Added by tk to set page req source flag */
                if (g_mmi_brw_cntx.is_layout_initialized == E_FALSE)
                {
                    g_mmi_brw_cntx.page_fetch_req_src = 1;
                }
                g_mmi_brw_cntx.jbrowser_frm_ext_app = MMI_TRUE;
                /* added by tk to set the current fetch url */
            #ifdef JBROWSER_USE_ASM
                g_mmi_brw_cntx.init_app_flag = BRW_INIT_APP_GOTO_URL;
            #endif 

                ret = mmi_brw_jbrowser_init_app();
                if (ret != JC_OK)
                {
                    return;
                }

                mmi_brw_set_current_url((S8*) g_mmi_brw_cntx.brw_current_url);
                mmi_brw_pre_entry_goto_url();
            }
            else
            {
                DisplayPopup(
                    (PU8) GetString(STR_ID_BRW_INVALID_URL),
                    IMG_GLOBAL_ERROR,
                    1,
                    MMI_BRW_POPUP_TIME,
                    ERROR_TONE);
            }

            break;
        }

        case WAP_BROWSER_ADD_BOOKMARK:
        {
            U32 len = 0;
            MMI_BOOL is_valid_url;

            g_mmi_brw_cntx.edit_flag = BRW_STATUS_ADD_BKM_FROM_USE_URL;
            mmi_brw_read_bookmark_from_nvram();

            /* If Bookmark list is full, Dispaly 'Bookmark list is full' */
            if (g_mmi_brw_cntx.total_bookmark_items >= MMI_BRW_MAX_BOOKMARKS)
            {
                DisplayPopup(
                    (PU8) GetString(STR_ID_BRW_BOOKMARK_FULL),
                    IMG_GLOBAL_ERROR,
                    1,
                    MMI_BRW_POPUP_TIME,
                    ERROR_TONE);
            }
            else
            {
                len = strlen((S8*) brw_startup_p->url);

                if (len >= MMI_BRW_BKM_MAX_URL_LENGTH)
                {
                    DisplayPopup(
                        (PU8) GetString(STR_ID_BRW_URL_LEN_EXCEED),
                        IMG_GLOBAL_ERROR,
                        1,
                        MMI_BRW_POPUP_TIME,
                        ERROR_TONE);
                }
                else
                {
                    memset((void*)g_mmi_brw_cntx.brw_bkm_selected_title, 0, sizeof(g_mmi_brw_cntx.brw_bkm_selected_title));    /* Added by tk */
                    memset(g_mmi_brw_cntx.brw_current_url, 0, ((len + 1) * ENCODING_LENGTH));
                    mmi_asc_to_ucs2((S8*) g_mmi_brw_cntx.brw_current_url, (S8*) brw_startup_p->url);
                    is_valid_url = mmi_brw_validate_url(g_mmi_brw_cntx.brw_current_url);

                    if (is_valid_url == MMI_TRUE)
                    {
                        g_mmi_brw_cntx.edit_flag = BRW_STATUS_ADD_BKM_FROM_USE_URL;
                        mmi_brw_entry_add_bookmark_screen_for_all();
                    }
                    else
                    {
                        DisplayPopup(
                            (PU8) GetString(STR_ID_BRW_INVALID_URL),
                            IMG_GLOBAL_ERROR,
                            1,
                            MMI_BRW_POPUP_TIME,
                            ERROR_TONE);
                    }
                }
            }
            break;
        }

        case WAP_BROWSER_GOTO_URL_BACKGROUND:
        {
            /* Will not handle another launch browser request when browser is already open */
            /* Might happen in case of next URI in OMA download */
            U32 len = 0;
            MMI_BOOL is_valid_url;

            len = strlen((S8*) brw_startup_p->url);

            /* added by tk */
            if (len >= MMI_BRW_BKM_MAX_URL_LENGTH)
            {
                len = MMI_BRW_BKM_MAX_URL_LENGTH - 1;
            }
            memset((void*)g_mmi_brw_cntx.brw_current_url, 0, sizeof(g_mmi_brw_cntx.brw_current_url));
            mmi_asc_n_to_ucs2((S8*) g_mmi_brw_cntx.brw_current_url, (S8*) brw_startup_p->url, len);

            is_valid_url = mmi_brw_validate_url(g_mmi_brw_cntx.brw_current_url);

            if (is_valid_url == MMI_TRUE)
            {
                if (GetActiveScreenId() == SCR_ID_BRW_JBROWSER_MAIN)
                {
                    mmi_brw_set_current_url((S8*) g_mmi_brw_cntx.brw_current_url);
                    mmi_brw_register_key_handler();
                    mmi_brw_goto_url();
                }
                else if (IsScreenPresent(SCR_ID_BRW_JBROWSER_MAIN))
                {
                    mmi_brw_set_current_url((S8*) g_mmi_brw_cntx.brw_current_url);
                    HistoryReplace(SCR_ID_BRW_JBROWSER_MAIN, SCR_ID_BRW_JBROWSER_MAIN, mmi_brw_entry_goto_url);
                }
                else
                {
                    /* g_mmi_brw_cntx.page_fetch_req_src = 1; */
                    /* g_mmi_brw_cntx.jbrowser_frm_ext_app = MMI_TRUE; */
                #ifdef JBROWSER_USE_ASM
                    g_mmi_brw_cntx.init_app_flag = BRW_INIT_APP_GOTO_URL;
                #endif 

                    ret = mmi_brw_jbrowser_init_app();
                    if (ret != JC_OK)
                    {
                        return;
                    }

                    mmi_brw_set_current_url((S8*) g_mmi_brw_cntx.brw_current_url);
                    mmi_brw_pre_entry_goto_url();
                }
            }
            else
            {
                DisplayPopup(
                    (PU8) GetString(STR_ID_BRW_INVALID_URL),
                    IMG_GLOBAL_ERROR,
                    1,
                    MMI_BRW_POPUP_TIME,
                    ERROR_TONE);
            }
            break;
        }

        case WAP_BROWSER_VIEW_PUSH_MSG:
        {
            ASSERT(0);
            break;
        }

        default:
        {
            ASSERT(0);
            break;
        }
    }
}

#ifdef __SAT__


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_sat_launch_request
 * DESCRIPTION
 *  Request handler for MSG_ID_WAP_MMI_LAUNCH_BROWSER_REQ
 * PARAMETERS
 *  sat_buf_p       [?]     
 *  p       [?]     pointer to the buffer containing data for SAT(?)
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_sat_launch_request(void *sat_buf_p)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    COMM_PROFILE profile;
    GENERIC_DATA_CONN pdataconn;
    JC_RETCODE ret = JC_OK;
    nvram_wap_profile_content_struct *activated_wap_profile_p;

    wap_mmi_lauch_browser_req_struct *launch_p = (wap_mmi_lauch_browser_req_struct*) sat_buf_p;
    U8 res;
    U8 i;
    S8 gateway_ascii[50];

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (!wap_is_ready())
    {
        res = BRW_SAT_BRWOSER_BUSY;
        goto launch_err;
    }

    activated_wap_profile_p = mmi_ph_get_activated_wap_profile();

    if (launch_p->noBearer > 0)
    {
        U8 bearer = PH_DATA_ACCOUNT_INVALID;

        for (i = 0; i < launch_p->noBearer; i++)
        {
            if (launch_p->bearer[i] == 0x01)
            {
                bearer = PH_DATA_ACCOUNT_CSD;
            }
        #ifdef __PS_SERVICE__
            else if (launch_p->bearer[i] == 0x03)
            {
                bearer = PH_DATA_ACCOUNT_GPRS;
            }
        #endif /* __PS_SERVICE__ */ 
            if (bearer != PH_DATA_ACCOUNT_INVALID)
            {
                break;
            }
        }

        if ((bearer != PH_DATA_ACCOUNT_INVALID) &&
            mmi_ph_check_data_account_type(activated_wap_profile_p->data_account) != bearer)
        {
            res = BRW_SAT_BEARER_UNAVAILABLE;
            goto launch_err;
        }
    }

    if (launch_p->browserMode == 0x00)
    {
        /* launch browser, if not already launched. 
           nothing to do */
    }
    else if (launch_p->browserMode == 0x02)
    {
        /* use the existing browser (the browser shall not use the active existing secured session) 
           nothing to do */
    }
    else if (launch_p->browserMode == 0x03)
    {
        /* close the existing browser session and launch new browser session */
        ret = jdi_BrowserClose(g_mmi_brw_pbrowser_ctxt, E_TRUE);
        if (ret != JC_OK)
        {
            ASSERT(0);
        }
    }

    if (launch_p->noUrl > 0)
    {
        if (!mmi_brw_validate_url(launch_p->url))
        {
            /* error */
            res = BRW_SAT_PARAM_URL_ERROR;
            goto launch_err;
        }
        else
        {
            /* mmi_ucs2cpy((S8*) g_mmi_brw_cntx.brw_current_url, (S8*) launch_p->url); */
            /* added by tk to set the current fetch url */
            mmi_brw_set_current_url((S8*) launch_p->url);
        }
    }
    else
    {   /* Copy Homepage for activated profile if no url */
        mmi_asc_to_ucs2((S8*) g_mmi_brw_cntx.brw_current_url, (S8*) mmi_ph_brw_get_activated_profile_homepage());
        /* added by tk to set the current fetch url */
        mmi_brw_set_current_url((S8*) g_mmi_brw_cntx.brw_current_url);
    }

    jc_memset(&profile, 0, sizeof(COMM_PROFILE));
    /* process gateway */
    mmi_ucs2_to_asc(gateway_ascii, (PS8) launch_p->gateway);
    if (launch_p->noGateway > 0 && mmi_brw_check_ip(gateway_ascii))
    {
        strcpy((S8*) profile.szHostName, gateway_ascii);
        profile.eConnMode = E_COMM_WSP_CONNECTION_ORIENTED;
        profile.uiPortNumber = (JC_UINT32) 9201;
    }

    if (!launch_p->noGateway)
    {
        sprintf(
            (PS8) profile.szHostName,
            "%d.%d.%d.%d",
            activated_wap_profile_p->proxy_ip[0],
            activated_wap_profile_p->proxy_ip[1],
            activated_wap_profile_p->proxy_ip[2],
            activated_wap_profile_p->proxy_ip[3]);
        profile.uiPortNumber = activated_wap_profile_p->proxy_port;

        switch (activated_wap_profile_p->conn_type)
        {
            case PH_CONN_TYPE_CONNECTION_OREINTED:
                profile.eConnMode = E_COMM_WSP_CONNECTION_ORIENTED;
                profile.uiPortNumber = (JC_UINT32) MMI_BRW_PH_CONN_PORTNUMBER;
                break;

        #if defined (WAP_SEC_SUPPORT) && defined (JATAAYU_SUPPORT)
            case PH_CONN_TYPE_CONNECTION_OREINTED_SECURE:
                profile.eConnMode = E_COMM_WSP_CONNECTION_ORIENTED_SECURE;
                profile.uiPortNumber = (JC_UINT32) MMI_BRW_PH_CONN_SECURE_PORTNUMBER;
                break;

        #endif /* defined (WAP_SEC_SUPPORT) && defined (JATAAYU_SUPPORT) */ 
                /* end */
            case PH_CONN_TYPE_HTTP:
                if (strcmp((PS8) profile.szHostName, (PS8) "0.0.0.0") == 0)
                {
                    profile.eConnMode = E_COMM_WPHTTP_DIRECT;
                }
                else
                {
                    profile.eConnMode = E_COMM_WPHTTP_PROXY;
                    if (profile.uiPortNumber == 0)
                    {
                        profile.uiPortNumber = MMI_BRW_PH_CONN_HTTP_PORTNUMBER;
                    }
                }
                break;

            default:
                break;
        }
    }

    mmi_brw_set_timeout_value();
#ifdef JBROWSER_USE_ASM
    g_mmi_brw_cntx.init_app_flag = BRW_INIT_APP_GOTO_SAT;
#endif 
    ret = mmi_brw_jbrowser_init_app();
    if (JC_OK != ret)
    {
        res = BRW_SAT_UNKNOWN_ERROR;
        goto launch_err;
    }

    ret = jdi_BrowserSetTransportProfile(g_mmi_brw_pbrowser_ctxt, &profile);
    if (JC_OK != ret)
    {
        res = BRW_SAT_UNKNOWN_ERROR;
        goto launch_err;
    }

    memset(&pdataconn, 0, sizeof(GENERIC_DATA_CONN));
    pdataconn.account_id = activated_wap_profile_p->data_account;

    ret = jdi_BrowserSetDataConnectionProfile(g_mmi_brw_pbrowser_ctxt, (const GENERIC_DATA_CONN*)&pdataconn);

    if (JC_OK != ret)
    {
        res = BRW_SAT_UNKNOWN_ERROR;
        goto launch_err;
    }

    /* This is added to indicate that a url is being fetched from SAT application.
       based on this we will send MSG_ID_WAP_MMI_BROWSER_TERMINATION_IND to MMI_TASK */
    g_mmi_brw_cntx.is_saturl = E_TRUE;
    /* Added by tk to set page req source flag */
    g_mmi_brw_cntx.page_fetch_req_src = 1;

    mmi_brw_pre_entry_goto_url();
    res = BRW_SAT_LAUCH_SUCC;

  launch_err:
    mmi_brw_sat_lauch_response(res);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_sat_lauch_response
 * DESCRIPTION
 *  Response MSG_ID_WAP_MMI_LAUNCH_BROWSER_RSP
 * PARAMETERS
 *  res     [IN]        Type of response.
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_sat_lauch_response(U8 res)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    wap_mmi_lauch_browser_rsp_struct *lauch_rsp_ptr;

    MYQUEUE message;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    lauch_rsp_ptr = (wap_mmi_lauch_browser_rsp_struct*) OslConstructDataPtr(sizeof(wap_mmi_lauch_browser_rsp_struct));

    PRINT_INFORMATION_2(MMI_TRACE_INFO, "%s", "***********mmi_brw_sat_lauch_response: %d**********\n", res);
    switch (res)
    {
        case BRW_SAT_LAUCH_SUCC:
            lauch_rsp_ptr->res = SAT_CMD_PERFORMED_SUCCESSFULLY;
            lauch_rsp_ptr->additionalInfo = SAT_LAUNCH_BROWSER_NO_SPECIFIC_CAUSE;
            break;

        case BRW_SAT_BRWOSER_BUSY:
            lauch_rsp_ptr->res = SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD;
            lauch_rsp_ptr->additionalInfo = SAT_LAUNCH_BROWSER_BROWSER_UNAVALIABLE;
            break;

        case BRW_SAT_BEARER_UNAVAILABLE:
            lauch_rsp_ptr->res = SAT_ME_CURRENTLY_UNABLE_TO_PROCESS_CMD;
            lauch_rsp_ptr->additionalInfo = SAT_LAUNCH_BROWSER_BEARER_UNAVALIABLE;
            break;

        case BRW_SAT_PARAM_GATEWAY_ERROR:
        case BRW_SAT_PARAM_URL_ERROR:
            lauch_rsp_ptr->res = SAT_LAUNCH_BROWER_GENERIC_ERROR_CODE;
            lauch_rsp_ptr->additionalInfo = SAT_LAUNCH_BROWSER_NO_SPECIFIC_CAUSE;
            break;

        case BRW_SAT_PROV_DATA_ERROR:
            lauch_rsp_ptr->res = SAT_LAUNCH_BROWER_GENERIC_ERROR_CODE;
            lauch_rsp_ptr->additionalInfo = SAT_LAUNCH_BROWSER_ME_UNABLE_TO_READ_PROVISION_DATA;
            break;

        default:
            lauch_rsp_ptr->res = SAT_LAUNCH_BROWER_GENERIC_ERROR_CODE;
            lauch_rsp_ptr->additionalInfo = SAT_LAUNCH_BROWSER_NO_SPECIFIC_CAUSE;
            break;
    }

    message.oslSrcId = MOD_WAP;
    message.oslDestId = MOD_MMI;
    message.oslMsgId = MSG_ID_WAP_MMI_LAUNCH_BROWSER_RSP;
    message.oslDataPtr = (oslParaType*) lauch_rsp_ptr;
    message.oslPeerBuffPtr = NULL;
    OslMsgSendExtQueue(&message);
}

#endif /* __SAT__ */ 


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_check_ip
 * DESCRIPTION
 *  Function to validate the IP
 * PARAMETERS
 *  ip_address_p        [?]     [?]     IP address to be validated
 * RETURNS
 *  void
 *****************************************************************************/
S32 mmi_brw_check_ip(S8 *ip_address_p)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S8 *ip;
    S8 seps[] = ".";
    S8 *token;
    S32 ip_sec = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ip = (S8*) jdd_MemAlloc(1, strlen(ip_address_p) + 1);
    strcpy(ip, ip_address_p);

    /* 1st char of ip or hostname can't be '.' */
    if (ip[0] == '.' || ip[strlen(ip) - 1] == '.')
    {
        goto err;
    }

    token = strtok(ip, seps);
    while (token)
    {
        U16 i;

        for (i = 0; i < strlen(token); i++)
        {
            if (i >= 3)
            {
                goto err;
            }

            if (token[i] < '0' || token[i] > '9')
            {
                goto err;
            }
        }

        /* this segement is ip format */
        ip_sec++;

        token = strtok(NULL, seps);
    }

    if (ip_sec != 4)
    {
        goto err;
    }

    if (ip != NULL)
    {
        jdd_MemFree(ip);
        ip = NULL;
    }
    return 1;

  err:

    if (ip != NULL)
    {
        jdd_MemFree(ip);
        ip = NULL;
    }

    return 0;

}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_wap_poweroff_request
 * DESCRIPTION
 *  Request handler for MSG_ID_WAP_BROWSER_POWEROFF_REQ
 * PARAMETERS
 *  databuf     [?]     [?]        Pointer to buffer containing data
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_wap_poweroff_request(void *databuf)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* data_buf_p will be NULL */

    /* Deinitialize the browser application */
    mmi_brw_deinit_jbrowser_ctxt();
#if (defined (JATAAYU_SUPPORT) && defined(MMS_SUPPORT))
    mmi_jmms_deinit_shutdown();
#endif 

    /* Send response */
    mmi_brw_wap_poweroff_response();

#ifdef BROWSER_PUSH_ENABLE
    mmi_brw_deinitialize_push_message_list();
#endif 

#ifdef __SAT__
    if (g_mmi_brw_cntx.is_saturl == E_TRUE)
    {
        mmi_brw_send_termination_to_mmi(BRW_SAT_ERROR_TERMINATION);
    }
#endif /* __SAT__ */ 
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_wap_poweroff_response
 * DESCRIPTION
 *  Response MSG_ID_WAP_BROWSER_POWEROFF_RSP
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_wap_poweroff_response(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    MYQUEUE message;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    message.oslSrcId = MOD_WAP;
    message.oslDestId = MOD_MMI;
    message.oslMsgId = MSG_ID_WAP_BROWSER_POWEROFF_RSP;
    message.oslDataPtr = (oslParaType*) NULL;
    message.oslPeerBuffPtr = NULL;
    OslMsgSendExtQueue(&message);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_send_termination_to_mmi
 * DESCRIPTION
 *  MSG_ID_WAP_MMI_BROWSER_TERMINATION_IND
 * PARAMETERS
 *  cause       [IN]        Type of termination (USER or ERROR)
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_send_termination_to_mmi(U8 cause)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    MYQUEUE message;
    wap_mmi_browser_termination_ind_struct *browser_term_ind_ptr;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    browser_term_ind_ptr =
        (wap_mmi_browser_termination_ind_struct*) OslConstructDataPtr(sizeof(wap_mmi_browser_termination_ind_struct));

    if (cause == BRW_SAT_USER_TERMINATION)
    {
        browser_term_ind_ptr->cause = SAT_BROWSER_USER_TERMINATION;
    }
    else
    {
        browser_term_ind_ptr->cause = SAT_BROWSER_ERROR_TERMINATION;
    }

    message.oslSrcId = MOD_WAP;
    message.oslDestId = MOD_MMI;
    message.oslMsgId = MSG_ID_WAP_MMI_BROWSER_TERMINATION_IND;
    message.oslDataPtr = (oslParaType*) browser_term_ind_ptr;
    message.oslPeerBuffPtr = NULL;
    OslMsgSendExtQueue(&message);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_wap_entry_busy_progressing_screen_in_idle
 * DESCRIPTION
 *  Temporary screen with all key disabled and no put in history. Invoked from mmi_brw_wap_internet_key_hdlr
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_wap_entry_busy_progressing_screen_in_idle(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    EntryNewScreen(SCR_ID_BRW_TRANSITION_ANIMATION, NULL, NULL, NULL);

    ShowCategory66Screen(
        (U16) STR_ID_BRW_INTERNET_SERVICES,
        GetRootTitleIcon(SERVICES_WAP_MENU_ID),
        0,
        0,
        0,
        0,
        (U8*) GetString(STR_ID_BRW_PLEASE_WAIT),
        IMG_ID_BRW_SAT_WAIT,
        NULL);

    ClearAllKeyHandler();   /* End key is still valid */
    mmi_brw_clear_key_handler(KEY_END);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_wap_restore_factory_setting_req
 * DESCRIPTION
 *  Request handler for MSG_ID_WAP_RESTORE_FACTORY_SETTING_REQ
 * PARAMETERS
 *  databuf     [?]     [?]        Pointer to buffer containing data
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_wap_restore_factory_setting_req(void *databuf)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_brw_restore_default_profile_settings();
    mmi_brw_restore_default_browser_settings();
    mmi_brw_restore_default_bookmarks();
    /* mmi_brw_restore_default_certificates(); */

#if (defined (JATAAYU_SUPPORT) && defined(MMS_SUPPORT))
    /* manish--for JMMS */
    mmi_brw_mms_restore_default_profile_settings();
    mmi_jmms_restore_nvram_default_settings();
#endif /* (defined (JATAAYU_SUPPORT) && defined(MMS_SUPPORT)) */ 

    mmi_brw_wap_restore_factory_setting_cnf();
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_restore_default_profile_settings
 * DESCRIPTION
 *  Restore the default profile settings
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_restore_default_profile_settings(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U16 index = 0;
    S16 error = 0;

    /* U16 activateWapProfileIndex = 0; */

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    for (index = 1; index <= NVRAM_WAP_PROFILE_MAX; index++)
    {
        WriteRecord(
            NVRAM_EF_WAP_PROFILE_CONTENT_LID,
            index,
            &NVRAM_EF_WAP_PROFILE_CONTENT_DEFAULT[index - 1],
            NVRAM_EF_WAP_PROFILE_CONTENT_SIZE,
            &error);
    }

    WriteRecord(
        NVRAM_EF_WAP_PROFILE_NAMES_LID,
        1,
        NVRAM_EF_WAP_PROFILE_NAMES_DEFAULT,
        NVRAM_EF_WAP_PROFILE_NAMES_SIZE,
        &error);

    /* WriteValue(NVRAM_PH_ACTIVATED_WAP_PROFILE_INDEX, &activateWapProfileIndex, DS_BYTE, &error); */

}

#if (defined (JATAAYU_SUPPORT) && defined(MMS_SUPPORT))


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_mms_restore_default_profile_settings
 * DESCRIPTION
 *  Restore the default profile settings
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_mms_restore_default_profile_settings(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U16 index = 0;
    S16 error = 0;

    /* U16 activateMMSProfileIndex = 0; */

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    for (index = 1; index <= NVRAM_MMS_PROFILE_MAX; index++)
    {
        WriteRecord(
            NVRAM_EF_MMS_PROFILE_CONTENT_LID,
            index,
            &NVRAM_EF_MMS_PROFILE_CONTENT_DEFAULT[index - 1],
            NVRAM_EF_MMS_PROFILE_CONTENT_SIZE,
            &error);
    }

    WriteRecord(
        NVRAM_EF_MMS_PROFILE_NAMES_LID,
        1,
        NVRAM_EF_MMS_PROFILE_NAMES_DEFAULT,
        NVRAM_EF_MMS_PROFILE_NAMES_SIZE,
        &error);

    /* WriteValue(NVRAM_PH_ACTIVATED_MMS_PROFILE_INDEX, &activateMMSProfileIndex, DS_BYTE, &error); */

}
#endif /* (defined (JATAAYU_SUPPORT) && defined(MMS_SUPPORT)) */ // #if (defined (JATAAYU_SUPPORT) && defined(MMS_SUPPORT))


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_restore_default_browser_settings
 * DESCRIPTION
 *  Restore the default browser settings
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_restore_default_browser_settings(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S16 error = 0;
    U16 timeout_default = WAP_CUSTOM_CFG_DEFAULT_BROWSE_TIMEOUT;
    U8 show_image_default = WAP_CUSTOM_CFG_DEFAULT_SHOW_IMAGES_ON;
    U8 show_history_as_default = WAP_CUSTOM_CFG_DEFAULT_SHOW_HISTORY_AS_URL;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    WriteValue(NVRAM_BRW_TIME_OUT_VALUE, &(timeout_default), DS_SHORT, &error);
    g_mmi_brw_cntx.timeout_value = timeout_default;
    WriteValue(NVRAM_BRW_SHOW_IMAGE_ON_OFF, &(show_image_default), DS_BYTE, &error);
    g_mmi_brw_cntx.show_images = show_image_default;
    WriteValue(NVRAM_BRW_SHOW_HISTORY_AS, &(show_history_as_default), DS_BYTE, &error);
    g_mmi_brw_cntx.show_history_as_url = show_history_as_default;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_restore_default_bookmarks
 * DESCRIPTION
 *  Restore the default bookmarks
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_restore_default_bookmarks(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U16 record_count;
    S16 nvram_error;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* Read bookmarks from NVRAM if not already read */
    for (record_count = 1; record_count <= NVRAM_BRW_NUM_BOOKMARK_TITLE_RECORDS; record_count++)
    {
        WriteRecord(
            NVRAM_EF_BRW_BOOKMARK_TITLE_LID,
            record_count,
            &NVRAM_EF_BRW_BOOKMARK_TITLE_DEFAULT[(record_count - 1) * TITLES_PER_RECORD],
            NVRAM_BRW_BOOKMARK_TITLE_SIZE,
            &nvram_error);
    }

    for (record_count = 1; record_count <= NVRAM_BRW_NUM_BOOKMARK_URL_RECORDS; record_count++)
    {
        WriteRecord(
            NVRAM_EF_BRW_BOOKMARK_URL_LID,
            record_count,
            &NVRAM_EF_BRW_BOOKMARK_URL_DEFAULT[(record_count - 1) * URLS_PER_RECORD],
            NVRAM_BRW_BOOKMARK_URL_SIZE,
            &nvram_error);
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_wap_restore_factory_setting_cnf
 * DESCRIPTION
 *  Response MSG_ID_WAP_RESTORE_FACTORY_SETTING_CNF
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_wap_restore_factory_setting_cnf(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    MYQUEUE message;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    message.oslSrcId = MOD_WAP;
    message.oslDestId = MOD_MMI;
    message.oslMsgId = MSG_ID_WAP_RESTORE_FACTORY_SETTING_CNF;
    message.oslDataPtr = (oslParaType*) NULL;
    message.oslPeerBuffPtr = NULL;
    OslMsgSendExtQueue(&message);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_stop_fetch_request
 * DESCRIPTION
 *  This function stops the previous fetch request.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_stop_fetch_request(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (g_mmi_brw_page_cntx.brw_page_fetch_status)
    {
        ASSERT(g_mmi_brw_pbrowser_ctxt);
        jdi_BrowserFetchStop(g_mmi_brw_pbrowser_ctxt);
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_sd_plug_out_hdlr
 * DESCRIPTION
 *  Handles SD card plug-out
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
extern void mmi_brw_sd_plug_out_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (IsScreenPresent(SCR_FMGR_MAIN))
    {
        mmi_brw_set_data_connection_deactive_flag(E_TRUE);
        mmi_brw_deinit_all();
    }
}

#ifdef __USB_IN_NORMAL_MODE__


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_handle_usb_enter_req
 * DESCRIPTION
 *  Handles USB ENTER REQ
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_handle_usb_enter_req(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __JBROWSER_DLS_SUPPORT__
    PRINT_INFORMATION_2(MMI_TRACE_INFO, "%s(%d)", "Enter:mmi_brw_handle_usb_enter_req",
                         g_mmi_brw_dls_cntx.download_state);

    if (g_mmi_brw_dls_cntx.download_state == BRW_DLS_DOWNLOADING)
    {
        jdi_BrowserFetchStop(g_mmi_brw_pbrowser_ctxt);
        mmi_brw_dls_send_file_dl_progress_ind(WAP_DL_STATUS_ABORTED, WAP_DL_ERROR_FILE_ACCESS);

        mmi_brw_dls_free_dwnld_info(TRUE);
        g_mmi_brw_dls_cntx.download_state = BRW_DLS_IDLE;
    }
#else /* __JBROWSER_DLS_SUPPORT__ */ 
    PRINT_INFORMATION_2(MMI_TRACE_INFO, "%s(%d)(%d)", "Enter:mmi_brw_handle_usb_enter_req",
                         g_mmi_brw_cntx.is_download_suspended, g_mmi_brw_cntx.is_downloading);

    if (g_mmi_brw_cntx.is_downloading == TRUE)
    {
        if (g_mmi_brw_cntx.dwnld_file_handle)
        {
            jdd_FSClose(g_mmi_brw_cntx.dwnld_file_handle);
            g_mmi_brw_cntx.dwnld_file_handle = NULL;
        }
        if (g_mmi_brw_cntx.dwnld_fs_handle)
        {
            if (g_mmi_brw_cntx.dwnld_mime_info.psFileName)
            {
                jdd_FSDelete(g_mmi_brw_cntx.dwnld_fs_handle, g_mmi_brw_cntx.dwnld_mime_info.psFileName);
            }
            jdd_FSDeinitialize(g_mmi_brw_cntx.dwnld_fs_handle);
            g_mmi_brw_cntx.dwnld_fs_handle = NULL;
        }

        g_mmi_brw_cntx.is_download_suspended = FALSE;
        g_mmi_brw_cntx.is_downloading = FALSE;
        mmi_brw_free_dwnld_info_memory();
        g_mmi_brw_cntx.show_download_aborted_popup = FALSE;
    }
#endif /* __JBROWSER_DLS_SUPPORT__ */ 

    if (MMI_CARD_DRV >= 0)
    {
        JDD_FSHANDLE filesyshandle = NULL;
        JC_UINT16 path_buf[(FMGR_MAX_PATH_LEN + 1)] = {0};
        JC_RETCODE ret;

        PRINT_INFORMATION_2(MMI_TRACE_INFO, "Memory Card Present");
        /* Delete @temp folder on memory card */
        if (jdd_FSInitialize(&filesyshandle) == JC_OK)
        {
            kal_wsprintf(path_buf, "%c:\\@temp\\", MMI_CARD_DRV);
            ret = jdd_FSDelDir(filesyshandle, path_buf);
            PRINT_INFORMATION_2(MMI_TRACE_INFO, "Deleting @temp folder on memory card(%d)", ret);
            ASSERT(jdd_FSDeinitialize(filesyshandle) == JC_OK);
        }
    }
    else
    {
        PRINT_INFORMATION_2(MMI_TRACE_INFO, "Memory Card Not Present");
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_handle_usb_exit_req
 * DESCRIPTION
 *  Handles USB EXIT REQ
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_handle_usb_exit_req(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __MMI_JATAAYU_BRW_OFFLINE_PAGES__
    mmi_brw_offline_pages_reset_sync();
#endif 
    /* At present not required */
}

#endif /* __USB_IN_NORMAL_MODE__ */ 


/*****************************************************************************
 * FUNCTION
 *  mmi_brw_msdc_plug_in_hdlr
 * DESCRIPTION
 *  Handles Memory card plug in
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_brw_msdc_plug_in_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __MMI_JATAAYU_BRW_OFFLINE_PAGES__
    mmi_brw_offline_pages_reset_sync();
#endif 
}

#endif /* defined (JATAAYU_SUPPORT) && defined (WAP_SUPPORT) */ 

#endif /* _MMI_JBROWSERMMIMAIN_C */ 

