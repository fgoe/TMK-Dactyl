#include "keymap_common.h"
// Dactyl DE
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP(
         ESC,    1,    2,   3,   4,   5,                          6,   7,    8,    9,    0, MINS,  \
         TAB,    Q,    W,   E,   R,   T,                          Y,   U,    I,    O,    P, LBRC,  \
        LCTL,    A,    S,   D,   F,   G, END,HOME, PGUP, PGDN,    H,   J,    K,    L, SCLN, QUOT,  \
        LSFT,    Z,    X,   C,   V,   B,     LALT, RALT,          N,   M, COMM,  DOT, SLSH, RSFT,  \
        NUBS, FN14, LEFT,RGHT, FN0,BSPC, DEL,LCTL, RCTL,  ENT,  SPC, FN0,   UP, DOWN, FN23, KP_PLUS ), 
        
    /* 1: media keys */
    KEYMAP(
         F12,    F1,    F2,    F3,    F4,    F5,                                                  F6,          F7,          F8,    F9,   F10,   F11, \
        GRV,   TRNS,  TRNS,  TRNS,  TRNS,  TRNS,                                                TRNS,        TRNS,        TRNS,  TRNS,  TRNS,  TRNS, \
        TRNS,  FN10,  FN11,  FN12,  FN13,  NONUS_HASH,     TRNS,  TRNS,  TRNS,  TRNS,           FN15,        FN16,        FN17,  FN18,  FN18,  TRNS, \
        FN22,  TRNS,  TRNS,  TRNS,  TRNS,  INS,                   TRNS,  TRNS,                  KP_ASTERISK, TRNS,        TRNS,  TRNS,  FN15,  FN16, \
        FN20,  TRNS,  TRNS,  TRNS,  TRNS,            TRNS, TRNS,  TRNS,  TRNS,  TRNS,  TRNS,                 TRNS,        TRNS,  TRNS,  TRNS,  KP_ASTERISK ),      
};
const uint16_t PROGMEM fn_actions[] = {
    /* QWERTZ Layout */
    [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
    [10]  =  ACTION_MODS_KEY(MOD_RALT,          KC_8),       // FN10  = RAlt+8 = [
    [11]  =  ACTION_MODS_KEY(MOD_RALT,          KC_9),       // FN11  = RAlt+9 = ]
    [12]  =  ACTION_MODS_KEY(MOD_RALT,          KC_7),       // FN12  = RAlt+7 = {
    [13]  =  ACTION_MODS_KEY(MOD_RALT,          KC_0),       // FN13  = RAlt+0 = }
    [14]  =  ACTION_MODS_KEY(MOD_LSFT,          KC_NUBS),    // FN14  = LSft+< = >
    [15]  =  ACTION_MODS_KEY(MOD_RALT,          KC_0),       // FN15  = RAlt+0 = =
    [16]  =  ACTION_MODS_KEY(MOD_LSFT,          KC_7),       // FN16  = RAlt+7 = /
    [17]  =  ACTION_MODS_KEY(MOD_RALT,          KC_MINS),    // FN17  = RAlt+- = \"
    [18]  =  ACTION_MODS_KEY(MOD_LSFT,          KC_8),       // FN18  = RAlt+8 = (
    [19]  =  ACTION_MODS_KEY(MOD_LSFT,          KC_9),       // FN19  = RAlt+9 = )
    [20]  =  ACTION_MODS_KEY(MOD_RALT,          KC_NUBS),    // FN20  = RAlt+< = |
    [21]  =  ACTION_MODS_KEY(MOD_RALT,          KC_NUBS),    // FN21  = RAlt+ = >
    [22]  =  ACTION_MODS_KEY(MOD_LSFT,          KC_NUHS),    // FN22  = RAlt+ = '
    [23]  =  ACTION_MODS_KEY(MOD_RALT,          KC_RBRC),    // FN23  = RAlt+ = ~
};

