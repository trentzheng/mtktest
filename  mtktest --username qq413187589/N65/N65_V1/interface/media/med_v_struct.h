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
 * med_v_struct.h
 *
 * Project:
 * --------
 *   Maui
 *
 * Description:
 * ------------
 *   This file includes primary global variables of media-v task.
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

#ifndef MED_V_NOT_PRESENT

#ifndef _MED_V_STRUCT_H
#define _MED_V_STRUCT_H

/*==== DEFINES ========*/
typedef struct
{
    LOCAL_PARA_HDR
}
media_visual_record_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
}
media_visual_record_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR 
    kal_uint8 event;
}
media_encode_visual_data_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
}
media_encode_meta_data_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR 
    kal_int16 result;
}
media_visual_record_finish_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
}
media_visual_stop_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
}
media_visual_stop_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR 
    kal_uint8 lcd_id;
    kal_uint16 lcd_start_x;
    kal_uint16 lcd_start_y;
    kal_uint16 lcd_end_x;
    kal_uint16 lcd_end_y;
    kal_uint16 roi_offset_x;
    kal_uint16 roi_offset_y;
    kal_uint32 update_layer;
    kal_uint32 hw_update_layer;
}
media_visual_play_req_struct;

typedef struct
{
    LOCAL_PARA_HDR 
    kal_uint32 audio_start_frame_num;
}
media_visual_play_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR 
    kal_uint8 event;
}
media_decode_visual_data_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR 
    kal_int16 result;
}
media_visual_play_finish_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR 
    kal_uint32 frame_num;
    kal_uint8 display;
}
media_visual_seek_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
}
media_visual_seek_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 mode;
}
media_visual_file_merge_req_struct;

typedef struct
{
    LOCAL_PARA_HDR 
    kal_int16 result;
}
media_visual_file_merge_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR 
    kal_uint8 event;
    kal_bool is_update_fps;
}
media_mjpeg_encode_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
}
media_visual_temp_1_struct;

typedef struct
{
    LOCAL_PARA_HDR
}
media_visual_temp_2_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_wchar *filename ;
    void* cache_p; 
    kal_int32 cache_size;
    void* file_buf_p;
    kal_int32 file_buf_size;
    void* proc_buf_p;
    kal_int32 proc_buf_size;
    kal_uint32 *build_cache_progress;
}
media_visual_audio_cache_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32 *build_cache_progress;
}
media_visual_audio_cache_process_struct;

//typedef struct 
//{
//   LOCAL_PARA_HDR
//} 
//media_visual_audio_build_cache_fail_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 result;
}
media_v_audio_record_pause_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 result;
}
media_v_audio_record_resume_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 event;
}
media_v_audio_read_data_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 result;
}
media_v_audio_record_error_ind_struct;


#endif /* _MED_V_STRUCT_H */ 

#endif /* MED_V_NOT_PRESENT */ 

