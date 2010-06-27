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
#ifndef _CUSTOM_RELEASE_VERNO_H_
#define _CUSTOM_RELEASE_VERNO_H_

/* 
 * The resource bin preamble = CUSTOMER_ID (40 bytes)  + resource_version (4 bytes) + magic# (4 bytes)
 */

#define ENTRY_PROJECT_ID         8
#define ENTRY_RESOURCE_TYPE         1
#define ENTRY_STARTADDR_NUM         1
#define ENTRY_TBL_SIZE_NUM       1
#define ENTRY_CONTENT_SIZE_NUM      1
#define ENTRY_MAGIC_NUM          1

/* (32-byte custom-string) + (4-byte reource type) + (4-byte start addr) + (4-byte table size) + (4-byte content size) + (4-byte magic #)  =  13 uint32 */
#define ENTRY_PREAMBLE  (ENTRY_PROJECT_ID+ENTRY_RESOURCE_TYPE+ENTRY_STARTADDR_NUM+ENTRY_TBL_SIZE_NUM+ENTRY_CONTENT_SIZE_NUM+ENTRY_MAGIC_NUM)

#define PROJECTID_LEN   (ENTRY_PROJECT_ID*sizeof(void*))

#define RESOURCE_TYPE_OFFSET     (ENTRY_PROJECT_ID)
#define STARTADDR_NUM_OFFSET     (ENTRY_PROJECT_ID+ENTRY_RESOURCE_TYPE)
#define TBL_SIZE_NUM_OFFSET      (STARTADDR_NUM_OFFSET+ENTRY_STARTADDR_NUM)
#define CONTENT_SIZE_NUM_OFFSET  (TBL_SIZE_NUM_OFFSET+ENTRY_TBL_SIZE_NUM)
#define MAGIC_NUM_OFFSET         (CONTENT_SIZE_NUM_OFFSET+ENTRY_CONTENT_SIZE_NUM)

/* resource_version = 1-byte res_type + 3-byte version# */
#define RESOURCE_TYPE_MASK        0xFF000000
#define RESOURCE_VERSION_MASK  0x00FFFFFF

#define RESOURCE_TYPE_AUDIO 0x00000000
#define RESOURCE_TYPE_IMAGE 0x01000000
#define RESOURCE_TYPE_FONT   0x02000000
#define RESOURCE_TYPE_STR      0x03000000
#define RESOURCE_TYPE_J2ME    0x04000000
#define RESOURCE_TYPE_IME     0x05000000
#define RESOURCE_TYPE_LANG_PACK     0x06000000

/* __CUSTPACK_MULTIBIN Cylen BEGIN */
#define RESOURCE_TYPE_CUSTPACK      0x07000000
#define RESOURCE_TYPE_AUTOGEN_AUDIO 0x08000000  /* 101205 audio resource Calvin added */
#define custpack_verno "My 1st time"
/* __CUSTPACK_MULTIBIN Cylen END */

#define CURRENT_AUDIO_RES_VERSION 0
#define CURRENT_IMAGE_RES_VERSION 0
#define CURRENT_FONT_RES_VERSION 0
#define CURRENT_STR_RES_VERSION 0
#define CURRENT_J2ME_RES_VERSION 0
#define CURRENT_IME_RES_VERSION 0
#define CURRENT_LANG_PACK_RES_VERSION 0
/* __CUSTPACK_MULTIBIN Cylen BEGIN */
#define CURRENT_CUSTPACK_RES_VERSION 0
/* __CUSTPACK_MULTIBIN Cylen END */
#define CURRENT_AUTOGEN_AUDIO_RES_VERSION 0     /* 101205 audio resource Calvin added */

#define MAGIC_NUMBER 0x12345678

/* extern kal_char verno_str[32]; */

typedef struct
{
    kal_char ProjectID[PROJECTID_LEN];
    kal_uint32 Resource_version;
    kal_uint32 *StartAddress;
    kal_uint32 TableSize;
    kal_uint32 ContentSize;
    kal_uint32 Magic;
} Type_Preamble_Content;

#endif /* _CUSTOM_RELEASE_VERNO_H_ */ 

