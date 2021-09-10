#pragma once

#include QMK_KEYBOARD_H

// Initialize variable holding the binary
// representation of active modifiers.
uint8_t  mod_state;
uint8_t  oneshot_mod_state;
uint16_t last_keycode;

bool caps_word_on;
void caps_word_enable(void);
void caps_word_disable(void);

enum layers { _OK = 0, _QWERTY, _SYM_L, _SYM_R, _NUM, _NAV, _FUN, _ADJUST };

// Layer keys
#define TAB_SYM LT(_SYM_R, KC_TAB)
#define OSS_NUM LT(_NUM, OSS)
#define REP_ADJ LT(_ADJUST, REPEAT)
#define BSP_FUN LT(_FUN, KC_BSPC)
#define SPC_NAV LT(_NAV, KC_SPACE)
#define SYM_L MO(_SYM_L)

// Miscellaneous keyboard shortcuts in direct access
#define UNDO LCTL(KC_Z)
#define REDO LCTL(KC_Y)

// Left-hand home row mods
#define HOME_S LCTL_T(KC_S)
#define HOME_N LALT_T(KC_N)
#define HOME_R LSFT_T(KC_R)
#define HOME_T LGUI_T(KC_T)

// Right-hand home row mods
#define HOME_I RGUI_T(KC_I)
#define HOME_E RSFT_T(KC_E)
#define HOME_A LALT_T(KC_A)
#define HOME_H RCTL_T(KC_H)

// Sym layer mod Taps
#define MT_AUML LALT_T(A_UML)
#define MT_EURO RSFT_T(EURO)
#define MT_ESZT LCTL_T(ESZETT)

// Mod Tap Right Alt
#define MT_RA_Z RALT_T(KC_Z)
#define MT_RA_W RALT_T(KC_W)

// One Shot Shifts
#define OS_LSFT OSM(MOD_LSFT)
#define OS_RSFT OSM(MOD_RSFT)

// Symbols
// #define MT_AUML TD(TD_AUML)
// #define MT_ESZT TD(TD_ESZT)

// Custom Keycodes
enum custom_keycodes {
    CAPS_WORD = SAFE_RANGE,
    REPEAT,
    OSS,
    // German Umlauts
    A_UML,
    O_UML,
    U_UML,
    ESZETT,
    // Symbols
    ELLIPS,
    EURO
};

// Tap Dance keycodes
#ifdef TAP_DANCE_ENABLE
enum td_keycodes { TD_OSS };
#endif
