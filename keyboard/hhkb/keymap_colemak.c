#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(LGUI,   1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL,BSLS, GRV, \
           TAB,    Q,   W,   F,   P,   G,   J,   L,   U,   Y,SCLN,LBRC,RBRC, DEL,      \
           BSPC,   A,   R,   S,   T,   D,   H,   N,   E,   I,   O,QUOT, ENT,           \
           FN1,    Z,   X,   C,   V,   B,   K,   M,COMM, DOT,SLSH, FN2, ESC,           \
                LALT,LCTL,           FN0,                RCTL,RALT),


    KEYMAP(TRNS,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12, F13, F14, \
           TRNS, PWR,TRNS,TRNS,PSCR,CAPS,HOME,PGDN,PGUP, END,MUTE,VOLD,VOLU,TRNS,      \
           TRNS, F15, F16, F17, F18, F19,LEFT,DOWN,  UP,RGHT, F20, F21,TRNS,           \
           LSFT,TRNS,TRNS,TRNS,TRNS, SPC, SPC,MPLY,MPRV,MNXT,PAUS,TRNS,RSFT,           \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(1, KC_SPACE),
    [1] = ACTION_MODS_ONESHOT(MOD_LSFT),
    [2] = ACTION_MODS_ONESHOT(MOD_RSFT)
};
