/*******************************************************************************
 * Size: 18 px
 * Bpp: 1
 * Opts: --bpp 1 --size 18 --font C:/Users/user/Downloads/ATD3.5-S3-Lay/SquareLine Studio Project/assets/Kanit-Regular.ttf -o C:/Users/user/Downloads/ATD3.5-S3-Lay/SquareLine Studio Project/assets\ui_font_kanit18.c --format lvgl -r 0x20-0x7f -r 0x0E00-0x0E7F --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_KANIT18
#define UI_FONT_KANIT18 1
#endif

#if UI_FONT_KANIT18

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xc3,

    /* U+0022 "\"" */
    0xde, 0xf6,

    /* U+0023 "#" */
    0xc, 0x41, 0x18, 0x63, 0x3f, 0xf1, 0x18, 0x23,
    0xc, 0x41, 0x88, 0xff, 0xcc, 0x61, 0x88, 0x23,
    0x0,

    /* U+0024 "$" */
    0x18, 0x18, 0x7e, 0xd8, 0xd8, 0xd8, 0xf8, 0x7c,
    0x3e, 0x1f, 0x1b, 0x1b, 0x9b, 0xfc, 0x18,

    /* U+0025 "%" */
    0x70, 0x91, 0x32, 0x24, 0x45, 0x87, 0x20, 0xc,
    0x1, 0x0, 0x66, 0x9, 0x23, 0x24, 0xc4, 0x98,
    0x60,

    /* U+0026 "&" */
    0x3c, 0xc, 0xc1, 0x98, 0x33, 0x3, 0xc0, 0x30,
    0x1f, 0x7, 0x36, 0xc7, 0xd8, 0x73, 0x8f, 0x1f,
    0x20,

    /* U+0027 "'" */
    0xfc,

    /* U+0028 "(" */
    0x33, 0x19, 0x8c, 0x63, 0x18, 0xc6, 0x30, 0xc6,
    0x18,

    /* U+0029 ")" */
    0x61, 0x8c, 0x71, 0x8c, 0x63, 0x18, 0xce, 0x63,
    0x30,

    /* U+002A "*" */
    0x32, 0xdf, 0xdc, 0x79, 0x20,

    /* U+002B "+" */
    0x30, 0x60, 0xc7, 0xf3, 0x6, 0xc, 0x0,

    /* U+002C "," */
    0xf8,

    /* U+002D "-" */
    0xfe,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0xc, 0x71, 0x86, 0x18, 0xc3, 0xc, 0x61, 0x86,
    0x30, 0xc0,

    /* U+0030 "0" */
    0x3f, 0x18, 0x66, 0x1b, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xd8, 0x66, 0x18, 0xfc,

    /* U+0031 "1" */
    0xff, 0x33, 0x33, 0x33, 0x33, 0x33,

    /* U+0032 "2" */
    0xf9, 0x18, 0x18, 0x30, 0x61, 0xc7, 0x1c, 0x30,
    0xc3, 0x87, 0xf0,

    /* U+0033 "3" */
    0xfc, 0x7, 0x3, 0x3, 0x7, 0x3c, 0x6, 0x3,
    0x3, 0x3, 0x86, 0xfc,

    /* U+0034 "4" */
    0x3, 0x3, 0x83, 0xc3, 0x61, 0xb1, 0x99, 0x8d,
    0x86, 0xff, 0x81, 0x80, 0xc0, 0x60,

    /* U+0035 "5" */
    0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe, 0x7, 0x3,
    0x3, 0x3, 0x6, 0xfc,

    /* U+0036 "6" */
    0x1f, 0x30, 0x30, 0x18, 0xf, 0xe7, 0x1b, 0x7,
    0x83, 0xc1, 0xe0, 0xd8, 0xc7, 0xc0,

    /* U+0037 "7" */
    0xff, 0x3, 0x6, 0x6, 0xe, 0xc, 0xc, 0x18,
    0x18, 0x38, 0x30, 0x30,

    /* U+0038 "8" */
    0x3e, 0x31, 0xb0, 0x78, 0x3e, 0x3b, 0xf9, 0xfd,
    0x87, 0xc1, 0xe0, 0xf8, 0xe7, 0xc0,

    /* U+0039 "9" */
    0x3e, 0x31, 0xb0, 0x78, 0x3c, 0x1f, 0x1c, 0xfe,
    0x3, 0x1, 0x80, 0x90, 0xcf, 0xc0,

    /* U+003A ":" */
    0xc0, 0xc,

    /* U+003B ";" */
    0x60, 0x0, 0x1b, 0xc0,

    /* U+003C "<" */
    0x3, 0xf, 0x3c, 0xf0, 0xc0, 0xf0, 0x1c, 0x7,
    0x1,

    /* U+003D "=" */
    0xfe, 0x0, 0x7, 0xf0,

    /* U+003E ">" */
    0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xf, 0x38, 0xe0,
    0x80,

    /* U+003F "?" */
    0xf9, 0x18, 0x18, 0x30, 0x61, 0x86, 0x1c, 0x30,
    0x0, 0x1, 0x80,

    /* U+0040 "@" */
    0x1f, 0x83, 0xe, 0x60, 0x6c, 0xfb, 0xc0, 0xfc,
    0xff, 0xd8, 0xfd, 0x8f, 0xd8, 0xe6, 0xf0, 0x30,
    0x0, 0xfc,

    /* U+0041 "A" */
    0xe, 0x1, 0xc0, 0x78, 0xd, 0x81, 0x30, 0x66,
    0xc, 0x63, 0xc, 0x7f, 0xcc, 0x1b, 0x3, 0x60,
    0x30,

    /* U+0042 "B" */
    0xff, 0x60, 0xf0, 0x78, 0x3c, 0x1f, 0xf3, 0xf,
    0x83, 0xc1, 0xe0, 0xf0, 0xff, 0xe0,

    /* U+0043 "C" */
    0x1f, 0x98, 0x58, 0x18, 0xc, 0x6, 0x3, 0x1,
    0x80, 0xc0, 0x30, 0x1c, 0x3, 0xf0,

    /* U+0044 "D" */
    0xfe, 0x30, 0x6c, 0x1b, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xf0, 0x6c, 0x1b, 0xfc,

    /* U+0045 "E" */
    0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xff, 0xc0,
    0xc0, 0xc0, 0xc0, 0xff,

    /* U+0046 "F" */
    0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe, 0xc0,
    0xc0, 0xc0, 0xc0, 0xc0,

    /* U+0047 "G" */
    0x1f, 0x8c, 0x6, 0x3, 0x0, 0xc0, 0x31, 0xfc,
    0xf, 0x3, 0xc0, 0xd8, 0x37, 0xc, 0x7f,

    /* U+0048 "H" */
    0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xf0, 0x3f,
    0xff, 0x3, 0xc0, 0xf0, 0x3c, 0xf, 0x3,

    /* U+0049 "I" */
    0xff, 0xff, 0xff,

    /* U+004A "J" */
    0x6, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x83, 0x6,
    0xc, 0x3f, 0xe0,

    /* U+004B "K" */
    0xc3, 0xe1, 0xb1, 0x99, 0x8d, 0x87, 0xc3, 0xb1,
    0x8c, 0xc6, 0x61, 0xb0, 0xd8, 0x30,

    /* U+004C "L" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,
    0xc0, 0xc0, 0xc0, 0xff,

    /* U+004D "M" */
    0xc0, 0x7c, 0x1f, 0x83, 0xf8, 0xfd, 0x17, 0xb2,
    0xf6, 0xde, 0x53, 0xce, 0x78, 0x8f, 0x1, 0xe0,
    0x30,

    /* U+004E "N" */
    0xc0, 0xf8, 0x3f, 0xf, 0xc3, 0xd8, 0xf3, 0x3c,
    0xcf, 0x1b, 0xc3, 0xf0, 0xfc, 0x1f, 0x3,

    /* U+004F "O" */
    0x1f, 0xe, 0x39, 0x83, 0x60, 0x3c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x6c, 0x19, 0xc7, 0xf,
    0x80,

    /* U+0050 "P" */
    0xfe, 0x61, 0xb0, 0x78, 0x3c, 0x1e, 0xf, 0xd,
    0xfc, 0xc0, 0x60, 0x30, 0x18, 0x0,

    /* U+0051 "Q" */
    0x1f, 0xe, 0x39, 0x83, 0x60, 0x3c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x7c, 0x1d, 0x83, 0x3f,
    0xe3, 0xf0, 0x18, 0x3, 0x0, 0x3c,

    /* U+0052 "R" */
    0xff, 0x61, 0xf0, 0x78, 0x3c, 0x1e, 0x1b, 0xf9,
    0x8c, 0xc3, 0x61, 0xb0, 0xd8, 0x30,

    /* U+0053 "S" */
    0x3e, 0x40, 0xc0, 0xc0, 0xf0, 0x7c, 0x3e, 0x7,
    0x3, 0x3, 0x82, 0xfc,

    /* U+0054 "T" */
    0xff, 0x86, 0x3, 0x1, 0x80, 0xc0, 0x60, 0x30,
    0x18, 0xc, 0x6, 0x3, 0x1, 0x80,

    /* U+0055 "U" */
    0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xf0, 0x36, 0x18, 0xfc,

    /* U+0056 "V" */
    0xc0, 0x78, 0x19, 0x83, 0x30, 0x66, 0x18, 0x63,
    0xc, 0xc0, 0x98, 0x1b, 0x3, 0xc0, 0x38, 0x7,
    0x0,

    /* U+0057 "W" */
    0xc3, 0xf, 0xc, 0x3c, 0x31, 0x99, 0xe6, 0x67,
    0x99, 0x9a, 0x66, 0x49, 0x8b, 0x3c, 0x3c, 0xf0,
    0xe1, 0xc3, 0x87, 0xe, 0x18,

    /* U+0058 "X" */
    0xc0, 0xd8, 0x63, 0x38, 0xcc, 0x1e, 0x3, 0x80,
    0xe0, 0x78, 0x33, 0x1c, 0xe6, 0x1b, 0x3,

    /* U+0059 "Y" */
    0xc0, 0xd8, 0x66, 0x18, 0xcc, 0x33, 0x7, 0x81,
    0xe0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30,

    /* U+005A "Z" */
    0x7f, 0x81, 0xc0, 0xc0, 0xc0, 0xe0, 0x60, 0x70,
    0x70, 0x38, 0x38, 0x18, 0x1f, 0xf0,

    /* U+005B "[" */
    0xfe, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x31, 0x8c,
    0x63, 0xe0,

    /* U+005C "\\" */
    0xc3, 0x6, 0x18, 0x60, 0xc3, 0xc, 0x18, 0x61,
    0x83, 0xc, 0x30,

    /* U+005D "]" */
    0xf8, 0xc6, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x31,
    0x8f, 0xe0,

    /* U+005E "^" */
    0x10, 0x71, 0xa2, 0x6c, 0x40,

    /* U+005F "_" */
    0xff,

    /* U+0060 "`" */
    0xc9, 0x80,

    /* U+0061 "a" */
    0x7e, 0x7, 0x3, 0x3, 0x7f, 0xc3, 0xc3, 0xc7,
    0x7f,

    /* U+0062 "b" */
    0xc0, 0x60, 0x30, 0x18, 0xf, 0xe6, 0x1b, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0x7c, 0x6f, 0xe0,

    /* U+0063 "c" */
    0x3f, 0x61, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x61,
    0x3f,

    /* U+0064 "d" */
    0x1, 0x80, 0xc0, 0x60, 0x33, 0xfb, 0x1f, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0x6c, 0x73, 0xf8,

    /* U+0065 "e" */
    0x3c, 0x66, 0xc3, 0xc3, 0xff, 0xc0, 0xc0, 0x60,
    0x3e,

    /* U+0066 "f" */
    0x3d, 0x86, 0x18, 0xf9, 0x86, 0x18, 0x61, 0x86,
    0x18, 0x60,

    /* U+0067 "g" */
    0x3f, 0xf3, 0xb0, 0xd8, 0x6c, 0x37, 0x31, 0xf9,
    0x80, 0xfe, 0x1, 0x80, 0xd0, 0x6f, 0xe0,

    /* U+0068 "h" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xfe, 0xe3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3,

    /* U+0069 "i" */
    0x60, 0xe, 0xdb, 0x6d, 0xb6,

    /* U+006A "j" */
    0x18, 0x0, 0x3, 0x8c, 0x63, 0x18, 0xc6, 0x31,
    0x8c, 0x7e,

    /* U+006B "k" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xc6, 0xcc, 0xd8, 0xf0,
    0xf8, 0xcc, 0xcc, 0xc6, 0xc3,

    /* U+006C "l" */
    0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x70,

    /* U+006D "m" */
    0xfe, 0xfb, 0x8c, 0x3c, 0x30, 0xf0, 0xc3, 0xc3,
    0xf, 0xc, 0x3c, 0x30, 0xf0, 0xc3, 0xc3, 0xc,

    /* U+006E "n" */
    0xfe, 0xe3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3,

    /* U+006F "o" */
    0x3e, 0x31, 0xb0, 0x78, 0x3c, 0x1e, 0xf, 0x6,
    0xc6, 0x3e, 0x0,

    /* U+0070 "p" */
    0xfe, 0x71, 0xb0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0xc6, 0xfe, 0x60, 0x30, 0x18, 0xc, 0x0,

    /* U+0071 "q" */
    0x3f, 0x98, 0xec, 0x1b, 0x6, 0xc1, 0xb0, 0x6c,
    0x19, 0x8e, 0x3f, 0x80, 0x60, 0x18, 0x6, 0x1,
    0xc0,

    /* U+0072 "r" */
    0xdf, 0xf1, 0x8c, 0x63, 0x18, 0xc0,

    /* U+0073 "s" */
    0x7d, 0x83, 0x7, 0xc7, 0xc3, 0xc1, 0x83, 0xfc,

    /* U+0074 "t" */
    0x0, 0x60, 0xc7, 0xe3, 0x6, 0xc, 0x18, 0x30,
    0x60, 0xc0, 0xf0,

    /* U+0075 "u" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc7,
    0x7f,

    /* U+0076 "v" */
    0xc3, 0x61, 0x98, 0xcc, 0xc6, 0x61, 0xb0, 0xf0,
    0x38, 0x18, 0x0,

    /* U+0077 "w" */
    0xc6, 0x3c, 0x66, 0x46, 0x66, 0xe6, 0x6b, 0x66,
    0x94, 0x39, 0xc3, 0x1c, 0x30, 0xc0,

    /* U+0078 "x" */
    0xc3, 0x66, 0x7c, 0x3c, 0x18, 0x3c, 0x6c, 0x66,
    0xc3,

    /* U+0079 "y" */
    0x60, 0xd8, 0x66, 0x18, 0xc6, 0x33, 0xc, 0xc1,
    0xe0, 0x78, 0xe, 0x3, 0x0, 0xc0, 0x60, 0x70,
    0x0,

    /* U+007A "z" */
    0xfe, 0x1c, 0x30, 0xc3, 0x86, 0x18, 0x30, 0xfe,

    /* U+007B "{" */
    0x7b, 0x18, 0xc6, 0x33, 0x9c, 0x63, 0x18, 0xc6,
    0x3c,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff,

    /* U+007D "}" */
    0xf1, 0x8c, 0x63, 0x18, 0xe7, 0x31, 0x8c, 0x63,
    0x78,

    /* U+007E "~" */
    0xf8, 0x47, 0xc1, 0xc0,

    /* U+0E01 "ก" */
    0x3f, 0x38, 0x6e, 0xd, 0xc3, 0x70, 0xd8, 0x36,
    0xd, 0x83, 0x60, 0xd8, 0x30,

    /* U+0E02 "ข" */
    0xf3, 0x33, 0x73, 0x63, 0xc3, 0xc3, 0xc3, 0xc3,
    0x66, 0x3c,

    /* U+0E03 "ฃ" */
    0xf3, 0x33, 0x73, 0x63, 0xe3, 0xc3, 0xc3, 0xc3,
    0x66, 0x3c,

    /* U+0E04 "ค" */
    0x3e, 0x31, 0xb0, 0x78, 0x3c, 0x1f, 0xcf, 0x7,
    0x83, 0xc1, 0xe0, 0xc0,

    /* U+0E05 "ฅ" */
    0x77, 0x64, 0xf0, 0x78, 0x3c, 0x1f, 0xcf, 0x7,
    0x83, 0xc1, 0xe0, 0xc0,

    /* U+0E06 "ฆ" */
    0xf1, 0x98, 0xdc, 0x6c, 0x3e, 0x1e, 0xf, 0x7,
    0x83, 0xe3, 0xef, 0x0,

    /* U+0E07 "ง" */
    0xe, 0x1, 0x80, 0x78, 0x34, 0x1b, 0xd, 0x86,
    0x66, 0x33, 0xf, 0x0,

    /* U+0E08 "จ" */
    0xfe, 0x41, 0x80, 0x60, 0x30, 0x1f, 0xc, 0x86,
    0x62, 0x33, 0xf, 0x0,

    /* U+0E09 "ฉ" */
    0xfc, 0x6, 0x3, 0x3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc7, 0x7f,

    /* U+0E0A "ช" */
    0xf3, 0x33, 0x76, 0x63, 0xc3, 0xc3, 0xc3, 0xc3,
    0x66, 0x3c,

    /* U+0E0B "ซ" */
    0xf3, 0x33, 0x37, 0x63, 0xe3, 0xc3, 0xc3, 0xc3,
    0x66, 0x3c,

    /* U+0E0C "ฌ" */
    0x3e, 0x3, 0xe3, 0x3, 0xc1, 0x83, 0x71, 0x83,
    0x31, 0x83, 0x61, 0x83, 0x61, 0x83, 0x61, 0x83,
    0x61, 0xc7, 0x79, 0xfe,

    /* U+0E0D "ญ" */
    0x3e, 0x3, 0xe3, 0x3, 0xc1, 0x83, 0x71, 0x83,
    0x31, 0x83, 0x61, 0x83, 0x60, 0xc7, 0x60, 0x7f,
    0x60, 0x3, 0x78, 0x83, 0x0, 0xfe,

    /* U+0E0E "ฎ" */
    0x1f, 0x1c, 0x66, 0xd, 0xe3, 0x18, 0xcc, 0x33,
    0xc, 0xc3, 0x30, 0xf8, 0x30, 0xc, 0x3, 0x1f,
    0xc0, 0x30,

    /* U+0E0F "ฏ" */
    0x1f, 0x1c, 0x66, 0xd, 0xe3, 0x18, 0xcc, 0x33,
    0xc, 0xc3, 0x30, 0xf8, 0x30, 0xc, 0x13, 0x3f,
    0xcc, 0x40,

    /* U+0E10 "ฐ" */
    0xff, 0x81, 0x80, 0x60, 0x30, 0x1e, 0xd, 0x86,
    0x46, 0x23, 0x1e, 0x0, 0x2, 0x6f, 0xf6, 0x20,

    /* U+0E11 "ฑ" */
    0xff, 0x18, 0xcc, 0x6c, 0x36, 0x1b, 0xd, 0x86,
    0xc3, 0x61, 0xb0, 0xc0,

    /* U+0E12 "ฒ" */
    0x7f, 0x3, 0x69, 0x83, 0xc1, 0x83, 0xc1, 0x83,
    0xc1, 0x83, 0xc1, 0x83, 0xc1, 0x83, 0xc1, 0x83,
    0x61, 0xc7, 0x39, 0xbe,

    /* U+0E13 "ณ" */
    0x3e, 0x3, 0xe3, 0x3, 0xc1, 0x83, 0x71, 0x83,
    0x31, 0x83, 0x61, 0x83, 0x61, 0x83, 0x61, 0x83,
    0x61, 0xc7, 0x78, 0xff,

    /* U+0E14 "ด" */
    0x1f, 0x18, 0x6e, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0x60, 0xcf, 0x30,

    /* U+0E15 "ต" */
    0x3b, 0x99, 0x3c, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0x60, 0xcf, 0x30,

    /* U+0E16 "ถ" */
    0x3f, 0x38, 0x6c, 0xd, 0xc3, 0x30, 0xd8, 0x36,
    0xd, 0x83, 0x60, 0xde, 0x30,

    /* U+0E17 "ท" */
    0xff, 0x71, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xc0,

    /* U+0E18 "ธ" */
    0x7e, 0xc0, 0xc0, 0xf8, 0x7e, 0xf, 0xc3, 0xc3,
    0xc3, 0xfc,

    /* U+0E19 "น" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xe3, 0xbe, 0xc0,

    /* U+0E1A "บ" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0x63, 0x1f, 0x0,

    /* U+0E1B "ป" */
    0x1, 0x80, 0xc0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0x6c, 0x63, 0xe0,

    /* U+0E1C "ผ" */
    0xf1, 0xe0, 0xf0, 0x79, 0x3d, 0xde, 0xaf, 0xdf,
    0xc7, 0xe3, 0xe0, 0xc0,

    /* U+0E1D "ฝ" */
    0x1, 0x80, 0xc0, 0x7e, 0x3c, 0x1e, 0xf, 0x27,
    0xbb, 0xd5, 0xfb, 0xf8, 0xfc, 0x7c, 0x18,

    /* U+0E1E "พ" */
    0xc6, 0x3c, 0x66, 0xc6, 0x66, 0xe6, 0x6f, 0x66,
    0xb4, 0x79, 0xc3, 0x9c, 0x31, 0xc3, 0x1c,

    /* U+0E1F "ฟ" */
    0x0, 0x30, 0x3, 0x0, 0x3c, 0x62, 0xc6, 0x6c,
    0x66, 0x6e, 0x66, 0xf6, 0x6b, 0x47, 0x9c, 0x39,
    0xc3, 0x1c, 0x31, 0xc0,

    /* U+0E20 "ภ" */
    0x1f, 0x1c, 0x66, 0xd, 0xe3, 0x18, 0xcc, 0x33,
    0xc, 0xc3, 0x30, 0xf8, 0x30,

    /* U+0E21 "ม" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xe3, 0xef, 0x0,

    /* U+0E22 "ย" */
    0x79, 0xe0, 0xf0, 0x78, 0x37, 0x9e, 0xf, 0x7,
    0x83, 0xe3, 0x1f, 0x0,

    /* U+0E23 "ร" */
    0x7d, 0x83, 0x7, 0xf, 0xc7, 0xc3, 0x83, 0x7,
    0xf8,

    /* U+0E24 "ฤ" */
    0x3f, 0x38, 0x6c, 0xd, 0xc3, 0x30, 0xd8, 0x36,
    0xd, 0x83, 0x60, 0xde, 0x30, 0xc, 0x3, 0x0,
    0xc0,

    /* U+0E25 "ล" */
    0x7e, 0x1, 0x80, 0x60, 0x37, 0xff, 0xf, 0x7,
    0x83, 0xc1, 0xbc, 0xc0,

    /* U+0E26 "ฦ" */
    0x1f, 0x1c, 0x66, 0xd, 0xe3, 0x18, 0xcc, 0x33,
    0xc, 0xc3, 0x30, 0xf8, 0x30, 0xc, 0x3, 0x0,
    0xc0,

    /* U+0E27 "ว" */
    0xfc, 0x86, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3,
    0x86, 0xfc,

    /* U+0E28 "ศ" */
    0x3f, 0xd8, 0xec, 0x1b, 0x6, 0xc1, 0xbe, 0x6c,
    0x1b, 0x6, 0xc1, 0xb0, 0x60,

    /* U+0E29 "ษ" */
    0xc1, 0xb0, 0x6c, 0x1b, 0x6, 0xc7, 0xf0, 0x6c,
    0x1b, 0x6, 0x63, 0xf, 0x80,

    /* U+0E2A "ส" */
    0x7f, 0x81, 0xc0, 0x60, 0x37, 0xff, 0xf, 0x7,
    0x83, 0xc1, 0xbc, 0xc0,

    /* U+0E2B "ห" */
    0xc1, 0xe0, 0xf0, 0x78, 0x7f, 0xf6, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xc0,

    /* U+0E2C "ฬ" */
    0x0, 0x30, 0x3, 0x0, 0xec, 0x46, 0xc6, 0x6c,
    0x66, 0x6e, 0x66, 0xf6, 0x6b, 0x47, 0x9c, 0x39,
    0xc3, 0x1c, 0x31, 0xc0,

    /* U+0E2D "อ" */
    0xfe, 0x1, 0x80, 0x60, 0x3f, 0x1e, 0xf, 0x7,
    0x83, 0xc3, 0x7f, 0x0,

    /* U+0E2E "ฮ" */
    0xff, 0x81, 0x80, 0x60, 0x3f, 0x1e, 0xf, 0x7,
    0x82, 0xc3, 0x7f, 0x0,

    /* U+0E2F "ฯ" */
    0xc3, 0xc3, 0xc3, 0xc3, 0x7f, 0x3, 0x3, 0x3,
    0x3, 0x3,

    /* U+0E30 "ะ" */
    0xcf, 0x0, 0xc, 0xf0,

    /* U+0E31 "ั" */
    0xc1, 0x83, 0xf8,

    /* U+0E32 "า" */
    0xfd, 0x1c, 0x18, 0x30, 0x60, 0xc1, 0x83, 0x6,
    0xc,

    /* U+0E33 "ำ" */
    0x60, 0x12, 0x3, 0xc0, 0x0, 0x0, 0xfc, 0x1,
    0xc0, 0x18, 0x3, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xc0,

    /* U+0E34 "ิ" */
    0xfe,

    /* U+0E35 "ี" */
    0x3, 0x3, 0xff,

    /* U+0E36 "ึ" */
    0x7, 0x5, 0x7f,

    /* U+0E37 "ื" */
    0xf, 0xf, 0xff,

    /* U+0E38 "ุ" */
    0xed, 0x80,

    /* U+0E39 "ู" */
    0xed, 0xb6, 0xce,

    /* U+0E3A "ฺ" */
    0xc0,

    /* U+0E3F "฿" */
    0x18, 0xc, 0x3f, 0xdb, 0x3d, 0x9e, 0xcf, 0x67,
    0xfc, 0xd9, 0xec, 0xf6, 0x7b, 0x3f, 0xf0, 0xc0,
    0x60,

    /* U+0E40 "เ" */
    0xcc, 0xcc, 0xcc, 0xcc, 0xcf,

    /* U+0E41 "แ" */
    0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc,
    0xcc, 0xe7,

    /* U+0E42 "โ" */
    0xfd, 0x83, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3,
    0xc, 0x30, 0x70,

    /* U+0E43 "ใ" */
    0xf0, 0xc6, 0x77, 0x31, 0x8c, 0x63, 0x18, 0xc6,
    0x38,

    /* U+0E44 "ไ" */
    0xf8, 0xcc, 0x63, 0x18, 0xc6, 0x31, 0x8c, 0x63,
    0x1c,

    /* U+0E45 "ๅ" */
    0xfd, 0x1c, 0x18, 0x30, 0x60, 0xc1, 0x83, 0x6,
    0xc, 0x18, 0x30, 0x60,

    /* U+0E46 "ๆ" */
    0x7f, 0x64, 0xf0, 0x78, 0x3c, 0x1b, 0xcc, 0x6,
    0x3, 0x1, 0x80, 0xc0,

    /* U+0E47 "็" */
    0x7f, 0x83, 0x23, 0xf0,

    /* U+0E48 "่" */
    0xfc,

    /* U+0E49 "้" */
    0xe0, 0x40, 0xf8,

    /* U+0E4A "๊" */
    0x7f, 0x6e, 0x1b, 0x30,

    /* U+0E4B "๋" */
    0x6f, 0x60,

    /* U+0E4C "์" */
    0xff, 0xc, 0x0,

    /* U+0E4D "ํ" */
    0x69, 0x96,

    /* U+0E4E "๎" */
    0x39, 0x1d, 0x8f, 0x0,

    /* U+0E4F "๏" */
    0x1e, 0x18, 0x6f, 0xdb, 0x8b, 0xe2, 0xf8, 0xbf,
    0xd9, 0x86, 0x1e, 0x0,

    /* U+0E50 "๐" */
    0x3e, 0x31, 0xb0, 0x78, 0x3c, 0x1e, 0xf, 0x6,
    0xc6, 0x3e, 0x0,

    /* U+0E51 "๑" */
    0x3f, 0x18, 0x6c, 0xf, 0x3, 0xc0, 0xf0, 0x36,
    0xc, 0xf6, 0x3, 0x81, 0xc0, 0x40,

    /* U+0E52 "๒" */
    0xc0, 0x37, 0xef, 0x6f, 0xc3, 0xf0, 0xfc, 0x3d,
    0xcf, 0x3, 0x61, 0x8f, 0xc0,

    /* U+0E53 "๓" */
    0x7f, 0x93, 0x3c, 0xcf, 0x33, 0xc0, 0xf0, 0x3c,
    0xd, 0x83, 0x3c, 0xc0,

    /* U+0E54 "๔" */
    0x0, 0x47, 0xf7, 0x3, 0x80, 0xc0, 0x30, 0xfc,
    0x63, 0x18, 0x66, 0xf, 0xf0,

    /* U+0E55 "๕" */
    0x20, 0x47, 0xf7, 0x1, 0x80, 0xc0, 0x30, 0xfc,
    0x63, 0x18, 0x66, 0xf, 0xf0,

    /* U+0E56 "๖" */
    0xc0, 0xd, 0xf1, 0xe3, 0x38, 0x33, 0x6, 0x0,
    0xc0, 0x18, 0x3, 0x20, 0xc3, 0xf0,

    /* U+0E57 "๗" */
    0x0, 0xd, 0xfe, 0x34, 0xcc, 0xf3, 0x33, 0xcc,
    0xcf, 0x3, 0x3c, 0xc, 0xf0, 0x33, 0x60, 0xc8,
    0xf3, 0xc0,

    /* U+0E58 "๘" */
    0x0, 0x47, 0xf6, 0x3, 0x0, 0xc0, 0x30, 0x7c,
    0xcf, 0x33, 0x4c, 0xdf, 0xf0,

    /* U+0E59 "๙" */
    0x0, 0x37, 0xf3, 0x4d, 0xbc, 0xce, 0xc4, 0xc,
    0x40, 0xc6, 0xc, 0x60, 0x62, 0x3, 0xa0,

    /* U+0E5A "๚" */
    0xc3, 0xf, 0xc, 0x3c, 0x30, 0xf0, 0xc3, 0x7f,
    0xfc, 0xc, 0x30, 0x30, 0xc0, 0xc3, 0x3, 0xc,
    0xc, 0x30,

    /* U+0E5B "๛" */
    0x3c, 0x0, 0x6, 0x66, 0x0, 0xc3, 0x6c, 0xc,
    0x36, 0xdc, 0xc3, 0x7d, 0xec, 0x77, 0xbc, 0xc6,
    0x7a, 0x46, 0xc, 0x0, 0x61, 0x80, 0x1, 0xf0,
    0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 66, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 58, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 98, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 6, .adv_w = 202, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 23, .adv_w = 160, .box_w = 8, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 38, .adv_w = 209, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 55, .adv_w = 192, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 52, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 73, .adv_w = 94, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 82, .adv_w = 94, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 91, .adv_w = 124, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 96, .adv_w = 136, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 103, .adv_w = 61, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 104, .adv_w = 135, .box_w = 7, .box_h = 1, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 105, .adv_w = 52, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 124, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 116, .adv_w = 187, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 92, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 147, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 148, .adv_w = 149, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 160, .adv_w = 156, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 174, .adv_w = 148, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 165, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 200, .adv_w = 143, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 170, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 165, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 240, .adv_w = 52, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 242, .adv_w = 61, .box_w = 3, .box_h = 9, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 246, .adv_w = 157, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 255, .adv_w = 136, .box_w = 7, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 259, .adv_w = 157, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 268, .adv_w = 143, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 279, .adv_w = 220, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 297, .adv_w = 202, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 314, .adv_w = 182, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 328, .adv_w = 172, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 187, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 357, .adv_w = 158, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 369, .adv_w = 151, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 381, .adv_w = 185, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 396, .adv_w = 188, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 411, .adv_w = 68, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 124, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 425, .adv_w = 180, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 439, .adv_w = 151, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 451, .adv_w = 218, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 468, .adv_w = 192, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 483, .adv_w = 200, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 500, .adv_w = 170, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 514, .adv_w = 201, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 536, .adv_w = 176, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 550, .adv_w = 160, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 562, .adv_w = 164, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 576, .adv_w = 194, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 591, .adv_w = 202, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 608, .adv_w = 250, .box_w = 14, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 629, .adv_w = 195, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 644, .adv_w = 189, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 659, .adv_w = 166, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 673, .adv_w = 101, .box_w = 5, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 683, .adv_w = 130, .box_w = 6, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 694, .adv_w = 101, .box_w = 5, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 704, .adv_w = 137, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 709, .adv_w = 156, .box_w = 8, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 710, .adv_w = 75, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 712, .adv_w = 158, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 721, .adv_w = 168, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 736, .adv_w = 137, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 745, .adv_w = 168, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 760, .adv_w = 155, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 769, .adv_w = 104, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 779, .adv_w = 160, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 794, .adv_w = 166, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 807, .adv_w = 82, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 812, .adv_w = 89, .box_w = 5, .box_h = 16, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 822, .adv_w = 155, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 835, .adv_w = 81, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 842, .adv_w = 247, .box_w = 14, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 858, .adv_w = 166, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 867, .adv_w = 167, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 878, .adv_w = 168, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 893, .adv_w = 168, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 910, .adv_w = 103, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 916, .adv_w = 134, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 924, .adv_w = 103, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 935, .adv_w = 166, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 944, .adv_w = 166, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 955, .adv_w = 215, .box_w = 12, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 969, .adv_w = 156, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 978, .adv_w = 172, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 995, .adv_w = 140, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1003, .adv_w = 88, .box_w = 5, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1012, .adv_w = 56, .box_w = 2, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1016, .adv_w = 88, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1025, .adv_w = 162, .box_w = 9, .box_h = 3, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 1029, .adv_w = 177, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1042, .adv_w = 167, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1052, .adv_w = 166, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1062, .adv_w = 177, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1074, .adv_w = 177, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1086, .adv_w = 173, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1098, .adv_w = 162, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1110, .adv_w = 164, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1122, .adv_w = 168, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1132, .adv_w = 168, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1142, .adv_w = 168, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1152, .adv_w = 276, .box_w = 16, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1172, .adv_w = 279, .box_w = 16, .box_h = 11, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1194, .adv_w = 186, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1212, .adv_w = 186, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1230, .adv_w = 174, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1246, .adv_w = 173, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1258, .adv_w = 285, .box_w = 16, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1278, .adv_w = 276, .box_w = 16, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1298, .adv_w = 185, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1311, .adv_w = 186, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1324, .adv_w = 177, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1337, .adv_w = 174, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1349, .adv_w = 151, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1359, .adv_w = 174, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1371, .adv_w = 179, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1383, .adv_w = 179, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1398, .adv_w = 185, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1410, .adv_w = 185, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1425, .adv_w = 209, .box_w = 12, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1440, .adv_w = 209, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1460, .adv_w = 186, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1473, .adv_w = 174, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1485, .adv_w = 172, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1497, .adv_w = 145, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1506, .adv_w = 177, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1523, .adv_w = 171, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1535, .adv_w = 186, .box_w = 10, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1552, .adv_w = 143, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1562, .adv_w = 183, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1575, .adv_w = 183, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1588, .adv_w = 175, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1600, .adv_w = 174, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1612, .adv_w = 209, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1632, .adv_w = 166, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1644, .adv_w = 174, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1656, .adv_w = 160, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1666, .adv_w = 93, .box_w = 4, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1670, .adv_w = 0, .box_w = 7, .box_h = 3, .ofs_x = -5, .ofs_y = 11},
    {.bitmap_index = 1673, .adv_w = 127, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1682, .adv_w = 127, .box_w = 11, .box_h = 14, .ofs_x = -4, .ofs_y = 0},
    {.bitmap_index = 1702, .adv_w = 0, .box_w = 7, .box_h = 1, .ofs_x = -9, .ofs_y = 11},
    {.bitmap_index = 1703, .adv_w = 0, .box_w = 8, .box_h = 3, .ofs_x = -9, .ofs_y = 11},
    {.bitmap_index = 1706, .adv_w = 0, .box_w = 8, .box_h = 3, .ofs_x = -9, .ofs_y = 11},
    {.bitmap_index = 1709, .adv_w = 0, .box_w = 8, .box_h = 3, .ofs_x = -9, .ofs_y = 11},
    {.bitmap_index = 1712, .adv_w = 0, .box_w = 3, .box_h = 3, .ofs_x = -4, .ofs_y = -4},
    {.bitmap_index = 1714, .adv_w = 0, .box_w = 6, .box_h = 4, .ofs_x = -6, .ofs_y = -5},
    {.bitmap_index = 1717, .adv_w = 0, .box_w = 2, .box_h = 1, .ofs_x = -3, .ofs_y = -2},
    {.bitmap_index = 1718, .adv_w = 182, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1735, .adv_w = 88, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1740, .adv_w = 156, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1750, .adv_w = 91, .box_w = 6, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1761, .adv_w = 85, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1770, .adv_w = 87, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1779, .adv_w = 127, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1791, .adv_w = 171, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1803, .adv_w = 0, .box_w = 7, .box_h = 4, .ofs_x = -9, .ofs_y = 11},
    {.bitmap_index = 1807, .adv_w = 0, .box_w = 2, .box_h = 3, .ofs_x = -3, .ofs_y = 11},
    {.bitmap_index = 1808, .adv_w = 0, .box_w = 7, .box_h = 3, .ofs_x = -7, .ofs_y = 11},
    {.bitmap_index = 1811, .adv_w = 0, .box_w = 7, .box_h = 4, .ofs_x = -8, .ofs_y = 11},
    {.bitmap_index = 1815, .adv_w = 0, .box_w = 4, .box_h = 3, .ofs_x = -5, .ofs_y = 11},
    {.bitmap_index = 1817, .adv_w = 0, .box_w = 6, .box_h = 3, .ofs_x = -5, .ofs_y = 11},
    {.bitmap_index = 1820, .adv_w = 0, .box_w = 4, .box_h = 4, .ofs_x = -4, .ofs_y = 11},
    {.bitmap_index = 1822, .adv_w = 0, .box_w = 5, .box_h = 5, .ofs_x = -5, .ofs_y = 11},
    {.bitmap_index = 1826, .adv_w = 174, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1838, .adv_w = 176, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1849, .adv_w = 183, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1863, .adv_w = 202, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1876, .adv_w = 185, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1888, .adv_w = 181, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1901, .adv_w = 180, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1914, .adv_w = 186, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1928, .adv_w = 245, .box_w = 14, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1946, .adv_w = 181, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1959, .adv_w = 214, .box_w = 12, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1974, .adv_w = 253, .box_w = 14, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1992, .adv_w = 338, .box_w = 20, .box_h = 10, .ofs_x = 1, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 3585, .range_length = 58, .glyph_id_start = 96,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 3647, .range_length = 29, .glyph_id_start = 154,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 2, 0, 0,
    0, 3, 0, 0, 0, 4, 5, 0,
    6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 7, 8, 9, 10, 11, 12,
    13, 14, 14, 15, 16, 17, 14, 14,
    10, 18, 10, 19, 20, 21, 22, 23,
    24, 25, 26, 27, 0, 0, 0, 0,
    0, 0, 28, 29, 30, 31, 29, 32,
    33, 34, 35, 36, 37, 38, 34, 34,
    29, 29, 39, 40, 41, 42, 43, 44,
    45, 46, 47, 48, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 2, 0, 3,
    0, 4, 5, 0, 0, 6, 0, 0,
    0, 4, 4, 0, 0, 0, 0, 0,
    0, 0, 7, 8, 9, 8, 8, 8,
    9, 8, 8, 10, 8, 8, 8, 8,
    9, 8, 9, 8, 11, 12, 13, 14,
    15, 16, 17, 18, 0, 0, 0, 0,
    0, 0, 19, 20, 21, 21, 21, 22,
    23, 20, 24, 25, 20, 26, 27, 27,
    21, 27, 21, 27, 28, 29, 30, 31,
    32, 33, 34, 35, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, -7, 0, -19, -36, 0,
    -7, -24, 0, 0, 0, 0, 0, 0,
    0, 0, -13, 0, -10, -7, -10, -10,
    -7, 0, -13, -13, -10, -10, -10, -10,
    -10, -13, -13, 0, 0, 0, 0, -13,
    -1, 0, 0, 0, 0, 0, -16, 0,
    -24, 0, 0, -16, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -9,
    0, -19, -10, 0, -13, 0, 0, -19,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -27, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -24, -6, 0, 0, 0, 0,
    -10, 0, -16, 0, -16, -24, -13, -33,
    -27, -9, -42, -4, -10, 0, -13, -13,
    0, -19, -10, -15, 0, 0, -16, -10,
    -24, -22, -13, -24, -4, -4, -6, 1,
    0, 0, 0, -10, 0, 0, 0, -3,
    -7, 0, -19, -7, -16, -22, -6, 0,
    0, 0, 0, 0, -4, -4, 0, 0,
    0, 0, 0, -10, -7, -10, -10, -4,
    0, 0, 0, 0, 0, 0, -12, 0,
    -6, 0, -6, 0, 0, -9, 0, -4,
    -7, 0, 0, 0, -1, 0, 0, 0,
    -4, 0, 0, 4, 0, 0, -4, -4,
    -10, -4, 0, -4, -22, 0, 0, 0,
    0, -16, 0, 0, -9, -6, -3, 0,
    -12, -12, -19, -24, 0, -4, 0, 0,
    0, 0, -7, -10, 0, 0, -1, 0,
    0, -3, 0, -13, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    -6, 0, 0, -4, 0, -7, 0, 0,
    -6, 0, -6, 0, 0, -4, -7, 0,
    0, 0, 1, 0, -14, -10, -7, -7,
    0, 0, -36, 0, 0, 0, 0, -23,
    0, 0, -9, -9, 0, 0, 0, -1,
    -7, -7, -4, -16, 0, -12, -6, -10,
    -4, -4, 0, -10, -10, -7, -10, -19,
    -13, -22, -16, -12, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -10, 0, 0, -13, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, 0, -10, 0, 0, -10, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 0, -6, -6,
    0, 0, 0, 0, 0, 0, -7, 0,
    0, 0, 0, 0, 0, -4, -7, -7,
    -10, 0, 0, -13, 0, 0, 0, 0,
    -10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, -4, -4, 0,
    0, 0, 0, -13, 0, -19, 0, -10,
    -10, -14, -10, -9, -10, -10, -1, -10,
    -3, -19, -13, -4, -13, -16, -7, -7,
    -7, -19, -16, -24, -24, -19, -24, -7,
    -13, 0, 0, 0, 0, 0, 0, 0,
    -9, 0, 0, -37, 0, -45, -17, -7,
    -48, 0, 0, 0, -7, -7, 0, -10,
    0, 0, 0, 0, -7, 0, -24, -16,
    0, -24, 0, 0, -30, -14, 0, 0,
    0, -23, 0, 0, -20, 0, 0, 0,
    -13, -10, -16, -13, 0, -6, 0, 0,
    0, 0, 1, -4, 0, 0, 0, 0,
    0, -4, -13, -4, 0, 0, 0, -10,
    0, 0, 0, 0, -13, 0, -4, -6,
    0, 0, 0, -19, -9, -7, -19, 0,
    -13, 0, -4, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, -4, -9, -7,
    0, -4, 0, 0, 0, 0, 0, -16,
    0, 0, -9, -9, -12, 0, -19, -9,
    -16, -22, -9, -4, 0, 0, -1, 0,
    -7, 0, 0, 0, -4, -4, -1, -13,
    -7, -13, -13, 0, 0, -27, 0, 0,
    0, 0, -24, 0, -3, -17, -9, 0,
    0, 0, -4, -7, -3, -4, -27, 0,
    -27, -10, -22, -14, -13, -4, -24, -27,
    -13, -19, -30, -33, -33, -36, -33, 0,
    0, 0, 0, 0, 0, -13, 0, 0,
    0, 0, 0, 0, 0, 0, -10, -10,
    -7, -1, 0, 0, 0, 0, -4, -4,
    0, 0, -1, 0, -4, -7, -7, -13,
    -7, -4, -4, -36, 0, 0, 0, 0,
    -39, -4, -12, -29, -13, 0, -6, 0,
    -10, -7, -10, -7, -27, -4, -26, -13,
    -23, -13, -19, -4, -17, -22, -16, -13,
    -27, -27, -30, -24, -19, 0, -27, 0,
    0, 0, 0, -27, 0, -12, -17, -9,
    -4, 0, -10, -4, -10, -10, -7, -22,
    -10, -22, -13, -16, -13, -19, 0, -10,
    -19, -7, -16, -19, -19, -19, -19, -19,
    0, -13, 0, 0, 0, 0, -9, -6,
    -19, -16, -13, 0, -7, -7, -10, 0,
    -10, -10, -13, 0, -19, -13, -9, -24,
    0, -7, -7, -7, -19, -13, -24, -24,
    -13, -24, -13, -6, -39, 0, 0, 0,
    0, -42, -6, -24, -35, -19, -7, 0,
    -10, -10, -10, -10, -10, -39, -7, -27,
    -16, -27, -19, -22, -6, -23, -27, -19,
    -27, -30, -30, -30, -30, -30, 0, 0,
    0, 0, 0, 0, -7, 0, 0, 0,
    -3, 0, 0, -7, -10, -10, -7, -4,
    0, 0, 0, -1, 0, -6, -9, 0,
    0, 0, -1, 0, -10, -10, -4, -13,
    0, 0, -7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -19, 0, -22, -10,
    0, -33, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -13,
    -7, -7, -13, 0, 0, -13, 0, 0,
    0, 0, -19, 0, -4, 0, 0, -27,
    0, -27, -22, -19, -27, -7, 0, 0,
    0, 0, 0, -6, -7, 0, 0, -1,
    0, 0, -16, -13, -13, -16, -6, 0,
    -4, 0, 0, 0, 0, -1, 0, 0,
    0, 0, -6, 0, -10, -1, -12, -19,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -7, -7, -7,
    -7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, -10, 0, -1, 0, -3, 0,
    0, 0, -1, 0, 0, 0, 0, 0,
    -7, -7, -10, -7, 0, 0, -30, 0,
    0, 0, 0, -22, 0, 0, -24, 0,
    0, 0, 0, -7, 0, 0, 0, -16,
    0, -10, -12, -13, -16, -10, 0, -7,
    -3, -9, 0, -14, -6, -19, -14, -6,
    0, -10, 0, 0, 0, 0, 0, 0,
    -6, -10, -6, -27, -4, -10, -13, -22,
    -24, -10, -12, 0, -3, 0, -4, -7,
    -7, 0, -7, -7, 0, 0, -6, -6,
    -13, -13, -6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -30, 0,
    -22, -10, -7, -24, 0, -4, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, -7, 0, -7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -6, 0, 0, -10, -7, -16, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, -9,
    0, -10, 0, 0, 0, 0, 0, 0,
    -6, 0, 0, 0, 0, 0, 0, -13,
    0, 0, -9, 0, 0, -13, 0, 0,
    0, 0, -7, -12, -12, -13, -10, -24,
    0, -24, -13, 0, -19, -13, -16, 0,
    -19, -10, -10, -16, -19, -9, 0, -10,
    -10, -7, -19, -13, -13, -13, -7, -7,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, -7, 0, -10, -13, -7, -13,
    0, 0, 0, 0, -10, 0, -10, -16,
    -7, 0, 0, -7, -7, -19, -13, -13,
    -19, 0, 0, 0, 0, 0, 0, 0,
    -6, 0, 0, 0, 0, -17, 0, -17,
    -9, -9, -20, 0, 0, 0, -3, 0,
    0, -6, 6, 0, 0, 0, 0, 0,
    -12, 0, -6, 0, 0, 0, -27, 0,
    0, 0, 0, -19, 0, 0, -24, 0,
    -22, 0, -16, -10, -10, -19, -10, -9,
    0, -6, 0, 0, 0, -10, 0, 0,
    -1, 0, 0, -10, -10, -10, -10, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, 0, -24, 0, -22, -13, -16,
    -30, 0, -4, 0, -4, -7, 0, 0,
    0, 0, 0, -7, -4, 0, -13, -13,
    -13, -13, 0, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    -19, -16, -13, -22, 0, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, -6, -6, -7, -13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -13, 0, -16, -13, 0, -27, 0,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -7, -7, -10, -10,
    0, 0, -27, 0, 0, 0, 0, -24,
    -4, -3, -22, 0, -16, -7, -27, -19,
    -24, -30, -19, -13, 0, -16, -10, -19,
    -10, -16, 0, -7, -19, -1, -7, -7,
    -13, -13, -13, -13, 0, -27, 0, 0,
    0, 0, -19, 0, -1, -13, 0, -24,
    -4, -24, -19, -22, -27, -7, -13, 0,
    -13, -6, -7, -10, -16, 0, -7, -13,
    -6, -7, -7, -10, -19, -13, -7, 0,
    -7, 0, 0, 0, 0, -13, -10, -13,
    -19, -4, -33, -13, -30, -19, -13, -30,
    -13, -13, 0, -13, 0, -13, -10, 0,
    0, 0, -13, -7, -10, -13, -13, -7,
    -10, -10, 0, -22, 0, 0, 0, 0,
    -22, 0, -6, -27, -1, -27, -1, -22,
    -16, -24, -30, -13, -19, 0, -13, -4,
    -13, -7, -10, 0, 0, -13, 0, -4,
    -13, -7, -10, -7, -4, 0, -1, 0,
    0, 0, 0, -4, 0, 0, -1, 0,
    -19, -1, -19, -10, -19, -33, 0, -6,
    0, -6, 0, -7, 0, -6, 0, 0,
    -4, 0, -4, -10, -7, -10, -10, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 48,
    .right_class_cnt     = 35,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 3,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_kanit18 = {
#else
lv_font_t ui_font_kanit18 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 21,          /*The maximum line height required by the font*/
    .base_line = 5,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_KANIT18*/

