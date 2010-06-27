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
 *  svg
 *
 * Project:
 * --------
 *  MAUI
 *
 * Description:
 * ------------
 *  SVG tiny basic library
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/
#include "MMI_include.h"
#if defined(SVG_SUPPORT)


#include "svg_internal.h"
#include "svg_element.h"
#include "svg_vpath.h"
#include "svg_parser.h"


/*****************************************************************************
 * FUNCTION
 *  svg_parser_element_svg
 * DESCRIPTION
 *  
 * PARAMETERS
 *  ret_element     [IN]        
 *  attr            [IN]        
 * RETURNS
 *  
 *****************************************************************************/
svg_enum svg_parser_element_svg(svg_element_t **ret_element, U8 **attr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    svg_enum ret;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ret = svg_element_create(ret_element, SVG_ELEMENT_TYPE_SVG);
    if (ret == SVG_OK)
    {
        svg_element_t *e = *ret_element;
        BOOL is_view_box_exist=MMI_FALSE;

        if (svg_attr_get_viewbox(&(e->X.group.view_box), attr, (U8*) "viewBox", NULL) != SVG_OK)
        {
            memset(&(e->X.group.view_box), 0, sizeof(svg_view_box_t));
            is_view_box_exist = MMI_FALSE;
        }
        else if (svg_parser_container_top() == NULL)    /* first container */
        {
            svg_context->width = e->X.group.view_box.width;
            svg_context->height = e->X.group.view_box.height;
            svg_context->x = e->X.group.view_box.x;
            svg_context->y = e->X.group.view_box.y;
            is_view_box_exist = MMI_TRUE;
        }

        svg_attr_get_length(&(e->X.group.width), attr, (U8*) "width", (U8*) "100%", TRUE);
        svg_attr_get_length(&(e->X.group.height), attr, (U8*) "height", (U8*) "100%", FALSE);
        svg_attr_get_length(&(e->X.group.x), attr, (U8*) "x", (U8*) "0", TRUE);
        svg_attr_get_length(&(e->X.group.y), attr, (U8*) "y", (U8*) "0", FALSE);

        if (!is_view_box_exist)
        {
            svg_context->width = e->X.group.width;
            svg_context->height = e->X.group.height;
            svg_context->x = e->X.group.x;
            svg_context->y = e->X.group.y;
        }
    }

    /* /TODO: preserveAspectRatio */
    return ret;
}

#endif /* __MMI_SVG__ */ /* __SVG__ */

