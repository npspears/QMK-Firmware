/* Copyright 2020 Nathan Spears

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x7070
#define PRODUCT_ID      0x5342
#define DEVICE_VER      0x0001
#define MANUFACTURER    nasp
#define PRODUCT         Plexus75_FE

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15


#define MATRIX_ROW_PINS { D6, C6, D1, F0, D3 }
#define MATRIX_COL_PINS { D4, B4, D7, D0, F5, B1, B2, B3, B0, B5, B6, F4, F1, F7, F6 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Switch LED Backlighting */
#define BACKLIGHT_PIN           C7
#define BACKLIGHT_PWM_DRIVER    PWMD3
#define BACKLIGHT_LEVELS 6
#define BACKLIGHT_BREATHING
#define BREATHING_PERIOD 6
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* Cdisable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION

/*
// ws2812 options
#define RGB_DI_PIN D3 // pin the DI on the ws2812 is hooked-up to
#define RGBLIGHT_ANIMATIONS // run RGB animations
#define RGBLED_NUM 14 // number of LEDs
#define RGBLIGHT_HUE_STEP 12 // units to step when in/decreasing hue
#define RGBLIGHT_SAT_STEP 25 // units to step when in/decresing saturation
#define RGBLIGHT_VAL_STEP 12 // units to step when in/decreasing value (brightness)
*/
