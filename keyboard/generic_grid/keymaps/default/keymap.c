// This is the canonical layout file for the Quantum project. If you want to add another keyboard,
// this is the style you want to emulate.

#include "generic_grid.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = KEYMAP( /* Base */
      KC_ESC  , KC_1    , KC_2    , KC_3  , KC_4   , \
      KC_TAB  , KC_Q    , KC_W    , KC_E  , KC_R   , \
      KC_FN1  , KC_A    , KC_S    , KC_D  , KC_F   , \
      KC_LSFT , KC_Z    , KC_X    , KC_C  , KC_V   , \
      KC_LCTL , KC_LALT , KC_LGUI , KC_NO , KC_SPC   \
      ),
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
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};

