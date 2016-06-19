#ifndef GENERIC_GRID_H
#define GENERIC_GRID_H

#include "matrix.h"
#include "keymap.h"
#ifdef BACKLIGHT_ENABLE
#include "backlight.h"
#endif
#include <avr/io.h>
#include <stddef.h>

// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array
#define KEYMAP( \
	k00, k01, k02, k03, k04, \
	k05, k06, k07, k08, k09, \
	k10, k11, k12, k13, k14, \
       	k15, k16, k17, k18, k19, \
       	k20, k21, k22, k23, k24  \
) \
{ \
    { k00, k01, k02, k03, k04 }, \
    { k05, k06, k07, k08, k09 }, \
    { k10, k11, k12, k13, k14 }, \
    { k15, k16, k17, k18, k19 }, \
    { k20, k21, k22, k23, k24 }  \
}

void matrix_init_user(void);
void matrix_scan_user(void);
bool process_action_user(keyrecord_t *record);
void led_set_user(uint8_t usb_led);

#endif
