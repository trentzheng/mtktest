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
 * VRSIEnumh
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is the resource enum of VRSI.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/
#ifndef _MMI_VRSIRESDEF_H
#define _MMI_VRSIRESDEF_H

#include "MMIDataType.h"

/* 
 * Typedef 
 */
typedef enum
{
    SCR_ID_VRSI_SETTING_MENU = VRSI_BASE + 1,
    SCR_ID_VRSI_RCG_MAIN,
    SCR_ID_VRSI_INIT_PROCESSING,
    SCR_ID_VRSI_HELP,
    SCR_ID_VRSI_DIGIT_DIAL_MAIN,
    SCR_ID_VRSI_DIGIT_DIAL_CONFIRM,
    SCR_ID_VRSI_DIGIT_DIAL_CONFIRM_IN_HISTORY,
    SCR_ID_VRSI_DIGIT_ADAPT,
    SCR_ID_VRSI_DIGIT_ADAPT_PROMPT,
    SCR_ID_VRSI_TRAIN_TAG_MAIN,
    SCR_ID_VRSI_TRAIN_OPTION_MAIN,
    SCR_ID_VRSI_TRAIN_OPTION_ADD_PROMPT,
    SCR_ID_VRSI_TRAIN_SHORTCUT_LIST,
    SCR_ID_VRSI_TRAIN_CITY_LIST,
    SCR_ID_VRSI_TRAIN_TAG_STATUS,
    SCR_ID_VRSI_NAME_DIAL_CONFIRM,
    SCR_ID_VRSI_NAME_DIAL_CONFIRM_IN_HISTORY,
    SCR_ID_VRSI_NAME_DIAL_MULTI_NUM,
    SCR_ID_VRSI_NAME_DIAL_MULTI_NUM_IN_HISTORY,
    SCR_ID_VRSI_NAME_DIAL_MULTI_RECORD,
    SCR_ID_VRSI_NAME_DIAL_MULTI_RECORD_IN_HISTORY,
    SCR_ID_VRSI_NAME_QUERY_LIST1,
    SCR_ID_VRSI_REDIAL_PROMPT,
    SCR_ID_VRSI_SWITCH_PROFILE_PROMPT,
    SCR_ID_VRSI_OPEN_SCUT_PROMPT
} vrsi_scr_id_enum;

typedef enum
{
    /* App string */
    STR_ID_VRSI_APP = VRSI_BASE + 1,
    STR_ID_VRSI_SETTING,
    STR_ID_VRSI_INIT_PROCESSING,
    STR_ID_VRSI_PROCESSING,
    STR_ID_VRSI_ENABLE_RCG,
    STR_ID_VRSI_DIGIT_ADAPT,
    STR_ID_VRSI_HELP,
    STR_ID_VRSI_REDIAL_DIALED,
    STR_ID_VRSI_REDIAL_MISSED,
    STR_ID_VRSI_REDIAL_RECEIVED,
    STR_ID_VRSI_PROFILE_SILENT,
    STR_ID_VRSI_SHORTCUT_ITEM,
    STR_ID_VRSI_CITY_ITEM,
    /* Prompt String */
    STR_ID_VRSI_HELP_PROMPT,
    STR_ID_VRSI_GRAMMAR1_PROMPT,
    STR_ID_VRSI_GRAMMAR2_PROMPT,
    STR_ID_VRSI_GRAMMAR2_PROMPT_MOBILE,
    STR_ID_VRSI_GRAMMAR2_PROMPT_HOME,
    STR_ID_VRSI_GRAMMAR2_PROMPT_OFFICE,
    STR_ID_VRSI_GRAMMAR2_PROMPT_FAX,
    STR_ID_VRSI_GRAMMAR2_PROMPT_CANCEL,
    STR_ID_VRSI_GRAMMAR3_PROMPT,
    STR_ID_VRSI_GRAMMAR3_PROMPT_SELECT,
    STR_ID_VRSI_GRAMMAR4_PROMPT,
    STR_ID_VRSI_DIGIT_PROMPT,
    STR_ID_VRSI_DIGIT_ADAPT_PROMPT,
    STR_ID_VRSI_TRAIN_TAG_PROMPT1,
    STR_ID_VRSI_TRAIN_TAG_PROMPT2,
    STR_ID_VRSI_DIAL_PROMPT,
    STR_ID_VRSI_DIALING_PROMPT,
    STR_ID_VRSI_TTS_INVALID_CMD,
    STR_ID_VRSI_TTS_OPERATE_BY_KEY,
    STR_ID_VRSI_TTS_RECORD,
    STR_ID_VRSI_TTS_RECORD_NO_DATA,
    STR_ID_VRSI_TTS_NUMBER_NO_DATA,
    STR_ID_VRSI_TTS_FOUND,
    STR_ID_VRSI_GRAMMAR5_PROMPT,
    STR_ID_VRSI_SPEAK_AGAIN_PROMPT,
    STR_ID_VRSI_NO_NUMBER_PROMPT,
    STR_ID_VRSI_SWITCHED_PROMPT,
    STR_ID_VRSI_CANT_SWITCH_PROMPT,
    STR_ID_VRSI_OPENING_PROMPT,
    STR_ID_VRSI_CITY_TIME,
    STR_ID_VRSI_CITY_TIME_AM,
    STR_ID_VRSI_CITY_TIME_PM,
    STR_ID_VRSI_CITY_TIME_HOUR,
    STR_ID_VRSI_CITY_TIME_MINUTE,
    STR_ID_VRSI_DELETE_ALL_QUESTION,
    STR_ID_VRSI_DELETE_QUESTION,
    /* Error String */
    STR_ID_VRSI_INIT_FAIL,
    STR_ID_VRSI_LANG_NOT_SUPPORT,
    STR_ID_VRSI_DIAL_DIGIT_TOO_LONG,
    STR_ID_VRSI_NOT_READY,
    STR_ID_VRSI_RCG_NOT_FOUND,
    STR_ID_VRSI_SD_TAG_FULL,
    STR_ID_VRSI_BUSY,
    STR_ID_VRSI_ALREADY_IN_MODE,
    /* Traing String */
    STR_ID_VRSI_TRAIN_TAG,
    STR_ID_VRSI_NAME_LIST,
    STR_ID_VRSI_SHORTCUT_LIST,
    STR_ID_VRSI_CITY_LIST,
    STR_ID_VRSI_TRAIN_TAG_STATUS,
    STR_ID_VRSI_PLAYBACK,
    STR_ID_VRSI_REFRESH_SIM
} vrsi_str_id_enum;

typedef enum
{
    IMG_ID_VRSI_APP = VRSI_BASE + 1,
    IMG_ID_VRSI_RECORDING,
    IMG_ID_VRSI_SHORTCUT
} vrsi_img_id_enum;

/* 
 * Define
 */

/* 
 * Extern Global Variable
 */

/* 
 * Extern Global Function
 */

#endif /* _MMI_VRSIRESDEF_H */ /* #ifndef _MMI_VRSIRESDEF_H */

