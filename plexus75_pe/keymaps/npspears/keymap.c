 /*
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

// Layer shorthand
enum layer_names {
    _BASE,
    _FN,
    _FN1,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Base Layer
     * .-----------------------------------------------------------------------------------------------------------------------------.
     * | ESC    | 1      | 2      | 3      | 4      | 5      | -      | =      | 6      | 7      | 8      | 9      | 0      | BACKSP |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
     * | TAB    | Q      | W      | E      | R      | T      | [      | ]      | Y      | U      | I      | O      | P      | '      |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
     * | CAP LK | A      | S      | D      | F      | G      | HOME   | PG UP  | H      | J      | K      | L      | ;      | ENTER  |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
     * | LSHIFT | Z      | X      | C      | V      | B      | END    | PG DN  | N      | M      | ,      | .      | /      | RSHIFT |
     * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+-----------------+--------+--------|
     * | LCTRL  | LGUI   | FN     | LALT   | SPACE  | SPACE  | SPACE  | SPACE  | SPACE  | LEFT   | DOWN   | UP     | RIGHT  | RCTRL  |
     * '-----------------------------------------------------------------------------------------------------------------------------'
     */
    [_BASE] = LAYOUT_7u(
      KC_EQL,        KC_1,    KC_2,    KC_3,     KC_4,    KC_5,    KC_LBRC,    KC_RBRC,   KC_NLCK,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, \
      KC_TAB,        KC_Q,    KC_W,    KC_F,     KC_P,    KC_G,    KC_KP_7,    KC_KP_8,   KC_KP_9,   KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSPC,  \
      CTL_T(KC_ESC), KC_A,    KC_R,    KC_S,     KC_T,    KC_D,    KC_KP_4,    KC_KP_5,   KC_KP_6,   KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,  \
      KC_LSFT,       KC_Z,    KC_X,    KC_C,     KC_V,    KC_B,    KC_KP_1,    KC_KP_2,   KC_KP_3,   KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, LSFT_T(KC_ENT),  \
      KC_0,          KC_LGUI, KC_LALT, KC_SPC,   TT(_FN), KC_CAPS, KC_1  \
    ),

    /* Function Layer
     * .-----------------------------------------------------------------------------------------------------------------------------.
     * | `      | F1     | F2     | F3     | F4     | F5     | F6     | F7     | F8     | F9     | F10    | F11    | F12    | DEL    |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
     * |        |        | MENU   |        |        |        |        |        |        |        |        |        | PRT SC |        |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
     * |        |        |        |        |        |        |        |        |        |        |        |        |        | RESET  |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
     * |        |        |        |        |        |        |        |        |        | MUTE   | VOL DN | VOL UP | \      |        |
     * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+-----------------+--------+--------|
     * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
     * '-----------------------------------------------------------------------------------------------------------------------------'
     */
    [_FN] = LAYOUT_7u(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  TT(_FN1), \
        _______, _______, _______, KC_UP,    _______, _______, KC_UNDS, KC_MINS, _______, _______, _______, _______, KC_PSCR, _______, _______, \
        _______, _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______, KC_LPRN, KC_RPRN, _______, _______, KC_PPLS, KC_EQL,  KC_SLSH, KC_BSLS, _______, \
        _______, _______, _______, _______,  _______, _______, _______, _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, KC_BSLS, _______, _______, \
        _______, RESET,   _______, _______,  _______, _______, _______  \
    ),

    [_FN1] = LAYOUT_7u(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,    RESET, \
        _______, _______, KC_APP,  _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET,   _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, KC_BSLS, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______ \
    ),

};
