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

int32_t _fdt_add_property(int32_t a1, int32_t a2, char * a3, int32_t a4);
int32_t _fdt_packblocks(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t _fdt_rw_check_header(void);
int32_t blink_callback(int32_t a1, int32_t a2);
int32_t build_sig_for_all(char * str, int32_t (*a2)(int32_t, int32_t), int32_t a3);
int32_t cmd_line_parse(int32_t a1, int32_t a2, int32_t a3);
int32_t cmd_overlay_command_tokens(char * str6, int32_t a2);
int32_t cmd_token_append(int32_t * a1, int32_t * a2, int32_t a3);
int32_t cmd_token_free(char * a1, int32_t a2);
char * collect_desc(int32_t * str2);
int32_t display_auto_detect(int32_t a1, int32_t a2, int32_t a3);
int32_t display_draw_text_with_color(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8);
int32_t display_render_done(int32_t a1, int32_t a2);
int32_t draw_runlength_image(char * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);
int32_t draw_text_in_landscape(char * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t draw_text_in_portrait(char * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t fdt_reserveprop(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t generic_mmc_erase_legacy(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t generic_mmc_erase_logical(int64_t a1, int32_t a2, uint32_t a3, int32_t a4);
int32_t led_on(char a1, int32_t a2, int32_t a3);
int32_t lstrdup(char * str);
int32_t strtok_r_q_constprop_3(void);

// --------------------- Global Variables ---------------------

int32_t g26 = 0; // LR
int32_t g27 = 0; // R0
int32_t g28 = 0; // R1
int32_t g29 = 0; // R10
int32_t g30 = 0; // R11
int32_t g31 = 0; // R12
int32_t g32 = 0; // R2
int32_t g33 = 0; // R3
int32_t g34 = 0; // R4
int32_t g35 = 0; // R5
int32_t g36 = 0; // R6
int32_t g37 = 0; // R7
int32_t g38 = 0; // R8
int32_t g39 = 0; // R9
bool g1 = false; // flagc
int32_t g2 = 0xa092000; // 0x8f6826e4
char * g3; // 0x8f6a4e20
int32_t g4 = 2; // 0x8f6afe0c
char * g5 = "\x01"; // 0x8f6afe10
int32_t g6 = 0; // 0x8f6e0bfc
int32_t g7 = 0; // 0x8f6e0c00
int32_t g8 = 0; // 0x8f6e0c08
int32_t g9 = 0; // 0x8f6e0c2c
int32_t g10 = 0; // 0x8f6e0c30
int32_t g11 = 0; // 0x8f6e0c38
char * g12; // 0x8f6e0c40
char * g13; // 0x8f6e0c48
char g14 = 0; // 0x8f6e0c49
int32_t g15 = 0; // 0x8f6e0c68
int32_t g16 = 0; // 0x8f6e0c6c
char * g17; // 0x8f6e1000
int32_t g18 = 0; // 0x8f6e1200
char * g19; // 0x8f6e122c
int32_t g20 = 0; // 0x8f6e1253
int32_t g21 = 0; // 0x8f6e1254
int32_t g22 = 0; // 0x8f6e12dc
char * g23; // 0x8f6e12e4
char * g24; // 0x8f7112f4
int32_t g25 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f651560 - 0x8f6516cf
char * collect_desc(int32_t * str2) {
    int32_t str;
    strncpy((char *)&str, (char *)*str2, 99);
    int32_t len = strlen("git="); // 0x8f651598
    int32_t strncmp_rc = strncmp((char *)&str, "git=", len); // 0x8f6515a8
    int32_t v1 = strncmp_rc; // R0
    if (strncmp_rc == 0) {
        char * found_char_pos = strrchr((char *)&str, 45); // 0x8f6515bc
        int32_t v2 = (int32_t)found_char_pos; // 0x8f6515bc_4
        if (found_char_pos != NULL) {
            // 0x8f6515cc
            if ((char)strcmp((char *)(v2 + 1), "dirty") == 0) {
                // 0x8f6515e0
                g21 = 1;
                *(char *)v2 = 0;
                // branch -> 0x8f6515fc
            }
        }
        char * found_char_pos2 = strrchr((char *)&str, 45); // 0x8f651604
        if (found_char_pos2 != NULL) {
            // if_8f651610_0_true
            *found_char_pos2 = 0;
            // branch -> after_if_8f651614_0
        }
        char * found_char_pos3 = strrchr((char *)&str, 45); // 0x8f65161c
        if (found_char_pos3 != NULL) {
            // 0x8f651628
            if (*(char *)((int32_t)found_char_pos3 + 1) != 48) {
                // 0x8f651634
                g21 = 1;
                // branch -> 0x8f65164c
            }
            // 0x8f65164c
            *found_char_pos3 = 0;
            // branch -> 0x8f651654
        }
        char * found_char_pos4 = strchr((char *)&str, 61); // 0x8f65165c
        int32_t v3 = (int32_t)found_char_pos4; // 0x8f65165c_4
        v1 = v3;
        if (found_char_pos4 == NULL) {
            // 0x8f651654
            // branch -> 0x8f651694
        } else {
            char * dest_str = strncpy((char *)&g19, (char *)(v3 + 1), 39); // 0x8f651680
            v1 = (int32_t)dest_str;
            *(char *)&g20 = 0;
            // branch -> 0x8f651694
        }
        // 0x8f651694
        *(int32_t *)(int32_t)&g22 = g22 + 1;
        // branch -> 0x8f6516a0
    }
    // 0x8f6516a0
    if (g24 != g24) {
        // 0x8f6516b0
        __stack_chk_fail();
        // branch -> 0x8f6516b4
    }
    // 0x8f6516b4
    return (char *)v1;
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memalign(size_t alignment, size_t size);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// char * strchr(char * s, int c);
// int strcmp(const char * s1, const char * s2);
// char * strcpy(char * restrict dest, const char * restrict src);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// size_t strnlen(const char * string, size_t maxlen);
// char * strrchr(char * s, int c);
// size_t strspn(const char * s, const char * accept);
// char * strstr(char * haystack, const char * needle);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 22
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:49:08
