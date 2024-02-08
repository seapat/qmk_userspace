#pragma once
/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/
                                       // W25Q080 	Selected by default
// #define RP2040_FLASH_AT25SF128A     // AT25SF128A
// #define RP2040_FLASH_GD25Q64CS      // GD25Q64CSD
// #define RP2040_FLASH_W25X10CL       // W25X10CL
// #define RP2040_FLASH_IS25LP080      // IS25LP080
// #define RP2040_FLASH_GENERIC_03H    // Generic 03H flash


// Number of Layers that can be used by VIA.
// Change this if you want more layers
#define DYNAMIC_KEYMAP_LAYER_COUNT 7

// sync layer state between halves
// # define SPLIT_LAYER_STATE_ENABLE

// OLED settings
#ifdef OLED_ENABLE
#    define OLED_TIMEOUT 20000 // 120000 = 2 minutes in ms.
#    define OLED_BRIGHTNESS 50 // Default 100.
// #    define SPLIT_WPM_ENABLE   // Enable WPM across split keyboards (+268).
// #    define SPLIT_OLED_ENABLE  // Synx on/off OLED state between halves (+100).
#endif

// Encoder settings
// #ifdef ENCODER_ENABLE
// #    undef  ENCODER_RESOLUTION
// #    define ENCODER_RESOLUTION 4
// #endif
#ifdef ENCODER_MAP_ENABLE
// Key delay for encoders (necessary for some keycodes)
#    define ENCODER_MAP_KEY_DELAY 10
#endif

/* determines timeout of LT and similar
- qmk default is 200
- sofle rev1 sets this as 100
*/
#ifdef TAPPING_TERM
#    undef  TAPPING_TERM
#endif
#    define TAPPING_TERM 200
// If LT is released before TAPPING_TERM and another key is still pressed
// Then the layered Keycode is sent
#define PERMISSIVE_HOLD

