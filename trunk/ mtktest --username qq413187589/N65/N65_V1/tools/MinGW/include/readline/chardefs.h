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
* $CVSHeader: P_U25U26_06B_V30/codes/06BW0712MP_1_U26_06B_V30_gprs_MMI/tools/MinGW/include/readline/chardefs.h,v 1.1 2007/05/17 07:25:42 bw Exp $
*
* $Id: chardefs.h,v 1.1 2007/05/17 07:25:42 bw Exp $
*
* $Date: 2007/05/17 07:25:42 $
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
* $Log: chardefs.h,v $
* Revision 1.1  2007/05/17 07:25:42  bw
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
* ~CVSHeader: P_U25U26_06B_V28/codes/06BW0712MP_1_U26_06B_V28_gprs_MMI/tools/MinGW/include/readline/chardefs.h,v 1.1 2007/05/14 09:47:06 bw Exp $
*
* ~Id: chardefs.h,v 1.1 2007/05/14 09:47:06 bw Exp $
*
* ~Date: 2007/05/14 09:47:06 $
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
* ~Log: chardefs.h,v $
* Revision 1.1  2007/05/14 09:47:06  bw
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
* ~CVSHeader: P_U25U26_06B/codes/U25U26_06B_W07.12_MMI/tools/MinGW/include/readline/chardefs.h,v 1.2 2007/04/04 06:51:40 bw Exp $
*
* ~Id: chardefs.h,v 1.2 2007/04/04 06:51:40 bw Exp $
*
* ~Date: 2007/04/04 06:51:40 $
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
* ~Log: chardefs.h,v $
* Revision 1.2  2007/04/04 06:51:40  bw
* 增加.c.h文件头模板
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/

/* chardefs.h -- Character definitions for readline. */

/* Copyright (C) 1994 Free Software Foundation, Inc.

   This file is part of the GNU Readline Library, a library for
   reading lines of text with interactive input and history editing.

   The GNU Readline Library is free software; you can redistribute it
   and/or modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation; either version 2, or
   (at your option) any later version.

   The GNU Readline Library is distributed in the hope that it will be
   useful, but WITHOUT ANY WARRANTY; without even the implied warranty
   of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   The GNU General Public License is often shipped with GNU software, and
   is generally kept in a file called COPYING or LICENSE.  If you do not
   have a copy of the license, write to the Free Software Foundation,
   59 Temple Place, Suite 330, Boston, MA 02111 USA. */

#ifndef _CHARDEFS_H_
#define _CHARDEFS_H_

#include <ctype.h>

#if defined (HAVE_CONFIG_H)
#  if defined (HAVE_STRING_H)
#    include <string.h>
#  else
#    include <strings.h>
#  endif /* HAVE_STRING_H */
#else
#  include <string.h>
#endif /* !HAVE_CONFIG_H */

#ifndef whitespace
#define whitespace(c) (((c) == ' ') || ((c) == '\t'))
#endif

#ifdef CTRL
#undef CTRL
#endif

/* Some character stuff. */
#define control_character_threshold 0x020   /* Smaller than this is control. */
#define control_character_mask 0x1f	    /* 0x20 - 1 */
#define control_character_bit 0x40	    /* 0x000000, must be off. */

#ifndef __MINGW32__
#define meta_character_threshold 0x07f	    /* Larger than this is Meta. */
#define meta_character_bit 0x080	    /* x0000000, must be on. */
#define largest_char 255		    /* Largest character value. */
#else
#define meta_character_threshold 0x0ff	    /* Larger than this is Meta. */
#define meta_character_bit 0x100	    /* x0000000, must be on. */
#define largest_char 0x1ff		    /* Largest character value. */
#endif

#define CTRL_CHAR(c) ((c) < control_character_threshold && (((c) & 0x80) == 0))
#define META_CHAR(c) ((c) > meta_character_threshold && (c) <= largest_char)

#define CTRL(c) ((c) & control_character_mask)
#define META(c) ((c) | meta_character_bit)

#define UNMETA(c) ((c) & (~meta_character_bit))
#define UNCTRL(c) _rl_to_upper(((c)|control_character_bit))

/* Old versions
#define _rl_lowercase_p(c) (((c) > ('a' - 1) && (c) < ('z' + 1)))
#define _rl_uppercase_p(c) (((c) > ('A' - 1) && (c) < ('Z' + 1)))
#define _rl_digit_p(c)  ((c) >= '0' && (c) <= '9')
*/

#define _rl_lowercase_p(c) (islower(c))
#define _rl_uppercase_p(c) (isupper(c))
#define _rl_digit_p(x)  (isdigit (x))

#define _rl_pure_alphabetic(c) (_rl_lowercase_p(c) || _rl_uppercase_p(c))
#define ALPHABETIC(c)	(_rl_lowercase_p(c) || _rl_uppercase_p(c) || _rl_digit_p(c))

/* Old versions
#  define _rl_to_upper(c) (_rl_lowercase_p(c) ? ((c) - 32) : (c))
#  define _rl_to_lower(c) (_rl_uppercase_p(c) ? ((c) + 32) : (c))
*/

#ifndef _rl_to_upper
#  define _rl_to_upper(c) (islower(c) ? toupper(c) : (c))
#  define _rl_to_lower(c) (isupper(c) ? tolower(c) : (c))
#endif

#ifndef _rl_digit_value
#define _rl_digit_value(x) ((x) - '0')
#endif

#ifndef NEWLINE
#define NEWLINE '\n'
#endif

#ifndef RETURN
#define RETURN CTRL('M')
#endif

#ifndef RUBOUT
#define RUBOUT 0x7f
#endif

#ifndef TAB
#define TAB '\t'
#endif

#ifdef ABORT_CHAR
#undef ABORT_CHAR
#endif
#define ABORT_CHAR CTRL('G')

#ifdef PAGE
#undef PAGE
#endif
#define PAGE CTRL('L')

#ifdef SPACE
#undef SPACE
#endif
#define SPACE ' '	/* XXX - was 0x20 */

#ifdef ESC
#undef ESC
#endif
#define ESC CTRL('[')

#ifndef ISOCTAL
#define ISOCTAL(c)      ((c) >= '0' && (c) <= '7')
#endif
#define OCTVALUE(c)     ((c) - '0')

#ifndef isxdigit
#  define isxdigit(c)   (isdigit((c)) || ((c) >= 'a' && (c) <= 'f') || ((c) >= 'A' && (c) <= 'F'))
#endif

#define HEXVALUE(c) \
  (((c) >= 'a' && (c) <= 'f') \
  	? (c)-'a'+10 \
  	: (c) >= 'A' && (c) <= 'F' ? (c)-'A'+10 : (c)-'0')

#endif  /* _CHARDEFS_H_ */
