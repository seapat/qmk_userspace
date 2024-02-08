#include QMK_KEYBOARD_H
#include "oled.c"
#include "layers.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off

    [_QWERTY] = LAYOUT(
        KC_GRAVE, KC_1, KC_2,    KC_3,    KC_4,    KC_5,                                 KC_6,     KC_7,     KC_8,    KC_9,    KC_0,         KC_MINUS,
        KC_TAB,   KC_Q, KC_W,    KC_E,    KC_R,    KC_T,                                 KC_Y,     KC_U,     KC_I,    KC_O,    KC_P,         KC_BSPC,
        KC_ESC,   KC_A, KC_S,    KC_D,    KC_F,    KC_G,                                 KC_H,     KC_J,     KC_K,    KC_L,    KC_SEMICOLON, KC_QUOTE,
        KC_LSFT,  KC_Z, KC_X,    KC_C,    KC_V,    KC_B,             KC_MUTE,  KC_MPLY,  KC_N,     KC_M,     KC_COMM, KC_DOT,  KC_SLSH,      KC_RCTL,
                        KC_LALT, KC_LGUI, KC_LCTL, LT(_EXT, KC_DEL), KC_SPC,   KC_ENTER, LT(_SYMB, KC_BSPC), KC_RALT, LT(_EXT, KC_LBRC), KC_RBRC
    ),

    [_COLEMAK_DH] = LAYOUT(
        KC_GRAVE, KC_1, KC_2,    KC_3,    KC_4,    KC_5,                                KC_6,               KC_7,     KC_8,    KC_9,   KC_0,         KC_MINUS,
        KC_TAB,   KC_Q, KC_W,    KC_F,    KC_P,    KC_B,                                KC_J,               KC_L,     KC_U,    KC_Y,   KC_SEMICOLON, KC_BSPC,
        KC_ESC,   KC_A, KC_R,    KC_S,    KC_T,    KC_G,                                KC_M,               KC_N,     KC_E,    KC_I,   KC_O,         KC_QUOTE,
        KC_LSFT,  KC_Z, KC_X,    KC_C,    KC_D,    KC_V,             KC_MUTE,  KC_MPLY, KC_K,               KC_H,     KC_COMM, KC_DOT, KC_SLSH,      KC_RCTL,
                        KC_LALT, KC_LGUI, KC_LCTL, LT(_EXT, KC_DEL), KC_SPC,   KC_ENTER, LT(_SYMB, KC_BSPC), KC_RALT, LT(_EXT, KC_LBRC), KC_RBRC
    ),

    [_GAME_BASE] = LAYOUT(
        KC_GRAVE, KC_1,     KC_2,    KC_3,    KC_4,    KC_5,                                                     KC_6,               KC_7,    KC_8,             KC_9,   KC_0,         KC_MINUS,
        KC_T,     KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,                                                     KC_Y,               KC_U,    KC_I,             KC_O,   KC_P,         KC_BSPC,
        KC_G,     KC_ESC,   KC_A,    KC_S,    KC_D,    KC_F,                                                     KC_H,               KC_J,    KC_K,             KC_L,   KC_SEMICOLON, KC_QUOTE,
        KC_B,     KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,                    KC_MUTE,  KC_MPLY,               KC_N,               KC_M,    KC_COMM,          KC_DOT, KC_SLSH,      KC_RSFT,
                            KC_LALT, KC_LGUI, KC_LCTL, LT(_GAME_SWAP, KC_DEL),  KC_SPC,   LT(_QWERTY, KC_ENTER), LT(_SYMB, KC_BSPC), KC_RALT, LT(_EXT, KC_LBRC), KC_RBRC
    ),

    [_GAME_SWAP] = LAYOUT(
        KC_F1,     KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,                      KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11, KC_F12,
        _______,   KC_F13,     KC_F14,     KC_F15,     KC_F16,     KC_T,                       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,
        _______,   KC_F17,     KC_F18,     KC_F19,     KC_F20,     KC_G,                       KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,
        _______,   KC_F21,     KC_F22,     KC_F23,     KC_F24,     KC_B,    _______,  _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_NO,  KC_NO,
                               _______,    _______,    _______,    _______, _______,  _______, _______, _______, _______, _______
    ),

    [_SYMB] = LAYOUT(
        KC_F1,    KC_F2,    KC_F3,   KC_F4,      KC_F5,    KC_F6,                       KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,
        KC_TAB,   KC_EXLM,  KC_LPRN, KC_RPRN,    KC_DLR,   KC_PERC,                     KC_PAST,  KC_P7,    KC_P8,    KC_P9,    KC_PPLS,  KC_ENTER,
        KC_BSLS,  KC_UNDS,  KC_LCBR, KC_RCBR,    KC_AT,    KC_CIRC,                     KC_PEQL,  KC_P4,    KC_P5,    KC_P6,    KC_P0,    KC_NUM_LOCK,
        _______,  KC_PIPE,  KC_LBRC, KC_RBRC,    KC_HASH,  KC_AMPR, _______,  _______,  KC_PSLS,  KC_P1,    KC_P2,    KC_P3,    KC_PMNS,  _______,
                            _______, _______,    _______,  _______, _______,  _______,  _______,  _______,  _______,  _______
    ),

    [_EXT] = LAYOUT(
        KC_F1,     KC_F2,      KC_F3,      KC_F4,      KC_F5,       KC_F6,                       KC_F7,   KC_F8,    KC_F9,   KC_F10,  KC_F11,   KC_F12,
    LSFT(KC_TAB),  KC_WDEL,    KC_WPRV,    KC_UP,      KC_WNXT,     KC_WBSPC,                    _______, KC_F7,    KC_F8,   KC_F9,   KC_F10,   _______,
        KC_PGUP,   _______,    KC_LEFT,    KC_DOWN,    KC_RIGHT,    KC_HOME,                     _______, KC_F4,    KC_F5,   KC_F6,   KC_F11,   _______,
        KC_PGDN,   KC_LCTL,    KC_MPRV,    KC_MPLY,    KC_MNXT,     KC_END,  _______,  _______,  _______, KC_F1,    KC_F2,   KC_F3,   KC_F12,   _______,
                               _______,    _______,    _______,     _______, _______,  _______,  _______, _______,  _______, _______
    ),

    [_ADJUST] = LAYOUT(
        KC_NO,     KC_NO,      KC_NO,      KC_NO,          KC_NO,      KC_TOGGLE_BASE,              KC_NO,       KC_NO,          KC_NO,   KC_NO,      KC_NO,    EE_CLR,
        KC_NO,     KC_QWERTY,  KC_NO,      KC_NO,          KC_NO,      KC_NO,                       KC_NO,       KC_TOGGLE_BASE, KC_OS,   KC_NO,      KC_NO,    KC_NO,
        KC_NO,     KC_NO,      KC_NO,      KC_NO,          KC_NO,      KC_GAME,                     KC_NO,       EE_CLR,         QK_RBT,  DB_TOGG,    QK_BOOT,  KC_NO,
        KC_NO,     KC_NO,      KC_NO,      KC_COLEMAK_DH,  KC_NO,      KC_NO,   KC_NO,    KC_NO,    KC_NO,       KC_NO,          KC_NO,   KC_NO,      KC_NO,    KC_NO,
                               _______,    _______,        _______,    _______, _______,  _______,  _______,     _______,        _______, _______
    )
    // clang-format on
};

// Note that the key to be sent for counter-clockwise rotation (CCW) goes first and then the key for clockwise (CW) within ENCODER_CCW_CW.
#ifdef ENCODER_MAP_ENABLE
// clang-format off

// Base layer encoder mappings:
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    // Base layers
    //                volume up/down                    media prev/next
    [_QWERTY] =     { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN),  },
    // pass trough
    [_COLEMAK_DH] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [_GAME_BASE] =  { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    // same as _EXT
    [_GAME_SWAP] =  { ENCODER_CCW_CW(KC_UNDO, KC_REDO), ENCODER_CCW_CW(KC_WPRV, KC_WNXT) },
    //                mouse wheel up (CCW)/down (CW)    mouse wheel left/right
    [_SYMB] =       { ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(KC_WH_L, KC_WH_R) },
    //                Undo / Redo                       Previous Word / Next Word
    [_EXT] =        { ENCODER_CCW_CW(KC_UNDO, KC_REDO), ENCODER_CCW_CW(KC_WPRV, KC_WNXT) },
    [_ADJUST] =     { ENCODER_CCW_CW(KC_UNDO, KC_REDO), ENCODER_CCW_CW(KC_WPRV, KC_WNXT) }
    // clang-format on
};

#endif

layer_state_t layer_state_set_user(layer_state_t state) {
    // NOTE: we cant have the same destination layer multiple times (e.g. 2 paths to _ADJUST)
    state = update_tri_layer_state(state, _GAME_SWAP, _SYMB, _QWERTY);
    state = update_tri_layer_state(state, _EXT, _SYMB, _ADJUST);
    return state;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // Toggle base layer
        case KC_TOGGLE_BASE:
            if (record->event.pressed) {
                // Toggle swapping base layers between Colemak-DH and QWERTY.
                // When base layer is QWERTY, swap to Colemak-DH and vice-versa
                if (get_highest_layer(default_layer_state) == _QWERTY) {
                    set_single_persistent_default_layer(1UL << _COLEMAK_DH);//default_layer_set
                } else {
                    set_single_persistent_default_layer(1UL << _QWERTY);
                }
            }
            return false;

        case KC_QWERTY:
            if (record->event.pressed) {
                layer_clear();
                layer_on(_QWERTY);
            }
            return false;
        case KC_COLEMAK_DH:
            if (record->event.pressed) {
                layer_clear();
                layer_on(_COLEMAK_DH);
            }
            return false;
        case KC_GAME:
            if (record->event.pressed) {
                layer_on(_GAME_BASE);
            }
            return false;

        // Override undo in favor of the more modern undo action
        case KC_UNDO:
            if (record->event.pressed) {
                // Use the correct modifier for macOS or Windows
                uint16_t mod = keymap_config.swap_lalt_lgui ? KC_LGUI : KC_LCTL;
                // Send Ctrl+Z/Cmd+Z
                register_code(mod);
                tap_code_delay(KC_Z, 10);
                unregister_code(mod);
            }
            return false;

        //  Redo action
        case KC_REDO:
            if (record->event.pressed) {
                // Whether or not macOS mapping is enabled
                if (keymap_config.swap_lalt_lgui) {
                    // macOS - Send Cmd+Shift+Z
                    register_code(KC_LGUI);
                    register_code(KC_LSFT);
                    tap_code_delay(KC_Z, 10);
                    unregister_code(KC_LSFT);
                    unregister_code(KC_LGUI);
                } else {
                    // Windows - Send Ctrl+Y
                    register_code(KC_LCTL);
                    tap_code_delay(KC_Y, 10);
                    unregister_code(KC_LCTL);
                }
            }
            return false;

        // Next word
        case KC_WNXT:
            if (record->event.pressed) {
                // Use the correct modifier for macOS or Windows
                uint16_t mod = keymap_config.swap_lalt_lgui ? KC_LALT : KC_LCTL;
                // Send Ctrl+Right/Option+Right
                register_code(mod);
                tap_code_delay(KC_RGHT, 10);
                unregister_code(mod);
            }
            return false;

        // Previous word
        case KC_WPRV:
            if (record->event.pressed) {
                // Use the correct modifier for macOS or Windows
                uint16_t mod = keymap_config.swap_lalt_lgui ? KC_LALT : KC_LCTL;
                // Send Ctrl+Left/Option+Left
                register_code(mod);
                tap_code_delay(KC_LEFT, 10);
                unregister_code(mod);
            }
            return false;

        // Delete Word
        case KC_WBSPC:
            if (record->event.pressed) {
                // Use the correct modifier for macOS or Windows
                uint16_t mod = keymap_config.swap_lalt_lgui ? KC_LALT : KC_LCTL;
                // Send Ctrl+Left/Option+Left
                register_code(mod);
                tap_code_delay(KC_BSPC, 10);
                unregister_code(mod);
            }
            return false;

        // Forward delete Word
        case KC_WDEL:
            if (record->event.pressed) {
                // Use the correct modifier for macOS or Windows
                uint16_t mod = keymap_config.swap_lalt_lgui ? KC_LALT : KC_LCTL;
                // Send Ctrl+Left/Option+Left
                register_code(mod);
                tap_code_delay(KC_DEL, 10);
                unregister_code(mod);
            }
            return false;

        default:
            return true;
    }
}

// COMBO_ENABLE = yes
#ifdef COMBO_ENABLE
// https://github.com/qmk/qmk_firmware/blob/master/docs/feature_combo.md

enum combos {
  GAME_SLIDE_COMBO, // some games bind ctrl + shift to stuff like sliding
  GAME_CTRL_COMBO,
};

const uint16_t PROGMEM shift_escape[] = {KC_LSFT, KC_ESC, COMBO_END};
const uint16_t PROGMEM space_shift[] = {KC_SPC, KC_LSFT, COMBO_END};
combo_t key_combos[] = {
    [GAME_CTRL_COMBO]=COMBO(shift_escape, KC_LCTL),
    [GAME_CTRL_COMBO]=COMBO(space_shift, KC_LCTL),
};


bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
  //disable and enable some left hand combos when on specific
    switch (combo_index) {
        case GAME_SLIDE_COMBO:
        case GAME_CTRL_COMBO:
            if (!layer_state_is(_GAME_BASE)) {
                return false;
            }
    }
    return true;
}
#endif
