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

int32_t coordinates_init_part_1(int32_t a1, int32_t a2);
int32_t display_barcode_in_code128_51(int32_t result, char * str);
int32_t display_code_46(int32_t a1, int32_t a2, int32_t a3, int32_t a4, uint32_t a5);
int32_t display_image(char * str3, int32_t a2, int32_t a3, int32_t a4);
char * display_mode_text(char * a1, int32_t a2);
int32_t get_vertical_barcode_pos_isra_1_50(int32_t a1, int32_t a2, int32_t a3);
char * init_42(void);
int32_t init_48(int32_t a1, int32_t a2, int32_t a3);
int32_t ondraw_44(void);
int32_t onkey_49(int32_t a1, int32_t a2);
int32_t show_battery_status_39(char a1);
char * show_usb_status_40(char a1);
int32_t start_43(void);
int32_t start_47(int32_t a1, int32_t a2);
int32_t stop_45(int32_t a1, int32_t a2, int32_t a3);
int32_t type_atoi_41(char * str, int32_t a2, int32_t a3);
int32_t usb_bottom_callback(char * a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g62 = 0; // LR
int32_t g63 = 0; // R0
int32_t g64 = 0; // R1
int32_t g65 = 0; // R10
int32_t g66 = 0; // R11
int32_t g67 = 0; // R2
int32_t g68 = 0; // R3
int32_t g69 = 0; // R4
int32_t g70 = 0; // R5
int32_t g71 = 0; // R6
int32_t g72 = 0; // R7
int32_t g73 = 0; // R8
int32_t g74 = 0; // R9
int32_t g1 = -0x16d2bf90; // 0x8f61db1c
int32_t g2 = -0x16d2bf81; // 0x8f61dca0
int32_t g3 = -0x16d2bfc9; // 0x8f638578
int32_t g4 = -0x16d2bc09; // 0x8f638ab0
char * g5 = "\x37\x40\x2d\xe9"; // 0x8f63d4b4
int32_t g6 = -0x16d2bfed; // 0x8f63d51c
char * g7 = "\x30\x40\x2d\xe9\x8c\xd0\x4d\xe2\xf4\x50\x9f\xe5"; // 0x8f63d560
int32_t g8 = 0x6e61000a; // 0x8f6826e7
int32_t g9 = 0x2020003a; // 0x8f686ac4
char g10[2] = "/"; // 0x8f686fbc
int32_t g11 = 0x5b5e0029; // 0x8f687c45
char * g13[5] = {
    "Your device didn't start up successfully.\n",
    "Use the Software Repair Assistant on computer\n",
    "to repair your device.\n",
    "Connect your device to your computer to get\n",
    "the Software Repair Assistant.\n"
}; // 0x8f69cca0
char * g14[4] = {
    "Use the Software Repair Assistant on computer\n",
    "to repair your device.\n",
    "Connect your device to your computer to get\n",
    "the Software Repair Assistant.\n"
}; // 0x8f69cca4
char * g15[3] = {
    "to repair your device.\n",
    "Connect your device to your computer to get\n",
    "the Software Repair Assistant.\n"
}; // 0x8f69cca8
char * g16[2] = {
    "Connect your device to your computer to get\n",
    "the Software Repair Assistant.\n"
}; // 0x8f69ccac
char (*g17)[32] = "the Software Repair Assistant.\n"; // 0x8f69ccb0
int32_t g18 = 0; // 0x8f69ccc4
int32_t g19 = 0x40000; // 0x8f69cce4
int32_t g20 = 0x746e6300; // 0x8f6a4e20
char (*g22)[18] = "ttyHSL0,115200,n8"; // 0x8f6ac1a8
char (*g23)[18] = "ttyHSL0,115200,n8"; // 0x8f6ac1ac
char * g24 = "\x01"; // 0x8f6aca1c
int32_t g25 = 3; // 0x8f6aca20
char * g26 = "\x02"; // 0x8f6aca74
int32_t g27 = 0; // 0x8f6b170c
int32_t g28 = 0; // 0x8f6b1754
char * g29; // 0x8f6e0a00
int32_t g30 = 0; // 0x8f6e0a04
char * g31; // 0x8f6e0a08
char * g32; // 0x8f6e0a09
int32_t g33 = 0; // 0x8f6e0a0c
int32_t g34 = 0; // 0x8f6e0a28
int32_t g35 = 0; // 0x8f6e0a44
char * g36; // 0x8f6e0a48
char * g37; // 0x8f6e0a49
int32_t g38 = 0; // 0x8f6e0a4c
char * g39; // 0x8f6e0a50
int32_t g40 = 0; // 0x8f6e0a54
int32_t g41 = 0; // 0x8f6e0a58
char * g42; // 0x8f6e0a5c
int32_t g43 = 0; // 0x8f6e0a60
char * g44; // 0x8f7112f4
char * g45; // 0x8f711464
char * g46; // 0x8f711580
char * g47; // 0x8f711588
char * g48; // 0x8f711589
char g49 = 0; // 0x8f71158a
char g50 = 0; // 0x8f71158b
int32_t g51 = 0; // 0x8f712580
int32_t g52 = 0; // 0x8f712584
int32_t g53 = 0; // 0x8f712588
int32_t g54 = 0; // 0x8f71258c
int32_t g55 = 0; // 0x8f712590
int32_t g56 = 0; // 0x8f712594
int32_t g57 = 0; // 0x8f712598
int32_t g58 = 0; // 0x8f71259c
int32_t g59 = 0; // 0x8f7125a0
int32_t g60 = 0; // 0x8f7125a4
int32_t g61 = 0; // 0x8f7125ec
char * g12[7] = {
    "         Start Up Failed:\n",
    (char *)&g8,
    "Your device didn't start up successfully.\n",
    "Use the Software Repair Assistant on computer\n",
    "to repair your device.\n",
    "Connect your device to your computer to get\n",
    "the Software Repair Assistant.\n"
}; // 0x8f69cc98
char * g21[4] = {
    "null",
    "fastboot",
    (char *)&g1,
    (char *)&g2
}; // 0x8f6ac108

// ------------------------ Functions -------------------------

// Address range: 0x8f63efd0 - 0x8f63f173
int32_t display_barcode_in_code128_51(int32_t result, char * str) {
    int32_t v1 = (int32_t)str;
    int32_t v2 = g69; // 0x8f63efd0
    int32_t v3 = g70; // 0x8f63efd0
    int32_t v4 = g71; // 0x8f63efd0
    int32_t v5 = g72; // 0x8f63efd0
    int32_t v6 = g73; // 0x8f63efd0
    int32_t v7 = g74; // 0x8f63efd0
    int32_t v8 = g65; // 0x8f63efd0
    int32_t v9 = g66; // 0x8f63efd0
    g73 = v1;
    g69 = (int32_t)&g44;
    char * v10 = g44;
    int32_t v11 = (int32_t)v10;
    g65 = (int32_t)&g44;
    if (str == NULL) {
        // 0x8f63f150
        if (v10 != g44) {
            // 0x8f63f160
            __stack_chk_fail();
            // branch -> 0x8f63f164
        }
        // 0x8f63f164
        g69 = v2;
        g73 = v6;
        return result;
    }
    int32_t len = strlen(str); // 0x8f63eff8
    int32_t result2; // 0x8f63f168_2
    if (len == 0) {
        // 0x8f63f150
        if (v10 != g44) {
            // 0x8f63f160
            __stack_chk_fail();
            result2 = len;
            // branch -> 0x8f63f164
        } else {
            result2 = 0;
        }
        // 0x8f63f164
        g69 = v2;
        g73 = v6;
        return result2;
    }
    int32_t v12 = font_get_x(len, v1, g67, v11); // 0x8f63f004
    int32_t v13;
    int32_t v14;
    int32_t v15;
    int32_t v16 = get_current_panel(v12, v1, g67, v11, v15, v14, 0, v13, 0, v11, 0); // 0x8f63f00c
    int32_t v17 = font_get_y(v16, v1, g67, v11); // 0x8f63f014
    int32_t v18 = get_barcode_scale(v17, v1, g67, v11, v15, v14, 0, v13); // 0x8f63f01c
    int32_t v19 = g73; // 0x8f63f028
    uint32_t v20 = get_bar_length(display_get_screen_width(v18, v1, g67, v11), v19, g67, v11); // 0x8f63f02c
    int32_t v21 = display_get_screen_width(v20, v19, g67, v11); // 0x8f63f034
    if (v20 > v21) {
        char * v22 = g44;
        if (v10 == v22) {
            // 0x8f63f054
            g69 = v2;
            g73 = v6;
            return print_log(1, (int32_t)"Barcode is too long for the display\n", v11, (int32_t)v22, v2, v3, v4, v5, v6, v7, v8, v9, g62);
        }
        // 0x8f63f160
        __stack_chk_fail();
        result2 = v21;
        // branch -> 0x8f63f164
    } else {
        int32_t v23 = get_line_width(v21, v19, g67, v20); // 0x8f63f068
        g71 = *(int32_t *)(v16 + 100) + result;
        g74 = 11;
        g70 = v18 * v17;
        g66 = g73 - 1;
        g72 = v12 + 11 * v23;
        g69 = get_line_width(v23, v19, g67, v20);
        int32_t v24 = get_ctrl_code128(104, v19, g67, v20); // 0x8f63f08c
        g72 += display_code_46(g72, g71, g70, g69, v24);
        int32_t v25 = g66 + 1; // 0x8f63f0ac3
        g66 = v25;
        char v26 = *(char *)v25; // 0x8f63f0ac5
        int32_t v27; // 0x8f63f0e4
        int32_t v28; // 0x8f63f100
        int32_t v29; // 0x8f63f10c
        int32_t v30; // 0x8f63f124
        int32_t v31; // 0x8f63f12c
        int32_t result3; // 0x8f63f14c
        int32_t v32; // 0x8f63f0dc
        int32_t v33; // 0x8f63f0e8
        int32_t v34; // 0x8f63f0ec
        int32_t v35; // 0x8f63f0f0
        int32_t v36; // 0x8f63f110
        int32_t v37; // 0x8f63f114
        int32_t v38; // 0x8f63f118
        if (v26 != 0) {
            int32_t v39 = get_code128((int32_t)v26, g64, g67, g68); // 0x8f63f0b8
            int32_t v40 = display_code_46(g72, g71, g70, g69, v39); // 0x8f63f0d0
            g72 += v40;
            int32_t v41 = g66 + 1; // 0x8f63f0ac
            g66 = v41;
            char v42 = *(char *)v41; // 0x8f63f0ac
            while (v42 != 0) {
                // 0x8f63f0b8
                v39 = get_code128((int32_t)v42, g64, g67, g68);
                v40 = display_code_46(g72, g71, g70, g69, v39);
                g72 += v40;
                v41 = g66 + 1;
                g66 = v41;
                v42 = *(char *)v41;
                // continue -> 0x8f63f0b8
            }
            // 0x8f63f0dc
            v32 = g73;
            g73 = 11;
            v27 = get_code128_checksum(v32, g64, g67, g68, v39, g74, 0);
            v33 = g71;
            v34 = g70;
            v35 = g69;
            v28 = display_code_46(g72, v33, v34, v35, v27);
            g72 += v28;
            v29 = get_ctrl_code128(106, v33, v34, v35);
            v36 = g71;
            v37 = g70;
            v38 = g69;
            v30 = display_code_46(g72, v36, v37, v38, v29);
            g73 = v30;
            v31 = get_termination_code128(v30, v36, v37, v38);
            result3 = display_code_46(g72 + v30, g71, g70, g69, v31);
            // branch -> 0x8f63f150
            // 0x8f63f150
            if (v10 != g44) {
                // 0x8f63f160
                __stack_chk_fail();
                // branch -> 0x8f63f164
            }
            // 0x8f63f164
            g69 = v2;
            g73 = v6;
            return result3;
        }
        // 0x8f63f0dc
        v32 = g73;
        g73 = 11;
        v27 = get_code128_checksum(v32, g64, g67, g68, v24, g74, 0);
        v33 = g71;
        v34 = g70;
        v35 = g69;
        v28 = display_code_46(g72, v33, v34, v35, v27);
        g72 += v28;
        v29 = get_ctrl_code128(106, v33, v34, v35);
        v36 = g71;
        v37 = g70;
        v38 = g69;
        v30 = display_code_46(g72, v36, v37, v38, v29);
        g73 = v30;
        v31 = get_termination_code128(v30, v36, v37, v38);
        result3 = display_code_46(g72 + v30, g71, g70, g69, v31);
        // branch -> 0x8f63f150
        // 0x8f63f150
        if (v10 != g44) {
            // 0x8f63f160
            __stack_chk_fail();
            result2 = result3;
            // branch -> 0x8f63f164
        } else {
            result2 = result3;
        }
    }
    // 0x8f63f164
    g69 = v2;
    g73 = v6;
    return result2;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// char * strrchr(char * s, int c);
// char * strtok(char * restrict s, const char * restrict delim);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 17
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:45:05