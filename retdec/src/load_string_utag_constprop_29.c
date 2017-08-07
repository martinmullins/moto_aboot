//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

char * __utag_puts(int32_t a1, char * str2);
int32_t apply_current_path_constprop_33(char * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13, int32_t a14);
int32_t confirm_userdata_wipe(int32_t a1, int32_t a2);
int32_t is_utags_ext_locked_constprop_30(int32_t a1, int32_t a2);
int32_t list_existing_utags_cb(int32_t a1, char * a2, int32_t * a3);
int32_t list_existing_utags_constprop_34(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t load_string_utag_constprop_29(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_backlight(int32_t a1, int32_t a2);
int32_t oem_boot_mode_set(int32_t a1);
int32_t oem_qcom_on(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_ramdump(char * a1, int32_t a2);
int32_t oem_regex(int32_t a1, int32_t a2, int32_t a3);
int32_t unset_utag(int32_t a1, int32_t a2, int32_t a3);
int32_t utag_canonical_name_constprop_28(int32_t a1, char * a2);
int32_t validate_imei(int32_t a1, int32_t a2, int32_t a3);
int32_t validate_panel_name(int32_t a1, char * a2, int32_t a3);
int32_t validate_regex(int32_t a1);

// --------------------- Global Variables ---------------------

int32_t g9 = 0; // R1
int32_t g10 = 0; // R2
int32_t g11 = 0; // R3
int32_t g12 = 0; // R4
int32_t g13 = 0; // R5
int32_t g14 = 0; // R6
int32_t g15 = 0; // R7
int32_t g16 = 0; // R8
int32_t g1 = -0x1a60cfd4; // 0x8f6240a0
int32_t g2 = -0x1a60cf5c; // 0x8f6288a0
int32_t g3 = 0x2020003a; // 0x8f686ac4
int32_t g4 = 0x7325002f; // 0x8f686fbc
int32_t g5 = 0x746e6300; // 0x8f6a4e20
int32_t g6 = 0; // 0x8f6c05e4
char * g7; // 0x8f6c0620
int32_t g8 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f628950 - 0x8f628a27
int32_t load_string_utag_constprop_29(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g8;
    int32_t size = __utag_sizeof((char *)1, a1, a3, v1, a1, v1, a3, g12, g13); // 0x8f628970
    int32_t v2;
    int32_t result2; // 0x8f6289f8
    if (size > 1) {
        char * mem = malloc(size); // 0x8f62899c
        int32_t v3 = (int32_t)mem; // 0x8f62899c_3
        if (mem == NULL) {
            // 0x8f6289a8
            print_log(-1, (int32_t)"%s: out of memory", (int32_t)"load_string_utag", v1, a1, v1, a3, g12, g13, g14, g15, 0, v2);
            // branch -> 0x8f6289f0
        } else {
            int32_t result = __utag_gets(1, a1, v3, size, a1, v1, a3, g12, g13, g14, g15, 0, v2, 0, 0, 0, 0, 0, 0, 0); // 0x8f6289cc
            if (result == 0) {
                // 0x8f6289d8
                print_log(-1, (int32_t)"%s: failed to read utag [%s]\n", (int32_t)"load_string_utag", a1, a1, v1, a3, g12, g13, g14, g15, 0, v2);
                // branch -> 0x8f6289f4
                // 0x8f6289f4
                if (v1 != g8) {
                    // 0x8f628a08
                    __stack_chk_fail();
                    // branch -> 0x8f628a0c
                }
                // 0x8f628a0c
                return result;
            }
        }
        // 0x8f6289f0
        result2 = v3;
        // branch -> 0x8f6289f4
    } else {
        // 0x8f628980
        print_log(2, (int32_t)"DEBUG: %s: [%s] is empty\n", (int32_t)"load_string_utag", a1, a1, v1, a3, g12, g13, g14, g15, 0, v2);
        result2 = 0;
        // branch -> 0x8f6289f4
    }
    // 0x8f6289f4
    if (v1 != g8) {
        // 0x8f628a08
        __stack_chk_fail();
        // branch -> 0x8f628a0c
    }
    // 0x8f628a0c
    return result2;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// int atoi(const char * nptr);
// int isdigit(int c);
// void * malloc(size_t size);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int sprintf(char * restrict s, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// size_t strnlen(const char * string, size_t maxlen);
// char * strrchr(char * s, int c);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 17
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:38:45
