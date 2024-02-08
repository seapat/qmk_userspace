# https://www.caniusevia.com/docs/configuring_qmk#create-a-via-keymap-directory-and-files-in-qmk-source

# Enables Audio control and System control Keycodes
EXTRAKEY_ENABLE = yes
# Enables Mousekeys
MOUSEKEY_ENABLE = yes

# longer compile time for smaller output
LTO_ENABLE = no
# Allows use of `qmk console` for debugging
CONSOLE_ENABLE = yes
# Enables VIA
VIA_ENABLE = yes

# Encoder Support
ENCODER_ENABLE = yes
# Use Enocoder Mapping
ENCODER_MAP_ENABLE = yes

COMMAND_ENABLE = yes
WPM_ENABLE = no
COMBO_ENABLE = no

# OLED_DRIVER = SSD1306
OLED_ENABLE = no

# https://github.com/qmk/qmk_firmware/blob/master/docs/flashing.md
# BOARD = GENERIC_RP_RP2040
BOOTLOADER=rp2040 # TODO: test if this can replace the commandline flag

# https://docusaurus.qmk.fm/feature_autocorrect/
# using default lib for now, lets see if this gets in the way
AUTOCORRECT_ENABLE = yes
