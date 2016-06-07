#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(ESC,    1,   2,   3,   4,   5,   6,   7,   8,   9,   0,LBRC,RBRC,BSLS, GRV, \
           TAB,    Q,   W,   F,   P,   G,   J,   L,   U,   Y,SCLN,MINS, EQL, DEL,      \
           BSPC,   A,   R,   S,   T,   D,   H,   N,   E,   I,   O,QUOT, ENT,           \
           LSFT,   Z,   X,   C,   V,   B,   K,   M,COMM, DOT,SLSH,RSFT, FN0,           \
                 FN0,LCTL,           SPC,                LGUI,RALT),

    KEYMAP(PAUS,  F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9, F10, F11, F12,VOLD,VOLU, \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MPRV,MNXT,MUTE,      \
           TRNS,TRNS,LEFT,  UP,DOWN,RGHT,LEFT,DOWN,  UP,RGHT,CAPS,CAPS,MPLY,           \
           TRNS,TRNS,HOME,PGUP,PGDN, END,HOME,PGDN,PGUP, END,TRNS,TRNS,TRNS,           \
                TRNS,TRNS,          TRNS,               TRNS,TRNS)
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1)
};
