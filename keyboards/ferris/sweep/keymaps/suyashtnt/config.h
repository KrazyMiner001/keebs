/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define DYNAMIC_KEYMAP_LAYER_COUNT 6
#define VIAL_TAP_DANCE_ENTRIES 10
#define VIAL_KEYBOARD_UID {0x47, 0x97, 0x7E, 0x32, 0xC9, 0xAC, 0x13, 0xF3}
#define UNICODE_SELECTED_MODES UNICODE_MODE_LINUX, UNICODE_MODE_WINCOMPOSE

#define VIAL_UNLOCK_COMBO_ROWS { 2, 3, 0, 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1, 0, 2, 4 }

#define WS2812_DI_PIN 17U
#define RGBLIGHT_LED_COUNT 2
#define RGBLED_SPLIT { 1, 1 }
#define RGBLIGHT_SPLIT
#define RGBLIGHT_DEFAULT_SPD 2
#define RGBLIGHT_EFFECT_RAINBOW_MOOD

#define EE_HANDS

#define PERMISSIVE_HOLD
#define QUICK_TAP_TERM_PER_KEY
#define TAPPING_TERM 150
#define ACHORDION_STREAK
