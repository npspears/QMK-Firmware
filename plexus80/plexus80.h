/* Copyright 2021 Nathan Spears
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

#define XXX KC_NO

#define LAYOUT_grid( \
    k00, k10, k11, k01, k02, k12, k13, k03, k04, k14, k15, k05, k06, k16, k17, k07, \
    k20, k30, k31, k21, k22, k32, k33, k23, k24, k34, k35, k25, k26, k36, k37, k27, \
    k40, k50, k51, k41, k42, k52, k53, k43, k44, k54, k55, k45, k46, k56, k57, k47, \
    k60, k70, k71, k61, k62, k72, k73, k63, k64, k74, k75, k65, k66, k76, k77, k67, \
    k80, k90, k91, k81, k82, k92, k93, k83, k84, k94, k95, k85, k86, k96, k97, k87 \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07 }, \
    { k10, k11, k12, k13, k14, k15, k16, k17 }, \
    { k20, k21, k22, k23, k24, k25, k26, k27 }, \
    { k30, k31, k32, k33, k34, k35, k36, k37 }, \
    { k40, k41, k42, k43, k44, k45, k46, k47 }, \
    { k50, k51, k52, k53, k54, k55, k56, k57 }, \
    { k60, k61, k62, k63, k64, k65, k66, k67 }, \
    { k70, k71, k72, k73, k74, k75, k76, k77 }, \
    { k80, k81, k82, k83, k84, k85, k86, k87 }, \
    { k90, k91, k92, k93, k94, k95, k96, k97 }  \
}
#define LAYOUT_2x3u( \
    k00, k10, k11, k01, k02, k12, k13, k03, k04, k14, k15, k05, k06, k16, k17, k07, \
    k20, k30, k31, k21, k22, k32, k33, k23, k24, k34, k35, k25, k26, k36, k37, k27, \
    k40, k50, k51, k41, k42, k52, k53, k43, k44, k54, k55, k45, k46, k56, k57, k47, \
    k60, k70, k71, k61, k62, k72, k73, k63, k64, k74, k75, k65, k66, k76, k77, k67, \
    k80, k90, k81, k92, k83, k94, k85, k96, k97, k87 \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07 }, \
    { k10, k11, k12, k13, k14, k15, k16, k17 }, \
    { k20, k21, k22, k23, k24, k25, k26, k27 }, \
    { k30, k31, k32, k33, k34, k35, k36, k37 }, \
    { k40, k41, k42, k43, k44, k45, k46, k47 }, \
    { k50, k51, k52, k53, k54, k55, k56, k57 }, \
    { k60, k61, k62, k63, k64, k65, k66, k67 }, \
    { k70, k71, k72, k73, k74, k75, k76, k77 }, \
    { k80, k81, XXX, k83, XXX, k85, XXX, k87 }, \
    { k90, XXX, k92, XXX, k94, XXX, k96, k97 }  \
}
#define LAYOUT_7u( \
    k00, k10, k11, k01, k02, k12, k13, k03, k04, k14, k15, k05, k06, k16, k17, k07, \
    k20, k30, k31, k21, k22, k32, k33, k23, k24, k34, k35, k25, k26, k36, k37, k27, \
    k40, k50, k51, k41, k42, k52, k53, k43, k44, k54, k55, k45, k46, k56, k57, k47, \
    k60, k70, k71, k61, k62, k72, k73, k63, k64, k74, k75, k65, k66, k76, k77, k67, \
    k80, k90, k81, k83, k85, k96, k97, k87 \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07 }, \
    { k10, k11, k12, k13, k14, k15, k16, k17 }, \
    { k20, k21, k22, k23, k24, k25, k26, k27 }, \
    { k30, k31, k32, k33, k34, k35, k36, k37 }, \
    { k40, k41, k42, k43, k44, k45, k46, k47 }, \
    { k50, k51, k52, k53, k54, k55, k56, k57 }, \
    { k60, k61, k62, k63, k64, k65, k66, k67 }, \
    { k70, k71, k72, k73, k74, k75, k76, k77 }, \
    { k80, k81, XXX, k83, XXX, k85, XXX, k87 }, \
    { k90, XXX, XXX, XXX, XXX, XXX, k96, k97 }  \
}
#define LAYOUT_ergo_mods( \
    k00, k10, k11, k01, k02, k12, k13, k03, k04, k14, k15, k05, k06, k16, k17, k07, \
    k20, k30, k31, k21, k22, k32, k33, k23, k24, k34, k35, k25, k26, k36, k37, k27, \
    k40, k50, k51, k41, k42, k52, k53, k43, k44, k54, k55, k45, k46, k56, k57, k47, \
    k60, k70, k71, k61, k62, k72, k73, k63, k64, k74, k75, k65, k66, k76, k77, k67, \
    k80, k90, k91, k82, k93, k84, k95, k86, k96, k97, k87 \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07 }, \
    { k10, k11, k12, k13, k14, k15, k16, k17 }, \
    { k20, k21, k22, k23, k24, k25, k26, k27 }, \
    { k30, k31, k32, k33, k34, k35, k36, k37 }, \
    { k40, k41, k42, k43, k44, k45, k46, k47 }, \
    { k50, k51, k52, k53, k54, k55, k56, k57 }, \
    { k60, k61, k62, k63, k64, k65, k66, k67 }, \
    { k70, k71, k72, k73, k74, k75, k76, k77 }, \
    { k80, XXX, k82, XXX, k84, XXX, k86, k87 }, \
    { k90, k91, XXX, k93, XXX, k95, k96, k97 }  \
}
