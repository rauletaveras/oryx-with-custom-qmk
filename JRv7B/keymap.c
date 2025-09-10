#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_DELETE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_TAB,         KC_X,           KC_F,           KC_L,           KC_B,           KC_K,                                           KC_P,           KC_G,           KC_O,           KC_U,           KC_QUOTE,       LCTL(KC_BSPC),  
    KC_ESCAPE,      KC_N,           KC_S,           KC_H,           KC_T,           KC_J,                                           KC_Y,           KC_C,           KC_A,           KC_E,           KC_I,           KC_BSPC,        
    MO(4),          KC_V,           KC_Z,           KC_M,           KC_D,           KC_E,                                           KC_E,           KC_W,           KC_SLASH,       KC_COMMA,       KC_DOT,         MO(4),          
                                                    KC_R,           MO(1),                                          MO(2),          KC_SPACE
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_PSCR,        KC_TRANSPARENT, LGUI(KC_TAB),   LCTL(KC_TAB),   LALT(KC_TAB),   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_HOME,        KC_UP,          KC_END,         KC_TRANSPARENT, LSFT(KC_ENTER), 
    CW_TOGG,        OSM(MOD_RALT),  OSM(MOD_LALT),  OSM(MOD_LSFT),  OSM(MOD_LCTL),  OSM(MOD_LGUI),                                  KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_ENTER,       
    KC_TRANSPARENT, LCTL(KC_Z),     LCTL(KC_X),     LCTL(KC_C),     LCTL(KC_V),     KC_BSPC,                                        KC_TRANSPARENT, KC_PAGE_UP,     KC_PGDN,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 MO(3),          KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LABK,        KC_RABK,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_DQUO,        KC_LPRN,        KC_RPRN,        KC_GRAVE,       KC_TILD,                                        ST_MACRO_0,     KC_AMPR,        KC_LBRC,        KC_RBRC,        KC_PERC,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EXLM,        KC_KP_PLUS,     KC_MINUS,       KC_EQUAL,       KC_HASH,                                        OSM(MOD_LGUI),  OSM(MOD_LCTL),  OSM(MOD_LSFT),  OSM(MOD_LALT),  OSM(MOD_RALT),  KC_ENTER,       
    KC_TRANSPARENT, KC_CIRC,        KC_ASTR,        KC_UNDS,        KC_BSLS,        KC_PIPE,                                        KC_DLR,         KC_COLN,        KC_LCBR,        KC_RCBR,        KC_AT,          KC_SCLN,        
                                                    KC_TRANSPARENT, MO(3),                                          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_WH_UP,    KC_MS_UP,       KC_MS_WH_DOWN,  KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    QK_LLCK,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F13,                                         KC_TRANSPARENT, KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_F14,                                         KC_KP_PLUS,     KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_TRANSPARENT, KC_NUM,         
    KC_TRANSPARENT, OSM(MOD_LGUI),  OSM(MOD_LALT),  OSM(MOD_LSFT),  OSM(MOD_LCTL),  KC_F15,                                         KC_KP_MINUS,    OSM(MOD_LCTL),  OSM(MOD_LSFT),  OSM(MOD_LALT),  OSM(MOD_LGUI),  KC_KP_ENTER,    
    KC_TRANSPARENT, KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_F16,                                         KC_KP_ASTERISK, KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_DOT,      KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_KP_0
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { KC_4, KC_5, KC_6, KC_7, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_M, KC_D, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_Z, KC_M, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, LGUI(KC_L)),
    COMBO(combo1, ST_MACRO_1),
    COMBO(combo2, KC_Q),
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
    [0] = { {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {35,255,255}, {130,22,255}, {129,255,166}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {35,255,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {130,22,255}, {198,255,255}, {130,22,255} },

    [1] = { {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {74,255,255}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {74,255,255}, {74,255,255}, {74,255,255}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166}, {129,255,166} },

    [2] = { {198,255,255}, {198,255,255}, {35,255,255}, {35,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {35,255,255}, {35,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {202,255,255}, {35,255,255}, {35,255,255}, {202,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {35,255,255}, {35,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {35,255,255}, {35,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {35,255,255}, {35,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {198,255,255} },

    [4] = { {129,255,139}, {225,209,255}, {225,209,255}, {225,209,255}, {225,209,255}, {129,255,139}, {129,255,139}, {225,209,255}, {225,209,255}, {225,209,255}, {225,209,255}, {129,255,139}, {129,255,139}, {129,255,139}, {129,255,139}, {129,255,139}, {129,255,139}, {129,255,139}, {129,255,139}, {225,209,255}, {225,209,255}, {225,209,255}, {225,209,255}, {129,255,139}, {129,255,139}, {129,255,139}, {129,255,139}, {225,209,255}, {225,209,255}, {225,209,255}, {129,255,139}, {129,255,139}, {129,255,139}, {225,209,255}, {225,209,255}, {225,209,255}, {129,255,139}, {129,255,139}, {129,255,139}, {129,255,139}, {129,255,139}, {129,255,139}, {129,255,139}, {129,255,139}, {129,255,139}, {225,209,255}, {225,209,255}, {225,209,255}, {129,255,139}, {129,255,139}, {129,255,139}, {129,255,139} },

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
      case 4:
        set_layer_color(4);
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
  case QK_MODS ... QK_MODS_MAX: 
    // Mouse keys with modifiers work inconsistently across operating systems, this makes sure that modifiers are always
    // applied to the mouse key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
    if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(1);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_5) SS_TAP(X_KP_1) ));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_Q)SS_DELAY(100)  SS_TAP(X_U));
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
