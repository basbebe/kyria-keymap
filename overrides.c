#include QMK_KEYBOARD_H
#include "keymap.h"

// Shift + Backspace -> Delete
const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, BSP_FUN, KC_DELETE);
// Shift + Space -> Underscore, only on layer 0
const key_override_t space_key_override = ko_make_with_layers(MOD_MASK_SHIFT, SPC_NAV, KC_UNDERSCORE, 0x00000001);
// Shift + Dot -> Bullet
const key_override_t dot_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_DOT, RALT(KC_8));
// Shift + Comma -> En-Dash
const key_override_t comma_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_COMMA, RALT(KC_MINUS));

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &delete_key_override,
    &space_key_override,
    &dot_key_override,
    &comma_key_override,
    NULL // Null terminate the array of overrides!
};
