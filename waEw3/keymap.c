#include QMK_KEYBOARD_H
#include "version.h"

#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
};


#define DUAL_FUNC_0 LT(7, KC_F4)
#define DUAL_FUNC_1 LT(5, KC_F1)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_LEFT_GUI,    KC_RIGHT_ALT,   KC_TAB,         KC_ESCAPE,      MO(6),          KC_BSPC,        LGUI(KC_H),                                     KC_TRANSPARENT, KC_DELETE,      MO(6),          KC_BSPC,        KC_ENTER,       KC_RIGHT_ALT,   KC_LEFT_GUI,
    KC_LEFT_ALT,    KC_X,           KC_F,           KC_L,           KC_B,           KC_K,           DUAL_FUNC_0,                                    LCTL(KC_T),     KC_P,           KC_G,           KC_O,           KC_U,           KC_QUOTE,       KC_LEFT_ALT,
    KC_LEFT_SHIFT,  KC_N,           KC_S,           KC_H,           KC_T,           KC_J,                                                                           KC_Y,           KC_C,           KC_A,           KC_E,           KC_I,           KC_LEFT_SHIFT,
    KC_LEFT_CTRL,   KC_V,           KC_Z,           KC_M,           KC_D,           KC_TRANSPARENT, DUAL_FUNC_1,                                    LCTL(KC_W),     KC_TRANSPARENT, KC_W,           KC_SLASH,       KC_COMMA,       KC_DOT,         KC_LEFT_CTRL,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TAB,         QK_REP,                                                                                                           QK_REP,           KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,
                                                                                                    TT(1),          KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_0,
                                                                                                                    KC_PSCR,        KC_PSCR,
                                                                                    KC_R,           MO(3),          CW_TOGG,        CW_TOGG,        MO(4),          KC_SPACE
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                                           KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPC,
    KC_LEFT_ALT,    KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_F4,                                          KC_EQUAL,       KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,
    KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,
    KC_LEFT_CTRL,   KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_F3,                                          KC_MINUS,       KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_UP,          KC_SLASH,
    KC_TRANSPARENT, KC_BSPC,        KC_F2,          OSL(6),         KC_TAB,                                                                                                         KC_TRANSPARENT, KC_SLASH,       KC_LEFT,        KC_DOWN,        KC_RIGHT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,        KC_END,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_SPACE,       MO(2),          OSM(MOD_LALT),  KC_CAPS,        KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_BSPC,        KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_QUOTE,       KC_P,           KC_O,           KC_I,           KC_U,           KC_Y,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_ENTER,       KC_SCLN,        KC_L,           KC_K,           KC_J,           KC_H,                                                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    OSM(MOD_LSFT),  KC_SLASH,       KC_DOT,         KC_COMMA,       KC_M,           KC_N,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_PSCR,        LGUI(KC_TAB),   LCTL(KC_TAB),   LALT(KC_TAB),   CW_TOGG,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,        KC_UP,          KC_END,         KC_TRANSPARENT, LSFT(KC_ENTER),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_ENTER,
    KC_TRANSPARENT, LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     KC_BSPC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_PAGE_UP,     KC_PGDN,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MO(5),          KC_TRANSPARENT
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RALT(KC_6),     RALT(LSFT(KC_7)),KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, RALT(KC_7),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_DQUO,        KC_LABK,        KC_RABK,        KC_GRAVE,       KC_TILD,        KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_1,     KC_AMPR,        KC_LBRC,        KC_RBRC,        KC_PERC,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_EXLM,        KC_PLUS,        KC_MINUS,       KC_EQUAL,       KC_HASH,                                                                        KC_AT,          KC_BSPC,        KC_LPRN,        KC_RPRN,        KC_ENTER,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_CIRC,        KC_ASTR,        KC_UNDS,        KC_BSLS,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_DLR,         KC_COLN,        KC_LCBR,        KC_RCBR,        KC_SCLN,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, MO(5),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_UP,    KC_MS_UP,       KC_MS_WH_DOWN,  KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN3,     KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    QK_LLCK,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, OSM(MOD_LGUI),  OSM(MOD_LALT),  OSM(MOD_LSFT),  KC_TRANSPARENT, KC_F13,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, OSM(MOD_LSFT),  OSM(MOD_LALT),  OSM(MOD_LGUI),  KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F14,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PLUS,        KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_F15,                                                                         KC_MINUS,       KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_5,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_F16,         KC_TRANSPARENT,                                 KC_NUM,         KC_ASTR,        KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_DOT,      KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_KP_0,        KC_KP_0,        KC_KP_DOT,      KC_KP_DOT,      KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_0
  ),
};


const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT_ergodox(
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 
  'L', 'L', 'L', 'L', 'L', 'L', 
  'L', 'L', 'L', 'L', 'L', 'L', 'L', 
  'L', 'L', 'L', 'L', 'L',
  '*', '*',
  '*', '*', '*', '*',
  'R', 'R', 'R', 'R', 'R', 'R', 'R', 
  'R', 'R', 'R', 'R', 'R', 'R', 'R', 
  'R', 'R', 'R', 'R', 'R', 'R', 
  'R', 'R', 'R', 'R', 'R', 'R', 'R', 
  'R', 'R', 'R', 'R', 'R', 
  '*', '*',
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { KC_D, KC_M, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_M, KC_Z, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, ST_MACRO_2),
    COMBO(combo1, KC_Q),
};



extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {127,26,255}, {129,255,139}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {129,255,139}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255}, {127,26,255} },

    [1] = { {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {43,255,249}, {245,255,255}, {245,255,255}, {43,255,249}, {43,255,249}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {245,255,255}, {63,220,247}, {63,220,247}, {245,255,255}, {245,255,255} },

    [2] = { {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {245,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255}, {151,255,255} },

    [3] = { {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {74,255,255}, {129,255,166}, {129,255,166}, {129,255,166}, {74,255,255}, {74,255,255}, {74,255,255}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166} },

    [4] = { {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {35,255,255}, {35,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {35,255,255}, {35,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {35,255,255}, {35,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {35,255,255}, {35,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {35,255,255}, {35,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {35,255,255}, {35,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255} },

    [6] = { {129,255,139}, {129,255,139}, {129,255,139}, {129,255,139}, {129,255,139}, {23,255,255}, {225,209,255}, {225,209,255}, {225,209,255}, {129,255,139}, {23,255,255}, {225,209,255}, {225,209,255}, {225,209,255}, {225,209,255}, {23,255,255}, {225,209,255}, {225,209,255}, {225,209,255}, {23,255,255}, {225,209,255}, {225,209,255}, {23,255,255}, {23,255,255}, {129,255,139}, {129,255,139}, {129,255,139}, {129,255,139}, {129,255,139}, {129,255,139}, {225,209,255}, {225,209,255}, {225,209,255}, {225,209,255}, {129,255,139}, {225,209,255}, {225,209,255}, {225,209,255}, {225,209,255}, {129,255,139}, {225,209,255}, {225,209,255}, {225,209,255}, {225,209,255}, {129,255,139}, {129,255,139}, {129,255,139}, {129,255,139} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 6:
        set_layer_color(6);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_6) SS_TAP(X_KP_0) ));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SCLN)SS_DELAY(100)  SS_TAP(X_MINUS));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_Q)SS_DELAY(100)  SS_TAP(X_U));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(KC_SPACE));
        } else {
          unregister_code16(LALT(KC_SPACE));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_F));
        } else {
          unregister_code16(LCTL(KC_F));
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_V));
        } else {
          unregister_code16(LGUI(KC_V));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_DOT));
        } else {
          unregister_code16(LGUI(KC_DOT));
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

uint8_t layer_state_set_user(uint8_t state) {
    uint8_t layer = biton(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};

