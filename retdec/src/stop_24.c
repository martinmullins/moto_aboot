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

int32_t append_menu_item(char * a1, int32_t a2, int32_t a3);
char * display_sw_version(void);
int32_t get_first_selected_menu(int32_t a1, uint32_t a2, int32_t a3);
int32_t get_line_number(char * a1, int32_t a2, int32_t a3);
int32_t get_log_area_lines(int32_t a1, int32_t a2, int32_t a3);
char * init_20(void);
int32_t lines(int32_t a1, int32_t a2, int32_t a3);
int32_t need_check(char * a1, int32_t a2, int32_t a3);
int32_t ondraw_22(void);
int32_t ondraw_25(void);
int32_t show_fastboot_menu(int32_t a1, int32_t a2);
char * show_usb_status(char a1);
int32_t start_21(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t start_23(int32_t a1, int32_t a2, int32_t a3);
int32_t stop_18(int32_t a1, int32_t a2);
int32_t stop_24(int32_t a1, int32_t a2, int32_t a3);
int32_t type_atoi_19(char * str, int32_t a2, int32_t a3);
int32_t update_console_menu_name(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g31 = 0; // LR
int32_t g32 = 0; // R1
int32_t g33 = 0; // R12
int32_t g34 = 0; // R2
int32_t g35 = 0; // R3
int32_t g36 = 0; // R4
int32_t g37 = 0; // R5
int32_t g38 = 0; // R6
int32_t g39 = 0; // R7
int32_t g1 = -0x16d2bfc9; // 0x8f638578
int32_t g2 = -0x16d2bfed; // 0x8f63a4ec
char * g3 = "\x13\x40\x2d\xe9\x40\x40\x9f\xe5"; // 0x8f63a538
char * g4 = "\x30\x40\x2d\xe9\x8c\xd0\x4d\xe2\xd0\x50\x9f\xe5"; // 0x8f63a650
int32_t g5 = 0x2020003a; // 0x8f686ac4
char g6[2] = "/"; // 0x8f686fbc
int32_t g7 = 0x5b5e0029; // 0x8f687c45
int32_t g8 = 0; // 0x8f69c574
int32_t g9 = 1; // 0x8f69c7cc
char * g10; // 0x8f6a4e20
char * g11 = "\x01"; // 0x8f6ac3e8
int32_t g12 = 0; // 0x8f6ac5d0
char * g13; // 0x8f6ac7b0
int32_t g14 = 0; // 0x8f6b1608
int32_t g16 = 0; // 0x8f6b1634
int32_t g17 = -0x709c57ac; // 0x8f6b1638
char * g18; // 0x8f6e095c
int32_t g19 = 0; // 0x8f6e0960
int32_t g20 = 0; // 0x8f6e097c
int32_t g21 = 0; // 0x8f6e0990
int32_t g22 = 0; // 0x8f6e0994
int32_t g23 = 0; // 0x8f6e099c
int32_t g24 = 0; // 0x8f6e09a0
int32_t g25 = 0; // 0x8f6e09b0
int32_t g26 = 0; // 0x8f6e09b4
int32_t g27 = 0; // 0x8f6e09b8
int32_t g28 = 0; // 0x8f7112f4
char * g29; // 0x8f711464
int32_t g30 = 0; // 0x8f7125ec
int32_t * g15 = &g12; // 0x8f6b1630

// ------------------------ Functions -------------------------

// Address range: 0x8f63b508 - 0x8f63b537
int32_t stop_24(int32_t a1, int32_t a2, int32_t a3) {
    // 0x8f63b508
    return g28;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// char * strrchr(char * s, int c);
// char * strtok(char * restrict s, const char * restrict delim);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 18
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:42:39
