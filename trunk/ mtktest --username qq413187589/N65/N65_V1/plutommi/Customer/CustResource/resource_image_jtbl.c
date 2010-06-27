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
#include "CustDataRes.h"
#include "CustThemesRes.h"
#include "kal_release.h"
#include "custom_jump_tbl.h"
#include "verno.h"

#ifdef __MTK_TARGET__
#pragma arm section rwdata = "RESOURCE_JUMP_TBL"
#endif /* __MTK_TARGET__ */

Type_Preamble_Content ImageResPreamble = {
	VERNO_STR,
	(kal_uint32)(RESOURCE_TYPE_IMAGE + CURRENT_IMAGE_RES_VERSION), 
	CONST_RES_IMAGE_ADDR,
	CONST_RES_IMAGE_TBL_SIZE,
	CONST_RES_IMAGE_CONTENT_SIZE, 
	(kal_uint32)MAGIC_NUMBER
};

#ifdef __MTK_TARGET__
#pragma arm section rwdata
#endif /* __MTK_TARGET__ */

extern const unsigned short  mtk_CurrMaxImageNum; 
extern const CUSTOM_IMAGE mtk_nCustImageNames[];
extern S32 mtk_n_MMI_themes;
extern const MMI_theme *mtk_MMI_themes[];
extern const S8 theme_phone_model[];

void* image2ndJumpTbl[] = {(void*) mtk_nCustImageNames,(void*) &mtk_CurrMaxImageNum, 
	                                        (void*) mtk_MMI_themes,(void*) &mtk_n_MMI_themes, (void *) theme_phone_model};


