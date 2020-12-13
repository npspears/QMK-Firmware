/*
Copyright 2020 Nathan Spears

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

#include QMK_KEYBOARD_H


// Defines for task manager and such
#define CALTDEL LCTL(LALT(KC_DEL))
#define TSKMGR LCTL(LSFT(KC_ESC))


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Default QWERTY layer
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐   ┌───┐
     * │Esc│ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │Del│BkS│   │PgU│
     * ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴───┤   ├───┤
     * │Tab │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ' │Enter │   │PgD│
     * ├────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴──┬───┘   ├───┤
     * │LShift│ Z │ X │ C │ V │ B │ N │ M │ , │ . │Sft/│ ┌───┐ │CAP│
     * ├────┬─┴─┬─┴──┬┴───┴───┴─┬─┴───┴──┬┴───┼───┴┬───┘ │ ↑ │ └───┘
     * │LCtl│OS │LAlt│    Fn    │  Space │RAlt│ Ln │ ┌───┼───┼───┐
     * └────┴───┴────┴──────────┴────────┴────┴────┘ │ ← │ ↓ │ → │
     *                                               └───┴───┴───┘
     */
[0] = LAYOUT_ortho_mod_4x14( \
  KC_TAB,        KC_Q,    KC_W,    KC_E,         KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_BSPC, KC_DEL,  KC_PGUP,  \
  CTL_T(KC_ESC), KC_A,    KC_S,    KC_D,         KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_QUOTE, KC_SLSH, _______, KC_PGDN,  \
  KC_LSFT,       KC_Z,    KC_X,    KC_C,         KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_ENT,   KC_UP,   _______, KC_CAPS,  \
  KC_LGUI,       KC_GRV,  KC_LALT, TT(1),   LT(2, KC_SPC), KC_RALT, KC_RCTL,                            KC_LEFT, KC_DOWN, KC_RIGHT           \
),

/* Main Numbers, Symbols & Function Layer (MOMENTARY)
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐   ┌───┐
     * │   │ ! │ @ │ # │ $ │ % │ ^ │ & │ * │ [ │ ] │ \ │   │   │Hme│
     * ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴───┤   ├───┤
     * │    │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │      │   │End│
     * ├────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴──┬───┘   ├───┤
     * │      │ ( │ ) │ ; │ . │   │ - │ + │ * │ / │ =  │ ┌───┐ │   │
     * ├────┬─┴─┬─┴──┬┴───┴───┴─┬─┴───┴──┬┴───┼───┴┬───┘ │   │ └───┘
     * │    │   │    │          │        │    │    │ ┌───┼───┼───┐
     * └────┴───┴────┴──────────┴────────┴────┴────┘ │   │   │   │
     *                                               └───┴───┴───┘
     */
[1] = LAYOUT_ortho_mod_4x14( \
  KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC, _______, KC_HOME,  \
  KC_SLSH, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSLS, _______, KC_END,   \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PPLS, KC_EQL,  _______,  _______, _______, _______, _______, \
  CALTDEL,  TSKMGR, _______, _______,  _______, KC_GRV, _______,                            _______, _______, _______            \
),

/* ALTERNATE Function layer (MOMENTARY)
     * ┌────┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐   ┌───┐
     * │ PWR│F1 │F2 │F3 │F4 │F5 │F6 │   │   │   │   │PRV│NXT│   │VL+│
     * ├────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴───┤   ├───┤
     * │ SLP │F7 │F8 │F9 │F10│F11│F12│   │   │   │   │ PLAY │   │VL-│
     * ├─────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴──┬───┘   ├───┤
     * │ WAKE  │   │   │   │   │   │   │   │   │   │    │ ┌───┐ │   │
     * ├────┬──┴─┬─┴──┬┴───┴───┴─┬─┴───┴──┬┴───┼───┴┬───┘ │   │ └───┘
     * │RSET│    │    │          │        │    │    │ ┌───┼───┼───┐
     * └────┴────┴────┴──────────┴────────┴────┴────┘ │   │   │   │
     *                                                └───┴───┴───┘
     */
[2] = LAYOUT_ortho_mod_4x14( \
  RGB_HUI,  RGB_SAI,  _______,   KC_UP,   _______,  _______,  _______,  KC_UNDS, _______, KC_LBRC, KC_RBRC, RGB_VAI, _______, _______,  \
  RGB_HUD,  RGB_SAD,   KC_LEFT, KC_DOWN, KC_RGHT,   _______,  _______,  KC_MINS, _______, KC_LCBR, KC_RCBR, RGB_VAD, _______, _______,  \
  KC_F1,    KC_F2,     KC_F3,   KC_F4,   KC_F5,     KC_F6,    KC_F7,    KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12, _______, _______,  \
  RESET,    _______,  _______,  _______,  _______,  _______, _______,                         _______, _______, _______                 \
),

};
