/* Copyright 2021 Bastian Beuttel <git@bastianbeuttel.com>
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

// All custom keycodes and aliases can be found in keymap.h
#include "keymap.h"
#include "g/keymap_combo.h"

/* ┌──────┬──────┬──────┬──────┬──────┬──────┐                              ┌──────┬──────┬──────┬──────┬──────┬──────┐
 * │TG(NAV│  J   │  W   │  M   │  G   │  P   │                              │  X   │  Y   │ ' "  │ . •  │  Q   │TG(NUM│
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │ OS-⎈ │ S/⎈  │ N/⎇  │ R/⇧  │ T/◆  │  C   │                              │  K   │ I/◆  │ E/⇧  │ A/⎇  │ H/⎈  │ OS-⎈ │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┬──────┐  ┌──────┬──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │ OS-◆ │  V   │MT_RA_│  L   │  D   │  B   │CW_TOG│SWAPHN│  │SWAPHN│ ESC  │ - /  │  U   │  O   │MT_RA_│  Z   │ OS-◆ │
 * └──────┴──────┴──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┴──────┴──────┘
 *                      │ MUTE │ ESC  │⇆/SYM │⇧/NUM │SYM_RE│  │SYM_BS│␣/NAV │⏎/SYM │ FUN  │ MUTE │
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      └──────┴──────┴──────┴──────┴──────┘  └──────┴──────┴──────┴──────┴──────┘
 *                                                                               generated by [keymapviz] */

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        TG(NAV), KC_J,    KC_W,    KC_M,    KC_G,    KC_P,                                          KC_X,    KC_Y,    KC_QUOT, KC_DOT,  KC_Q,    TG(NUM),
        OS_LCTL, HOME_S,  HOME_N,  HOME_R,  HOME_T,  KC_C,                                          KC_K,    HOME_I,  HOME_E,  HOME_A,  HOME_H,  OS_RCTL,
        OS_LGUI, KC_V,    MT_RA_F, KC_L,    KC_D,    KC_B,    CW_TOGG,   SH_OS,   SH_OS,   KC_ESC,  KC_MINS, KC_U,    KC_O,    MT_RA_CM,KC_Z,    OS_RGUI,
                                   KC_MUTE, KC_ESC,  SYM_TAB, NUM_OSS,   SYM_REP, SYM_BSP, NAV_SPC, SYM_ENT, FUN,     KC_MUTE
    ),
/* ┌──────┬──────┬──────┬──────┬──────┬──────┐                              ┌──────┬──────┬──────┬──────┬──────┬──────┐
 * │      │  Q   │  W   │  E   │  R   │  T   │                              │  Y   │  U   │  I   │  O   │  P   │  |   │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │  A   │  S   │  D   │  F   │  G   │                              │  H   │  J   │  K   │  L   │  ;   │ ' "  │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┬──────┐  ┌──────┬──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │  Z   │  X   │  C   │  V   │  B   │LSFT ⇧│LSFT ⇧│  │LSFT ⇧│LSFT ⇧│  N   │  M   │ , –  │ . •  │  /   │ - /  │
 * └──────┴──────┴──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┴──────┴──────┘
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      └──────┴──────┴──────┴──────┴──────┘  └──────┴──────┴──────┴──────┴──────┘
 *                                                                               generated by [keymapviz] */
    [_QWERTY] = LAYOUT(
        _______, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,                                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_PIPE,
        _______, KC_A,   KC_S,   KC_D,   KC_F,   KC_G,                                         KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        _______, KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_LSFT,   KC_LSFT, KC_LSFT, KC_LSFT, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_MINS,
                                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
/* ┌──────┬──────┬──────┬──────┬──────┬──────┐                              ┌──────┬──────┬──────┬──────┬──────┬──────┐
 * │      │  …   │  @   │  *   │  #   │  §   │                              │  €   │  $   │  ^   │  !   │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │  \   │  /   │  {   │  }   │  |   │                              │  =   │  (   │  )   │  :   │  ;   │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┬──────┐  ┌──────┬──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │  ~   │  &   │  [   │  ]   │  `   │      │      │  │      │      │  +   │  <   │  >   │  ?   │  %   │      │
 * └──────┴──────┴──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┴──────┴──────┘
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      └──────┴──────┴──────┴──────┴──────┘  └──────┴──────┴──────┴──────┴──────┘
 *                                                                               generated by [keymapviz] */
    [_SYM] = LAYOUT(
      _______, ELLIPS,  KC_AT,   KC_ASTR, KC_HASH, PARAGPH,                                     EURO,    KC_DLR,  KC_CIRC, KC_EXLM, _______, _______,
      _______, KC_BSLS, KC_SLSH, KC_LCBR, KC_RCBR, KC_PIPE,                                     KC_EQL,  KC_LPRN, KC_RPRN, KC_COLN, KC_SCLN, _______,
      _______, KC_TILD, KC_AMPR, KC_LBRC, KC_RBRC, KC_GRV,  _______, _______, _______, _______, KC_PLUS, KC_LABK, KC_RABK, KC_QUES, KC_PERC, _______,
                                 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
/* ┌──────┬──────┬──────┬──────┬──────┬──────┐                              ┌──────┬──────┬──────┬──────┬──────┬──────┐
 * │      │      │      │      │      │      │                              │      │  7   │  8   │  9   │  *   │  /   │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │ OS-⎈ │ OS-⎇ │ OS-⇧ │ OS-◆ │      │                              │      │  4   │  5   │  6   │  +   │  -   │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┬──────┐  ┌──────┬──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │OS-Alt│OS-MEH│OS-HYP│      │      │      │  │      │      │      │  1   │  2   │  3   │  =   │      │
 * └──────┴──────┴──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┴──────┴──────┘
 *                      │      │      │      │      │      │  │      │  0   │      │  .   │      │
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      └──────┴──────┴──────┴──────┴──────┘  └──────┴──────┴──────┴──────┴──────┘
 *                                                                               generated by [keymapviz] */
    [_NUM] = LAYOUT(
      _______, _______, _______, _______, _______, _______,                                     _______, KC_7,    KC_8,    KC_9,    KC_PAST, KC_PSLS,
      _______, OS_LCTL, OS_LALT, OS_LSFT, OS_LGUI, _______,                                     _______, KC_4,    KC_5,    KC_6,    KC_PPLS, KC_PMNS,
      _______, _______, OS_RALT, OS_MEH,  OS_HYPR, _______, _______, _______, _______, _______, _______, KC_1,    KC_2,    KC_3,    KC_PEQL, _______,
                                 _______, _______, _______, _______, _______, _______, KC_0,    _______, KC_PDOT, _______
    ),
/* ┌──────┬──────┬──────┬──────┬──────┬──────┐                              ┌──────┬──────┬──────┬──────┬──────┬──────┐
 * │      │      │ PGUP │  UP  │ PGDN │      │                              │      │      │      │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │ HOME │ LEFT │ DOWN │RIGHT │ END  │                              │      │ OS-◆ │ OS-⇧ │ OS-⎇ │ OS-⎈ │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┬──────┐  ┌──────┬──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │      │      │      │      │      │      │  │      │      │      │OS-HYP│OS-MEH│OS-Alt│      │      │
 * └──────┴──────┴──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┴──────┴──────┘
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      └──────┴──────┴──────┴──────┴──────┘  └──────┴──────┴──────┴──────┴──────┘
 *                                                                               generated by [keymapviz] */

    [_NAV] = LAYOUT(
      _______, _______, KC_PGUP, KC_UP,   KC_PGDN,  _______,                                    _______, _______, _______, _______, _______, _______,
      _______, KC_HOME, KC_LEFT, KC_DOWN, KC_RIGHT, KC_END,                                     _______, OS_RGUI, OS_RSFT, OS_LALT, OS_RCTL, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, OS_HYPR, OS_MEH,  OS_RALT, _______, _______,
                                 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
/* ┌──────┬──────┬──────┬──────┬──────┬──────┐                              ┌──────┬──────┬──────┬──────┬──────┬──────┐
 * │QK_BOO│  F1  │  F2  │  F3  │  F4  │ BRIU │                              │ VOLU │      │      │      │      │QK_BOO│
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │  F5  │  F6  │  F7  │  F8  │      │                              │ MUTE │ MPRV │ MPLY │ MNXT │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┬──────┐  ┌──────┬──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │  F9  │ F10  │ F11  │ F12  │ BRID │      │      │  │      │      │ VOLD │      │      │      │      │      │
 * └──────┴──────┴──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┴──────┴──────┘
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      └──────┴──────┴──────┴──────┴──────┘  └──────┴──────┴──────┴──────┴──────┘
 *                                                                               generated by [keymapviz] */
    [_FUN] = LAYOUT(
      QK_BOOT, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_BRIU,                                     KC_VOLU, _______, _______, _______, _______, QK_BOOT,
      _______, KC_F5,   KC_F6,   KC_F7,   KC_F8,   _______,                                     KC_MUTE, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______,
      _______, KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_BRID, _______, _______, _______, _______, KC_VOLD, _______, _______, _______, _______, _______,
                                 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
};
// clang-format on

// Used to extract the basic tapping keycode from a dual-role key.
// Example: GET_TAP_KC(MT(MOD_RSFT, KC_E)) == KC_E
#define GET_TAP_KC(dual_role_key) dual_role_key & 0xFF

uint16_t last_keycode  = KC_NO;
uint8_t  last_modifier = 0;
void     process_repeat_key(uint16_t keycode, const keyrecord_t *record) {
    if (keycode != SYM_REP) {  // Keycode for LT REPEAT
        // Early return when holding down a pure layer key
        // to retain modifiers
        switch (keycode) {
            case QK_DEF_LAYER ... QK_DEF_LAYER_MAX:
            case QK_MOMENTARY ... QK_MOMENTARY_MAX:
            case QK_LAYER_MOD ... QK_LAYER_MOD_MAX:
            case QK_ONE_SHOT_LAYER ... QK_ONE_SHOT_LAYER_MAX:
            case QK_TOGGLE_LAYER ... QK_TOGGLE_LAYER_MAX:
            case QK_TO ... QK_TO_MAX:
            case QK_LAYER_TAP_TOGGLE ... QK_LAYER_TAP_TOGGLE_MAX:
                return;
        }
        last_modifier = oneshot_mod_state > mod_state ? oneshot_mod_state : mod_state;
        switch (keycode) {
            case QK_LAYER_TAP ... QK_LAYER_TAP_MAX:
            case QK_MOD_TAP ... QK_MOD_TAP_MAX:
                if (record->event.pressed) {
                    last_keycode = GET_TAP_KC(keycode);
                }
                break;
            default:
                if (record->event.pressed) {
                    last_keycode = keycode;
                }
                break;
        }
    } else {  // keycode == REPEAT
        if (record->tap.count > 0) {
            if (record->event.pressed) {
                register_mods(last_modifier);
                register_code16(last_keycode);
            } else {
                unregister_code16(last_keycode);
                unregister_mods(last_modifier);
            }
        }
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    process_repeat_key(keycode, record);
    mod_state         = get_mods();
    oneshot_mod_state = get_oneshot_mods();
    switch (keycode) {
        // return false if REPEAT is tapped
        case SYM_REP:
            if (record->tap.count > 0) {
                return false;
            }
            break;
        case NUM_OSS:
            if (record->tap.count > 0) {
                if (record->event.pressed) {
                    set_oneshot_mods(MOD_BIT(KC_LSFT));
                }
                return false;
            }
            break;
        case A_UML:
            if (record->event.pressed) {
                del_mods(MOD_MASK_SHIFT);
                del_oneshot_mods(MOD_MASK_SHIFT);
                tap_code16(RALT(KC_U));
                set_mods(mod_state);
                set_oneshot_mods(oneshot_mod_state);
                tap_code(KC_A);
                return false;
            }
            break;
        case O_UML:
            if (record->event.pressed) {
                del_mods(MOD_MASK_SHIFT);
                del_oneshot_mods(MOD_MASK_SHIFT);
                tap_code16(RALT(KC_U));
                set_mods(mod_state);
                set_oneshot_mods(oneshot_mod_state);
                tap_code(KC_O);
                return false;
            }
            break;
        case U_UML:
            if (record->event.pressed) {
                del_mods(MOD_MASK_SHIFT);
                del_oneshot_mods(MOD_MASK_SHIFT);
                tap_code16(RALT(KC_U));
                set_mods(mod_state);
                set_oneshot_mods(oneshot_mod_state);
                tap_code(KC_U);
                return false;
            }
            break;
        case ESZETT:
            if (record->event.pressed) {
                del_mods(MOD_MASK_SHIFT);
                del_oneshot_mods(MOD_MASK_SHIFT);
                tap_code16(RALT(KC_S));
                set_mods(mod_state);
                set_oneshot_mods(oneshot_mod_state);
                return false;
            }
            break;
        case EURO:
            if (record->event.pressed) {
                del_mods(MOD_MASK_SHIFT);
                del_oneshot_mods(MOD_MASK_SHIFT);
                tap_code16(RSA(KC_2));
                set_mods(mod_state);
                set_oneshot_mods(oneshot_mod_state);
                return false;
            }
            break;
        case ELLIPS:
            if (record->event.pressed) {
                tap_code16(RALT(KC_SCLN));
            }
            return false;
        case BULLET:
            if (record->event.pressed) {
                tap_code16(RALT(KC_8));
            }
            return false;
        case ENDASH:
            if (record->event.pressed) {
                tap_code16(RALT(KC_MINUS));
            }
            return false;
        case PARAGPH:
            if (record->event.pressed) {
                tap_code16(RALT(KC_6));
            }
            return false;
    }
    return true;
};

bool     is_gui_tab_active = false;
uint16_t gui_alt_timer     = 0;
void     matrix_scan_user(void) {
    if (is_gui_tab_active) {
        if (timer_elapsed(gui_alt_timer) > 750) {
            unregister_code(KC_LGUI);
            is_gui_tab_active = false;
        }
    }
}

bool get_combo_must_hold(uint16_t index, combo_t *combo) {
    switch (index) {
        default:
            return false;
    }
}

bool get_combo_must_tap(uint16_t index, combo_t *combo) {
    switch (index) {
        // everything should be tap-only unless otherwise specified
        default:
            return true;
    }
}

bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case HOME_S:
        case HOME_N:
        case HOME_R:
        case HOME_T:
        case HOME_I:
        case HOME_E:
        case HOME_A:
        case HOME_H:
        case MT_RA_F:
        case MT_RA_CM:
            return true;
        default:
            return false;
    }
}
