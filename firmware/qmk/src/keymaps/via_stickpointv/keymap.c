/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(
		KC_BTN1,    KC_BTN2,
		KC_BTN3,
		KC_4,    KC_6,
		KC_5,    KC_7
	),

	[1] = LAYOUT(
		XXXXXXX, XXXXXXX,
		XXXXXXX,
		XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX
	),

	[2] = LAYOUT(
		XXXXXXX, XXXXXXX,
		XXXXXXX,
		XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX
	),

	[3] = LAYOUT(
		XXXXXXX, XXXXXXX,
		XXXXXXX,
		XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX
	),

};


/* `ENCODER_MAP_ENABLE = yes` must be added to the rules.mk at the KEYMAP level. See QMK docs. */
/* Remove the following code if you do not enable it in your keymap (e.g. default keymap). */
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
	[0] = { ENCODER_CCW_CW(KC_WH_D, KC_WH_U) },
	[1] = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
	[2] = { ENCODER_CCW_CW(KC_NO, KC_NO) },
	[3] = { ENCODER_CCW_CW(KC_NO, KC_NO) }
};
#endif
