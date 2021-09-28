#include QMK_KEYBOARD_H
#include "keymap.h"

const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, BSP_FUN, KC_DELETE);
const key_override_t space_key_override = ko_make_basic(MOD_MASK_SHIFT, SPC_NAV, KC_UNDERSCORE);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &delete_key_override,
    &space_key_override,
    NULL // Null terminate the array of overrides!
};
