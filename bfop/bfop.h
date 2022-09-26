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

#define LAYOUT_default( \
    k00, k01, k11, k12, k02, k03, k13, k14, k04, k05, k15, k16, k06, k07, k17, k18, k08, k09, k19, \
    k20, k21, k31, k32, k22, k23, k33, k34, k24, k25, k35, k36, k26, k27, k37, k38, k28, k29, k39, \
    k40, k41, k51, k52, k42, k43, k53, k54, k44, k45, k55, k56, k46, k47, k57, k58, k48, k49, k59, \
    k60, k61, k71, k72, k62, k63, k73, k74, k64, k65, k75, k76, k66, k67, k77, k78, k68, k69, k79, \
    k80, k81, k91, k92, k82, k83, k93, k94, k84, k85, k95, k96, k86, k87, k97, k98, k88, k89, k99, \
    kA0, kA1, kB1, kB2, kA2, kA3, kB3, kB4, kA4, kA5, kB5, kB6, kA6, kA7, kB7, kB8, kA8, kA9, kB9 \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09 }, \
    { k11, k12, k13, k14, k15, k16, k17, k18, k19 }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29 }, \
    { k31, k32, k33, k34, k35, k36, k37, k38, k39 }, \
    { k40, k41, k42, k43, k44, k45, k46, k47, k48, k49 }, \
    { k51, k52, k53, k54, k55, k56, k57, k58, k59 }, \
    { k60, k61, k62, k63, k64, k65, k66, k67, k68, k69 }, \
    { k71, k72, k73, k74, k75, k76, k77, k78, k79 }, \
    { k80, k81, k82, k83, k84, k85, k86, k87, k88, k89 }, \
    { k91, k92, k93, k94, k95, k96, k97, k98, k99 },  \
    { kA0, kA1, kA2, kA3, kA4, kA5, kA6, kA7, kA8, kA9 },  \
    { kB1, kB2, kB3, kB4, kB5, kB6, kB7, kB8, kB9 }  \
}
#define LAYOUT_6u_left( \
    k00, k01, k11, k12, k02, k03, k13, k14, k04, k05, k15, k16, k06, k07, k17, k18, k08, k09, k19, \
    k20, k21, k31, k32, k22, k23, k33, k34, k24, k25, k35, k36, k26, k27, k37, k38, k28, k29, k39, \
    k40, k41, k51, k52, k42, k43, k53, k54, k44, k45, k55, k56, k46, k47, k57, k58, k48, k49, k59, \
    k60, k61, k71, k72, k62, k63, k73, k74, k64, k65, k75, k76, k66, k67, k77, k78, k68, k69, k79, \
    k80, k81, k91, k92, k82, k83, k93, k94, k84, k85, k95, k96, k86, k87, k97, k98, k88, k89, k99, \
    kA0, kA1, kB1, kB2,           kB3,                kB5, kB6, kA6, kA7, kB7, kB8, kA8, kA9, kB9 \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09 }, \
    { k11, k12, k13, k14, k15, k16, k17, k18, k19 }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29 }, \
    { k31, k32, k33, k34, k35, k36, k37, k38, k39 }, \
    { k40, k41, k42, k43, k44, k45, k46, k47, k48, k49 }, \
    { k51, k52, k53, k54, k55, k56, k57, k58, k59 }, \
    { k60, k61, k62, k63, k64, k65, k66, k67, k68, k69 }, \
    { k71, k72, k73, k74, k75, k76, k77, k78, k79 }, \
    { k80, k81, k82, k83, k84, k85, k86, k87, k88, k89 }, \
    { k91, k92, k93, k94, k95, k96, k97, k98, k99 },  \
    { kA0, kA1, XXX, XXX, XXX, XXX, kA6, kA7, kA8, kA9 },  \
    { kB1, kB2, kB3, XXX, kB5, kB7, kB8, kB9 }  \
}
#define LAYOUT_6u_right( \
    k00, k01, k11, k12, k02, k03, k13, k14, k04, k05, k15, k16, k06, k07, k17, k18, k08, k09, k19, \
    k20, k21, k31, k32, k22, k23, k33, k34, k24, k25, k35, k36, k26, k27, k37, k38, k28, k29, k39, \
    k40, k41, k51, k52, k42, k43, k53, k54, k44, k45, k55, k56, k46, k47, k57, k58, k48, k49, k59, \
    k60, k61, k71, k72, k62, k63, k73, k74, k64, k65, k75, k76, k66, k67, k77, k78, k68, k69, k79, \
    k80, k81, k91, k92, k82, k83, k93, k94, k84, k85, k95, k96, k86, k87, k97, k98, k88, k89, k99, \
    kA0, kA1, kB1, kB2, kA2, kA3, kB3, kB4, kA4,           kB6,                kB8, kA8, kA9, kB9 \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09 }, \
    { k11, k12, k13, k14, k15, k16, k17, k18, k19 }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29 }, \
    { k31, k32, k33, k34, k35, k36, k37, k38, k39 }, \
    { k40, k41, k42, k43, k44, k45, k46, k47, k48, k49 }, \
    { k51, k52, k53, k54, k55, k56, k57, k58, k59 }, \
    { k60, k61, k62, k63, k64, k65, k66, k67, k68, k69 }, \
    { k71, k72, k73, k74, k75, k77, k78, k79 }, \
    { k80, k81, k82, k83, k84, k85, k86, k87, k88, k89 }, \
    { k91, k92, k93, k94, k95, k96, k97, k98, k99 },  \
    { kA0, kA1, kA2, kA3, kA4, XXX, XXX, XXX, kA8, kA9 },  \
    { kB1, kB2, kB3, kB4, XXX, kB6, XXX, kB8, kB9 }  \
}
#define LAYOUT_2x3u_left( \
    k00, k01, k11, k12, k02, k03, k13, k14, k04, k05, k15, k16, k06, k07, k17, k18, k08, k09, k19, \
    k20, k21, k31, k32, k22, k23, k33, k34, k24, k25, k35, k36, k26, k27, k37, k38, k28, k29, k39, \
    k40, k41, k51, k52, k42, k43, k53, k54, k44, k45, k55, k56, k46, k47, k57, k58, k48, k49, k59, \
    k60, k61, k71, k72, k62, k63, k73, k74, k64, k65, k75, k76, k66, k67, k77, k78, k68, k69, k79, \
    k80, k81, k91, k92, k82, k83, k93, k94, k84, k85, k95, k96, k86, k87, k97, k98, k88, k89, k99, \
    kA0, kA1, kB1, kB2,      kA3,           kA4,      kB5, kB6, kA6, kA7, kB7, kB8, kA8, kA9, kB9 \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09 }, \
    { k11, k12, k13, k14, k15, k16, k17, k18, k19 }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29 }, \
    { k31, k32, k33, k34, k35, k36, k37, k38, k39 }, \
    { k40, k41, k42, k43, k44, k45, k46, k47, k48, k49 }, \
    { k51, k52, k53, k54, k55, k56, k57, k58, k59 }, \
    { k60, k61, k62, k63, k64, k65, k66, k67, k68, k69 }, \
    { k71, k72, k73, k74, k75, k76, k77, k78, k79 }, \
    { k80, k81, k82, k83, k84, k85, k86, k87, k88, k89 }, \
    { k91, k92, k93, k94, k95, k96, k97, k98, k99 },  \
    { kA0, kA1, XXX, kA3, kA4, XXX, kA6, kA7, kA8, kA9 },  \
    { kB1, kB2, XXX, XXX, kB5, kB6, kB7, kB8, kB9 }  \
}
#define LAYOUT_2x3u_right( \
    k00, k01, k11, k12, k02, k03, k13, k14, k04, k05, k15, k16, k06, k07, k17, k18, k08, k09, k19, \
    k20, k21, k31, k32, k22, k23, k33, k34, k24, k25, k35, k36, k26, k27, k37, k38, k28, k29, k39, \
    k40, k41, k51, k52, k42, k43, k53, k54, k44, k45, k55, k56, k46, k47, k57, k58, k48, k49, k59, \
    k60, k61, k71, k72, k62, k63, k73, k74, k64, k65, k75, k76, k66, k67, k77, k78, k68, k69, k79, \
    k80, k81, k91, k92, k82, k83, k93, k94, k84, k85, k95, k96, k86, k87, k97, k98, k88, k89, k99, \
    kA0, kA1, kB1, kB2, kA2, kA3, kB3, kB4, kA4,      kB5,           kA7,      kB8, kA8, kA9, kB9 \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09 }, \
    { k11, k12, k13, k14, k15, k16, k17, k18, k19 }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29 }, \
    { k31, k32, k33, k34, k35, k36, k37, k38, k39 }, \
    { k40, k41, k42, k43, k44, k45, k46, k47, k48, k49 }, \
    { k51, k52, k53, k54, k55, k56, k57, k58, k59 }, \
    { k60, k61, k62, k63, k64, k65, k66, k67, k68, k69 },  \
    { k71, k72, k73, k74, k75, k76, k77, k78, k79 }, \
    { k80, k81, k82, k83, k84, k85, k86, k87, k88, k89 }, \
    { k91, k92, k93, k94, k95, k96, k97, k98, k99 },  \
    { kA0, kA1, kA2, kA3, kA4, XXX, XXX, kA7, kA8, kA9 },  \
    { kB1, kB2, kB3, kB4, kB5, XXX, XXX, kB8, kB9 }  \
}
