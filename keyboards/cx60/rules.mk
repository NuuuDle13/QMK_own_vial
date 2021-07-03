# MCU name
MCU                 = atmega32u4

# Bootloader selection
BOOTLOADER          = atmel-dfu

# Build Options
BOOTMAGIC_ENABLE    = yes   # Virtual DIP switch configuration
MOUSEKEY_ENABLE     = yes   # Mouse keys
EXTRAKEY_ENABLE     = yes   # Audio control and System control
CONSOLE_ENABLE      = no    # Console for debug
COMMAND_ENABLE      = no    # Commands for debug and configuration
NKRO_ENABLE         = yes   # Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
BACKLIGHT_ENABLE    = yes   # Enable keyboard backlight functionality
MIDI_ENABLE         = no    # MIDI controls
AUDIO_ENABLE        = no    # Audio output
UNICODE_ENABLE      = no    # Unicode
BLUETOOTH_ENABLE    = no    # Enable Bluetooth
RGBLIGHT_ENABLE     = yes   # Enable RGB underlight
SLEEP_LED_ENABLE    = no    # Breathing sleep LED during USB suspend

