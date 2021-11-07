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

enum layers { _BASE = 0, _QWERTY, _SYM, _NUM, _NAV, _FUN, _ADJUST };

#define REPEAT KC_F22

// Layer keys
#define TAB_SYM LT(_SYM_R, KC_TAB)
#define OSS_NUM LT(_NUM, OSS)
#define REP_ADJ LT(_ADJUST, REPEAT)
#define BSP_FUN LT(_FUN, KC_BSPC)
#define SPC_NAV LT(_NAV, KC_SPACE)
#define SYM OSL(_SYM)
#define NUM OSL(_NUM)
#define NAV OSL(_NAV)

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

// Mod Tap Right Alt
#define MT_RA_CM RALT_T(KC_COMM)
#define MT_RA_M RALT_T(KC_M)

// Sym layer mod Taps
#define MT_AUML LALT_T(A_UML)
#define MT_EURO RSFT_T(EURO)
#define MT_ESZT LCTL_T(ESZETT)

// One Shot Mods
#define OS_LCTL OSM(MOD_LCTL)
#define OS_LSFT OSM(MOD_LSFT)
#define OS_LALT OSM(MOD_LALT)
#define OS_LGUI OSM(MOD_LGUI)
#define OS_RCTL OSM(MOD_RCTL)
#define OS_RSFT OSM(MOD_RSFT)
#define OS_RALT OSM(MOD_RALT)
#define OS_RGUI OSM(MOD_RGUI)
#define OS_HYPR OSM(MOD_HYPR)
#define OS_MEH  OSM(MOD_MEH)

// Symbols
// #define MT_AUML TD(TD_AUML)
// #define MT_ESZT TD(TD_ESZT)

// Custom Keycodes
enum custom_keycodes {
    CAPS_WORD = SAFE_RANGE,
    OSS,
    // German Umlauts
    A_UML,
    O_UML,
    U_UML,
    ESZETT,
    // Symbols
    ELLIPS,
    EURO,
    BULLET,
    ENDASH,
    PARAGPH
};

// Tap Dance keycodes
#ifdef TAP_DANCE_ENABLE
enum td_keycodes { TD_OSS };
#endif
