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
 *  MMI_inet_app_trc.h
 *
 * Project:
 * --------
 *  MAUI
 *
 * Description:
 * ------------
 *  
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
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/
#ifndef _MMI_INET_APP_TRC_H_
#define _MMI_INET_APP_TRC_H_

/* PoC */
TRC_MSG(MMI_POC_ENTRY_CALL_HISTORY_INFO,"*----[PoC] mmi_poc_entry_call_history_info----*")

TRC_MSG(MMI_POC_ENTRY_STATUS,"*----[PoC] mmi_poc_entry_status----*")
TRC_MSG(MMI_POC_ENTRY_REGISTERING,"*----[PoC] mmi_poc_entry_registering----*")
TRC_MSG(MMI_POC_ENTRY_INVITING,"*----[PoC] mmi_poc_entry_inviting----*")
TRC_MSG(MMI_POC_ENTRY_MO_RINGING,"*----[PoC] mmi_poc_entry_mo_ringing----*")
TRC_MSG(MMI_POC_ENTRY_MT_RINGING,"*----[PoC] mmi_poc_entry_mt_ringing----*")
TRC_MSG(MMI_POC_ENTRY_MT_RINGING_ANSWERED,"*----[PoC] mmi_poc_entry_mt_ringing_answered----*")
TRC_MSG(MMI_POC_ENTRY_CONNECTED_IDLE,"*----[PoC] mmi_poc_entry_connected_idle----*")
TRC_MSG(MMI_POC_ENTRY_TALK_OPTIONS,"*----[PoC] mmi_poc_entry_talk_options----*")
TRC_MSG(MMI_POC_ENTRY_CM_ADD_USER,"*----[PoC] mmi_poc_entry_cm_add_user----*")
TRC_MSG(MMI_POC_ENTRY_CM_ADD_USER_CFRM,"*----[PoC] mmi_poc_entry_cm_add_user_cfrm----*")
TRC_MSG(MMI_POC_ENTRY_REVOKE,"*----[PoC] mmi_poc_entry_revoke----*")
TRC_MSG(MMI_POC_ENTRY_TALKING,"*----[PoC] mmi_poc_entry_talking----*")
TRC_MSG(MMI_POC_ENTRY_MEDIA_PROCESSING,"*----[PoC] mmi_poc_entry_media_processing----*")
TRC_MSG(MMI_POC_ENTRY_LISTENING,"*----[PoC] mmi_poc_entry_listening----*")
TRC_MSG(MMI_POC_ENTRY_PERSONAL_ALERT,"*----[PoC] mmi_poc_entry_personal_alert----*")

TRC_MSG(MMI_POC_EXIT_RELEASE_PTT,"*----[PoC] mmi_poc_exit_release_ptt----*")
TRC_MSG(MMI_POC_EXIT_MO_RINGING,"*----[PoC] mmi_poc_exit_mo_ringing----*")
TRC_MSG(MMI_POC_EXIT_MT_RINGING,"*----[PoC] mmi_poc_exit_mt_ringing----*")
TRC_MSG(MMI_POC_EXIT_MT_RINGING_ANSWERED,"*----[PoC] mmi_poc_exit_mt_ringing_answered----*")
TRC_MSG(MMI_POC_EXIT_CONNECTED_IDLE,"*----[PoC] mmi_poc_exit_connected_idle----*")
TRC_MSG(MMI_POC_EXIT_TALKING,"*----[PoC] mmi_poc_exit_talking----*")
TRC_MSG(MMI_POC_EXIT_LISTENING,"*----[PoC] mmi_poc_exit_listening----*")
TRC_MSG(MMI_POC_EXIT_PERSONAL_ALERT,"*----[PoC] mmi_poc_exit_personal_alert----*")

TRC_MSG(MMI_POC_PTT_PRESS,"*----[PoC] mmi_poc_ptt_press----*")
TRC_MSG(MMI_POC_PTT_RELEASE,"*----[PoC] mmi_poc_ptt_release----*")
TRC_MSG(MMI_POC_DISCONNECT_BACK,"*----[PoC] mmi_poc_disconnect_back----*")
TRC_MSG(MMI_POC_DISCONNECT_END,"*----[PoC] mmi_poc_disconnect_end----*")

TRC_MSG(MMI_POC_INVITE_RSP,"*----[PoC] mmi_poc_invite_rsp, ptt:%d----*")
TRC_MSG(MMI_POC_MT_RINGING_YES,"*----[PoC] mmi_poc_mt_ringing_yes----*")
TRC_MSG(MMI_POC_MT_RINGIN_NO,"*----[PoC] mmi_poc_mt_ringin_no----*")
TRC_MSG(MMI_POC_MT_RINGING_END,"*----[PoC] mmi_poc_mt_ringing_end----*")
TRC_MSG(MMI_POC_FLOOR_TAKE_KEY,"*----[PoC] mmi_poc_floor_take_key----*")
TRC_MSG(MMI_POC_TALKING_RELEASE_PTT,"*----[PoC] mmi_poc_talking_release_ptt----*")
TRC_MSG(MMI_POC_RESET_ALL_AUDIO,"*----[PoC] mmi_poc_reset_all_audio----*")
TRC_MSG(MMI_POC_CALL_STATE,"*----[PoC] mmi_call_state: %d----*")   

    /* Email */
    TRC_MSG(MMI_EMAIL_PS_START_RSP,"*----[Email] mmi_email_ps_start_rsp => entry_scr:[%d]----*")
    TRC_MSG(MMI_EMAIL_PS_STOP_RSP,"*----[Email] mmi_email_ps_stop_rsp  => stop_cause:[%d], entry_src:[%d]----*")
    TRC_MSG(MMI_EMAIL_PS_LIST_FOLDERS_RSP,"*----[Email] mmi_email_ps_list_folders_rsp  => listFolderReqState:[%d] ----*")
    TRC_MSG(MMI_EMAIL_PS_AUTOCHECK_EXPIRY_IND,"*----[Email] mmi_email_ps_auto_chk_ind => ActionState:[%d] ----*")
    TRC_MSG(MMI_EMAIL_PS_ABORT_RSP,"*----[Email] mmi_email_ps_abort_rsp => curr_fldr:[%d]----*")
    TRC_MSG(MMI_EMAIL_RENAME_ATTACH_DELETE_FILE, "*----[Email] Rename attach delete file ret:[%d]----*")
    TRC_MSG(MMI_EMAIL_RENAME_ATTACH_RENAME_FILE, "*----[Email] Rename attach rename file ret:[%d]----*")
    TRC_MSG(MMI_EMAIL_RENAME_TO_COMPOSE, "*----[Email] rename_to_compose => updated total comp_info size:[%d]----*")
    TRC_MSG(MMI_EMAIL_RENAME_READ_TO_COMP_TYPE, "*----[Email] rename_read_tp_comp => is_drm:[%d], mime_type:[%d], mime_subtype:[%d]----*")
    TRC_MSG(MMI_EMAIL_RENAME_READ_TO_COMP_SIZE, "*----[Email] rename_read_to_comp => updated total comp_info size:[%d]----*")
    TRC_MSG(MMI_EMAIL_GET_MINE_TYPE, "*----[Email] get_mine_type => mime_type:[%d], mime_subtype:[%d]----*")
    TRC_MSG(MMI_EMAIL_DRM_IS_FILE_LOCK, "*----[Email] drm_is_file_lock => method:[%d], can_fwd:[%d], is_drm_file:[%d]----*")
    TRC_MSG(MMI_EMAIL_READ_TEMPLATE_ERROR, "*----[Email] ERROR: mmi_email_read_template_from_nvram => index[%d] out of bound----*")
    TRC_MSG(MMI_EMAIL_GET_TEMPLATE_INDEX, "*----[Email] mmi_email_get_template_index => index[%d]----*")
    TRC_MSG(MMI_EMAIL_PS_SEND_MSG, "*----[Email] mmi_email_ps_send_msg => msg_id:[%d], stop_cause:[%d]----*")
    TRC_MSG(MMI_EMAIL_PS_DEINIT_REQ, "*----[Email] mmi_email_ps_deinit_req => entry_src:[%d]")
    TRC_MSG(MMI_EMAIL_PS_DEINIT_RSP, "*----[Email] mmi_email_ps_deinit_rsp => entry_src:[%d]")
    TRC_MSG(MMI_EMAIL_PS_COMPOSE_FILE_ATTACH, "*----[Email] mmi_email_ps_compose_fill_attach => rename file[%d] attach[%d]----*")
    TRC_MSG(MMI_EMAIL_PS_COMPOSE_FILE_ATTACH_DRM, "*----[Email] mmi_email_ps_compose_fill_attach => is_drm:[%d], mime_type:[%d], mime_subtype:[%d]----*")
    TRC_MSG(MMI_EMAIL_FLDR_GET_MSG_ATTACH_DRM, "*----[Email] mmi_email_fldr_get_msg_attch => is_drm:[%d], mime_type:[%d], mime_subtype:[%d]----*")
    TRC_MSG(MMI_EMAIL_COMP_ADD_SIG_DELETE_FILE, "*----[Email] mmi_email_comp_add_sig => delete file ret:[%d]----*")
    TRC_MSG(MMI_EMAIL_COMP_RESET_MEMBER_DELETE_FILE, "*----[Email] mmi_email_comp_reset_member => delete file ret:[%d]----*")
    TRC_MSG(MMI_EMAIL_COMP_ADD_ATTACH_CALLBACK_DELETE_FILE, "*----[Email] mmi_email_comp_add_attach_callback => delete file ret:[%d]----*")
    TRC_MSG(MMI_EMAIL_COMP_ADD_ATTACH_CALLBACK_FILE_SIZE, "*----[Email] mmi_email_comp_add_attach_callback => File Size:[%d], total size:[%d]----*")
    TRC_MSG(MMI_EMAIL_COMP_ATTACH_COPY_CALLBACK_FILE_SIZE, "*----[Email] mmi_email_comp_attach_copy_callback => File Size:[%d], total size:[%d]----*")
    TRC_MSG(MMI_EMAIL_COMP_PRE_ENTRY_VIEW_ATTACH_DRM, "*----[Email] mmi_email_comp_pre_entry_view_attach => method:[%d], permission:[%d]----*")
    TRC_MSG(MMI_EMAIL_COMP_ATTCH_DEL_DONE_DEL_FILE, "*----[Email] mmi_email_comp_attch_del_done => Delete file Ret:[%d]----*")
    TRC_MSG(MMI_EMAIL_COMP_ATTCH_DEL_DONE_FILE_SIE, "*----[Email] mmi_email_comp_attch_del_done => File Size:[%d], Updated Total Size:[%d]----*")
    TRC_MSG(MMI_EMAIL_ENTRY_READ_ATTCH_VIEW_DRM, "*----[Email] mmi_email_entry_read_attch_view => permission:[%d], method:[%d]----*")
    TRC_MSG(MMI_EMAIL_PROF_SAVE_SIG_DEL_FILE_NEW, "*----[Email] mmi_email_prof_save_sig => Delete file Ret:[%d]----*")
    TRC_MSG(MMI_EMAIL_PROF_SAVE_SIG_DEL_FILE_OLD, "*----[Email] mmi_email_prof_save_sig => Delete old file Ret:[%d]----*")
    TRC_MSG(MMI_EMAIL_PROF_SIG_SAVE_FILE_CALLBACK_DEL_FILE_OLD, "*----[Email] mmi_email_prof_sig_save_file_callback => Delete old file Ret:[%d]----*")
    TRC_MSG(MMI_EMAIL_ENTRY_PROF_SIG_VIEW_ATTACH_DRM, "*----[Email] mmi_email_entry_prof_sig_view_attach => method:[%d]----*")
    TRC_MSG(MMI_EMAIL_APP_EXEC_SENT_DEL_FILE, "*----[Email] mmi_email_app_exec_send => Delete file Ret:[%d]----*")
    TRC_MSG(MMI_EMAIL_FMGR_EXEC_SENT_DEL_FILE, "*----[Email] mmi_email_fmgr_exec_send => Delete file Ret:[%d]----*")
    TRC_MSG(MMI_EMAIL_INSERT_TEMPLATE, "*----[Email] mmi_email_insert_template----*")
    TRC_MSG(MMI_EMAIL_ENTRY_TEMPLATE_LIST, "*----[Email] mmi_email_entry_template_list----*")
    TRC_MSG(MMI_EMAIL_ENTRY_TEMPLATE_OPTION, "*----[Email] mmi_email_entry_template_option----*")
    TRC_MSG(MMI_EMAIL_ENTRY_TEMPLATE_EDIT, "*----[Email] mmi_email_entry_template_edit----*")
    TRC_MSG(MMI_EMAIL_ENTRY_TEMPLATE_EDIT_OPTION, "*----[Email] mmi_email_entry_template_edit_option----*")

#endif /* _MMI_INET_APP_TRC_H_ */

