#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    ll3macorn
#define PRODUCT         The Password
#define DESCRIPTION     breh

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 8

/* key matrix pins */
#define MATRIX_ROW_PINS { B5 }
#define MATRIX_COL_PINS { B6, B2, B3, B1, F7, F6, F6, F5 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

