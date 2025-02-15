/* 
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
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

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_split_4x6_5(
    KC_ESC,  KC_1, KC_2, KC_3, KC_4, KC_5,			            KC_6, KC_7, KC_8,    KC_9,   KC_0,     KC_BSPC,
//-------------------------------------------------//-----------------------------------------------------------//
    KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T,			            KC_Y, KC_U, KC_I,    KC_O,   KC_P,     KC_BSLS,
//-------------------------------------------------//-----------------------------------------------------------//
    KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G,	                KC_H, KC_J, KC_K,    KC_L,   KC_SCLN,  KC_QUOT,
//-------------------------------------------------//-----------------------------------------------------------//
    KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B,                  KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,  KC_TILD,
//-------------------------------------------------//-----------------------------------------------------------//
                        KC_LGUI, KC_ENT, MO(1),		     MO(2),  KC_SPC, KC_EQL,
                                 KC_LALT,  KC_LCBR,      KC_RCBR, KC_MINS
  ),

  [1] = LAYOUT_split_4x6_5(
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,			  KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,  KC_DEL,
//---------------------------------------------------------//-----------------------------------------------------------//
    KC_F1,   KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,			            KC_F7, KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,
//---------------------------------------------------------//-----------------------------------------------------------//
    KC_LSFT, _______, _______, KC_END, KC_HOME,  KC_GRAVE,	      KC_RPRN, KC_P4,   KC_P5,   KC_P6,   KC_EQL,  KC_TILD,
//---------------------------------------------------------//-----------------------------------------------------------//
    KC_LCTL, _______, _______, KC_PGDN, KC_PGUP, _______,       _______, KC_P1,   KC_P2,   KC_P3,   KC_PLUS,   KC_PIPE,
//---------------------------------------------------------//-----------------------------------------------------------//
                               KC_LGUI, KC_ENT, KC_TRNS,		    KC_TRNS, KC_SPC, KC_TRNS,
                                        KC_LALT,  KC_TRNS,       KC_TRNS, KC_TRNS
  ),

  [2] = LAYOUT_split_4x6_5(
    KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,			    KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_MINUS,   KC_DEL,
//---------------------------------------------------------//--------------------------------------------------------------//
    _______, _______, RGB_RMOD, RGB_TOG, RGB_MOD, KC_LBRC,			  KC_RBRC, _______, KC_UP, KC_INS,  KC_PSCR,  KC_MUTE,
//---------------------------------------------------------//--------------------------------------------------------------//
    _______, KC_LEFT, KC_UP,    KC_DOWN, KC_RGHT, KC_LPRN,	      KC_RPRN, KC_LEFT, KC_DOWN, KC_RIGHT, _______,  KC_VOLU,
//---------------------------------------------------------//--------------------------------------------------------------//
    _______, _______, _______,  _______, _______, _______,        _______, _______, _______, _______, _______,  KC_VOLD,
//---------------------------------------------------------//--------------------------------------------------------------//
                               KC_LCTL, KC_HOME, KC_TRNS,		    KC_TRNS, KC_RALT, RESET,
                                        KC_SPC,  KC_BSPC,       KC_RCTL, KC_ENT
  ),
};
