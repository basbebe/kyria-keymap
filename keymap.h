#pragma once

#include QMK_KEYBOARD_H

// Initialize variable holding the binary
// representation of active modifiers.
uint8_t mod_state;
uint8_t oneshot_mod_state;
uint16_t last_keycode;

bool caps_word_on;
void caps_word_enable(void);
void caps_word_disable(void);

enum layers {
    _OK = 0,
    _QWERTY,
    _SYM_L,
    _SYM_R,
    _NUM,
    _NAV,
    _FUN,
    _ADJUST
};

// Layer keys
#define OSS_SYM TD(TD_OSS)
#define SPC_SYM LT(_SYM_L, KC_SPACE)

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
#define MT_RA_Z RALT_T(KC_Z)
#define MT_RA_W RALT_T(KC_W)

// One Shot Shifts
#define OS_LSFT OSM(MOD_LSFT)
#define OS_RSFT OSM(MOD_RSFT)

// German Umlauts
// The other accented letters are created using R_ALT
// assumes eurkey base layout
#define A_UML ALGR(KC_A)
#define O_UML ALGR(KC_O)
#define U_UML ALGR(KC_U)
#define Eszett ALGR(KC_S)

// Symbols
#define ELLIPS SAGR(KC_SLASH)

enum custom_keycodes {
  CAPS_WORD,
  REPEAT
};

// Tap Dance keycodes
#ifdef TAP_DANCE_ENABLE
enum td_keycodes {
    TD_OSS
};
#endif
