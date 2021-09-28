#include QMK_KEYBOARD_H
#include "keymap.h"

const rgblight_segment_t PROGMEM _RGB_CAPS_LOCK[] = RGBLIGHT_LAYER_SEGMENTS({0, 10, HSV_PURPLE});

const rgblight_segment_t PROGMEM _RGB_OK[] = RGBLIGHT_LAYER_SEGMENTS({0, 10, HSV_PURPLE});

const rgblight_segment_t PROGMEM _RGB_QWERTY[] = RGBLIGHT_LAYER_SEGMENTS({0, 10, HSV_PURPLE});

// Light LEDs 0 to 10 when SYM_L is active
const rgblight_segment_t PROGMEM _RGB_SYM_L[] = RGBLIGHT_LAYER_SEGMENTS({0, 10, HSV_PURPLE});

// Light LEDs 11 to 20 when SYM_R is active
const rgblight_segment_t PROGMEM _RGB_SYM_R[] = RGBLIGHT_LAYER_SEGMENTS({10, 10, HSV_PURPLE});

// Light LEDs 11 to 20 when NUM is active
const rgblight_segment_t PROGMEM _RGB_NUM[] = RGBLIGHT_LAYER_SEGMENTS({10, 10, HSV_YELLOW});

// Light LEDs 11 to 20 when NAV is active
const rgblight_segment_t PROGMEM _RGB_NAV[] = RGBLIGHT_LAYER_SEGMENTS({0, 10, HSV_BLUE});

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(_RGB_CAPS_LOCK, _RGB_OK, _RGB_QWERTY, _RGB_SYM_L, _RGB_SYM_R, _RGB_NUM, _RGB_NAV);

void keyboard_post_init_user(void) {
    rgblight_enable_noeeprom();  // Enables RGB, without saving settings
    rgblight_sethsv_noeeprom(21, 255, 110); // set default LED color to amber
    rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
    rgblight_layers = my_rgb_layers; // Enable the LED layers
}

// bool led_update_user(led_t led_state) {
//     rgblight_set_layer_state(0, led_state._RGB_CAPS_LOCK);
//     return true;
// }

// layer_state_t default_layer_state_set_user(layer_state_t state) {
//     rgblight_set_layer_state(1, layer_state_cmp(state, _RGB_OK));
//     return state;
// }

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(3, layer_state_cmp(state, _SYM_L));
    rgblight_set_layer_state(4, layer_state_cmp(state, _SYM_R));
    rgblight_set_layer_state(5, layer_state_cmp(state, _NUM));
    rgblight_set_layer_state(6, layer_state_cmp(state, _NAV));
    return state;
}
