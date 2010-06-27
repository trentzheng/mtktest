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

/*******************************************************************************
 * Filename:
 * ---------
 * PhoneBookResDef.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Menu/String/Image/Screen ids for Phonebook application 
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/
#ifndef _PHONEBOOKRESDEF_H
#define _PHONEBOOKRESDEF_H

#include "MMIDataType.h"

/*
 *   Enum for phonebook option list item number, for populate resource
 */
typedef enum
{
    MMI_PHB_OPTION_VIEW,
    MMI_PHB_OPTION_EDIT,
#if defined(__MMI_PHB_INFO_FIELD__)
    MMI_PHB_OPTION_EDIT_DETAIL,
#endif 
#if defined(__MMI_PHB_IMPS_FIELD__) || defined(__MMI_PHB_POC_FIELD__) || defined(__MMI_VOIP__)
    MMI_PHB_OPTION_EDIT_SERVICE_FIELD,
#endif 
    MMI_PHB_OPTION_DELETE,
#if !defined(__MMI_PHB_COMBINE_COPY_DUPLICATE__)
    MMI_PHB_OPTION_DUPLICATE,
#endif 
#if defined(__MMI_VCARD__)
    MMI_PHB_OPTION_VCARD,
#endif 
#if defined(__MMI_BPP_SUPPORT__)
    MMI_PHB_OPTION_PRINT,
#endif	
    MMI_PHB_OPTION_MOVE,
    MMI_PHB_OPTION_NO_SIM_TOTAL = MMI_PHB_OPTION_MOVE,

#if defined(__MMI_PHB_DIAL_FROM_PHB__)
    MMI_PHB_OPTION_DIAL,     /* Dial from phonebook entry option menu */
#endif 
#if defined(__MMI_PHB_IP_DIAL_FROM_PHB__)
#if defined(__MMI_DUAL_SIM_MASTER__)
    MMI_PHB_OPTION_IP_DIAL_SIM1,
    MMI_PHB_OPTION_IP_DIAL_SIM2,
#else /* __MMI_DUAL_SIM_MASTER__ */
    MMI_PHB_OPTION_IP_DIAL,     /* IP Dial from phonebook entry option menu */
#endif /*__MMI_DUAL_SIM_MASTER__*/
#endif 
#if defined(__MMI_PHB_SEND_SMS_FROM_PHB__)
    MMI_PHB_OPTION_SEND_SMS,    /* Send SMS from phonebook entry option menu */
#endif 
#if defined(__MMI_PHB_SEND_MMS_FROM_PHB__)
    MMI_PHB_OPTION_SEND_MMS,    /* Send SMS from phonebook entry option menu */
#endif 
#if defined(__MMI_PHB_COMBINE_COPY_DUPLICATE__) /* Combine copy and duplicate into one option, Aggregate Copy and Duplicate to one item. */
    MMI_PHB_OPTION_COPY_DUPLICATE,
#else 
    MMI_PHB_OPTION_COPY,
#endif 
#if defined(__MMI_VRSD_DIAL__)
    MMI_PHB_OPTION_VOICEDIAL,
#endif 

    MMI_PHB_OPTION_ENUM_TOTAL
} mmi_phb_option_num_enum;

#if defined(__MMI_PHB_MULTI_OPERATION__)
typedef enum
{
    MMI_PHB_MULTI_OP_OPTION_SELECT_ALL,
    MMI_PHB_MULTI_OP_OPTION_UNSELECT_ALL,
    MMI_PHB_MULTI_OP_OPTION_SELECT_ALL_FROM_SIM,
    MMI_PHB_MULTI_OP_OPTION_UNSELECT_ALL_FROM_SIM,
    MMI_PHB_MULTI_OP_OPTION_SELECT_ALL_FROM_PHONE,
    MMI_PHB_MULTI_OP_OPTION_UNSELECT_ALL_FROM_PHONE,
    MMI_PHB_MULTI_OP_OPTION_COPY_SELECTED,
    MMI_PHB_MULTI_OP_OPTION_DELETE_SELECTED,
    MMI_PHB_MULTI_OP_OPTION_ENUM_TOTAL
} mmi_phb_multi_operation_option_enum;
#endif /* defined(__MMI_PHB_MULTI_OPERATION__) */

/* screen ids */
typedef enum
{
    SCR_PBOOK_MAIN_MENU = PHONE_BOOK_BASE + 1,
    SCR_PBOOK_LIST,
    SCR_SEARCH_NAME_ENTRY,
    SCR_PBOOK_ENTRY_OPTIONS,
    SCR_IN_PROGRESS_PHB,
    SCR_ID_PHB_SPECIAL_NUMBER,
    SCR_PBSETTINGS_LIST,
    SCR_VIEW_FIELDS,
    SCR_SAVE_FIELDS_QUERY,
    SCR_STORAGE_LOCATION_OPTIONS,
    SCR_DELETE_ALL_MENU,
    SCR_ID_DELETE_ALL_CHECK_PHONE_LOCK,
    SCR_STORAGE_LOCATION_MENU,
    SCR_MEMORY_STATUS,
    SCR_CALLER_GROUPS,
    SCR_CALLER_GRP_DETAILS,
    SCR_ID_PHB_CALLERGROUP_MEMBER_LIST,             /* MTK 2004-02-10 Wilson. Caller Group Member List */
    SCR_ID_PHB_CALLERGROUP_MEMBER_VIEW_OPTION,      /* MTK 2004-02-10 Wilson. Caller Group Member List */
    SCR_ID_PHB_CALLERGROUP_MEMBER_DELETE_MEMBER,    /* MTK 2004-02-10 Wilson. Caller Group Member List */
    SCR_OWNER_NUMBERS,
    SCR_OWNER_NUMBER_OPTIONS,
    SCR_COPY_ALL_MENU,
    //huzhuhua 080722 BEGIN
//#ifdef  __PHONEBOOK_OUTPUT_INPUT__
     SCR_PB_OUTPUT_MENU,
     SCR_PB_OUTPUT_NAMING,
     PB_INPUT_SCREENID,
     PB_OPTION_INPUT_FIRST_SCREENID,
     PB_OPTION_INPUT_SECOND_SCREENID,
//#endif
//end
    SCR_PHB_DUMMY,
    SCR_ENTRY_VIEW,
    SCR_INLINE_EDIT,
    SCR_ID_PHB_EDIT_DETAIL,
    SCR_ID_PHB_EDIT_SERVICE_FIELD,
    SCR_ADD_NEW_ENTRY,
    SCR_SEARCH_OPTIONS,
    SCR_OWNER_NUMBER_EDIT,
    SCR_CHOOSE_NUMBER,
    SCR_SOS_DISPLAY,
    SCR_SOS_OPTIONS,
    SCR_SOS_ERASE_ERROR,
    SCR_SOS_SAVE_ERROR,
    SCR_SOS_SAVE_SUCCESS,
    SCR_SPEED_DIAL_OFF,
    SCR_SPEED_DIAL_LIST,
    SCR_ID_SPEED_DIAL_SET_NUM_OPTION,
    SCR_SDN_LIST,
    SCR_ENTER_SOS_NUMBER,
    SCR_ID_OPTION_COPY_DUPLICATE,                   /* MTK 2003-02-04 Wilson, Combine copy and duplicate into one option. */
    SCR_COPY_ENTRY_QUERY,
    SCR_DELETE_ENTRY_QUERY,
    SCR_DELETE_ALL_QUERY,
    SCR_SAVE_QUERY,
    SCR_ID_PHB_ADD_ABORT_CONFIRM,
    SCR_MOVE_QUERY,
    SCR_DUPLICATE_QUERY,
    SCR_SAVE_CALLER_GRP,
    SCR_COPY_FROM_PHONE,
    SCR_COPY_FROM_SIM,
    SCR_EDIT_ENTRY_QUERY,
    SCR_OWN_NUM_ERASE,
    SCR_OWN_NUM_EDIT,
    SCR_CONFIRM_SOS_CALL,
    SCR_VIEW_PICTURE,
    SCR_COPY_ALL_PROGRESS,
    SCR_ID_PHB_MMS_CHOOSE_ENTRY,
    SCR_ID_PHB_VCARD_MYCARD,
    SCR_ID_PHB_VCARD_EDIT_MYCARD,
    SCR_ID_PHB_VCARD_CONFIRM_SAVE_MYCARD,
    SCR_ID_PHB_IMAGE_OPTION,
    SCR_ID_PHB_IMAGE_VIEW_IMAGE,
    SCR_ID_PHB_FMGR_SAVE_OPTION,
    SCR_ID_PHB_QUICK_SEARCH_LIST,                   /* MTK 2004-04-27 Wilson, Quick Search */
    SCR_ID_PHB_QUICK_SEARCH_OPTION,
    SCR_ID_PHB_REFRESH_SIM_CONFIRM,
    SCR_ID_PHB_SORTING_EMAIL,
    SCR_ID_PHB_VIDEO_OPTION,
    SCR_ID_PHB_VIDEO_PREVIEW,
    SCR_ID_PHB_VIDEO_VIEW,
    SCR_ID_PHB_EDIT_VOIP,
    SCR_ID_PHB_EDIT_VOIP_OPTIONS,
    SCR_ID_PHB_CALLER_VIDEO,
    SCR_ID_PHB_CALLER_PIC,
    SCR_ID_PHB_SWFLASH_OPTION,
    SCR_ID_PHB_SWFLASH_PREVIEW,
    SCR_ID_PHB_SWFLASH_VIEW,    
    SCR_ID_PHB_NAME_LIST_FILTER_OPTIONS,
    SCR_ID_PHB_GENERIC_QUICK_SEARCH_LIST,
    SCR_ID_PHB_GENERIC_QUICK_SEARCH_OPTIONS,
    SCR_ID_PHB_AVATAR_IMAGE_OPTION,
    SCR_ID_PHB_AVATAR_VIDEO_OPTION,
    SCR_ID_PHB_MULTI_OP_OPTION,
    SCR_ID_PHB_MULTI_OP_PHB_LIST,
    /* vcard 3.0 */
    SCR_ID_PHB_VCARD_VERSION_OPTIONS,
    SCR_ID_PHB_ENUM_TOTAL
} SCREENID_LIST_PHONE_BOOK;

/* string ids */
typedef enum
{
    STR_SCR_PBOOK_CAPTION = PHONE_BOOK_BASE + 1,
    STR_MITEM100,                       /* View phonebook list in main menu. */
    STR_MITEM101,
    STR_ID_PHB_OPTION_IP_DIAL,          /* IP Dial from phonebook entry option menu. */
    STR_ID_PHB_OPTION_SEND_SMS,         /* Send SMS from phonebook entry option menu. */
    STR_ID_PHB_OPTION_SEND_MMS,
    STR_MITEM1010,
    STR_MITEM1011,
    STR_MITEM1012,
    STR_ID_PHB_OPTION_COPY_DUPLICATE,   /* Combine copy and duplicate into one option. */
    STR_MITEM1013,
    STR_MITEM1014,
    STR_MITEM1015,
    STR_MITEM1010_SEARCH,
    STR_MITEM1011_INPUT_METHOD,
    STR_MITEM102,
    STR_MITEM103,
    STR_MITEM104,
// #ifdef __PHONEBOOK_OUTPUT_INPUT__	
    STR_PB_BACKUP_OUTPUT,     //huzhuhua 080722
    STR_PB_BACKUP_INPUT,
    STR_PB_BACKUP_INPUT_OPTION_INPUT,    
    STR_PB_BACKUP_INPUT_OPTION_RENAME,
    STR_PB_BACKUP_INPUT_OPTION_DELETE,
    STR_PB_BACKUP_INPUT_OPTION_DELALL,
    STR_PB_BACKUP_INPUT_FIRST,
    STR_PB_BACKUP_INPUT_SECOND,  
    STR_PB_BACKUP_INPUT_SIM1,
    STR_PB_BACKUP_INPUT_SIM2,
    STR_PB_BACKUP_INPUT_PHONE,    
// #endif
    STR_COPY_ALL_SIM,
    STR_COPY_ALL_PHONE,
    STR_COPY_ALL_SIM_QUERY,
    STR_COPY_ALL_PHONE_QUERY,
    STR_DELETE_ALL_SIM,
    STR_DELETE_ALL_PHONE,
    STR_ID_PHB_DELETE_ALL_ONE_BY_ONE,
    STR_ID_PHB_EXTRA_NUMBER,
    STR_MITEM105,
    STR_MITEM1051,
    STR_MITEM1052,
    STR_MITEM109,
    STR_MITEM110,
    STR_CHOOSE_STORAGE_CAPTION,
    STR_SCR_ADD_NEW_ENTRY_CAPTION,
    STR_ID_PHB_ADD_QUERY,
    STR_ID_PHB_ADDED,
    STR_SCR_SEARCH_OPTIONS_CAPTION,
    STR_STORAGE_LOCATION_SIM,
    STR_STORAGE_LOCATION_PHONE,
    STR_SCR_MEMORY_USAGE_CAPTION,
    STR_NO_ENTRIES_MESSAGE,
    STR_ID_PHB_NAME_NUM_REQUIRE,
    STR_ID_PHB_NAME_REQUIRE,
    STR_ID_PHB_NUM_REQUIRE,
    STR_ID_PHB_NUM_INVALID,
    STR_DELETE_QUERY_MSG,
    STR_COPY_QUERY_MSG,
    STR_MOVE_QUERY_MSG,
    STR_DUPLICATE_QUERY_MSG,
    STR_DELETEALL_QUERY_SIM_MSG,
    STR_DELETEALL_QUERY_PHONE_MSG,
    STR_PBOOK_FULL_MSG,
    STR_SIM_FULL_MSG,
    STR_PHONE_FULL_MSG,
    STR_ID_PHB_NO_ENTRY_TO_SELECT,
    STR_SCR_PBOOK_VIEW_CAPTION,
    STR_SCR_VIEW_OPTIONS_CAPTION,
    STR_SCR_ENTRY_VIEW_CAPTION,
    STR_SCR_INLINE_EDIT_CAPTION,
    STR_SCR_SEARCH_NAME_CAPTION,
    STR_SCR_PBSETTINGS_LIST_CAPTION,
    STR_ID_PHB_SETTING_VIEW_FIELDS,
    STR_STORAGE_SIM,
    STR_STORAGE_PHONE,
    STR_ID_PHB_SPEAK_NAME,
    STR_PROCESSING_PHONEBOOK,
    STR_SCR_DELETE_ALL_MENU_CAPTION,
    STR_SCR_CALLER_GROUP_CAPTION,
    STR_SCR_CG_DETAILS_CAPTION,
    STR_SCR_OWNER_NUMBERS_CAPTION,
    STR_NO_OWNER_NUMBER_MESSAGE,
    STR_SCR_OWNER_NUMBER_OPTIONS_CAPTION,
    STR_SCR_COPY_ALL_MENU_CAPTION,
    STR_NO_NUMBER_TO_DIAL,
    STR_HOME_NUMBER,
    STR_COMPNAY_NAME,
    STR_EMAIL_ADRESS,
    STR_OFFICE_NUMBER,
    STR_FAX_NUMBER,
    STR_ASSOCIATE_PICTURE,
    STR_ASSOCIATE_ALERT,
    STR_ASSOCIATE_LED,
    STR_ASSOCIATE_SOUND,
    STR_CALLER_GROUP,
    STR_ID_PHB_BIRTHDAY,
    STR_ID_PHB_EDIT_DETAIL,
    STR_ID_PHB_EDIT_SERVICE_FIELD,
    STR_ID_PHB_MORE,
    STR_ID_PHB_TITLE,
    STR_ID_PHB_URL,
    STR_ID_PHB_ADDRESS,
    STR_ID_PHB_NOTE,
    STR_ID_PHB_IMPS_ID,
    STR_ID_PHB_POC_ID,
    STR_ID_PHB_VOIP_ID,
    STR_EDIT_LSK,
    STR_DONE_RSK,
    STR_VIEW_LSK,
    STR_SDL_CALL_LSK,
    STR_SDL_MAIN_MENU,
    STR_CALL_SDL_CAPTION,
    STR_SDL_NO_LIST_TEXT,
    STR_SOS_MENU_ITEM,
    STR_DISPLAY_SOS_CAPTION,
    STR_SOS_OPTIONS_EDIT,
    STR_SOS_ENTER_NUMBER,
    STR_CONFIRM_SOS_CALL_TEXT,
    STR_NUMBER_EMPTY,
    STR_SOSLIST_NVRAM,
    STR_ID_PHB_SOSLIST_INSIM,
    STR_ID_PHB_SOSLIST_DIAL_QUERY,
    STR_SCR_OWNER_NUMBER_EDIT_CAPTION,
    STR_CHOOSE_NUMBER_CAPTION,
    STR_COMPANY_CAPTION,
    STR_GRP_NAME_CAPTION,
    STR_CALLER_GROUP_1,
    STR_CALLER_GROUP_2,
    STR_CALLER_GROUP_3,
    STR_CALLER_GROUP_4,
    STR_CALLER_GROUP_5,
    STR_ID_PHB_CALLERGROUP_MEMBER_LIST, /* Caller Group Member List */
    STR_NONE,
    STR_PICTURE_1,
    STR_PICTURE_2,
    STR_PICTURE_3,
    STR_PICTURE_4,
    STR_SAVE_QUERY,
    STR_ERASE,
    STR_ERASE_QUERY,
    STR_ID_PHB_ERASED,
    STR_OWNER_NAME_CAPTION,
    STR_CG_RENAME_FAIL_MSG,
    STR_VIEW_PICTURE_CAPTION,
    STR_PHB_DUPLICATING,
    STR_PHB_SAVING,
    STR_PHB_ERASING,
    STR_ID_PHB_SORTING_EMAIL,
    STR_NUMBER_TOO_LONG,
    STR_NOT_SAVED_NUMBER_TOO_LONG,
    STR_NOT_MOVED_NUMBER_TOO_LONG,
    STR_NOT_COPIED_NUMBER_TOO_LONG,
    STR_NOT_DUPLICATED_NUMBER_TOO_LONG,
    STR_COPIED_NAME_MODIFIED,
    STR_COPIED_TO_PHONE_DONE,
    STR_COPIED_TO_SIM_DONE,
    STR_MOVED_NAME_MODIFIED,
    STR_MOVED_TO_PHONE_DONE,
    STR_MOVED_TO_SIM_DONE,
    STR_ID_PHB_COPIED,
    STR_ENTRY_COPIED,
    STR_ENTRIES_COPIED,
    STR_ID_PHB_ENTRY_DELETED,
    STR_ID_PHB_ENTRIES_DELETED,
    STR_EMERGENCY_NUMBER,
    STR_MEMORY_STATUS_SIM,
    STR_MEMORY_STATUS_PHONE,
    STR_PHB_OPTIONS,
    STR_ID_PHB_NAME,
    STR_ID_PHB_MOBILE_NUMBER,
    STR_COPY_ALL_ABORT,
    STR_COPY_ALL_ABORTING,
    STR_ID_PHB_ADD,
    STR_ID_PHB_VCARD,
    STR_ID_PHB_VCARD_EDIT_MYCARD,
    STR_ID_PHB_VCARD_SEND_MYCARD,
    STR_ID_PHB_VCARD_SEND_ENTRY,
    STR_ID_PHB_AUDIO_ID_NOT_EXIST,
    STR_ID_PHB_THEME_TONE_NOT_FOUND,
    STR_ID_PHB_FMGR_IMAGE_SELECT_FILE,
    STR_ID_PHB_FMGR_IMAGE_SELECTED,
    STR_ID_PHB_FMGR_IMAGE_DELETE_REF,
    STR_ID_PHB_FMGR_IMAGE_NO_SELECT,
    STR_ID_PHB_FMGR_TO_NEW_ENTRY,
    STR_ID_PHB_FMGR_TO_SELECT_ENTRY,
    STR_ID_PHB_FMGR_TO_CALLER_GROUP,
    STR_ID_PHB_FMGR_IMAGE_NOT_SUPPORT,
    STR_ID_PHB_FMGR_DISC_FULL,
    STR_ID_PHB_OP_IMAGE_FAIL,
    STR_ID_PHB_OP_VIDEO_FAIL,
    STR_ID_PHB_ADD_FAIL,
    STR_ID_PHB_EDIT_FAIL,
    STR_ID_PHB_DUPLICATE_FAIL,
    STR_ID_PHB_OP_COMMA,
    STR_ID_PHB_QUICK_SEARCH,            /* Quick Search */
    STR_ID_PHB_REFRESH_SIM,
    STR_ID_PHB_ASSOCIATE_VIDEO,
    STR_ID_PHB_VIDEO_AUDIO_ONOFF,
    STR_ID_PHB_WATCH_VIDEO,
    STR_ID_PHB_CANT_VIEW_VIDEO_IN_CALL,
    STR_ID_PHB_CALLER_PIC,
    STR_ID_PHB_CALLER_RING,
    STR_ID_PHB_CALLER_VIDEO,
    STR_ID_PHB_VIDEO_1,
    /* MFflash */
    STR_ID_PHB_CALLER_VIDEO_FROM_FILE,
    STR_ID_PHB_CALLER_VIDEO_FROM_SWFLASH,
    STR_ID_PHB_ASSOCIATE_SWFLASH,
    STR_ID_PHB_SWFLASH_AUDIO_ONOFF,
    STR_ID_PHB_WATCH_SWFLASH,
    STR_ID_PHB_CANT_VIEW_SWFLASH_IN_CALL,
    STR_ID_PHB_SWFLASH_1,
    STR_ID_PHB_SWFLASH_2,
    STR_ID_PHB_SWFLASH_3,
    STR_ID_PHB_SWFLASH_4,
    STR_ID_PHB_SWFLASH_5,
    STR_ID_PHB_SWFLASH_6,
    STR_ID_PHB_SWFLASH_7,
    STR_ID_PHB_SWFLASH_8,
    STR_ID_PHB_SWFLASH_9,
    STR_ID_PHB_SWFLASH_10,
    /* USIM */
    STR_ID_PHB_ANR_1,
    STR_ID_PHB_ANR_2,
    STR_ID_PHB_ANR_3,
    STR_ID_PHB_GAS_1,
    STR_ID_PHB_GAS_2,
    STR_ID_PHB_GAS_3,
    STR_ID_PHB_GAS_4,
    STR_ID_PHB_GAS_5,
    STR_ID_PHB_SNE,
    STR_ID_PHB_NOT_SAVED_ANR_FULL,
    STR_ID_PHB_NOT_MOVED_ANR_FULL,
    STR_ID_PHB_NOT_COPIED_ANR_FULL,
    STR_ID_PHB_NOT_DUPLICATED_ANR_FULL,
    STR_ID_PHB_NOT_SAVED_EMAIL_FULL,
    STR_ID_PHB_NOT_MOVED_EMAIL_FULL,
    STR_ID_PHB_NOT_COPIED_EMAIL_FULL,
    STR_ID_PHB_NOT_DUPLICATED_EMAIL_FULL,
    STR_ID_PHB_NOT_SAVED_SNE_FULL,
    STR_ID_PHB_NOT_MOVED_SNE_FULL,
    STR_ID_PHB_NOT_COPIED_SNE_FULL,
    STR_ID_PHB_NOT_DUPLICATED_SNE_FULL,
    STR_ID_PHB_PROCESSING_USIM,
    /* NLF */
    STR_ID_PHB_NLF,
    STR_ID_PHB_NLF_SIM,
    STR_ID_PHB_NLF_PHONE,
    STR_ID_PHB_NLF_BOTH,
    /* 3D Avatar */
    STR_ID_PHB_AVATAR_SELECT_FILE,
    STR_ID_PHB_AVATAR_SELECTED,
    STR_ID_PHB_CANT_VIEW_AVATAR_IN_CALL,
    STR_ID_PHB_AVATAR_NOT_EXISTED,
    STR_ID_PHB_PRINT,
    STR_ID_PHB_CANT_SELECT_CALLER_VIDEO_IN_CALL,
    /* Multi Operation */
    STR_ID_PHB_MULTI_OP,
    STR_ID_PHB_MULTI_OP_SELECT_ALL,
    STR_ID_PHB_MULTI_OP_UNSELECT_ALL,
    STR_ID_PHB_MULTI_OP_SELECT_ALL_FROM_SIM,
    STR_ID_PHB_MULTI_OP_UNSELECT_ALL_FROM_SIM,
    STR_ID_PHB_MULTI_OP_SELECT_ALL_FROM_PHONE,
    STR_ID_PHB_MULTI_OP_UNSELECT_ALL_FROM_PHONE,
    STR_ID_PHB_MULTI_OP_COPY_SELECTED,
    STR_ID_PHB_MULTI_OP_DELETE_SELECTED,
    STR_ID_PHB_MULTI_OP_COPY_SELECTED_ASK,
    STR_ID_PHB_MULTI_OP_DELETE_SELECTED_ASK,
    STR_ID_PHB_MULTI_OP_PRESS_STAR,
    STR_ID_PHB_MULTI_OP_PRESS_CENTER,
    STR_ID_PHB_MULTI_OP_TOUCH_BOX,
    STR_ID_PHB_MULTI_OP_PRESS_STAR_TOUCH_BOX,
    STR_ID_PHB_MULTI_OP_PRESS_CENTER_TOUCH_BOX,
    STR_ID_PHB_MULTI_OP_DEST_FULL,
    /* vCard 3.0 */
    STR_ID_PHB_VCARD_VERSION,
    STR_ID_PHB_VCARD_VERSION_21,
    STR_ID_PHB_VCARD_VERSION_30,
    STR_ID_PHB_ENUM_TOTAL
} STRINGID_LIST_PHONE_BOOK;

/* image ids */
typedef enum
{
    IMG_SCR_PBOOK_CAPTION = PHONE_BOOK_BASE + 1,
    IMG_MITEM1010,
    IMG_MITEM1011,
    IMG_MITEM1012,
    IMG_MITEM1013,
    IMG_MITEM1014,
    IMG_MITEM1015,
    IMG_MITEM1010_SEARCH,
    IMG_MITEM1011_INPUT_METHOD,
    IMG_MITEM1051,
    IMG_MITEM1052,
    IMG_MITEM1101,
    IMG_MITEM1102,
    IMG_MITEM1103,
    IMG_ENTRY_MOVED_MSG,
    IMG_ENTRY_DUPLICATED_MSG,
    IMG_PROCESSING_PHONEBOOK,
    IMG_STORAGE_SIM,
    IMG_STORAGE_HANDSET,
    IMG_NAME,
    IMG_MOBILE_NUMBER,
    IMG_HOME_NUMBER,
    IMG_COMPANY_NAME,
    IMG_EMAIL_ADDRESS,
    IMG_OFFICE_NUMBER,
    IMG_FAX_NUMBER,
    IMG_PICTURE,
    IMG_RING_TONE,
    IMG_CALLER_GROUP,
    IMG_ID_PHB_CALLERGRP_MEMBER,
    IMG_ID_PHB_ASSOCIATE_VIDEO,
    IMG_ID_PHB_BIRTHDAY,
    IMG_ID_PHB_TITLE,
    IMG_ID_PHB_URL,
    IMG_ID_PHB_ADDRESS,
    IMG_ID_PHB_NOTE,
    IMG_ID_PHB_ANR,
    IMG_ID_PHB_SNE,
    IMG_ID_PHB_IMPS,
    IMG_ID_PHB_POC,
    IMG_ID_PHB_VOIP,
    IMG_PHB_SEARCH_ENTRY,
    IMG_PHB_ADD_ENTRY,
    IMG_PHB_DELETE_ALL,
    IMG_PHB_DELETE_ALL_ONE,
    IMG_PHB_COPY_ALL,
    IMG_PHB_MULTI_OP,
    IMG_PHB_OWNER_NUMBER,
    IMG_PHB_SDN,
    IMG_PHB_SOS_NUMBER,
    IMG_PHB_SPEED_DIAL,
    IMG_PHB_CALLER_GROUP,
    IMG_PHB_SETTINGS,
    IMG_EDIT_LSK,
    IMG_DONE_RSK,
    IMG_VIEW_LSK,
    IMG_CG_NAME,
    IMG_CG_ALERT_TYPE,
    IMG_CG_RING_TONE,
    IMG_CG_PICTURE,
    IMG_CG_INDICATOR_LITE,
    IMG_SDL_CALL_LSK,
    IMG_COPIED,
    IMG_COPY_ALL_ABORT,
    IMG_COPY_ALL_ABORTING,
    IMG_ID_PHB_NO_IMAGE,
    IMG_ID_PHB_QUICK_SEARCH,        /* Quick Search */
    IMG_ID_PHB_QUICK_SEARCH_FIND,   /* Quick Search */
    IMG_ID_PHB_LIST_ICON1,
    IMG_ID_PHB_CALLER_PIC,
    IMG_ID_PHB_CALLER_PIC_1,
    IMG_ID_PHB_CALLER_RING,
    IMG_ID_PHB_CALLER_RING_1,
    IMG_ID_PHB_CALLER_VIDEO,
    IMG_ID_PHB_NLF,
    IMG_PHB_DEFAULT = PHONE_BOOK_BASE + 800,
    IMG_PHB_PICTURE1,
    IMG_PHB_PICTURE2,
    IMG_PHB_PICTURE3,
    IMG_PHB_PICTURE4,
    IMG_PHB_VIDEO_DEFAULT,    
    VDO_ID_PHB_MTCALL_1 = PHONE_BOOK_BASE + 900,
    VDO_ID_PHB_MTCALL_2,
    VDO_ID_PHB_MTCALL_3,
    VDO_ID_PHB_MTCALL_4,
    VDO_ID_PHB_MTCALL_5,
    VDO_ID_PHB_MTCALL_6,
    VDO_ID_PHB_MTCALL_7,
    VDO_ID_PHB_MTCALL_8,
    VDO_ID_PHB_MTCALL_9,
    VDO_ID_PHB_MTCALL_10,
    MFH_ID_PHB_MTCALL_1,
    MFH_ID_PHB_MTCALL_2,
    MFH_ID_PHB_MTCALL_3,
    MFH_ID_PHB_MTCALL_4,
    MFH_ID_PHB_MTCALL_5,
    MFH_ID_PHB_MTCALL_6,
    MFH_ID_PHB_MTCALL_7,
    MFH_ID_PHB_MTCALL_8,
    MFH_ID_PHB_MTCALL_9,
    MFH_ID_PHB_MTCALL_10
} IMAGEID_LIST_PHONE_BOOK;

/* Phonebook resource menu items */
typedef enum
{
#if defined(__MMI_PHB_QUICK_SEARCH__)
    MMI_PHB_MAIN_QUICK_SEARCH,
#endif 
    MMI_PHB_MAIN_SEARCH_ENTRY,
    MMI_PHB_MAIN_NEW_ENTRY,
#if defined(__MMI_PHB_MULTI_OPERATION__)
    MMI_PHB_MAIN_MULTI_OP,
#else /* defined(__MMI_PHB_MULTI_OPERATION__) */
    MMI_PHB_MAIN_DELETE_ALL,
#endif /* defined(__MMI_PHB_MULTI_OPERATION__) */
    MMI_PHB_MAIN_CALLER_GROUPS,
    MMI_PHB_MAIN_SETTINGS,
#if defined(__MMI_PHB_CALLER_RES_SETTING__)
    MMI_PHB_MAIN_CALLER_PIC,
    MMI_PHB_MAIN_CALLER_RING,
#if defined(__MMI_INCOMING_CALL_VIDEO__)
    MMI_PHB_MAIN_CALLER_VIDEO,
#endif 
#endif /* defined(__MMI_PHB_CALLER_RES_SETTING__) */ 
    MMI_PHB_MAIN_EXTRA_NUMBER,
    MMI_PHB_MAIN_NO_SIM_ENUM_TOTAL = MMI_PHB_MAIN_EXTRA_NUMBER,
#if !defined(__MMI_PHB_MULTI_OPERATION__)
    MMI_PHB_MAIN_COPY_ALL,
#endif /* defined(__MMI_PHB_MULTI_OPERATION__) */
    MMI_PHB_MAIN_ENUM_TOTAL
} mmi_phb_main_menu_enum;


#if defined(__MMI_SWFLASH__)
/* Phonebook incoming call swflash items */
typedef enum
{
    MMI_PHB_SWFLASH_1,
    MMI_PHB_SWFLASH_TOTAL
} mmi_phb_swflash_enum;
#endif /* __MMI_SWFLASH__ */

#endif /* _PHONEBOOKDEFRES_H */ 

