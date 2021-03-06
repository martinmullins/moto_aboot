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

int32_t handle_fboot_oem_command_get_unlock_data(void);
int32_t handle_fboot_oem_command_prod_fuse(int32_t a1, int32_t a2);
int32_t oem_build_sig(int32_t a1, int32_t a2);
int32_t oem_display(int32_t a1, int32_t a2);
int32_t oem_dump_logs(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_led(int32_t a1, int32_t a2);
int32_t oem_logo(int32_t a1, int32_t a2);
int32_t oem_partition_usage(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_partitions(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_pmic(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_read_sv(void);
int32_t oem_security_test(int32_t a1, int32_t a2);
int32_t oem_test_sp(int32_t a1, int32_t a2);
int32_t oem_usb_tune(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t ptn_stat(char * a1, int32_t * a2, int32_t * a3, int32_t * a4);
int32_t require_mot_fastboot(int32_t a1, int32_t a2, int32_t a3);
int32_t utag_name_prefix_found_cb(int32_t a1, char * str2, char * str);
int32_t utag_shortnameof(void);

// --------------------- Global Variables ---------------------

int32_t g22 = 0; // LR
int32_t g23 = 0; // R0
int32_t g24 = 0; // R1
int32_t g25 = 0; // R2
int32_t g26 = 0; // R3
int32_t g27 = 0; // R4
int32_t g28 = 0; // R5
int32_t g29 = 0; // R6
int32_t g30 = 0; // R7
int32_t g31 = 0; // R8
int32_t g1 = -0x16d2bfed; // 0x8f61c43c
int32_t g2 = -0x16d2bfed; // 0x8f61c478
int32_t g3 = -0x16d2bf10; // 0x8f61c4ac
int32_t g4 = -0x16d2bff0; // 0x8f61c534
int32_t g5 = -0x1a60cf20; // 0x8f61c5a8
int32_t g6 = -0x1a60cfc8; // 0x8f624774
int32_t g7 = -0x15ffffc8; // 0x8f625868
int32_t g8 = -0x1a60cf7c; // 0x8f63867c
int32_t g9 = -0x16d2bc09; // 0x8f638ab0
int32_t g10 = 0x746e6300; // 0x8f6a4e20
int32_t g11 = -0x709c73f8; // 0x8f6ac374
int32_t g12 = 0; // 0x8f6c05e0
char * g13; // 0x8f6c0600
int32_t g14 = 0; // 0x8f6c0624
int32_t (*g15)() = NULL; // 0x8f7112f4
char * g16; // 0x8f711580
char * g17; // 0x8f711588
char * g18; // 0x8f711589
char g19 = 0; // 0x8f71158a
char g20 = 0; // 0x8f71158b
int32_t g21 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f624998 - 0x8f6249ef
int32_t utag_name_prefix_found_cb(int32_t a1, char * str2, char * str) {
    uint32_t strncmp_rc = strncmp(str2, str, strlen(str)); // 0x8f6249c4
    if (g15 != g15) {
        // 0x8f6249e0
        __stack_chk_fail();
        // branch -> 0x8f6249e4
    }
    // 0x8f6249e4
    return strncmp_rc > 1 ? 0 : 1 - strncmp_rc;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// int atoi(const char * nptr);
// long int atol(const char * nptr);
// void free(void * ptr);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// char * strrchr(char * s, int c);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 18
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:38:36
