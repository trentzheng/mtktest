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
* $CVSHeader: P_U25U26_06B_V30/codes/06BW0712MP_1_U26_06B_V30_gprs_MMI/tools/MinGW/include/ddk/mountdev.h,v 1.1 2007/05/17 07:25:38 bw Exp $
*
* $Id: mountdev.h,v 1.1 2007/05/17 07:25:38 bw Exp $
*
* $Date: 2007/05/17 07:25:38 $
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
* $Log: mountdev.h,v $
* Revision 1.1  2007/05/17 07:25:38  bw
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
* ~CVSHeader: P_U25U26_06B_V28/codes/06BW0712MP_1_U26_06B_V28_gprs_MMI/tools/MinGW/include/ddk/mountdev.h,v 1.1 2007/05/14 09:47:02 bw Exp $
*
* ~Id: mountdev.h,v 1.1 2007/05/14 09:47:02 bw Exp $
*
* ~Date: 2007/05/14 09:47:02 $
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
* ~Log: mountdev.h,v $
* Revision 1.1  2007/05/14 09:47:02  bw
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
* ~CVSHeader: P_U25U26_06B/codes/U25U26_06B_W07.12_MMI/tools/MinGW/include/ddk/mountdev.h,v 1.2 2007/04/04 06:51:38 bw Exp $
*
* ~Id: mountdev.h,v 1.2 2007/04/04 06:51:38 bw Exp $
*
* ~Date: 2007/04/04 06:51:38 $
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
* ~Log: mountdev.h,v $
* Revision 1.2  2007/04/04 06:51:38  bw
* 增加.c.h文件头模板
*
*
*----------------------------------------------------------------------------
* Upper this line, this part is controlled by CVS. DO NOT MODIFY!!
*============================================================================
****************************************************************************/

/*
 * mountdev.h
 *
 * Mount point manager/mounted devices interface.
 *
 * This file is part of the w32api package.
 *
 * Contributors:
 *   Created by Casper S. Hornstrup <chorns@users.sourceforge.net>
 *
 * THIS SOFTWARE IS NOT COPYRIGHTED
 *
 * This source code is offered for use in the public domain. You may
 * use, modify or distribute it freely.
 *
 * This code is distributed in the hope that it will be useful but
 * WITHOUT ANY WARRANTY. ALL WARRANTIES, EXPRESS OR IMPLIED ARE HEREBY
 * DISCLAIMED. This includes but is not limited to warranties of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 */

#ifndef __MOUNTDEV_H
#define __MOUNTDEV_H

#if __GNUC__ >=3
#pragma GCC system_header
#endif

#ifdef __cplusplus
extern "C" {
#endif

#pragma pack(push,4)

#include "ntddk.h"
#include "mountmgr.h"


#define IOCTL_MOUNTDEV_QUERY_DEVICE_NAME \
  CTL_CODE(MOUNTDEVCONTROLTYPE, 2, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_MOUNTDEV_QUERY_UNIQUE_ID \
  CTL_CODE(MOUNTDEVCONTROLTYPE, 0, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_MOUNTDEV_UNIQUE_ID_CHANGE_NOTIFY \
  CTL_CODE(MOUNTDEVCONTROLTYPE, 1, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_MOUNTDEV_QUERY_SUGGESTED_LINK_NAME \
  CTL_CODE(MOUNTDEVCONTROLTYPE, 3, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_MOUNTDEV_LINK_CREATED \
  CTL_CODE(MOUNTDEVCONTROLTYPE, 4, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_MOUNTDEV_LINK_DELETED \
  CTL_CODE(MOUNTDEVCONTROLTYPE, 5, METHOD_BUFFERED, FILE_ANY_ACCESS)


typedef struct _MOUNTDEV_SUGGESTED_LINK_NAME {
  BOOLEAN  UseOnlyIfThereAreNoOtherLinks;
  USHORT  NameLength;
  WCHAR  Name[1];
} MOUNTDEV_SUGGESTED_LINK_NAME, *PMOUNTDEV_SUGGESTED_LINK_NAME;

typedef struct _MOUNTDEV_UNIQUE_ID {
  USHORT  UniqueIdLength;
  UCHAR  UniqueId[1];
} MOUNTDEV_UNIQUE_ID, *PMOUNTDEV_UNIQUE_ID;

typedef struct _MOUNTDEV_UNIQUE_ID_CHANGE_NOTIFY_OUTPUT {
  ULONG  Size;
  USHORT  OldUniqueIdOffset;
  USHORT  OldUniqueIdLength;
  USHORT  NewUniqueIdOffset;
  USHORT  NewUniqueIdLength;
} MOUNTDEV_UNIQUE_ID_CHANGE_NOTIFY_OUTPUT;

#pragma pack(pop)

#ifdef __cplusplus
}
#endif

#endif /* __MOUNTDEV_H */
