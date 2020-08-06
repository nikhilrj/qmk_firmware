#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _MAC 1
#define _GAMES 2
#define _FNC 3

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  MAC,
  GAMES,
  FNC,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                               KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_GESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LGUI,          KC_MUTE, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, TO(_MAC),
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LALT, KC_LCTL, LT(_FNC,KC_SPC),         KC_BSPC, LT(_FNC,KC_ENT), KC_DEL
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_MAC] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                               KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_GESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LALT,          KC_MUTE, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, TO(_GAMES),
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LCTL, KC_LGUI, LT(_FNC,KC_SPC),         KC_BSPC, LT(_FNC,KC_ENT), KC_DEL
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_GAMES] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                               KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_GESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LGUI,          KC_MUTE, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, TO(_QWERTY),
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LALT, KC_LCTL, KC_SPC,                  KC_BSPC, LT(_FNC,KC_ENT), KC_DEL
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_FNC] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                              KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_NO,   KC_HOME, KC_UP,   KC_END,  KC_PGUP,                            KC_PSLS, KC_P7,   KC_P8,   KC_P9,   KC_PAST, KC_LBRC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_NO,   KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN,                            KC_PMNS, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, KC_RBRC, 
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC,  KC_TRNS,          KC_MPLY, KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_PEQL, KC_TRNS,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};


void keyboard_post_init_user(void) {
    rgblight_enable(); // Enable RGB by default
    rgblight_sethsv_noeeprom (HSV_MAGENTA); // Set it to Magenta by default
    rgblight_mode(1); // set to solid by default
}

void encoder_update_user(uint8_t index, bool clockwise) {
    if (IS_LAYER_ON(_FNC)) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }    
    else if(IS_LAYER_ON(_MAC)) {
        if (clockwise) {
            tap_code16(A(KC_RGHT));
        } else {
            tap_code16(A(KC_LEFT));
        }
    }
    else {
        if (clockwise) {
            tap_code16(C(KC_RGHT));
        } else {
            tap_code16(C(KC_LEFT));
        }
    }
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case _FNC:
            rgblight_sethsv_noeeprom (HSV_ORANGE);
            break;
        case _GAMES:
            rgblight_sethsv_noeeprom (HSV_RED);
            break;
        case _MAC:
            rgblight_sethsv_noeeprom (HSV_AZURE);
            break;
        case _QWERTY:
            rgblight_sethsv_noeeprom (HSV_MAGENTA);
            break;
        default: //  for any other layers, or the default layer
            rgblight_sethsv_noeeprom (HSV_MAGENTA);
            break;
    } 
  return state;
}