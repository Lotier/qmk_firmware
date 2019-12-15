/*
Copyright 2017 Wez Furlong

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xDEAD
#define PRODUCT_ID      0x1337
#define DEVICE_VER      0x0001
#define MANUFACTURER    JBETT
#define PRODUCT         KEYBOARD
#define DESCRIPTION     TKL MKI

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 2
#define DIODE_DIRECTION CUSTOM_MATRIX

// We have an Adafruit BLE SPI Friend board attached
#define AdafruitBleResetPin D2
#define AdafruitBleCSPin    D3
#define AdafruitBleIRQPin   F0

// Turn off the mode leds on the BLE module
#define ADAFRUIT_BLE_ENABLE_MODE_LEDS 1
#define ADAFRUIT_BLE_ENABLE_POWER_LED 1

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCING_DELAY 5

/* key combination for magic key command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

#endif
