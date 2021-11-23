#include QMK_KEYBOARD_H
#include "keymap.h"

// Shift + Backspace -> Delete
const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, SYM_BSP, KC_DELETE);
// Shift + Space -> Underscore, only on layers 0 and 1
const key_override_t space_key_override = ko_make_with_layers(MOD_MASK_SHIFT, NAV_SPC, KC_UNDERSCORE, (1UL << _BASE) | (1UL << _QWERTY));
// Shift + Dot -> Bullet
const key_override_t dot_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_DOT, RALT(KC_8));
// Shift + Comma -> En-Dash
const key_override_t comma_key_override = ko_make_basic(MOD_MASK_SHIFT, MT_RA_CM, RALT(KC_MINUS));
// Shift + minus -> Slash
const key_override_t minus_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_MINUS, KC_SLASH);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &delete_key_override,
    &space_key_override,
    &dot_key_override,
    &comma_key_override,
    &minus_key_override,
    NULL // Null terminate the array of overrides!
};
