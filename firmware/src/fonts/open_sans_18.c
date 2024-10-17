/*******************************************************************************
 * Symbols: A-Z, a-z
 * Size: 18 px
 * Bpp: 4
 * Opts: --bpp 4 --size 18 --no-compress --font OpenSans-Regular.ttf --range 65-90,97-122 --format lvgl -o open_sans_18.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl.h"
#endif

#ifndef OPEN_SANS_18
#define OPEN_SANS_18 1
#endif

#if OPEN_SANS_18

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0041 "A" */
    0x0, 0x0, 0x2f, 0x90, 0x0, 0x0, 0x0, 0x0,
    0x8f, 0xe0, 0x0, 0x0, 0x0, 0x0, 0xe8, 0xf5,
    0x0, 0x0, 0x0, 0x5, 0xf2, 0xcb, 0x0, 0x0,
    0x0, 0xb, 0xc0, 0x6f, 0x10, 0x0, 0x0, 0x1f,
    0x70, 0x1f, 0x70, 0x0, 0x0, 0x7f, 0x10, 0xb,
    0xd0, 0x0, 0x0, 0xdc, 0x11, 0x16, 0xf4, 0x0,
    0x4, 0xff, 0xff, 0xff, 0xfa, 0x0, 0xa, 0xf4,
    0x44, 0x44, 0xbf, 0x0, 0x1f, 0x80, 0x0, 0x0,
    0x3f, 0x60, 0x6f, 0x20, 0x0, 0x0, 0xd, 0xc0,
    0xcb, 0x0, 0x0, 0x0, 0x6, 0xf2,

    /* U+0042 "B" */
    0x3f, 0xff, 0xff, 0xc7, 0x0, 0x3f, 0x74, 0x45,
    0xaf, 0xb0, 0x3f, 0x40, 0x0, 0x9, 0xf2, 0x3f,
    0x40, 0x0, 0x5, 0xf3, 0x3f, 0x40, 0x0, 0x7,
    0xf1, 0x3f, 0x40, 0x1, 0x5f, 0x80, 0x3f, 0xff,
    0xff, 0xf7, 0x0, 0x3f, 0x63, 0x34, 0x7e, 0xc1,
    0x3f, 0x40, 0x0, 0x2, 0xf7, 0x3f, 0x40, 0x0,
    0x0, 0xfa, 0x3f, 0x40, 0x0, 0x3, 0xf8, 0x3f,
    0x74, 0x45, 0x8e, 0xe1, 0x3f, 0xff, 0xff, 0xe9,
    0x10,

    /* U+0043 "C" */
    0x0, 0x7, 0xcf, 0xfe, 0xb4, 0x1, 0xdf, 0xa6,
    0x57, 0xc6, 0xc, 0xf3, 0x0, 0x0, 0x0, 0x5f,
    0x60, 0x0, 0x0, 0x0, 0xaf, 0x0, 0x0, 0x0,
    0x0, 0xdb, 0x0, 0x0, 0x0, 0x0, 0xea, 0x0,
    0x0, 0x0, 0x0, 0xdb, 0x0, 0x0, 0x0, 0x0,
    0xbe, 0x0, 0x0, 0x0, 0x0, 0x6f, 0x50, 0x0,
    0x0, 0x0, 0xe, 0xe2, 0x0, 0x0, 0x0, 0x3,
    0xef, 0x96, 0x56, 0x93, 0x0, 0x19, 0xdf, 0xfe,
    0xb2,

    /* U+0044 "D" */
    0x3f, 0xff, 0xff, 0xc7, 0x10, 0x3, 0xf7, 0x44,
    0x69, 0xfe, 0x30, 0x3f, 0x40, 0x0, 0x2, 0xde,
    0x13, 0xf4, 0x0, 0x0, 0x3, 0xf7, 0x3f, 0x40,
    0x0, 0x0, 0xd, 0xc3, 0xf4, 0x0, 0x0, 0x0,
    0xae, 0x3f, 0x40, 0x0, 0x0, 0x9, 0xf3, 0xf4,
    0x0, 0x0, 0x0, 0xae, 0x3f, 0x40, 0x0, 0x0,
    0xe, 0xb3, 0xf4, 0x0, 0x0, 0x4, 0xf6, 0x3f,
    0x40, 0x0, 0x3, 0xed, 0x3, 0xf7, 0x55, 0x6b,
    0xfd, 0x20, 0x3f, 0xff, 0xfe, 0xb6, 0x0, 0x0,

    /* U+0045 "E" */
    0x3f, 0xff, 0xff, 0xfe, 0x3f, 0x85, 0x55, 0x55,
    0x3f, 0x40, 0x0, 0x0, 0x3f, 0x40, 0x0, 0x0,
    0x3f, 0x40, 0x0, 0x0, 0x3f, 0x41, 0x11, 0x10,
    0x3f, 0xff, 0xff, 0xf9, 0x3f, 0x74, 0x44, 0x42,
    0x3f, 0x40, 0x0, 0x0, 0x3f, 0x40, 0x0, 0x0,
    0x3f, 0x40, 0x0, 0x0, 0x3f, 0x85, 0x55, 0x55,
    0x3f, 0xff, 0xff, 0xfe,

    /* U+0046 "F" */
    0x3f, 0xff, 0xff, 0xfe, 0x3f, 0x85, 0x55, 0x55,
    0x3f, 0x40, 0x0, 0x0, 0x3f, 0x40, 0x0, 0x0,
    0x3f, 0x40, 0x0, 0x0, 0x3f, 0x41, 0x11, 0x10,
    0x3f, 0xff, 0xff, 0xf9, 0x3f, 0x74, 0x44, 0x42,
    0x3f, 0x40, 0x0, 0x0, 0x3f, 0x40, 0x0, 0x0,
    0x3f, 0x40, 0x0, 0x0, 0x3f, 0x40, 0x0, 0x0,
    0x3f, 0x40, 0x0, 0x0,

    /* U+0047 "G" */
    0x0, 0x5, 0xbe, 0xff, 0xd9, 0x20, 0x1b, 0xfb,
    0x75, 0x69, 0xd3, 0xb, 0xf4, 0x0, 0x0, 0x0,
    0x4, 0xf6, 0x0, 0x0, 0x0, 0x0, 0xaf, 0x0,
    0x0, 0x0, 0x0, 0xd, 0xb0, 0x0, 0x0, 0x11,
    0x10, 0xea, 0x0, 0x0, 0xcf, 0xff, 0xcd, 0xb0,
    0x0, 0x3, 0x44, 0xdc, 0xae, 0x0, 0x0, 0x0,
    0xc, 0xc6, 0xf5, 0x0, 0x0, 0x0, 0xcc, 0xd,
    0xe3, 0x0, 0x0, 0xc, 0xc0, 0x2e, 0xfa, 0x65,
    0x57, 0xec, 0x0, 0x17, 0xcf, 0xff, 0xda, 0x50,

    /* U+0048 "H" */
    0x3f, 0x40, 0x0, 0x0, 0xf, 0x83, 0xf4, 0x0,
    0x0, 0x0, 0xf8, 0x3f, 0x40, 0x0, 0x0, 0xf,
    0x83, 0xf4, 0x0, 0x0, 0x0, 0xf8, 0x3f, 0x40,
    0x0, 0x0, 0xf, 0x83, 0xf4, 0x11, 0x11, 0x11,
    0xf8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x83, 0xf7,
    0x44, 0x44, 0x44, 0xf8, 0x3f, 0x40, 0x0, 0x0,
    0xf, 0x83, 0xf4, 0x0, 0x0, 0x0, 0xf8, 0x3f,
    0x40, 0x0, 0x0, 0xf, 0x83, 0xf4, 0x0, 0x0,
    0x0, 0xf8, 0x3f, 0x40, 0x0, 0x0, 0xf, 0x80,

    /* U+0049 "I" */
    0x3f, 0x43, 0xf4, 0x3f, 0x43, 0xf4, 0x3f, 0x43,
    0xf4, 0x3f, 0x43, 0xf4, 0x3f, 0x43, 0xf4, 0x3f,
    0x43, 0xf4, 0x3f, 0x40,

    /* U+004A "J" */
    0x0, 0x5, 0xf3, 0x0, 0x5, 0xf3, 0x0, 0x5,
    0xf3, 0x0, 0x5, 0xf3, 0x0, 0x5, 0xf3, 0x0,
    0x5, 0xf3, 0x0, 0x5, 0xf3, 0x0, 0x5, 0xf3,
    0x0, 0x5, 0xf3, 0x0, 0x5, 0xf3, 0x0, 0x5,
    0xf3, 0x0, 0x5, 0xf3, 0x0, 0x5, 0xf2, 0x0,
    0x6, 0xf1, 0x11, 0x3d, 0xd0, 0x7f, 0xfe, 0x30,
    0x3, 0x30, 0x0,

    /* U+004B "K" */
    0x3f, 0x40, 0x0, 0x6, 0xf6, 0x3, 0xf4, 0x0,
    0x4, 0xf7, 0x0, 0x3f, 0x40, 0x3, 0xf9, 0x0,
    0x3, 0xf4, 0x2, 0xea, 0x0, 0x0, 0x3f, 0x41,
    0xdb, 0x0, 0x0, 0x3, 0xf4, 0xce, 0x0, 0x0,
    0x0, 0x3f, 0xee, 0xf5, 0x0, 0x0, 0x3, 0xfb,
    0xc, 0xe1, 0x0, 0x0, 0x3f, 0x40, 0x1e, 0xc0,
    0x0, 0x3, 0xf4, 0x0, 0x5f, 0x80, 0x0, 0x3f,
    0x40, 0x0, 0x9f, 0x30, 0x3, 0xf4, 0x0, 0x0,
    0xde, 0x0, 0x3f, 0x40, 0x0, 0x2, 0xfa, 0x0,

    /* U+004C "L" */
    0x3f, 0x40, 0x0, 0x0, 0x3f, 0x40, 0x0, 0x0,
    0x3f, 0x40, 0x0, 0x0, 0x3f, 0x40, 0x0, 0x0,
    0x3f, 0x40, 0x0, 0x0, 0x3f, 0x40, 0x0, 0x0,
    0x3f, 0x40, 0x0, 0x0, 0x3f, 0x40, 0x0, 0x0,
    0x3f, 0x40, 0x0, 0x0, 0x3f, 0x40, 0x0, 0x0,
    0x3f, 0x40, 0x0, 0x0, 0x3f, 0x85, 0x55, 0x55,
    0x3f, 0xff, 0xff, 0xff,

    /* U+004D "M" */
    0x3f, 0xf2, 0x0, 0x0, 0x0, 0xe, 0xf7, 0x3f,
    0xe8, 0x0, 0x0, 0x0, 0x5f, 0xf7, 0x3f, 0x9e,
    0x0, 0x0, 0x0, 0xba, 0xf7, 0x3f, 0x4f, 0x40,
    0x0, 0x1, 0xf4, 0xf7, 0x3f, 0x2c, 0xa0, 0x0,
    0x7, 0xd0, 0xf7, 0x3f, 0x26, 0xf1, 0x0, 0xd,
    0x70, 0xf7, 0x3f, 0x20, 0xf6, 0x0, 0x4f, 0x10,
    0xf7, 0x3f, 0x20, 0xac, 0x0, 0xab, 0x0, 0xf7,
    0x3f, 0x20, 0x4f, 0x20, 0xf5, 0x0, 0xf7, 0x3f,
    0x20, 0xe, 0x86, 0xe0, 0x0, 0xf7, 0x3f, 0x20,
    0x8, 0xec, 0x90, 0x0, 0xf7, 0x3f, 0x20, 0x2,
    0xff, 0x30, 0x0, 0xf7, 0x3f, 0x20, 0x0, 0xcd,
    0x0, 0x0, 0xf7,

    /* U+004E "N" */
    0x3f, 0xc0, 0x0, 0x0, 0x9, 0xc3, 0xff, 0x60,
    0x0, 0x0, 0x9c, 0x3f, 0xaf, 0x10, 0x0, 0x9,
    0xc3, 0xf2, 0xeb, 0x0, 0x0, 0x9c, 0x3f, 0x25,
    0xf5, 0x0, 0x9, 0xc3, 0xf2, 0xb, 0xe1, 0x0,
    0x9c, 0x3f, 0x20, 0x2f, 0x90, 0x9, 0xc3, 0xf2,
    0x0, 0x7f, 0x40, 0x9c, 0x3f, 0x20, 0x0, 0xcd,
    0x9, 0xc3, 0xf2, 0x0, 0x2, 0xf8, 0x8c, 0x3f,
    0x20, 0x0, 0x8, 0xfa, 0xc3, 0xf2, 0x0, 0x0,
    0xd, 0xfc, 0x3f, 0x20, 0x0, 0x0, 0x3f, 0xc0,

    /* U+004F "O" */
    0x0, 0x18, 0xdf, 0xfd, 0x81, 0x0, 0x3, 0xef,
    0x96, 0x58, 0xee, 0x30, 0xe, 0xd1, 0x0, 0x0,
    0x1d, 0xe0, 0x6f, 0x40, 0x0, 0x0, 0x4, 0xf6,
    0xbe, 0x0, 0x0, 0x0, 0x0, 0xeb, 0xdb, 0x0,
    0x0, 0x0, 0x0, 0xbd, 0xea, 0x0, 0x0, 0x0,
    0x0, 0xae, 0xdb, 0x0, 0x0, 0x0, 0x0, 0xbd,
    0xbe, 0x0, 0x0, 0x0, 0x0, 0xeb, 0x6f, 0x40,
    0x0, 0x0, 0x4, 0xf6, 0xe, 0xd1, 0x0, 0x0,
    0x1d, 0xd0, 0x3, 0xee, 0x85, 0x58, 0xee, 0x30,
    0x0, 0x19, 0xdf, 0xfd, 0x81, 0x0,

    /* U+0050 "P" */
    0x3f, 0xff, 0xfe, 0xa2, 0x3, 0xf7, 0x45, 0x7e,
    0xf3, 0x3f, 0x40, 0x0, 0x1f, 0xa3, 0xf4, 0x0,
    0x0, 0xbd, 0x3f, 0x40, 0x0, 0xb, 0xd3, 0xf4,
    0x0, 0x0, 0xea, 0x3f, 0x40, 0x14, 0xcf, 0x23,
    0xff, 0xff, 0xfc, 0x30, 0x3f, 0x63, 0x31, 0x0,
    0x3, 0xf4, 0x0, 0x0, 0x0, 0x3f, 0x40, 0x0,
    0x0, 0x3, 0xf4, 0x0, 0x0, 0x0, 0x3f, 0x40,
    0x0, 0x0, 0x0,

    /* U+0051 "Q" */
    0x0, 0x18, 0xdf, 0xfd, 0x81, 0x0, 0x3, 0xef,
    0x96, 0x58, 0xee, 0x30, 0xe, 0xd1, 0x0, 0x0,
    0x1d, 0xe0, 0x6f, 0x40, 0x0, 0x0, 0x4, 0xf6,
    0xbe, 0x0, 0x0, 0x0, 0x0, 0xeb, 0xdb, 0x0,
    0x0, 0x0, 0x0, 0xbd, 0xea, 0x0, 0x0, 0x0,
    0x0, 0xae, 0xdb, 0x0, 0x0, 0x0, 0x0, 0xbd,
    0xbe, 0x0, 0x0, 0x0, 0x0, 0xeb, 0x6f, 0x40,
    0x0, 0x0, 0x4, 0xf6, 0xe, 0xd1, 0x0, 0x0,
    0x1d, 0xd0, 0x3, 0xee, 0x85, 0x58, 0xee, 0x30,
    0x0, 0x19, 0xdf, 0xff, 0x91, 0x0, 0x0, 0x0,
    0x0, 0x2f, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x4,
    0xfb, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xa0,

    /* U+0052 "R" */
    0x3f, 0xff, 0xfe, 0xb4, 0x0, 0x3f, 0x75, 0x57,
    0xcf, 0x50, 0x3f, 0x40, 0x0, 0xd, 0xc0, 0x3f,
    0x40, 0x0, 0xa, 0xe0, 0x3f, 0x40, 0x0, 0xd,
    0xc0, 0x3f, 0x40, 0x2, 0x9f, 0x40, 0x3f, 0xff,
    0xff, 0xc3, 0x0, 0x3f, 0x63, 0x3e, 0xa0, 0x0,
    0x3f, 0x40, 0x6, 0xf3, 0x0, 0x3f, 0x40, 0x0,
    0xdc, 0x0, 0x3f, 0x40, 0x0, 0x4f, 0x60, 0x3f,
    0x40, 0x0, 0xb, 0xe0, 0x3f, 0x40, 0x0, 0x3,
    0xf8,

    /* U+0053 "S" */
    0x0, 0x4c, 0xff, 0xeb, 0x40, 0x5, 0xfb, 0x65,
    0x7b, 0x60, 0xd, 0xc0, 0x0, 0x0, 0x0, 0xe,
    0xa0, 0x0, 0x0, 0x0, 0xa, 0xe1, 0x0, 0x0,
    0x0, 0x2, 0xef, 0x81, 0x0, 0x0, 0x0, 0x18,
    0xef, 0xb3, 0x0, 0x0, 0x0, 0x5, 0xdf, 0x50,
    0x0, 0x0, 0x0, 0xc, 0xd0, 0x0, 0x0, 0x0,
    0x8, 0xf0, 0x0, 0x0, 0x0, 0xb, 0xd0, 0x1d,
    0x86, 0x56, 0xcf, 0x50, 0x9, 0xdf, 0xfe, 0xb3,
    0x0,

    /* U+0054 "T" */
    0xdf, 0xff, 0xff, 0xff, 0xfb, 0x45, 0x55, 0xdc,
    0x55, 0x54, 0x0, 0x0, 0xcb, 0x0, 0x0, 0x0,
    0x0, 0xcb, 0x0, 0x0, 0x0, 0x0, 0xcb, 0x0,
    0x0, 0x0, 0x0, 0xcb, 0x0, 0x0, 0x0, 0x0,
    0xcb, 0x0, 0x0, 0x0, 0x0, 0xcb, 0x0, 0x0,
    0x0, 0x0, 0xcb, 0x0, 0x0, 0x0, 0x0, 0xcb,
    0x0, 0x0, 0x0, 0x0, 0xcb, 0x0, 0x0, 0x0,
    0x0, 0xcb, 0x0, 0x0, 0x0, 0x0, 0xcb, 0x0,
    0x0,

    /* U+0055 "U" */
    0x6f, 0x20, 0x0, 0x0, 0xf, 0x76, 0xf2, 0x0,
    0x0, 0x0, 0xf7, 0x6f, 0x20, 0x0, 0x0, 0xf,
    0x76, 0xf2, 0x0, 0x0, 0x0, 0xf7, 0x6f, 0x20,
    0x0, 0x0, 0xf, 0x76, 0xf2, 0x0, 0x0, 0x0,
    0xf7, 0x6f, 0x20, 0x0, 0x0, 0xf, 0x76, 0xf2,
    0x0, 0x0, 0x0, 0xf7, 0x5f, 0x20, 0x0, 0x0,
    0xf, 0x74, 0xf4, 0x0, 0x0, 0x2, 0xf5, 0xe,
    0xc0, 0x0, 0x0, 0xaf, 0x10, 0x5f, 0xd7, 0x56,
    0xcf, 0x60, 0x0, 0x3b, 0xef, 0xeb, 0x40, 0x0,

    /* U+0056 "V" */
    0xdb, 0x0, 0x0, 0x0, 0xf, 0x87, 0xf1, 0x0,
    0x0, 0x5, 0xf3, 0x1f, 0x70, 0x0, 0x0, 0xbd,
    0x0, 0xcc, 0x0, 0x0, 0x1f, 0x70, 0x6, 0xf2,
    0x0, 0x6, 0xf2, 0x0, 0x1f, 0x80, 0x0, 0xcc,
    0x0, 0x0, 0xbd, 0x0, 0x2f, 0x60, 0x0, 0x5,
    0xf3, 0x7, 0xf1, 0x0, 0x0, 0xf, 0x80, 0xdb,
    0x0, 0x0, 0x0, 0xae, 0x2f, 0x50, 0x0, 0x0,
    0x4, 0xf9, 0xf0, 0x0, 0x0, 0x0, 0xe, 0xfa,
    0x0, 0x0, 0x0, 0x0, 0x9f, 0x40, 0x0, 0x0,

    /* U+0057 "W" */
    0x9e, 0x0, 0x0, 0xa, 0xf2, 0x0, 0x0, 0x5f,
    0x35, 0xf3, 0x0, 0x0, 0xef, 0x70, 0x0, 0x9,
    0xf0, 0x1f, 0x70, 0x0, 0x3f, 0xac, 0x0, 0x0,
    0xdb, 0x0, 0xdb, 0x0, 0x8, 0xd5, 0xf1, 0x0,
    0x1f, 0x60, 0x8, 0xf0, 0x0, 0xc9, 0xf, 0x50,
    0x5, 0xf2, 0x0, 0x4f, 0x30, 0x1f, 0x40, 0xba,
    0x0, 0x9e, 0x0, 0x0, 0xf7, 0x6, 0xf0, 0x7,
    0xe0, 0xd, 0xa0, 0x0, 0xc, 0xb0, 0xab, 0x0,
    0x2f, 0x31, 0xf6, 0x0, 0x0, 0x8f, 0xe, 0x70,
    0x0, 0xe8, 0x5f, 0x10, 0x0, 0x3, 0xf6, 0xf2,
    0x0, 0x9, 0xc9, 0xd0, 0x0, 0x0, 0xf, 0xce,
    0x0, 0x0, 0x4f, 0xc9, 0x0, 0x0, 0x0, 0xbf,
    0x90, 0x0, 0x0, 0xff, 0x50, 0x0, 0x0, 0x7,
    0xf5, 0x0, 0x0, 0xb, 0xf1, 0x0, 0x0,

    /* U+0058 "X" */
    0x5f, 0x50, 0x0, 0x0, 0xdb, 0x0, 0xae, 0x0,
    0x0, 0x7f, 0x10, 0x1, 0xf9, 0x0, 0x2f, 0x60,
    0x0, 0x6, 0xf3, 0xb, 0xc0, 0x0, 0x0, 0xc,
    0xc5, 0xf2, 0x0, 0x0, 0x0, 0x2f, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0xdf, 0x40, 0x0, 0x0, 0x0,
    0x7f, 0xbd, 0x0, 0x0, 0x0, 0x2f, 0x62, 0xf8,
    0x0, 0x0, 0xb, 0xc0, 0x7, 0xf2, 0x0, 0x6,
    0xf3, 0x0, 0xd, 0xc0, 0x1, 0xe9, 0x0, 0x0,
    0x4f, 0x60, 0xae, 0x0, 0x0, 0x0, 0xaf, 0x10,

    /* U+0059 "Y" */
    0xbd, 0x0, 0x0, 0x0, 0xcc, 0x3, 0xf6, 0x0,
    0x0, 0x5f, 0x40, 0xa, 0xe0, 0x0, 0xd, 0xb0,
    0x0, 0x2f, 0x70, 0x5, 0xf2, 0x0, 0x0, 0x9e,
    0x0, 0xda, 0x0, 0x0, 0x1, 0xf7, 0x6f, 0x20,
    0x0, 0x0, 0x8, 0xfe, 0x90, 0x0, 0x0, 0x0,
    0x1e, 0xf1, 0x0, 0x0, 0x0, 0x0, 0xbc, 0x0,
    0x0, 0x0, 0x0, 0xb, 0xc0, 0x0, 0x0, 0x0,
    0x0, 0xbc, 0x0, 0x0, 0x0, 0x0, 0xb, 0xc0,
    0x0, 0x0, 0x0, 0x0, 0xbc, 0x0, 0x0, 0x0,

    /* U+005A "Z" */
    0x1f, 0xff, 0xff, 0xff, 0xf6, 0x5, 0x55, 0x55,
    0x5b, 0xf3, 0x0, 0x0, 0x0, 0x2f, 0x80, 0x0,
    0x0, 0x0, 0xcd, 0x0, 0x0, 0x0, 0x7, 0xf3,
    0x0, 0x0, 0x0, 0x2f, 0x80, 0x0, 0x0, 0x0,
    0xcd, 0x0, 0x0, 0x0, 0x7, 0xf3, 0x0, 0x0,
    0x0, 0x2f, 0x90, 0x0, 0x0, 0x0, 0xcd, 0x0,
    0x0, 0x0, 0x6, 0xf4, 0x0, 0x0, 0x0, 0x1f,
    0xd5, 0x55, 0x55, 0x53, 0x5f, 0xff, 0xff, 0xff,
    0xf9,

    /* U+0061 "a" */
    0x0, 0x7c, 0xff, 0xd5, 0x0, 0xb, 0x74, 0x4b,
    0xf2, 0x0, 0x0, 0x0, 0xf, 0x70, 0x0, 0x0,
    0x0, 0xe8, 0x0, 0x6b, 0xee, 0xef, 0x80, 0xaf,
    0x73, 0x11, 0xe8, 0x1f, 0x80, 0x0, 0xf, 0x82,
    0xf6, 0x0, 0x3, 0xf8, 0xd, 0xc2, 0x4, 0xde,
    0x80, 0x2c, 0xff, 0xb3, 0xa8,

    /* U+0062 "b" */
    0x7f, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0,
    0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x7f,
    0x0, 0x0, 0x0, 0x0, 0x7f, 0x2b, 0xff, 0xb3,
    0x0, 0x7f, 0xd8, 0x45, 0xcf, 0x20, 0x7f, 0x70,
    0x0, 0x1f, 0xa0, 0x7f, 0x20, 0x0, 0xa, 0xe0,
    0x7f, 0x0, 0x0, 0x8, 0xf0, 0x7f, 0x0, 0x0,
    0x8, 0xf0, 0x7f, 0x20, 0x0, 0xa, 0xe0, 0x7f,
    0x70, 0x0, 0x1f, 0x90, 0x7e, 0xe7, 0x45, 0xdf,
    0x20, 0x7b, 0x2b, 0xff, 0xb2, 0x0,

    /* U+0063 "c" */
    0x1, 0x9e, 0xfe, 0xa0, 0x1d, 0xe7, 0x56, 0x70,
    0x8f, 0x20, 0x0, 0x0, 0xdb, 0x0, 0x0, 0x0,
    0xf8, 0x0, 0x0, 0x0, 0xf8, 0x0, 0x0, 0x0,
    0xda, 0x0, 0x0, 0x0, 0x9f, 0x20, 0x0, 0x0,
    0x1e, 0xe6, 0x46, 0x90, 0x1, 0xae, 0xfe, 0x90,

    /* U+0064 "d" */
    0x0, 0x0, 0x0, 0xf, 0x70, 0x0, 0x0, 0x0,
    0xf7, 0x0, 0x0, 0x0, 0xf, 0x70, 0x0, 0x0,
    0x0, 0xf7, 0x2, 0xbf, 0xfb, 0x2f, 0x72, 0xed,
    0x54, 0x8d, 0xf7, 0x9f, 0x10, 0x0, 0x7f, 0x7d,
    0xb0, 0x0, 0x1, 0xf7, 0xf8, 0x0, 0x0, 0xf,
    0x7f, 0x80, 0x0, 0x0, 0xf7, 0xea, 0x0, 0x0,
    0x1f, 0x7a, 0xf1, 0x0, 0x6, 0xf7, 0x2f, 0xd5,
    0x47, 0xdf, 0x70, 0x3b, 0xff, 0xb2, 0xc7,

    /* U+0065 "e" */
    0x1, 0x9e, 0xfd, 0x50, 0x0, 0xdc, 0x54, 0x9f,
    0x50, 0x8e, 0x10, 0x0, 0xae, 0xd, 0xa0, 0x0,
    0x6, 0xf1, 0xff, 0xff, 0xff, 0xff, 0x2f, 0xa3,
    0x33, 0x33, 0x30, 0xdb, 0x0, 0x0, 0x0, 0x8,
    0xf2, 0x0, 0x0, 0x0, 0x1d, 0xe7, 0x45, 0x89,
    0x0, 0x19, 0xef, 0xfc, 0x60,

    /* U+0066 "f" */
    0x0, 0x1a, 0xff, 0xa0, 0xa, 0xe5, 0x43, 0x0,
    0xf8, 0x0, 0x0, 0xf, 0x60, 0x0, 0x7e, 0xff,
    0xfd, 0x1, 0x2f, 0x82, 0x20, 0x0, 0xf6, 0x0,
    0x0, 0xf, 0x60, 0x0, 0x0, 0xf6, 0x0, 0x0,
    0xf, 0x60, 0x0, 0x0, 0xf6, 0x0, 0x0, 0xf,
    0x60, 0x0, 0x0, 0xf6, 0x0, 0x0, 0xf, 0x60,
    0x0,

    /* U+0067 "g" */
    0x0, 0x7d, 0xff, 0xff, 0xf6, 0x8, 0xf6, 0x24,
    0xde, 0x31, 0xe, 0xa0, 0x0, 0x5f, 0x20, 0xf,
    0x90, 0x0, 0x4f, 0x30, 0xa, 0xe3, 0x1, 0xbe,
    0x0, 0x0, 0xbf, 0xff, 0xc2, 0x0, 0x1, 0xe5,
    0x21, 0x0, 0x0, 0x6, 0xe0, 0x0, 0x0, 0x0,
    0x5, 0xf9, 0x66, 0x53, 0x0, 0x4, 0xef, 0xff,
    0xff, 0xb0, 0x5f, 0x40, 0x0, 0x7, 0xf3, 0xbc,
    0x0, 0x0, 0x4, 0xf3, 0x8f, 0x73, 0x23, 0x7e,
    0xc0, 0x7, 0xdf, 0xfe, 0xc7, 0x0,

    /* U+0068 "h" */
    0x7f, 0x0, 0x0, 0x0, 0x7, 0xf0, 0x0, 0x0,
    0x0, 0x7f, 0x0, 0x0, 0x0, 0x7, 0xf0, 0x0,
    0x0, 0x0, 0x7f, 0x1a, 0xff, 0xc4, 0x7, 0xfd,
    0x84, 0x5c, 0xf2, 0x7f, 0x70, 0x0, 0x1f, 0x77,
    0xf2, 0x0, 0x0, 0xe9, 0x7f, 0x0, 0x0, 0xe,
    0x97, 0xf0, 0x0, 0x0, 0xe9, 0x7f, 0x0, 0x0,
    0xe, 0x97, 0xf0, 0x0, 0x0, 0xe9, 0x7f, 0x0,
    0x0, 0xe, 0x97, 0xf0, 0x0, 0x0, 0xe9,

    /* U+0069 "i" */
    0x7e, 0x16, 0xd1, 0x0, 0x7, 0xf0, 0x7f, 0x7,
    0xf0, 0x7f, 0x7, 0xf0, 0x7f, 0x7, 0xf0, 0x7f,
    0x7, 0xf0, 0x7f, 0x0,

    /* U+006A "j" */
    0x0, 0x7e, 0x10, 0x6, 0xd1, 0x0, 0x0, 0x0,
    0x7, 0xf0, 0x0, 0x7f, 0x0, 0x7, 0xf0, 0x0,
    0x7f, 0x0, 0x7, 0xf0, 0x0, 0x7f, 0x0, 0x7,
    0xf0, 0x0, 0x7f, 0x0, 0x7, 0xf0, 0x0, 0x7f,
    0x0, 0x7, 0xf0, 0x0, 0x8f, 0x5, 0x4d, 0xc0,
    0xef, 0xc2, 0x0,

    /* U+006B "k" */
    0x7f, 0x0, 0x0, 0x0, 0x7, 0xf0, 0x0, 0x0,
    0x0, 0x7f, 0x0, 0x0, 0x0, 0x7, 0xf0, 0x0,
    0x0, 0x0, 0x7f, 0x0, 0x2, 0xf9, 0x7, 0xf0,
    0x2, 0xea, 0x0, 0x7f, 0x1, 0xdb, 0x0, 0x7,
    0xf0, 0xcc, 0x0, 0x0, 0x7f, 0xaf, 0x60, 0x0,
    0x7, 0xfd, 0xbe, 0x10, 0x0, 0x7f, 0x11, 0xec,
    0x0, 0x7, 0xf0, 0x4, 0xf8, 0x0, 0x7f, 0x0,
    0x8, 0xf3, 0x7, 0xf0, 0x0, 0xc, 0xe1,

    /* U+006C "l" */
    0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f,
    0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f,

    /* U+006D "m" */
    0x7c, 0x2b, 0xff, 0xa1, 0x2b, 0xff, 0xb2, 0x7,
    0xfd, 0x74, 0x6f, 0xce, 0x84, 0x6e, 0xc0, 0x7f,
    0x60, 0x0, 0x8f, 0x80, 0x0, 0x6f, 0x17, 0xf1,
    0x0, 0x5, 0xf3, 0x0, 0x3, 0xf3, 0x7f, 0x0,
    0x0, 0x5f, 0x10, 0x0, 0x3f, 0x37, 0xf0, 0x0,
    0x5, 0xf1, 0x0, 0x3, 0xf3, 0x7f, 0x0, 0x0,
    0x5f, 0x10, 0x0, 0x3f, 0x37, 0xf0, 0x0, 0x5,
    0xf1, 0x0, 0x3, 0xf3, 0x7f, 0x0, 0x0, 0x5f,
    0x10, 0x0, 0x3f, 0x37, 0xf0, 0x0, 0x5, 0xf1,
    0x0, 0x3, 0xf3,

    /* U+006E "n" */
    0x7c, 0x1a, 0xff, 0xc4, 0x7, 0xfd, 0x84, 0x5c,
    0xf2, 0x7f, 0x70, 0x0, 0x1f, 0x77, 0xf2, 0x0,
    0x0, 0xe9, 0x7f, 0x0, 0x0, 0xe, 0x97, 0xf0,
    0x0, 0x0, 0xe9, 0x7f, 0x0, 0x0, 0xe, 0x97,
    0xf0, 0x0, 0x0, 0xe9, 0x7f, 0x0, 0x0, 0xe,
    0x97, 0xf0, 0x0, 0x0, 0xe9,

    /* U+006F "o" */
    0x1, 0x9e, 0xfe, 0x80, 0x1, 0xdd, 0x64, 0x7e,
    0xb0, 0x8f, 0x10, 0x0, 0x3f, 0x6d, 0xb0, 0x0,
    0x0, 0xdb, 0xf8, 0x0, 0x0, 0xb, 0xdf, 0x80,
    0x0, 0x0, 0xbd, 0xdb, 0x0, 0x0, 0xd, 0xb8,
    0xf1, 0x0, 0x3, 0xf6, 0xd, 0xd6, 0x46, 0xec,
    0x0, 0x19, 0xef, 0xe8, 0x0,

    /* U+0070 "p" */
    0x7c, 0x1a, 0xff, 0xb3, 0x0, 0x7e, 0xd8, 0x45,
    0xdf, 0x20, 0x7f, 0x70, 0x0, 0x1f, 0xa0, 0x7f,
    0x20, 0x0, 0xa, 0xe0, 0x7f, 0x0, 0x0, 0x8,
    0xf0, 0x7f, 0x0, 0x0, 0x8, 0xf0, 0x7f, 0x20,
    0x0, 0xa, 0xe0, 0x7f, 0x70, 0x0, 0x1f, 0x90,
    0x7f, 0xd8, 0x45, 0xdf, 0x20, 0x7f, 0x2b, 0xff,
    0xb3, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x7f,
    0x0, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0x0, 0x0, 0x0, 0x0,

    /* U+0071 "q" */
    0x2, 0xbf, 0xfb, 0x2c, 0x71, 0xed, 0x54, 0x8d,
    0xe7, 0x9f, 0x10, 0x0, 0x7f, 0x7d, 0xa0, 0x0,
    0x2, 0xf7, 0xf8, 0x0, 0x0, 0xf, 0x7f, 0x80,
    0x0, 0x0, 0xf7, 0xea, 0x0, 0x0, 0x1f, 0x7a,
    0xf1, 0x0, 0x7, 0xf7, 0x2f, 0xc5, 0x47, 0xdf,
    0x70, 0x3b, 0xff, 0xb2, 0xf7, 0x0, 0x0, 0x0,
    0xf, 0x70, 0x0, 0x0, 0x0, 0xf7, 0x0, 0x0,
    0x0, 0xf, 0x70, 0x0, 0x0, 0x0, 0xf7,

    /* U+0072 "r" */
    0x7c, 0x9, 0xff, 0x7, 0xdb, 0xc6, 0x60, 0x7f,
    0xb0, 0x0, 0x7, 0xf3, 0x0, 0x0, 0x7f, 0x0,
    0x0, 0x7, 0xf0, 0x0, 0x0, 0x7f, 0x0, 0x0,
    0x7, 0xf0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x7,
    0xf0, 0x0, 0x0,

    /* U+0073 "s" */
    0x1, 0xae, 0xfe, 0xb3, 0xc, 0xd5, 0x35, 0x93,
    0xf, 0x50, 0x0, 0x0, 0xd, 0xd3, 0x0, 0x0,
    0x2, 0xcf, 0xc6, 0x0, 0x0, 0x3, 0x9f, 0xd2,
    0x0, 0x0, 0x2, 0xea, 0x0, 0x0, 0x0, 0xbb,
    0x1b, 0x63, 0x37, 0xf6, 0xa, 0xef, 0xfd, 0x60,

    /* U+0074 "t" */
    0x0, 0x61, 0x0, 0x0, 0xf2, 0x0, 0x4, 0xf2,
    0x0, 0x8f, 0xff, 0xff, 0x17, 0xf4, 0x22, 0x5,
    0xf2, 0x0, 0x5, 0xf2, 0x0, 0x5, 0xf2, 0x0,
    0x5, 0xf2, 0x0, 0x5, 0xf2, 0x0, 0x5, 0xf3,
    0x0, 0x1, 0xfb, 0x34, 0x0, 0x5e, 0xfd,

    /* U+0075 "u" */
    0x9e, 0x0, 0x0, 0xf, 0x89, 0xe0, 0x0, 0x0,
    0xf8, 0x9e, 0x0, 0x0, 0xf, 0x89, 0xe0, 0x0,
    0x0, 0xf8, 0x9e, 0x0, 0x0, 0xf, 0x89, 0xe0,
    0x0, 0x0, 0xf8, 0x8e, 0x0, 0x0, 0x1f, 0x87,
    0xf1, 0x0, 0x5, 0xf8, 0x2f, 0xa2, 0x15, 0xdf,
    0x80, 0x4c, 0xff, 0xb3, 0xc8,

    /* U+0076 "v" */
    0xdb, 0x0, 0x0, 0xc, 0xc7, 0xf1, 0x0, 0x1,
    0xf7, 0x1f, 0x70, 0x0, 0x7f, 0x10, 0xbc, 0x0,
    0xc, 0xb0, 0x5, 0xf2, 0x2, 0xf5, 0x0, 0xf,
    0x70, 0x7f, 0x0, 0x0, 0xad, 0xd, 0x90, 0x0,
    0x4, 0xf5, 0xf3, 0x0, 0x0, 0xe, 0xdd, 0x0,
    0x0, 0x0, 0x8f, 0x80, 0x0,

    /* U+0077 "w" */
    0xad, 0x0, 0x0, 0xee, 0x0, 0x0, 0xe9, 0x6f,
    0x10, 0x3, 0xff, 0x30, 0x2, 0xf5, 0x1f, 0x50,
    0x8, 0xcc, 0x80, 0x6, 0xf1, 0xd, 0x90, 0xd,
    0x88, 0xd0, 0xa, 0xc0, 0x9, 0xd0, 0x2f, 0x33,
    0xf2, 0xe, 0x80, 0x5, 0xf1, 0x7e, 0x0, 0xe6,
    0x2f, 0x40, 0x1, 0xf5, 0xc9, 0x0, 0xab, 0x6f,
    0x0, 0x0, 0xc9, 0xf4, 0x0, 0x5f, 0xab, 0x0,
    0x0, 0x8f, 0xf0, 0x0, 0x1f, 0xf7, 0x0, 0x0,
    0x4f, 0xa0, 0x0, 0xc, 0xf3, 0x0,

    /* U+0078 "x" */
    0x2f, 0x80, 0x0, 0x2f, 0x80, 0x7, 0xf3, 0x0,
    0xbd, 0x0, 0x0, 0xcc, 0x6, 0xf3, 0x0, 0x0,
    0x2f, 0x9f, 0x80, 0x0, 0x0, 0x7, 0xfd, 0x0,
    0x0, 0x0, 0x9, 0xfe, 0x10, 0x0, 0x0, 0x4f,
    0x5d, 0xa0, 0x0, 0x1, 0xea, 0x3, 0xf5, 0x0,
    0xa, 0xe1, 0x0, 0x9f, 0x10, 0x5f, 0x50, 0x0,
    0xe, 0xb0,

    /* U+0079 "y" */
    0xcc, 0x0, 0x0, 0xb, 0xd0, 0x6f, 0x20, 0x0,
    0x1f, 0x70, 0xf, 0x80, 0x0, 0x7f, 0x10, 0x9,
    0xe0, 0x0, 0xdb, 0x0, 0x3, 0xf4, 0x2, 0xf5,
    0x0, 0x0, 0xca, 0x8, 0xe0, 0x0, 0x0, 0x6f,
    0x1d, 0x80, 0x0, 0x0, 0xf, 0x8f, 0x20, 0x0,
    0x0, 0x9, 0xfc, 0x0, 0x0, 0x0, 0x3, 0xf6,
    0x0, 0x0, 0x0, 0x7, 0xf1, 0x0, 0x0, 0x0,
    0xd, 0xa0, 0x0, 0x0, 0x34, 0xbf, 0x20, 0x0,
    0x0, 0xcf, 0xd4, 0x0, 0x0, 0x0,

    /* U+007A "z" */
    0xf, 0xff, 0xff, 0xf9, 0x2, 0x22, 0x26, 0xf5,
    0x0, 0x0, 0xd, 0xa0, 0x0, 0x0, 0x9e, 0x10,
    0x0, 0x4, 0xf5, 0x0, 0x0, 0xe, 0xa0, 0x0,
    0x0, 0x9e, 0x10, 0x0, 0x4, 0xf5, 0x0, 0x0,
    0x1e, 0xb2, 0x22, 0x21, 0x4f, 0xff, 0xff, 0xfb
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 182, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 78, .adv_w = 186, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 143, .adv_w = 181, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 208, .adv_w = 209, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 280, .adv_w = 160, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 332, .adv_w = 149, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 384, .adv_w = 209, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 456, .adv_w = 212, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 528, .adv_w = 80, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 548, .adv_w = 77, .box_w = 6, .box_h = 17, .ofs_x = -2, .ofs_y = -4},
    {.bitmap_index = 599, .adv_w = 176, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 671, .adv_w = 150, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 723, .adv_w = 259, .box_w = 14, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 814, .adv_w = 217, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 886, .adv_w = 224, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 964, .adv_w = 173, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1023, .adv_w = 224, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1119, .adv_w = 178, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1184, .adv_w = 158, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1249, .adv_w = 159, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1314, .adv_w = 210, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1386, .adv_w = 172, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1458, .adv_w = 266, .box_w = 17, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1569, .adv_w = 166, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1641, .adv_w = 161, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1713, .adv_w = 165, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1778, .adv_w = 160, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1823, .adv_w = 176, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1893, .adv_w = 138, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1933, .adv_w = 176, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1996, .adv_w = 162, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2041, .adv_w = 97, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2090, .adv_w = 156, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 2160, .adv_w = 177, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2223, .adv_w = 73, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2243, .adv_w = 73, .box_w = 5, .box_h = 17, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 2286, .adv_w = 151, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2349, .adv_w = 73, .box_w = 2, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2363, .adv_w = 267, .box_w = 15, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2438, .adv_w = 177, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2483, .adv_w = 173, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2528, .adv_w = 176, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 2598, .adv_w = 176, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 2661, .adv_w = 118, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2696, .adv_w = 137, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2736, .adv_w = 103, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2775, .adv_w = 177, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2820, .adv_w = 144, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2865, .adv_w = 223, .box_w = 14, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2935, .adv_w = 151, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2985, .adv_w = 144, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 3055, .adv_w = 135, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 65, .range_length = 26, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 97, .range_length = 26, .glyph_id_start = 27,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 2,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t open_sans_18 = {
#else
lv_font_t open_sans_18 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if OPEN_SANS_18*/

