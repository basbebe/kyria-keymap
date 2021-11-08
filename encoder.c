#include QMK_KEYBOARD_H
#include "keymap.h"

// Scrolling with PageUp and PgDn.
void encoder_scroll_page(bool clockwise) {
    if (clockwise) {
        tap_code(KC_PGUP);
    } else {
        tap_code(KC_PGDN);
    }
}

// Volume control.
void encoder_volume(bool clockwise) {
    if (clockwise) {
        tap_code(KC_VOLU);
    } else {
        tap_code(KC_VOLD);
    }
}

void encoder_tab_windows(bool clockwise) {
    if (clockwise) {
        if (!is_gui_tab_active) {
            is_gui_tab_active = true;
            register_code(KC_LGUI);
        }
        gui_alt_timer = timer_read();
        tap_code16(KC_TAB);
    } else {
        if (!is_gui_tab_active) {
            is_gui_tab_active = true;
            register_code(KC_LGUI);
        }
        gui_alt_timer = timer_read();
        tap_code16(S(KC_TAB));
    }
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        switch (biton32(layer_state)) {
            default:
                if (get_mods() & MOD_MASK_GUI || oneshot_mod_state & MOD_MASK_GUI) {
                    encoder_tab_windows(clockwise);
                } else {
                    encoder_scroll_page(clockwise);
                }
                break;
        }
    } else if (index == 1) {
        switch (biton32(layer_state)) {
            default:
                encoder_volume(clockwise);
                break;
        }
    }
    return false;
}
