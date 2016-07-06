#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(ESC,    1,   2,   3,   4,   5,   6,   7,   8,   9,   0,MINS, EQL,BSLS, GRV, \
           TAB,    Q,   W,   F,   P,   G,   J,   L,   U,   Y,SCLN,LBRC,RBRC, DEL,      \
           BSPC,   A,   R,   S,   T,   D,   H,   N,   E,   I,   O,QUOT, ENT,           \
           LSFT,   Z,   X,   C,   V,   B,   K,   M,COMM, DOT,SLSH,RSFT,CAPS,           \
                LALT,LCTL,           SPC,                FN0,LGUI),

    KEYMAP(PAUS,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12,TRNS,TRNS, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,  UP, END,TRNS,TRNS,      \
           TRNS,MPLY,MPRV,MNXT,TRNS,TRNS,TRNS,TRNS,TRNS,LEFT,DOWN,RGHT,TRNS,           \
           TRNS,MUTE,VOLD,VOLU,TRNS,TRNS,TRNS,TRNS,TRNS,PGDN,PGUP,TRNS,TRNS,           \
                TRNS,TRNS,          TRNS,               TRNS,TRNS)
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1)
};
