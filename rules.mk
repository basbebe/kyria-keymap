OLED_ENABLE = yes   # Enables the use of OLED displays
ENCODER_ENABLE = yes       # Enables the use of one or more encoders
RGBLIGHT_ENABLE = yes      # Enable keyboard RGB underglow
RGBLIGHT_STARTUP_ANIMATION = no

BOOTMAGIC_ENABLE = no      # Virtual DIP switch configuration
MOUSEKEY_ENABLE = no       # Mouse keys
COMBO_ENABLE = no         # Enable Combos
EXTRAKEY_ENABLE = yes      # Audio control and System control
CONSOLE_ENABLE = no        # Console for debug
COMMAND_ENABLE = no        # Commands for debug and configuration
UNICODE_ENABLE = no        # Unicode
UNICODEMAP_ENABLE = no     # Extended Unicode range
SWAP_HANDS_ENABLE = no     # Swap hands
WPM_ENABLE = yes           # WPM Calculation
TAP_DANCE_ENABLE = yes     # Enables Tab Dance
LTO_ENABLE = yes           # Enables Link Time Optimization to minimize FW size

# Load the necessary external C files if and only if
# the associated config option has been enabled
ifeq ($(strip $(COMBO_ENABLE)), yes)
    SRC += combos.c
endif
ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
    SRC += tapdance.c
endif
ifeq ($(strip $(SWAP_HANDS_ENABLE)), yes)
    SRC += swap_hand.c
endif
ifeq ($(strip $(RGBLIGHT_ENABLE)), yes)
	  SRC += rgbled.c
endif
ifeq ($(strip $(OLED_ENABLE)), yes)
	  SRC += oled.c
endif
ifeq ($(strip $(ENCODER_ENABLE)), yes)
	  SRC += encoder.c
endif
