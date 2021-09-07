#include QMK_KEYBOARD_H

#include "keymap.h"

// Define a type containing as many tapdance states as you need
typedef enum {
    // TD_NONE,
    TD_UNKNOWN,
    TD_SINGLE_TAP,
    TD_SINGLE_HOLD,
    TD_DOUBLE_SINGLE_TAP
} td_state_t;

// Create a global instance of the tapdance state type
static td_state_t td_state;

// Declare your tapdance functions:

// Function to determine the current tapdance state
td_state_t cur_dance(qk_tap_dance_state_t *state);

// `finished` and `reset` functions for each tapdance keycode
void oss_finished(qk_tap_dance_state_t *state, void *user_data);
void oss_reset(qk_tap_dance_state_t *state, void *user_data);

// Determine the tapdance state to return
td_state_t cur_dance(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed)
            return TD_SINGLE_TAP;
        else
            return TD_SINGLE_HOLD;
    }
    if (state->count == 2)
        return TD_DOUBLE_SINGLE_TAP;
    else
        return TD_UNKNOWN;  // Any number higher than the maximum state value you return above
}

// Handle the possible states for each tapdance keycode you define:

void oss_finished(qk_tap_dance_state_t *state, void *user_data) {
    td_state = cur_dance(state);
    switch (td_state) {
        case TD_SINGLE_TAP:
            set_oneshot_mods(MOD_BIT(KC_LSHIFT));
            break;
        case TD_SINGLE_HOLD:
            layer_on(_SYM_R);
            break;
        case TD_DOUBLE_SINGLE_TAP:  // Allow nesting of 2 parens `((` within tapping term
                                    // tap_code16(KC_LPRN);
                                    // register_code16(KC_LPRN);
        case TD_UNKNOWN:
            break;
    }
}

void oss_reset(qk_tap_dance_state_t *state, void *user_data) {
    switch (td_state) {
        case TD_SINGLE_TAP:
            break;
        case TD_SINGLE_HOLD:
            clear_oneshot_mods();
            layer_off(_SYM_R);
            break;
        case TD_DOUBLE_SINGLE_TAP:
            clear_oneshot_mods();
            // unregister_code16(KC_LPRN);
        case TD_UNKNOWN:
            break;
    }
}

// Define `ACTION_TAP_DANCE_FN_ADVANCED()` for each tapdance keycode, passing in `finished` and `reset` functions
qk_tap_dance_action_t tap_dance_actions[] = {[TD_OSS] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, oss_finished, oss_reset)};
