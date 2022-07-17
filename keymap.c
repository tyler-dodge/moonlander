#include QMK_KEYBOARD_H
#include "moonlander.h"
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  RESET_MODIFIERS
};


enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_EQUAL,       KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          TD(DANCE_0),                                    KC_F12,         KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_UNDS,        KC_SCOLON,      KC_COMMA,       KC_DOT,         KC_P,           KC_Y,           TG(2),                                          KC_TRANSPARENT, KC_F,           KC_G,           KC_C,           KC_R,           KC_L,           KC_BSLASH,      
    OSM(MOD_LCTL),  KC_A,           KC_O,           KC_E,           KC_U,           KC_I,           KC_ESCAPE,                                                                      KC_ESCAPE,      KC_D,           KC_H,           KC_T,           KC_N,           KC_S,           KC_QUOTE,       
    OSM(MOD_LSFT),  KC_SLASH,       KC_Q,           KC_J,           KC_K,           KC_X,                                           KC_B,           KC_M,           KC_W,           KC_V,           KC_Z,           TG(2),          
    OSL(2),         KC_AMPR,        KC_LALT,        KC_AT,          KC_MINUS,       ST_MACRO_0,                                                                                                     RESET_MODIFIERS,     KC_UP,          KC_DOWN,        KC_LCBR,        KC_RCBR,        ST_MACRO_1,     
    KC_SPACE,       KC_BSPACE,      KC_LGUI,                        KC_LALT,        KC_TAB,         KC_ENTER
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, LCTL(KC_1),     LCTL(KC_2),     LCTL(KC_3),     LCTL(KC_4),     LCTL(KC_5),     LCTL(KC_6),                                     KC_TRANSPARENT, LCTL(KC_6),     LCTL(KC_7),     LCTL(KC_8),     LCTL(KC_9),     LCTL(KC_0),     KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_SCOLON),LCTL(KC_COMMA), LCTL(KC_DOT),   LCTL(KC_P),     LCTL(KC_Y),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(KC_F),     LCTL(KC_G),     LCTL(KC_C),     LCTL(KC_R),     LCTL(KC_L),     LCTL(KC_BSLASH),
    KC_TRANSPARENT, LCTL(KC_A),     LCTL(KC_O),     LCTL(KC_E),     LCTL(KC_U),     LCTL(KC_I),     KC_TRANSPARENT,                                                                 KC_TRANSPARENT, LCTL(KC_D),     LCTL(KC_H),     LCTL(KC_T),     LCTL(KC_N),     LCTL(KC_S),     LCTL(KC_QUOTE), 
    KC_TRANSPARENT, LCTL(KC_SLASH), LCTL(KC_Q),     LCTL(KC_J),     LCTL(KC_K),     LCTL(KC_X),                                     LCTL(KC_B),     LCTL(KC_M),     LCTL(KC_W),     LCTL(KC_V),     LCTL(KC_Z),     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_ENTER)
  ),
  [2] = LAYOUT_moonlander(
    TOGGLE_LAYER_COLOR,KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          TO(3),                                          KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_DELETE,      KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,                                 TO(1),          KC_UP,          KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_F12,         
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_GRAVE,       KC_TRANSPARENT,                                                                 KC_LABK,        KC_RABK,        KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_LBRACKET,    KC_RBRACKET,    KC_TILD,                                        KC_SCOLON,      KC_1,           KC_2,           KC_3,           KC_BSLASH,      KC_TRANSPARENT, 
    KC_TRANSPARENT, WEBUSB_PAIR,    KC_TRANSPARENT, KC_COMMA,       KC_DOT,         KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_DOT,         KC_0,           KC_EQUAL,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, TO(0)
  ),
  [3] = LAYOUT_moonlander(
    KC_0,           KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                                           LCTL(KC_F4),    KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           LALT(LCTL(KC_DELETE)),
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_Y,                                           KC_TRANSPARENT, KC_U,           LALT(LSFT(KC_F10)),KC_I,           KC_O,           KC_P,           KC_DELETE,      
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_M,                                                                           LCTL(KC_F9),    KC_J,           LSFT(KC_F3),    LSFT(KC_F9),    KC_K,           KC_L,           TO(0),          
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_H,           KC_N,           KC_M,           KC_COMMA,       KC_ESCAPE,      KC_TRANSPARENT, 
    KC_LCTRL,       KC_TRANSPARENT, KC_TRANSPARENT, KC_P,           KC_SPACE,       KC_SPACE,                                                                                                       TD(DANCE_1),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_P,           KC_SPACE,       KC_N,                           KC_LALT,        KC_LGUI,        KC_TRANSPARENT
  ),
};

extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;
extern bool mcp23018_leds[3];

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {201,255,255}, {201,255,255}, {0,245,245}, {0,245,245}, {131,255,255}, {201,255,255}, {201,255,255}, {0,0,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {0,0,255}, {201,255,255}, {0,245,245}, {201,255,255}, {201,255,255}, {0,0,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {41,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {131,255,255}, {0,245,245}, {201,255,255}, {201,255,255}, {0,245,245}, {0,245,245}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {0,0,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {0,0,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {0,0,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {41,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {0,245,245}, {0,245,245}, {201,255,255}, {201,255,255}, {0,245,245}, {0,245,245} },

    [1] = { {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255}, {90,255,255} },

    [2] = { {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255} },

    [3] = { {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {41,255,255}, {0,245,245}, {201,255,255}, {0,245,245}, {41,255,255}, {41,255,255}, {0,245,245}, {201,255,255}, {0,245,245}, {0,245,245}, {41,255,255}, {0,245,245}, {201,255,255}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {41,255,255}, {0,245,245}, {201,255,255}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {202,255,255}, {0,245,245}, {0,245,245}, {0,245,245}, {202,255,255}, {74,255,255}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {152,255,255}, {0,245,245}, {74,255,255}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
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
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  const uint8_t modifiers = get_mods() ^ get_oneshot_mods();

  ML_LED_1((modifiers & MOD_BIT(KC_LCTRL)) != 0);
  ML_LED_2((modifiers & MOD_BIT(KC_LSHIFT)) != 0);
  ML_LED_3((modifiers & MOD_BIT(KC_LCMD)) != 0);
  ML_LED_4((modifiers & MOD_BIT(KC_LALT)) != 0);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_R) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_T));

    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_X)) SS_DELAY(100) SS_LCTL(SS_TAP(X_X)));

    }
    break;
  case RESET_MODIFIERS:
    del_oneshot_mods(~0);
    layer_move(0);
    break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[2];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F1);
        tap_code16(KC_F1);
        tap_code16(KC_F1);
    }
    if(state->count > 3) {
        tap_code16(KC_F1);
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_F1); break;
        case SINGLE_HOLD: register_code16(KC_F5); break;
        case DOUBLE_TAP: register_code16(KC_F1); register_code16(KC_F1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F1); register_code16(KC_F1);
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_F1); break;
        case SINGLE_HOLD: unregister_code16(KC_F5); break;
        case DOUBLE_TAP: unregister_code16(KC_F1); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F1); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(KC_TAB));
        tap_code16(LALT(KC_TAB));
        tap_code16(LALT(KC_TAB));
    }
    if(state->count > 3) {
        tap_code16(LALT(KC_TAB));
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LALT(KC_TAB)); break;
        case SINGLE_HOLD: register_code16(KC_LALT); break;
        case DOUBLE_TAP: register_code16(LALT(KC_TAB)); register_code16(LALT(KC_TAB)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(KC_TAB)); register_code16(LALT(KC_TAB));
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LALT(KC_TAB)); break;
        case SINGLE_HOLD: unregister_code16(KC_LALT); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_TAB)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(KC_TAB)); break;
    }
    dance_state[1].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
};

