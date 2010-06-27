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
 *  Modification Notice:
 *  --------------------------
 *  This software is modified by MediaTek Inc. and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2001
 *
 *******************************************************************************/
 /*****************************************************************************
 *
 * Filename:
 * ---------
 *  CertManMMIResDef.h
 *
 * Project:
 * --------
 * 
 *
 * Description:
 * ------------
 *  This file is contains enums for screen, image and strings.
 *
 * Author:
 * ------------
 * -------
 *
************************************************************************************/

#ifndef MMI_CERTMAN_RES_DEF_H
#define MMI_CERTMAN_RES_DEF_H

#ifdef __CERTMAN_SUPPORT__

typedef enum
{
    /* Import */
    SCR_ID_CERTMAN_GET_DECR_PWD = MMI_CERTMAN_BASE + 1,
    SCR_ID_CERTMAN_FILE_INFO,
    SCR_ID_CERTMAN_CERTIFICATE_DETAILS,
    SCR_ID_CERTMAN_CERTIFICATE_INPUTS,
    SCR_ID_CERTMAN_CERTIFICATE_KEY_USAGES,
    /* Import */

    /* Launch */

    SCR_ID_CERTMAN_CERTIFICATE_GROUPS,
    SCR_ID_CERTMAN_CERTIFICATE_LIST,
    SCR_ID_CERTMAN_CERTIFICATE_OPTIONS,
    SCR_ID_CERTMAN_CERTIFICATE_VIEW,
    SCR_ID_CERTMAN_CERTIFICATE_SET_KEY_USAGES,
    /* Launch */

    /* Select */
    SCR_ID_CERTMAN_SELECT_CERTIFICATE,
    /* private key protection */
    SCR_ID_CERTMAN_PRIVKEY_PASSWORD,
    /* View certificate contents only */
    SCR_ID_CERTMAN_VIEW_CERTIFICATE_CONTENTS,
    SCR_ID_CERTMAN_INVALID_CERT_OPTION,
    SCR_ID_CERTMAN_INVALID_CERT_LABEL,
    SCR_ID_CERTMAN_USER_CERTIFICATE_LIST_BY_ISSUER,
    SCR_ID_CERTMAN_PROGRESS_SCREEN,
    SCR_ID_CERTMAN_INCORRECT_PWD_SCREEN_POPUP,
    SCR_ID_CERTMAN_FULL_SCREEN_POPUP,
    SCR_ID_CERTMAN_GENERAL_POPUP_SCREEN,
    /* add new screen ID above this line */
    SCR_ID_CERTMAN_END
} MMI_CERTMAN_SCR_IDS;

typedef enum
{
    /* Import */
    STR_CERTMAN_INPUT_PASSWORD = MMI_CERTMAN_BASE + 1,
    STR_CERTMAN_PRIVATE_KEY,
    STR_CERTMAN_PERSONAL_CERTIFICATE,
    STR_CERTMAN_CERTIFICATE_INFO,
    STR_CERTMAN_CERTIFICATE_DISCARD,
    STR_CERTMAN_CERTIFICATE_DETAILS,
    STR_CERTMAN_CERTIFICATE_LABEL,
    STR_CERTMAN_CERTIFICATE_KEY_USAGE,
    STR_CERTMAN_CERTIFICATE_PRIVATE_KEY_PROTECTION,
    STR_CERTMAN_CERTIFICATE_PRIV_KEY_CONFIRMATION,
    STR_CERTMAN_CERTIFICATE_CONFIRM_PWD,
    STR_CERTMAN_FILE_CONTAINS,
    STR_CERTMAN_CERT_TYPE,
    STR_CERTMAN_CERT_SERIAL_NO,
    STR_CERTMAN_CERT_VERSION,
    STR_CERTMAN_CERT_ISSUER,
    STR_CERTMAN_CERT_SUBJECT,
    STR_CERTMAN_CERT_VALID_FROM,
    STR_CERTMAN_CERT_VALID_UPTO,
    STR_CERTMAN_CERT_FINGER_PRINT,

    /* Key Purposes */
    STR_CERTMAN_KP_ALL,
    STR_CERTMAN_KP_SERVER_AUTH,
    STR_CERTMAN_KP_CLIENT_AUTH,
    STR_CERTMAN_KP_CODE_SIGNING,
    STR_CERTMAN_KP_EMAIL_PROTECTION,
    STR_CERTMAN_KP_IPSEC_ENDSYSTEM,
    STR_CERTMAN_KP_IPSEC_TUNNEL,
    STR_CERTMAN_KP_IPSEC_USER,
    STR_CERTMAN_KP_TIME_STAMPING,
    STR_CERTMAN_KP_OCSP_SIGNING,
    /* Popups */
    STR_CERTMAN_MEMORY_FULL,
    STR_CERTMAN_INVALID_CONTEXT,
    STR_CERTMAN_FILE_ERROR,
    STR_CERTMAN_INVALID_ENCODING,
    STR_CERTMAN_INCORRECT_PASSWORD,
    STR_CERTMAN_NEED_PASSWORD,
    STR_CERTMAN_INVALID_JOB,
    STR_CERTMAN_INVALID_CERT_ID,
    STR_CERTMAN_LABEL_EXISTS,
    STR_CERTMAN_INVALID_PASSWORD,
    STR_CERTMAN_INVALID_LABEL,
    STR_CERTMAN_OUT_OF_RANGE,
    STR_CERTMAN_INVALID_CERT_GROUP,
    STR_CERTMAN_INVALID_KEY_PURPOSE,
    STR_CERTMAN_INVALID_DOMAIN,
    STR_CERTMAN_CERTIFICATE_NOT_FOUND,
    STR_CERTMAN_KEY_PURPOSE_DENIED,
    STR_CERTMAN_KEY_NOT_FOUND,
    STR_CERTMAN_ACCESS_DENIED,
    STR_CERTMAN_CERT_EXISTS,
    STR_CERTMAN_READ_ONLY,
    STR_CERTMAN_NOT_SAVED,
    STR_CERTMAN_DISCARDED,
    STR_CERTMAN_MISMATCHED,
    STR_CERTMAN_CERTTYPE_X509,
    STR_CERTMAN_INSECURE_CERT,
    STR_CERTMAN_EXPIRED_CERT,
    STR_CERTMAN_MAX_LIMIT,
    STR_CERTMAN_INVALID_DATA,
    STR_CERTMAN_INVALID_INPUT,
    STR_CERTMAN_TOO_MANY_CERT,
    STR_CERTMAN_EXT_NOT_FOUND,
    STR_CERTMAN_SUBJECT_NOT_FOUND,
    STR_CERTMAN_ISSUER_NOT_FOUND,
    STR_CERTMAN_CORRUPTED_DATA,
    STR_CERTMAN_CORRUPTED_FILE,
    STR_CERTMAN_FILE_TOO_LARGE,
    STR_CERTMAN_CONVERT_FAIL,

    /* Launch */
    STR_CERTMAN_AUTHORITY_CERT,
    STR_CERTMAN_USER_CERT,
    STR_CERTMAN_OPTION_VIEW,
    STR_CERTMAN_OPTION_DELETE,
    STR_CERTMAN_OPTION_DELETE_ALL,
    STR_CERTMAN_OPTION_KEY_USAGE,
    STR_CERTMAN_CERTIFICATES,
    STR_CERTMAN_CERTIFICATE_MANAGER,
    STR_CERTMAN_INVALID_CERTIFICATE,
    STR_CERTMAN_INVALID_CERT_ERROR,
    STR_CERTMAN_INVALID_CERT_CONTINUE,

    STR_CERTMAN_INVALID_CERT_LABEL,
    STR_CERTMAN_WARN_BCONST_NOT_CRITICAL,
    STR_CERTMAN_WARN_UNKNOWN_CRITICAL_EXT,
    STR_CERTMAN_WARN_VALIDITY,
    STR_CERTMAN_WARN_KEY_MISUSE,
    STR_CERTMAN_WARN_NO_TRUSTED_CERTS,
    STR_CERTMAN_WARN_INVALID_SIGNATURE,
    STR_CERTMAN_WARN_TRUSTED_EXPIRED,
    STR_CERTMAN_WARN_CORRUPTED_CERT,
    STR_CERTMAN_WARN_TRUSTED_NO_KEY_USAGE,
    STR_CERTMAN_WARN_NO_CERT_HASH,
    STR_CERTMAN_WARN_URLS_DONT_MATCH,
    /* add new string ID above this line */
    STR_CERTMAN_END
} MMI_CERTMAN_STR_IDS;

#endif /* __CERTMAN_SUPPORT__ */ 
#endif /* MMI_CERTMAN_RES_DEF_H */ 

