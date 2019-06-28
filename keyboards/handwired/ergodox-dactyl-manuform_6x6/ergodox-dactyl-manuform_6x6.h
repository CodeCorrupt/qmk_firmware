/* Copyright 2019 Tyler Hoyt
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
#pragma once

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT(                        \
    L00, L01, L02, L03, L04, L05, L45, \
    L10, L11, L12, L13, L14, L15, L51, \
    L20, L21, L22, L23, L24, L25,      \
    L30, L31, L32, L33, L34, L35, L50, \
    L40, L41, L42, L43, L44,           \
                        L70, L71,      \
                        L60,           \
                        L52, L53,      \
                        L61,           \
    R40, R00, R01, R02, R03, R04, R05, \
    R52, R10, R11, R12, R13, R14, R15, \
         R20, R21, R22, R23, R24, R25, \
    R53, R30, R31, R32, R33, R34, R35, \
              R41, R42, R43, R44, R45, \
    R70, R71,                          \
    R60, R61,                          \
    R50, R51                           \
) \
{ \
    { L00,   L01,   L02,   L03,   L04,   L05   }, \
    { L10,   L11,   L12,   L13,   L14,   L15   }, \
    { L20,   L21,   L22,   L23,   L24,   L25   }, \
    { L30,   L31,   L32,   L33,   L34,   L35   }, \
    { L40,   L41,   L42,   L43,   L44,   L45   }, \
    { KC_NO, KC_NO, L50,   L51,   L52,   L53   }, \
    { KC_NO, KC_NO, L60,   L70,   L71,   L61   }, \
    { R00,   R01,   R02,   R03,   R04,   R05   }, \
    { R10,   R11,   R12,   R13,   R14,   R15   }, \
    { R20,   R21,   R22,   R23,   R24,   R25   }, \
    { R30,   R31,   R32,   R33,   R34,   R35   }, \
    { R40,   R41,   R42,   R43,   R44,   R45   }, \
    { R50,   R51,   R52,   R53,   KC_NO, KC_NO }, \
    { R60,   R70,   R71,   R61,   KC_NO, KC_NO }  \
}
