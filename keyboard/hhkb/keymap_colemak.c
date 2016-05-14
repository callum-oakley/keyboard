#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(GRV,    1,   2,   3,   4,   5,   6,   7,   8,   9,   0, DEL,MUTE,VOLD,VOLU, \
           TAB,    Q,   W,   F,   P,   G,   J,   L,   U,   Y,SCLN,MINS,CAPS, FN4,      \
           BSPC,   A,   R,   S,   T,   D,   H,   N,   E,   I,   O,QUOT, ENT,           \
           FN1,    Z,   X,   C,   V,   B,   K,   M,COMM, DOT,SLSH, FN2, FN3,           \
                LALT,LCTL,           FN0,                LGUI,RALT),

    KEYMAP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
           GRV,    1,   2,   3,   4,   5,   6,   7,   8,   9,   0, DEL,TRNS,TRNS,      \
           ESC, LBRC,LEFT,  UP,DOWN,RGHT,LEFT,DOWN,  UP,RGHT,RBRC, EQL,TRNS,           \
           TRNS, SPC,HOME,PGUP,PGDN, END,HOME,PGDN,PGUP, END,BSLS,TRNS,TRNS,           \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

    KEYMAP(TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MPLY,MPRV,MNXT, \
           F12,   F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11,TRNS,TRNS,      \
           PAUS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,           \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,           \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(1, KC_SPACE),
    [1] = ACTION_MODS_ONESHOT(MOD_LSFT),
    [2] = ACTION_MODS_ONESHOT(MOD_RSFT),
    [3] = ACTION_MODS(MOD_LALT | MOD_LCTL | MOD_LGUI),
    [4] = ACTION_LAYER_MOMENTARY(2)
};
