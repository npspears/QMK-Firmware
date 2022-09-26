/* Copyright 2021 Nathan Spears
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

// Defines for task manager and such
#define CALTDEL LCTL(LALT(KC_DEL))
#define TSKMGR LCTL(LSFT(KC_ESC))


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_2x3u_left(
      KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_F6,     KC_PSCR,  KC_HOME,  KC_END,      KC_PGUP, KC_PGDN,    KC_F7,     KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_DEL,
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_MINS,   KC_BSLS,  KC_BSPC,  KC_NLCK,     KC_PSLS, KC_PAST,    KC_EQL,    KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    KC_PMNS,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_LBRC,   KC_PGUP,  KC_P7,    KC_P8,       KC_P9,   KC_KP_PLUS, KC_RBRC,   KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,    KC_BSLS,
      KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_CUT,    KC_PGDN,  KC_P4,    KC_P5,       KC_P6,   KC_PMNS,    KC__VOLUP, KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_COPY,   KC_END,   KC_P1,    KC_P2,       KC_P3,   KC_PENT,    KC__MUTE,  KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
      TG(2),   KC_LCTL, KC_LGUI, KC_LALT, MO(1),   KC_SPC, KC_PDOT,   KC_P0,    KC_PDOT,  KC__VOLDOWN, KC_SPC,  KC_LEFT,    KC_DOWN,   KC_UP,   KC_RIGHT
    ),

    [1] = LAYOUT_2x3u_left(
      KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_PSCR,  KC_HOME,     KC_END,  KC_PGUP, KC_PGDN,    KC_F7,       KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_MINS,  KC_BSLS,  KC_BSPC,     KC_NLCK, KC_PSLS, KC_PAST,    KC_EQL,      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_PMNS,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LBRC,  KC_PGUP,  KC_P7,       KC_P8,   KC_P9,   KC_KP_PLUS, KC_RBRC,     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
      KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_CUT,   KC_PGDN,  KC_P4,       KC_P5,   KC_P6,   KC_PMNS,    KC__VOLUP,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_COPY,  KC_END,   KC_P1,       KC_P2,   KC_P3,   KC_PENT,    KC__MUTE,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
      KC_TRNS, KC_LCTL, KC_LGUI, KC_LALT, KC_TRNS, KC_TRNS, KC_P0,    KC_PDOT,  KC__VOLDOWN, KC_SPC,  KC_SPC,  KC_LEFT,    KC_DOWN,     KC_UP,   RESET
    ),

    [2] = LAYOUT_2x3u_left(
      KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_PSCR,  KC_HOME,     KC_END,  KC_PGUP, KC_PGDN,    KC_F7,       KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_MINS,  KC_BSLS,  KC_BSPC,     KC_NLCK, KC_PSLS, KC_PAST,    KC_EQL,      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_PMNS,
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LBRC,  KC_PGUP,  KC_P7,       KC_P8,   KC_P9,   KC_KP_PLUS, KC_RBRC,     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
      KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_CUT,   KC_PGDN,  KC_P4,       KC_P5,   KC_P6,   KC_PMNS,    KC__VOLUP,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_COPY,  KC_END,   KC_P1,       KC_P2,   KC_P3,   KC_PENT,    KC__MUTE,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
      KC_TRNS, KC_LCTL, KC_LGUI, KC_LALT, KC_TRNS, KC_TRNS, KC_P0,    KC_PDOT,  KC__VOLDOWN, KC_SPC,  KC_SPC,  KC_LEFT,    KC_DOWN,     KC_UP,   RESET
    ),
};
