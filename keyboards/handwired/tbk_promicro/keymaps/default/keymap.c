#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

#define ONE_GRV LT(1,KC_GRAVE)
#define CTL_Z LCTL_T(KC_Z)
#define ALT_SHFT LALT(KC_LSFT)
#define ALT_MENU LALT_T(KC_MENU)
#define LG_QUOT LGUI_T(KC_QUOT)
#define CTL_ESC LCTL_T(KC_ESC)
#define CTL_SLS LCTL_T(KC_SLSH)
#define LT2_COL LT(_RAISE, KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_3x7(
        KC_DEL , KC_Q  ,KC_W   , KC_E  , KC_R  , KC_T  ,                                        KC_Y   , KC_U  , KC_I  , KC_O  , KC_P  ,KC_MINS,
        KC_BSPC, KC_A  ,KC_S   , KC_D  , KC_F  , KC_G  ,                                        KC_H   , KC_J  , KC_K  , KC_L  ,LT2_COL,LG_QUOT,
        ONE_GRV,KC_QUOT,ALT_SHFT,KC_LEFT,KC_RGHT,KC_SPC ,                                       KC_ENT , KC_UP  ,KC_DOWN,KC_LBRC,KC_RBRC,KC_4,
                                                KC_BSPC,ALT_MENU,KC_LGUI,       KC_RALT,CTL_ESC,KC_TAB 
    ),
    [_LOWER] = LAYOUT_3x7(
        _______,KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,                                       KC_F6  ,KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,KC_F11 ,
        _______,KC_EXLM,KC_AT  ,KC_LBRC,KC_RBRC,KC_PIPE,                                       KC_UP  ,KC_P7  ,KC_P8  ,KC_P9  ,KC_PAST,KC_F12 ,
        _______,KC_HASH,KC_DLR ,KC_LPRN,KC_RPRN,KC_GRV ,                                       KC_DOWN,KC_P4  ,KC_P5  ,KC_P6  ,KC_PPLS,_______,
                                                _______,_______,_______,       _______,_______,_______
    ),
    [_RAISE] = LAYOUT_3x7(
        _______,_______,_______,_______,_______,_______,                                       _______,_______,_______,_______,_______,TT(_LOWER),
        _______,_______,_______,KC_MS_U,_______,_______,                                       _______,_______,_______,_______,_______,_______,
        _______,_______,KC_MS_L,KC_MS_D,KC_MS_R,_______,                                       _______,_______,_______,_______,_______,KC_MPLY,
                                                _______,_______,_______,       _______,_______,_______
    )
};
