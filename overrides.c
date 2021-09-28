#include QMK_KEYBOARD_H
#include "keymap.h"

const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, BSP_FUN, KC_DELETE);
const key_override_t dot_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_DOT, RALT(KC_8));
const key_override_t comma_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_COMMA, RALT(KC_MINUS));

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &delete_key_override,
    &dot_key_override,
    &comma_key_override,
    NULL // Null terminate the array of overrides!
};
