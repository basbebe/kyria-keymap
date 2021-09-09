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

/* ┌──────┬──────┬──────┬──────┬──────┬──────┐                              ┌──────┬──────┬──────┬──────┬──────┬──────┐
 * │SWAPHN│  X   │  P   │  L   │  C   │  J   │                              │ ' "  │  ,   │  O   │  .   │  K   │SWAPHN│
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │LALT ⎇│ S/⎈  │ N/⎇  │ R/⇧  │ T/◆  │  G   │                              │  Y   │ I/◆  │ E/⇧  │ A/⎇  │ H/⎈  │ ' "  │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┬──────┐  ┌──────┬──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │LSFT ⇧│  F   │W/AltG│  M   │  D   │  V   │TG(_NA│SWAPHN│  │SWAPHN│TG(_NU│ - _  │  U   │  Q   │Z/AltG│  B   │ - _  │
 * └──────┴──────┴──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┴──────┴──────┘
 *                      │ MUTE │LGUI ◆│TAB_SY│OSS_NU│REPEAT│  │ BSPC │SPC_NA│SYM_L │ BSPC │ MUTE │
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      └──────┴──────┴──────┴──────┴──────┘  └──────┴──────┴──────┴──────┴──────┘
 *                                                                               generated by [keymapviz] */

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_OK] = LAYOUT(
        XXXXXXX,   KC_X,    KC_P,    KC_L,    KC_C,    KC_J,                                        KC_QUOT, KC_COMM, KC_O,    KC_DOT,  KC_K,    XXXXXXX,
        KC_LALT, HOME_S,  HOME_N,  HOME_R,  HOME_T,  KC_G,                                        KC_Y,    HOME_I,  HOME_E,  HOME_A,  HOME_H,  KC_QUOT,
        KC_LSFT, KC_F,    MT_RA_W, KC_M,    KC_D,    KC_V,    TG(_NAV),XXXXXXX,   XXXXXXX,   TG(_NUM),KC_MINS, KC_U,    KC_Q,    MT_RA_Z, KC_B,    KC_MINS,
                                   KC_MUTE, KC_LGUI, TAB_SYM, OSS_NUM, REPEAT,  KC_BSPC, SPC_NAV, SYM_L,   KC_BSPC, KC_MUTE
    ),
/* ┌──────┬──────┬──────┬──────┬──────┬──────┐                              ┌──────┬──────┬──────┬──────┬──────┬──────┐
 * │LT(_NU│  Q   │  W   │  E   │  R   │  T   │                              │  Y   │  U   │  I   │  O   │  P   │  |   │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │MT(MOD│  A   │  S   │  D   │  F   │  G   │                              │  H   │  J   │  K   │  L   │  ;   │ ' "  │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┬──────┐  ┌──────┬──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │LSFT ⇧│  Z   │  X   │  C   │  V   │  B   │LSFT ⇧│LSFT ⇧│  │LSFT ⇧│LSFT ⇧│  N   │  M   │  ,   │  .   │  /   │ - _  │
 * └──────┴──────┴──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┴──────┴──────┘
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      └──────┴──────┴──────┴──────┴──────┘  └──────┴──────┴──────┴──────┴──────┘
 *                                                                               generated by [keymapviz] */
    [_QWERTY] = LAYOUT(
        LT(_NUM, KC_ESC),       KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,                                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_PIPE,
        MT(MOD_LCTL, KC_BSPC),   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,                                         KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT,                 KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_LSFT,   KC_LSFT, KC_LSFT, KC_LSFT, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_MINS,
                                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
/* ┌──────┬──────┬──────┬──────┬──────┬──────┐                              ┌──────┬──────┬──────┬──────┬──────┬──────┐
 * │      │  …   │  @   │  [   │  ]   │  ^   │                              │      │      │  Ö   │      │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │  \   │  /   │  {   │  }   │  *   │                              │      │RGUI ◆│RSFT ⇧│ Ä/⎇  │RCTL ⎈│      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┬──────┐  ┌──────┬──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │  #   │  $   │  |   │  ~   │  `   │      │      │  │      │      │      │  Ü   │      │      │      │      │
 * └──────┴──────┴──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┴──────┴──────┘
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      └──────┴──────┴──────┴──────┴──────┘  └──────┴──────┴──────┴──────┴──────┘
 *                                                                               generated by [keymapviz] */
    [_SYM_L] = LAYOUT(
      _______, ELLIPS,  KC_AT,   KC_LBRC, KC_RBRC, KC_CIRC,                                     _______, _______, O_UML,   _______, _______, _______,
      _______, KC_BSLS, KC_SLSH, KC_LCBR, KC_RCBR, KC_ASTR,                                     _______, KC_RGUI, MT_EURO, MT_AUML, KC_RCTL, _______,
      _______, KC_HASH, KC_DLR,  KC_PIPE, KC_TILD, KC_GRV,  _______, _______, _______, _______, _______, U_UML,   _______, _______, _______, _______,
                                 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
/* ┌──────┬──────┬──────┬──────┬──────┬──────┐                              ┌──────┬──────┬──────┬──────┬──────┬──────┐
 * │      │      │      │      │      │      │                              │  !   │  <   │  >   │  =   │  &   │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │ ß/⎈  │LALT ⎇│LSFT ⇧│LGUI ◆│      │                              │  ?   │  (   │  )   │      │  :   │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┬──────┐  ┌──────┬──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │      │      │      │      │      │      │  │      │      │  +   │  %   │      │      │  ;   │      │
 * └──────┴──────┴──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┴──────┴──────┘
 *                      │      │      │      │      │      │  │      │  _   │      │      │      │
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      └──────┴──────┴──────┴──────┴──────┘  └──────┴──────┴──────┴──────┴──────┘
 *                                                                               generated by [keymapviz] */
    [_SYM_R] = LAYOUT(
      _______, _______, _______, _______, _______, _______,                                     KC_EXLM, KC_LABK, KC_RABK, KC_EQL,  KC_AMPR, _______,
      _______, MT_ESZT, KC_LALT, KC_LSFT, KC_LGUI, _______,                                     KC_QUES, KC_LPRN, KC_RPRN, _______, KC_COLN, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PLUS, KC_PERC, _______, _______, KC_SCLN, _______,
                                 _______, _______, _______, _______, _______, _______, KC_UNDS, _______, _______, _______
    ),
/* ┌──────┬──────┬──────┬──────┬──────┬──────┐                              ┌──────┬──────┬──────┬──────┬──────┬──────┐
 * │      │      │      │      │      │      │                              │      │  7   │  8   │  9   │  *   │  /   │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │      │      │      │      │                              │      │  4   │  5   │  6   │  +   │  -   │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┬──────┐  ┌──────┬──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │      │      │      │      │      │      │  │      │      │      │  1   │  2   │  3   │  =   │      │
 * └──────┴──────┴──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┴──────┴──────┘
 *                      │      │      │      │      │      │  │      │      │  0   │  .   │      │
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      └──────┴──────┴──────┴──────┴──────┘  └──────┴──────┴──────┴──────┴──────┘
 *                                                                               generated by [keymapviz] */
    [_NUM] = LAYOUT(
      _______, _______, _______, _______, _______, _______,                                     _______, KC_P7,   KC_P8,   KC_P9,   KC_PAST, KC_PSLS,
      _______, _______, _______, _______, _______, _______,                                     _______, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_PMNS,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_P1,   KC_P2,   KC_P3,   KC_PEQL, _______,
                                 _______, _______, _______, _______, _______, _______, _______, KC_P0,   KC_PDOT, _______
    ),
/* ┌──────┬──────┬──────┬──────┬──────┬──────┐                              ┌──────┬──────┬──────┬──────┬──────┬──────┐
 * │      │  1   │  2   │  3   │  4   │  5   │                              │  6   │  7   │  8   │  9   │  0   │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │ MPRV │ MPLY │ MNXT │ VOLU │                              │ LEFT │ DOWN │  UP  │ RGHT │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┬──────┐  ┌──────┬──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │      │      │ MUTE │ VOLD │      │      │  │      │      │MOUSE │MOUSE │MOUSE │MOUSE │      │      │
 * └──────┴──────┴──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┴──────┴──────┘
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      └──────┴──────┴──────┴──────┴──────┘  └──────┴──────┴──────┴──────┴──────┘
 *                                                                               generated by [keymapviz] */

    [_NAV] = LAYOUT(
      _______, KC_1, 	  KC_2,    KC_3,    KC_4,    KC_5,                                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
      _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLU,                                     KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
      _______, _______, _______, _______, KC_MUTE, KC_VOLD, _______, _______, _______, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, _______,
                                 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
/* ┌──────┬──────┬──────┬──────┬──────┬──────┐                              ┌──────┬──────┬──────┬──────┬──────┬──────┐
 * │      │  1   │  2   │  3   │  4   │  5   │                              │  6   │  7   │  8   │  9   │  0   │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │ MPRV │ MPLY │ MNXT │ VOLU │                              │ LEFT │ DOWN │  UP  │ RGHT │      │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┬──────┐  ┌──────┬──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │      │      │ MUTE │ VOLD │      │      │  │      │      │MOUSE │MOUSE │MOUSE │MOUSE │      │      │
 * └──────┴──────┴──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┴──────┴──────┘
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      └──────┴──────┴──────┴──────┴──────┘  └──────┴──────┴──────┴──────┴──────┘
 *                                                                               generated by [keymapviz] */
    [_FUN] = LAYOUT(
      _______, KC_1, 	  KC_2,    KC_3,    KC_4,    KC_5,                                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
      _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLU,                                     KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
      _______, _______, _______, _______, KC_MUTE, KC_VOLD, _______, _______, _______, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, _______,
                                 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
/* ┌──────┬──────┬──────┬──────┬──────┬──────┐                              ┌──────┬──────┬──────┬──────┬──────┬──────┐
 * │      │  F1  │  F2  │  F3  │  F4  │  F5  │                              │  F6  │  F7  │  F8  │  F9  │ F10  │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┤                              ├──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │RGB_TO│RGB_SA│RGB_HU│RGB_VA│RGB_MO│                              │      │      │      │ F11  │ F12  │      │
 * ├──────┼──────┼──────┼──────┼──────┼──────┼──────┬──────┐  ┌──────┬──────┼──────┼──────┼──────┼──────┼──────┼──────┤
 * │      │      │RGB_SA│RGB_HU│RGB_VA│RGB_RM│      │      │  │      │      │      │      │      │      │      │      │
 * └──────┴──────┴──────┼──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┼──────┴──────┴──────┘
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      │      │      │      │      │      │  │      │      │      │      │      │
 *                      └──────┴──────┴──────┴──────┴──────┘  └──────┴──────┴──────┴──────┴──────┘
 *                                                                               generated by [keymapviz] */
    [_ADJUST] = LAYOUT(
      _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                                       KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
      _______, RGB_TOG, RGB_SAI, RGB_HUI, RGB_VAI, RGB_MOD,                                     _______, _______, _______, KC_F11,  KC_F12,  _______,
      _______, _______, RGB_SAD, RGB_HUD, RGB_VAD, RGB_RMOD,_______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                                 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
// /*
//  * Layer template
//  *
//  * ,-------------------------------------------.                              ,-------------------------------------------.
//  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
//  * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
//  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
//  * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
//  * |        |      |      |      |      |      |      |      |  |      |      |      |      |      |      |      |        |
//  * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
//  *                        |      |      |      |      |      |  |      |      |      |      |      |
//  *                        |      |      |      |      |      |  |      |      |      |      |      |
//  *                        `----------------------------------'  `----------------------------------'
//  */
//     [_LAYERINDEX] = LAYOUT(
//       _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
//       _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
//       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
//                                  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
//     ),
};
// clang-format on

// layer_state_t layer_state_set_user(layer_state_t state) { return
// update_tri_layer_state(state, _SYM, _NUM, _ADJUST); }

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    mod_state         = get_mods();
    oneshot_mod_state = get_oneshot_mods();
    switch (keycode) {
        case OSS_NUM:
            if (record->tap.count > 0) {
                if (record->event.pressed) {
                    set_oneshot_mods(MOD_BIT(KC_LSHIFT));
                }
                return false;
            }
            break;
        case MT_AUML:
            if (record->tap.count > 0) {
                if (record->event.pressed) {
                    del_mods(MOD_MASK_SHIFT);
                    del_oneshot_mods(MOD_MASK_SHIFT);
                    tap_code16(RALT(KC_U));
                    set_mods(mod_state);
                    set_oneshot_mods(oneshot_mod_state);
                    tap_code(KC_A);
                }
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
        case MT_ESZT:
            if (record->tap.count > 0) {
                if (record->event.pressed) {
                    del_mods(MOD_MASK_SHIFT);
                    del_oneshot_mods(MOD_MASK_SHIFT);
                    tap_code16(RALT(KC_S));
                    set_mods(mod_state);
                    set_oneshot_mods(oneshot_mod_state);
                }
                return false;
            }
            break;
        case MT_EURO:
            if (record->tap.count > 0) {
                if (record->event.pressed) {
                    del_mods(MOD_MASK_SHIFT);
                    del_oneshot_mods(MOD_MASK_SHIFT);
                    tap_code16(RSA(KC_2));
                    set_mods(mod_state);
                    set_oneshot_mods(oneshot_mod_state);
                }
                return false;
            }
            break;
    }
    return true;
};
