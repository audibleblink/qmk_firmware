#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Base Layer */
    [0] = LAYOUT_all(
            KC_GRV , KC_1    , KC_2    , KC_3   , KC_4    , KC_5    , KC_6  , KC_7 , KC_8 , KC_9    , KC_0   , KC_MINS , KC_EQL  , KC_BSPC , KC_BSPC ,
            KC_TAB , KC_Q    , KC_W    , KC_E   , KC_R    , KC_T    , KC_Y  , KC_U , KC_I , KC_O    , KC_P   , KC_LBRC , KC_RBRC , KC_BSLS ,
    LCTL_T(KC_ESC) , KC_A    , KC_S    , KC_D   , LT(3    , KC_F)   , KC_G  , KC_H , KC_J , KC_K    , KC_L   , KC_SCLN , KC_QUOT , KC_ENT  , KC_ENT  ,
           KC_LSFT , KC_LSFT , KC_Z    , KC_X   , KC_C    , KC_V    , KC_B  , KC_N , KC_M , KC_COMM , KC_DOT , KC_SLSH , KC_RSFT , KC_RSFT ,
             MO(1) , KC_LALT , KC_LGUI , KC_SPC , KC_RALT , KC_RCTL , TG(2) , MO(4)
            ),

    /* 1. Numpad Layer */
    [1] = LAYOUT_all(
            KC_NO   , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_DELETE ,
            KC_NO   , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_P7 , KC_P8 , KC_P9 , KC_NO , KC_NO , KC_NO , KC_NO ,
            KC_NO   , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_P4 , KC_P5 , KC_P6 , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO     ,
            KC_NO   , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_P1 , KC_P2 , KC_P3 , KC_NO , KC_NO , KC_NO ,
            KC_TRNS , KC_NO , KC_NO , KC_P0 , KC_NO , KC_NO , KC_NO , KC_NO
            ),

    /* 2. LED Layer */
    [2] = LAYOUT_all(
            QK_BOOT , KC_NO   , KC_NO    , KC_NO , KC_NO , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO , RGB_VAD , RGB_VAI , KC_NO , KC_NO ,
            KC_NO   , KC_NO   , RGB_MOD  , KC_NO , KC_NO , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO , KC_NO   , KC_NO   , KC_NO ,
            KC_NO   , RGB_TOG , RGB_RMOD , KC_NO , KC_NO , KC_NO   , RGB_HUD , RGB_SAD , RGB_SAI , RGB_HUI , KC_NO , KC_NO   , KC_NO   , KC_NO , KC_NO ,
            KC_NO   , KC_NO   , KC_NO    , KC_NO , KC_NO , RGB_M_B , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO , KC_NO   , KC_NO   ,
            KC_NO   , KC_NO   , KC_NO    , KC_NO , KC_NO , KC_NO   , KC_TRNS , KC_NO
            ),

    /* 3. Arrow Layer */
    [3] = LAYOUT_all(
            KC_NO   , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO , KC_NO , KC_NO , KC_NO , KC_DELETE ,
            KC_NO   , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_HOME , KC_PGDN , KC_PGUP , KC_END  , KC_NO , KC_NO , KC_NO , KC_NO ,
            KC_TRNS , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO     ,
            KC_TRNS , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO , KC_NO , KC_NO ,
            KC_TRNS , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO   , KC_NO
            ),

    /* 4. Media Layer */
    [4] = LAYOUT_all(
            KC_NO , KC_F1   , KC_F2   , KC_F3   , KC_G    , KC_F5   , KC_F6 , KC_F7 , KC_F8 , KC_F9 , KC_F10 , KC_F11 , KC_F12 , KC_NO , KC_DELETE ,
            KC_NO , KC_NO   , KC_VOLU , KC_NO   , KC_NO   , KC_NO   , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO  , KC_NO  , KC_NO  , KC_NO ,
            KC_NO , KC_MPRV , KC_VOLD , KC_MNXT , KC_MSTP , KC_MPLY , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO  , KC_NO  , KC_NO  , KC_NO , KC_NO     ,
            KC_NO , KC_NO   , KC_MUTE , KC_NO   , KC_NO   , KC_NO   , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO  , KC_NO  , KC_NO  ,
            KC_NO , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO , KC_TRNS
            )
};
