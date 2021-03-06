/*
 * Generated by Drv CodeGen for MT6225. Copyright MediaTek Inc. (C) 2006.
 * Tue Aug 12 19:29:24 2008
 * Do Not Modify the File.
 */

#ifndef _KEYPAD_DRV_H
#define _KEYPAD_DRV_H

#ifdef __KEY_BOARD_V1__


#define KEYPAD_MAPPING \
	/* row 0 */\
	DEVICE_KEY_NONE, \
	DEVICE_KEY_NONE, \
	DEVICE_KEY_VOL_UP, \
	DEVICE_KEY_VOL_DOWN, \
	DEVICE_KEY_CAMERA, \
	DEVICE_KEY_NONE, \
	DEVICE_KEY_END, \
	\
	/* row 1 */\
	DEVICE_KEY_SEND2, \
	DEVICE_KEY_UP, \
	DEVICE_KEY_DOWN, \
	DEVICE_KEY_MENU, \
	DEVICE_KEY_NONE, \
	DEVICE_KEY_NONE, \
	DEVICE_KEY_END, \
	\
	/* row 2 */\
	DEVICE_KEY_SEND,\
	DEVICE_KEY_LEFT, \
	DEVICE_KEY_RIGHT, \
	DEVICE_KEY_EXT_FUNC1,/*TBD*/ \
	DEVICE_KEY_NONE, \
	DEVICE_KEY_NONE, \
	DEVICE_KEY_END, \
	\
	/* row 3 */\
	DEVICE_KEY_1, \
	DEVICE_KEY_2, \
	DEVICE_KEY_3, \
	DEVICE_KEY_STAR, \
	DEVICE_KEY_NONE, \
	DEVICE_KEY_NONE, \
	DEVICE_KEY_END, \
	\
	/* row 4 */\
	DEVICE_KEY_4, \
	DEVICE_KEY_5, \
	DEVICE_KEY_6, \
	DEVICE_KEY_0, \
	DEVICE_KEY_SK_RIGHT, \
	DEVICE_KEY_NONE, \
	DEVICE_KEY_END, \
	\
	/* row 5 */\
	DEVICE_KEY_7, \
	DEVICE_KEY_8, \
	DEVICE_KEY_9, \
	DEVICE_KEY_HASH, \
	DEVICE_KEY_EXT_FUNC2, /*SMS*/\
	DEVICE_KEY_NONE, \
	DEVICE_KEY_END



#else
#error " ===============> Keypad_drv.h: No suck key board define"
#endif




#define KEY_PRESS_PERIOD 2500

#define POWERKEY_POSITION DEVICE_KEY_END

#endif /* _KEYPAD_DRV_H*/


