/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <avr/io.h>
#include "stdint.h"
#include "led.h"


void led_set(uint8_t usb_led)
{
    if (usb_led & (1<<USB_LED_CAPS_LOCK)) {
        // Output high
        DDRB |= (1<<0);
        PORTB |= (1<<0);
    } else {
        // output low
        DDRB &= ~(1<<0);
        PORTB &= ~(1<<0);
    }
      
    if (usb_led & (1<<USB_LED_SCROLL_LOCK))
    {
        // Output high.
        DDRB |= (1<<1);
        PORTB |= (1<<1);
    }
    else
    {
        // Output low.
        DDRB &= ~(1<<1);
        PORTB &= ~(1<<1);
    }

    if (usb_led & (1<<USB_LED_NUM_LOCK))
    {
        // Output high.
        DDRC |= (1<<0);
        PORTC |= (1<<0);
    }
    else
    {
        // Output low.
        DDRC &= ~(1<<0);
        PORTC &= ~(1<<0);
    }

}

void led_layer_set(uint32_t state) {
    DDRC |= (1<<1);

    /* Led for Layer 1 */
    if ((1<<1 & state) != 0) {
        PORTC |= (1<<1);
    } else {
        PORTC &= ~(1<<1);
    }
}
