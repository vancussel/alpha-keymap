#include QMK_KEYBOARD_H

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(1, KC_V):
            return TAPPING_TERM + 150;
        case LT(2, KC_B):
            return TAPPING_TERM + 150;
        default:
            return TAPPING_TERM;
    }
}

#define HOME 0
#define FRST 1
#define SCND 2

enum combos {
  QW_ESC,
  OP_BACKSPACE,
  LSCOL_ENTER,
  DF_LSHIFT,
  JK_RSHIFT,
  ZX_LCTRL,
  XC_RALT,
  AS_TAB,
  IO_DELETE
};

const uint16_t PROGMEM qw_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM op_combo[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM lscol_combo[] = {KC_L, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM df_combo[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM zx_combo[] = {KC_Z, KC_X, COMBO_END};
const uint16_t PROGMEM xc_combo[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM as_combo[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM io_combo[] = {KC_I, KC_O, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [QW_ESC] = COMBO(qw_combo, KC_ESC),
  [OP_BACKSPACE] = COMBO(op_combo, KC_BSPACE),
  [LSCOL_ENTER] = COMBO(lscol_combo, KC_ENTER),
  [DF_LSHIFT] = COMBO(df_combo, KC_LSHIFT),
  [JK_RSHIFT] = COMBO(jk_combo, KC_RSHIFT),
  [ZX_LCTRL] = COMBO(zx_combo, KC_LCTRL),
  [XC_RALT] = COMBO(xc_combo, KC_RALT),
  [AS_TAB] = COMBO(as_combo, KC_TAB),
  [IO_DELETE] = COMBO(io_combo, KC_DELETE)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[HOME] = LAYOUT(
		KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
		KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCOLON,
		KC_Z, KC_X, KC_C, LT(1, KC_V), KC_SPC, LT(2, KC_B), KC_N, KC_M),

	[FRST] = LAYOUT(
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0,
        KC_EXCLAIM, KC_AT, KC_HASH, KC_DOLLAR, KC_PERCENT, KC_CIRCUMFLEX, KC_AMPERSAND, KC_ASTERISK, KC_LEFT_PAREN, KC_RIGHT_PAREN,
		KC_MINUS, KC_UNDERSCORE, KC_EQUAL, KC_TRNS, KC_SPC, KC_COMMA, KC_DOT, KC_QUESTION),

	[SCND] = LAYOUT(
		KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,
		KC_F11, KC_F12, KC_UP, KC_LEFT_ANGLE_BRACKET, KC_RIGHT_ANGLE_BRACKET, KC_QUOTE, KC_SLASH, KC_BSLASH, KC_LBRACKET, KC_RBRACKET,
        KC_KP_PLUS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_SPC, KC_TRNS, KC_LGUI, KC_MEDIA_PLAY_PAUSE),

};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}         
