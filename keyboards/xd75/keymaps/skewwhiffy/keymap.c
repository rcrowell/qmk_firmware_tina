/* Copyright 2017 Kenny Hung
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "xd75.h"
#include "keymap_uk.h"
// Fillers to make layering more clear
#define _______ KC_TRNS

// Layer shorthand
#define _CM 0 // Colemak
#define _NB 1 // Numbers
#define _SYL 2 // Symbols left
#define _SYR 3 // Symbols right
#define _NAV 4 // Navigation

// Layer buttons
#define _Z_SFT SFT_T(UK_Z)
#define _SLSH SFT_T(UK_SLSH)
#define _X_NB LT(_NB, UK_X)
#define _DOT_NB LT(_NB, UK_DOT)
#define _C_SY LT(_SYL, UK_C)
#define _COM_SY LT(_SYR, UK_COMM)
#define _B_NAV LT(_NAV, UK_B)
#define _K_NAV LT(_NAV, UK_K)
#define _F1_NB LT(_NB, UK_F1)
#define _3_NB LT(_NB, UK_3)

// Custom hotkeys
#define _TERM LCTL(UK_QUOT) // Hotkey for Cmder or iTerm
#define _S_TAB S(UK_TAB)
#define _C_LEFT LCTL(UK_LEFT)
#define _C_RGHT LCTL(UK_RGHT)
#define _A_LEFT LALT(UK_LEFT)
#define _A_RGHT LALT(UK_RGHT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Colemak _CM
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------------------------------------------------------------------------------------------------------------------------------------|
 * |        | Q      | W      | F      | P      | G      |        |        |        | J      | L      | U      | Y      | ;      |        |
 * |--------------------------------------------------------------------------------------------------------------------------------------|
 * |        | A      | R      | S      | T      | D      |        |        |        | H      | N      | E      | I      | O      | ENT    |
 * |--------------------------------------------------------------------------------------------------------------------------------------|
 * |        | Z      | X      | C      | V      | B      |        |        |        | K      | M      | ,      | .      | /      |        |
 * |        | SHIFT  | NUMBER | SYMBOL |        | NAV    |        |        |        | NAV    |        | SYMBOL | FUNC   | SHIFT  |        |
 * |--------------------------------------------------------------------------------------------------------------------------------------|
 * | LSHIFT | LCTRL  | LALT   | LGUI   | TERM   | SPACE  | LCTRL  | DEL    | LALT   | BACKSP | RGUI   | RGUI   | RALT   | RCTRL  | RSHIFT |
 * |--------------------------------------------------------------------------------------------------------------------------------------|
 */
 [_CM] = {
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
  { _______, UK_Q,    UK_W,    UK_F,    UK_P,    UK_G,    _______, _______, _______, UK_J,    UK_L,    UK_U,    UK_Y,    UK_SCLN, _______ },
  { _______, UK_A,    UK_R,    UK_S,    UK_T,    UK_D,    _______, _______, _______, UK_H,    UK_N,    UK_E,    UK_I,    UK_O,    UK_ENT  },
  { _______, _Z_SFT,  _X_NB,   _C_SY,   UK_V,    _B_NAV,  _______, _______, _______, _K_NAV,  UK_M,    _COM_SY, _DOT_NB, _SLSH,   _______ },
  { UK_LSFT, UK_LCTL, UK_LALT, UK_LGUI, _TERM,   UK_SPC,  UK_LCTL, UK_DEL , UK_LALT, UK_BSPC, UK_RGUI, UK_RGUI, UK_RALT, UK_RCTL, UK_RSFT },
 },

/* Numbers _NB
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * |        |        | F7     | F8     | F9     | F10    |        |        |        |        | 7      | 8      | 9      |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        | F4     | F5     | F6     | F11    |        |        |        |        | 4      | 5      | 6      |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * |        |        | F1     | F2     | F3     | F12    |        |        |        |        | 1      | 2      | 3      |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        | 0      | 0      | .      |        |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */
 [_NB] = {
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
  { _______, _______, UK_F7,   UK_F8,   UK_F9,   UK_F10,  _______, _______, _______, _______, UK_7,    UK_8,    UK_9,    _______, _______ },
  { _______, _______, UK_F4,   UK_F5,   UK_F6,   UK_F11,  _______, _______, _______, _______, UK_4,    UK_5,    UK_6,    _______, _______ },
  { _______, _______, _F1_NB,  UK_F2,   UK_F3,   UK_F12,  _______, _______, _______, _______, UK_1,    UK_2,    _3_NB,   _______, _______ },
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, UK_0,    UK_0,    UK_DOT,  _______, _______ },
 },

/* Symbols _SYL and _SYR - For some reason, combining this into the same layer causes problems.
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        | !      | ??      | _      | -      | ~      |        |        |        | \      | {      | }      | /      | #      |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        | $      | %      | +      | =      |        |        |        |        | "      | (      | )      | '      | @      |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        | ^      | &      | *      | |      |        |        |        |        | <      | [      | ]      | >      | `      |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */
 [_SYL] = {
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
  { _______, UK_EXLM, UK_PND,  UK_UNDS, UK_MINS, UK_TILD, _______, _______, _______, UK_BSLS, UK_LCBR, UK_RCBR, UK_SLSH, UK_HASH, _______ },
  { _______, UK_DLR,  UK_PERC, UK_PLUS, UK_EQL,  _______, _______, _______, _______, UK_DQUO, UK_LPRN, UK_RPRN, UK_QUOT, UK_AT,   _______ },
  { _______, UK_CIRC, UK_AMPR, _C_SY,   UK_PIPE, _______, _______, _______, _______, UK_LABK, UK_LBRC, UK_RBRC, UK_RABK, UK_GRV,  _______ },
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
 },
 [_SYR] = {
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
  { _______, UK_EXLM, UK_PND,  UK_UNDS, UK_MINS, UK_TILD, _______, _______, _______, UK_BSLS, UK_LCBR, UK_RCBR, UK_SLSH, UK_HASH, _______ },
  { _______, UK_DLR,  UK_PERC, UK_PLUS, UK_EQL,  _______, _______, _______, _______, UK_DQUO, UK_LPRN, UK_RPRN, UK_QUOT, UK_AT,   _______ },
  { _______, UK_CIRC, UK_AMPR, UK_ASTR, UK_PIPE, _______, _______, _______, _______, UK_LABK, UK_LBRC, _COM_SY, UK_RABK, UK_GRV,  _______ },
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
 },
/*
 * Navigation
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        | Esc    | Ctrl L | Up     | Ctrl R |        |        |        |        |        | PtSn   | ScLk   | Pause  |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        | Tab    | Left   | Down   | Right  |        |        |        |        |        | Insert | Home   | PgUp   |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        | ShTab  | Alt L  | Shift  | Alt R  |        |        |        |        |        | ScLk   | End    | PgDn   |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        | RESET  |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */
 [_NAV] = {
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ },
  { _______, UK_ESC,  _C_LEFT, UK_UP  , _C_RGHT, _______, _______, _______, _______, _______, UK_PSCR, UK_SLCK, UK_PAUS, _______, _______ },
  { _______, UK_TAB,  UK_LEFT, UK_DOWN, UK_RGHT, _______, _______, _______, _______, _______, UK_INS,  UK_HOME, UK_PGUP, _______, _______ },
  { _______, _S_TAB,  _A_LEFT, UK_LSFT, _A_RGHT, _B_NAV,  _______, _______, _______, _K_NAV,  UK_SLCK, UK_END,  UK_PGDN, _______, _______ },
  { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET   },
 },
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
            #ifdef BACKLIGHT_ENABLE
              backlight_step();
            #endif
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};

bool CTRLDOWN = false;
bool ALTDOWN = false;
bool WINDOWN = false;
bool SHIFTDOWN = false;
bool TERMINALOPEN = false;

void matrix_scan_user(void) {
  if (TERMINALOPEN) {
    rgblight_effect_rainbow_swirl(128);
  } else if (SHIFTDOWN) {
    rgblight_effect_breathing(3);
  } else if (CTRLDOWN) {
    rgblight_effect_knight(3);
  } else if (WINDOWN) {
    rgblight_effect_snake(3);
  } else {
    rgblight_setrgb(0, 0, 0);
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case UK_LGUI:
    case UK_RGUI:
      WINDOWN = record->event.pressed;
      TERMINALOPEN = false;
      break;
    case UK_LCTL:
    case UK_RCTL:
      CTRLDOWN = record->event.pressed;
      break;
    case UK_LSFT:
    case UK_RSFT:
      SHIFTDOWN = record->event.pressed;
      break;
    case UK_LALT:
    case UK_RALT:
      ALTDOWN = record-> event.pressed;
      break;
    case _TERM:
      if (record->event.pressed) {
        TERMINALOPEN = !TERMINALOPEN;
      }
      break;
  }
  return true;
}
