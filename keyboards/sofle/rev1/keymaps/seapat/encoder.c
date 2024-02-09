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
    [_GAME_SWAP] =  { ENCODER_CCW_CW(KC_TRNS, KC_REDO), ENCODER_CCW_CW(KC_WH_L, KC_WH_R) },
    //                mouse wheel up (CCW)/down (CW)    mouse wheel left/right
    [_SYMB] =       { ENCODER_CCW_CW(KC_WPRV, KC_WNXT), ENCODER_CCW_CW(KC_WH_L, KC_WH_R) },
    //                Undo / Redo                       Previous Word / Next Word
    [_EXT] =        { ENCODER_CCW_CW(KC_UNDO, KC_REDO), ENCODER_CCW_CW(KC_WH_L, KC_WH_R) },
    [_ADJUST] =     { ENCODER_CCW_CW(KC_UNDO, KC_REDO), ENCODER_CCW_CW(KC_WPRV, KC_WNXT) }
    // clang-format on
};

#endif

/*
#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    switch(get_highest_layer(layer_state|default_layer_state)) {
        // case _QWERTY:
        // case _COLEMAK_DH:
        // case _GAME_BASE:

        case _EXT:
        case _GAME_SWAP:
        case _SYMB:
            if (index == 0) {
                if (clockwise) {
                    tap_code(KC_PGUP);
                } else {
                    tap_code(KC_PGDN);
                }
            } else if (index == 1) {
                if (clockwise) {
                    tap_code(KC_MS_WH_RIGHT);
                } else {
                    tap_code(KC_MS_WH_LEFT);
                }
            }
            break;

        default:
            if (index == 0) {
                if (clockwise) {
                    tap_code(KC_VOLU);
                } else {
                    tap_code(KC_VOLD);
                }
            } else if (index == 1) {
                if (clockwise) {
                    tap_code(KC_MS_WH_UP);
                } else {
                    tap_code(KC_MS_WH_DOWN);
                }
            }
            break;
    }
    return false;
}

#endif
*/
