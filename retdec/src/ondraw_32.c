//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t display_barcode_in_code128(int32_t result, char * str);
int32_t display_code(int32_t a1, int32_t a2, int32_t a3, int32_t a4, uint32_t a5);
int32_t get_vertical_barcode_pos_isra_1(int32_t a1, int32_t a2, int32_t a3);
int32_t init_26(char * a1, int32_t a2);
int32_t init_30(int32_t a1, int32_t a2, int32_t a3);
int32_t menu_lines(int32_t a1, int32_t a2);
int32_t menu_stop(void);
int32_t ondraw_32(void);
int32_t onkey_27(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7);
int32_t onkey_31(uint32_t result, int32_t a2);
int32_t screen_init(int32_t a1, int32_t a2);
int32_t screen_ondraw(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t screen_stop(int32_t a1, int32_t a2, int32_t a3);
int32_t set_content_to_show_33(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t start_29(int32_t a1, int32_t a2);
int32_t stop_28(int32_t a1, int32_t a2, int32_t a3);
int32_t update_toggle_menu_item(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);

// --------------------- Global Variables ---------------------

int32_t g48 = 0; // R1
int32_t g49 = 0; // R2
int32_t g50 = 0; // R3
int32_t g51 = 0; // R4
int32_t g52 = 0; // R5
int32_t g53 = 0; // R6
int32_t g54 = 0; // R7
int32_t g55 = 0; // R8
int32_t g56 = 0; // R9
int32_t g1 = -0x16d2bf90; // 0x8f61db1c
int32_t g2 = -0x16d2bf81; // 0x8f61dca0
int32_t g3 = -0x16d2bc09; // 0x8f638ab0
char (*g5)[18] = "ttyHSL0,115200,n8"; // 0x8f6ac1a8
char (*g6)[18] = "ttyHSL0,115200,n8"; // 0x8f6ac1ac
int32_t g7 = 0; // 0x8f6ac3ec
int32_t g8 = 0; // 0x8f6ac43c
int32_t g9 = 0; // 0x8f6ac48c
int32_t g10 = 0; // 0x8f6ac4dc
int32_t g11 = 3; // 0x8f6ac52c
int32_t g12 = 0; // 0x8f6ac530
int32_t g13 = 0; // 0x8f6ac580
int32_t g14 = 0; // 0x8f6ac5d8
int32_t g15 = 2; // 0x8f6ac614
int32_t g16 = 0; // 0x8f6ac618
int32_t g17 = 0; // 0x8f6ac668
int32_t g18 = 0; // 0x8f6ac6b8
int32_t g19 = 0; // 0x8f6ac708
int32_t g20 = 0; // 0x8f6ac758
int32_t g21 = 0; // 0x8f6ac7a8
int32_t g22 = 0; // 0x8f6b167c
int32_t g23 = 0; // 0x8f6b1698
int32_t g24 = 0; // 0x8f6b16c4
int32_t g25 = -0x709c3bd8; // 0x8f6b16c8
int32_t g26 = 0; // 0x8f6b16f8
char * g27; // 0x8f6e0980
int32_t g28 = 0; // 0x8f6e0984
char * g29; // 0x8f6e0988
int32_t g30 = 0; // 0x8f6e098c
int32_t g31 = 0; // 0x8f6e0990
int32_t g32 = 0; // 0x8f6e0994
int32_t g33 = 0; // 0x8f6e0998
int32_t g34 = 0; // 0x8f6e099c
int32_t g35 = 0; // 0x8f6e09a0
int32_t g36 = 0; // 0x8f6e09a4
char * g37; // 0x8f6e09a8
int32_t g38 = 0; // 0x8f6e09ac
int32_t g39 = 0; // 0x8f6e09b0
int32_t g40 = 0; // 0x8f6e09b4
int32_t g41 = 0; // 0x8f6e09b8
int32_t g42 = 0; // 0x8f6e09bc
int32_t g43 = 0; // 0x8f6e09cc
int32_t g44 = 0; // 0x8f6e09e8
int32_t g45 = 0; // 0x8f6e09f4
int32_t g46 = 0; // 0x8f6e09f8
int32_t g47 = 0; // 0x8f7112f4
char * g4[4] = {
    "null",
    "fastboot",
    (char *)&g1,
    (char *)&g2
}; // 0x8f6ac108

// ------------------------ Functions -------------------------

// Address range: 0x8f63c13c - 0x8f63c3a7
int32_t ondraw_32(void) {
    g54 = &g47;
    g52 = 11;
    int32_t v1 = g47;
    display_clear_screen(0xffffff, g48, display_set_bg_color(0xffffff, g48, g49), v1);
    g49 = 64;
    int32_t str;
    int32_t v2 = &str; // 0x8f63c168_0
    char * set_mem = memset((char *)&str, 0, 64); // 0x8f63c16c
    int32_t v3 = get_imei_buf((int32_t)set_mem, 0, 64, v1); // 0x8f63c170
    g51 = v3;
    int32_t v4 = font_get_y(v3, 0, 64, v1) / 2; // 0x8f63c180
    g53 = v4;
    display_barcode_in_code128(v4, (char *)g51);
    int32_t v5 = g51; // 0x8f63c18c
    int32_t chars_printed = snprintf((char *)&str, 64, "IMEI/MEID: %s", (char *)v5);
    int32_t v6 = font_get_x(chars_printed, 64, (int32_t)"IMEI/MEID: %s", v5); // 0x8f63c1a0
    int32_t v7 = get_line_width(v6, 64, (int32_t)"IMEI/MEID: %s", v5); // 0x8f63c1a8
    int32_t v8 = g52 * v7 + v6; // 0x8f63c1ac
    g55 = v8;
    int32_t v9 = font_get_y(v7, 64, (int32_t)"IMEI/MEID: %s", v5); // 0x8f63c1b0
    g51 = 0xff0000;
    int32_t v10;
    display_draw_text_with_color(v2, v8, g53 + get_barcode_scale(v9, 64, (int32_t)"IMEI/MEID: %s", v5, v10, 0, 0, str) * v9, 0, 0xff0000, 0, 0, str, 0, 0, 0, 0, 0);
    char * set_mem2 = memset((char *)&str, 0, 64); // 0x8f63c1e4
    g53 = get_sku_buf((int32_t)set_mem2, 0, 64, 0);
    int32_t v11 = get_vertical_barcode_pos_isra_1(1, 0, 64); // 0x8f63c1f4
    g55 = v11;
    display_barcode_in_code128(v11, (char *)g53);
    int32_t v12 = g53; // 0x8f63c204
    int32_t chars_printed2 = snprintf((char *)&str, 64, "SKU: %s", (char *)v12);
    int32_t v13 = font_get_x(chars_printed2, 64, (int32_t)"SKU: %s", v12); // 0x8f63c218
    int32_t v14 = get_line_width(v13, 64, (int32_t)"SKU: %s", v12); // 0x8f63c220
    int32_t v15 = font_get_y(v14, 64, (int32_t)"SKU: %s", v12); // 0x8f63c228
    g56 = v15;
    int32_t v16 = g51; // 0x8f63c23c
    display_draw_text_with_color(v2, g52 * v14 + v13, get_barcode_scale(v15, 64, (int32_t)"SKU: %s", v12, 0xff0000, 0, 0, str) * v15 + v11, 0, v16, 0, 0, str, 0, 0, 0, 0, 0);
    char * set_mem3 = memset((char *)&str, 0, 64); // 0x8f63c258
    g53 = get_date_buf((int32_t)set_mem3, 0, 64, 0);
    int32_t v17 = get_vertical_barcode_pos_isra_1(2, 0, 64); // 0x8f63c268
    g55 = v17;
    display_barcode_in_code128(v17, (char *)g53);
    int32_t v18 = g53; // 0x8f63c278
    int32_t chars_printed3 = snprintf((char *)&str, 64, "DATE (mm-dd-yyyy): %s", (char *)v18);
    int32_t v19 = font_get_x(chars_printed3, 64, (int32_t)"DATE (mm-dd-yyyy): %s", v18); // 0x8f63c28c
    int32_t v20 = get_line_width(v19, 64, (int32_t)"DATE (mm-dd-yyyy): %s", v18); // 0x8f63c294
    int32_t v21 = font_get_y(v20, 64, (int32_t)"DATE (mm-dd-yyyy): %s", v18); // 0x8f63c29c
    g56 = v21;
    int32_t v22 = g51; // 0x8f63c2b0
    display_draw_text_with_color(v2, g52 * v20 + v19, get_barcode_scale(v21, 64, (int32_t)"DATE (mm-dd-yyyy): %s", v18, v16, 0, 0, str) * v21 + v17, 0, v22, 0, 0, str, 0, 0, 0, 0, 0);
    char * set_mem4 = memset((char *)&str, 0, 64); // 0x8f63c2cc
    g53 = get_sn_buf((int32_t)set_mem4, 0, 64, 0);
    int32_t v23 = get_vertical_barcode_pos_isra_1(3, 0, 64); // 0x8f63c2dc
    g55 = v23;
    display_barcode_in_code128(v23, (char *)g53);
    int32_t chars_printed4 = snprintf((char *)&str, 64, "Serial Number: %s", (char *)g53);
    int32_t v24 = font_get_x(chars_printed4, 64, (int32_t)"Serial Number: %s", g53); // 0x8f63c300
    int32_t v25 = get_line_width(v24, 64, (int32_t)"Serial Number: %s", g53); // 0x8f63c308
    int32_t v26 = g52 * v25 + v24; // 0x8f63c30c
    int32_t v27 = font_get_y(v25, 64, (int32_t)"Serial Number: %s", g53); // 0x8f63c310
    int32_t v28 = get_barcode_scale(v27, 64, (int32_t)"Serial Number: %s", g53, v22, 0, 0, str) * v27 + v23; // 0x8f63c328
    int32_t v29 = font_get_x(display_draw_text_with_color(v2, v26, v28, 0, g51, 0, 0, str, 0, 0, 0, 0, 0), v26, v28, 0); // 0x8f63c334
    font_get_y(display_get_screen_height(v29, v26, v28, 0), v26, v28, 0);
    int32_t v30;
    display_draw_text_with_color((int32_t)"Press Vol Up or Vol Down to exit", v2, (int32_t)&v30, 0, 0xff00, 0, 0, str, 0, 0, 0, 0, 0);
    int32_t result = display_draw_text_at_line(0, 0, 1, 0); // 0x8f63c370
    if (v1 != g47) {
        // 0x8f63c384
        __stack_chk_fail();
        // branch -> 0x8f63c388
    }
    // 0x8f63c388
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// size_t strlen(const char * s);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 17
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:44:43
