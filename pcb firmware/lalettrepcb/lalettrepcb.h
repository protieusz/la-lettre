/* Copyright 2022 somepin
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef lalettrepcb_h
#define lalettrepcb_h
#endif

#pragma once

#include "quantum.h"

#define LAYOUT( \
	k00, k01, k02, k03, k04,      k05, k06, k07, k08, k09, \
	k10, k11, k12, k13, k14,      k15, k16, k17, k18, k19, \
	k20, k21, k22, k23, k24,      k25, k26, k27, k28, k29, \
	     k31,      k33,           k35,      k37            \
)\
{\
	{   k00,   k01, k02,   k03, k04,       k05, k06,   k07, k08,   k09   }, \
	{   k10,   k11, k12,   k13, k14,       k15, k16,   k17, k18,   k19   }, \
	{   k20,   k21, k22,   k23, k24,       k25, k26,   k27, k28,   k29   }, \
	{   KC_NO, k31, KC_NO, k33, KC_NO,     k35, KC_NO, k37, KC_NO, KC_NO }, \
}
