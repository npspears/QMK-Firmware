/* Copyright 2022 Nathan Spears
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
    k00, k10, k01, k11, k02, k12, k03, k13, k04, k14, k05, k15, \
    k20, k30, k21, k31, k22, k32, k23, k33, k24, k34, k25, k35, \
    k40, k50, k41, k51, k42, k52, k83, k43, k53, k44, k54, k45, k55, \
    k60, k70, k61, k71, k62, k82, k72, k63, k73, k64, k74, k65, k75  \
) { \
    { k00, k01, k02, k03, k04, k05 }, \
    { k10, k11, k12, k13, k14, k15 }, \
    { k20, k21, k22, k23, k24, k25 }, \
    { k30, k31, k32, k33, k34, k35 }, \
    { k40, k41, k42, k43, k44, k45 }, \
    { k50, k51, k52, k53, k54, k55 }, \
    { k60, k61, k62, k63, k64, k65 }, \
    { k70, k71, k72, k73, k74, k75 }, \
    { XXX, XXX, k82, k83, XXX, XXX }  \
}
#define LAYOUT_southpaw( \
    k00, k10, k01, k11, k02, k12, k03, k13, k04, k14, k05, k15, \
    k20, k30, k21, k31, k22, k32, k23, k33, k24, k34, k25, k35, \
    k40, k50, k41, k51, k42, k52, k83, k43, k53, k44, k54, k45, k55, \
    k60, k70, k61, k71, k62,           k63,      k64, k74, k65, k75  \
) { \
    { k00, k01, k02, k03, k04, k05 }, \
    { k10, k11, k12, k13, k14, k15 }, \
    { k20, k21, k22, k23, k24, k25 }, \
    { k30, k31, k32, k33, k34, k35 }, \
    { k40, k41, k42, k43, k44, k45 }, \
    { k50, k51, k52, k53, k54, k55 }, \
    { k60, k61, k62, k63, k64, k65 }, \
    { k70, k71, XXX, XXX, k74, k75 }, \
    { XXX, XXX, XXX, k83, XXX, XXX }  \
}
#define LAYOUT_jet( \
    k00, k10, k01, k11, k02, k12, k03, k13, k04, k14, k05, k15, \
    k20, k30, k21, k31, k22, k32, k23, k33, k24, k34, k25, k35, \
    k40, k50, k41, k51, k42, k52, k83, k43, k53, k44, k54, k45, k55, \
    k60, k70, k61,      k62,           k63,      k64, k74, k65, k75  \
) { \
    { k00, k01, k02, k03, k04, k05 }, \
    { k10, k11, k12, k13, k14, k15 }, \
    { k20, k21, k22, k23, k24, k25 }, \
    { k30, k31, k32, k33, k34, k35 }, \
    { k40, k41, k42, k43, k44, k45 }, \
    { k50, k51, k52, k53, k54, k55 }, \
    { k60, k61, k62, k63, k64, k65 }, \
    { k70, XXX, XXX, XXX, k74, k75 }, \
    { XXX, XXX, XXX, k83, XXX, XXX }  \
}
#define LAYOUT_cr3w( \
    k00, k10, k01, k11, k02, k12, k03, k13, k04, k14, k05, k15, \
    k20, k30, k21, k31, k22, k32, k23, k33, k24, k34, k25, k35, \
    k40, k50, k41, k51, k42, k52, k83, k43, k53, k44, k54, k45, k55, \
    k60, k70,           k62, k72,           k73,      k74, k65, k75  \
) { \
    { k00, k01, k02, k03, k04, k05 }, \
    { k10, k11, k12, k13, k14, k15 }, \
    { k20, k21, k22, k23, k24, k25 }, \
    { k30, k31, k32, k33, k34, k35 }, \
    { k40, k41, k42, k43, k44, k45 }, \
    { k50, k51, k52, k53, k54, k55 }, \
    { k60, XXX, k62, XXX, XXX, k65 }, \
    { k70, XXX, k72, XXX, k74, k75 }, \
    { XXX, XXX, XXX, k83, XXX, XXX }  \
}
#define LAYOUT_m3n3van( \
    k00, k10, k01, k11, k02, k12, k03, k13, k04, k14, k05, k15, \
    k20, k30, k21, k31, k22, k32, k23, k33, k24, k34, k25, k35, \
    k40, k50, k41, k51, k42, k52, k83, k43, k53, k44, k54, k45, k55, \
    k60, k70, k61,      k62,                k73,      k74, k65, k75  \
) { \
    { k00, k01, k02, k03, k04, k05 }, \
    { k10, k11, k12, k13, k14, k15 }, \
    { k20, k21, k22, k23, k24, k25 }, \
    { k30, k31, k32, k33, k34, k35 }, \
    { k40, k41, k42, k43, k44, k45 }, \
    { k50, k51, k52, k53, k54, k55 }, \
    { k60, k61, k62, XXX, XXX, k65 }, \
    { k70, XXX, XXX, k73, k74, k75 }, \
    { XXX, XXX, XXX, k83, XXX, XXX }  \
}
#define LAYOUT_625( \
    k00, k10, k01, k11, k02, k12, k03, k13, k04, k14, k05, k15, \
    k20, k30, k21, k31, k22, k32, k23, k33, k24, k34, k25, k35, \
    k40, k50, k41, k51, k42, k52, k83, k43, k53, k44, k54, k45, k55, \
    k60, k70, k61,           k72,                     k74, k65, k75  \
) { \
    { k00, k01, k02, k03, k04, k05 }, \
    { k10, k11, k12, k13, k14, k15 }, \
    { k20, k21, k22, k23, k24, k25 }, \
    { k30, k31, k32, k33, k34, k35 }, \
    { k40, k41, k42, k43, k44, k45 }, \
    { k50, k51, k52, k53, k54, k55 }, \
    { k60, k61, XXX, XXX, XXX, k65 }, \
    { k70, XXX, k72, XXX, k74, k75 }, \
    { XXX, XXX, XXX, k83, XXX, XXX }  \
}
#define LAYOUT_blocker( \
    k00, k10, k01, k11, k02, k12, k03, k13, k04, k14, k05, k15, \
    k20, k30, k21, k31, k22, k32, k23, k33, k24, k34, k25, k35, \
    k40, k50, k41, k51, k42, k52, k83, k43, k53, k44, k54, k45, k55, \
    k60,      k61, k71, k62,                k73, k64, k74,      k75  \
) { \
    { k00, k01, k02, k03, k04, k05 }, \
    { k10, k11, k12, k13, k14, k15 }, \
    { k20, k21, k22, k23, k24, k25 }, \
    { k30, k31, k32, k33, k34, k35 }, \
    { k40, k41, k42, k43, k44, k45 }, \
    { k50, k51, k52, k53, k54, k55 }, \
    { k60, k61, k62, XXX, k64, XXX }, \
    { XXX, k71, XXX, k73, k74, k75 }, \
    { XXX, XXX, XXX, k83, XXX, XXX }  \
}
