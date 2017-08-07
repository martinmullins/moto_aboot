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

// ------------------------ Structures ------------------------

struct _TYPEDEF_lldiv_t {
    int64_t e0;
    int64_t e1;
};

// ------------------- Function Prototypes --------------------

int32_t config_cmd_allowed(char * a1, int32_t a2);
int32_t confirm_unlock(int32_t a1, int32_t a2);
int32_t handle_fboot_oem_command_lock(int32_t a1, int32_t a2);
int32_t hash_partition(int32_t a1, int32_t a2, int32_t a3);
int32_t list_partition(int32_t a1);
int32_t list_utag(char * a1);
int32_t oem_blankflash(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t oem_partition(int32_t a1, int32_t a2);
int32_t oem_partitions(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_ramdump_usage(int32_t a1, int32_t a2, int32_t a3);
int32_t oem_show_screen(int32_t a1, int32_t a2);
int32_t send_emmc_data(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t test_bool(char * str, int32_t a2, int32_t a3);
int32_t type_atoi_9(char * str, int32_t a2);
int32_t type_itoa_8(int32_t a1, int32_t a2);
int32_t unset_utag(int32_t a1, int32_t a2, int32_t a3);
int32_t validate_device(int32_t a1, char * a2);

// --------------------- Global Variables ---------------------

int32_t g7 = 0; // R1
int32_t g8 = 0; // R2
int32_t g9 = 0; // R3
int32_t g10 = 0; // R4
int32_t g11 = 0; // R5
int32_t g12 = 0; // R6
int32_t g1 = -0x16d2bc09; // 0x8f638ab0
char * g2[6] = {
    "fsg-id",
    "battery",
    "carrier",
    "bootmode",
    "enable_dump_gpt",
    "num-sims"
}; // 0x8f688974
int32_t g3 = 0x746e6300; // 0x8f6a4e20
int64_t g4 = 0; // 0x8f7112f4
int32_t g5 = 0; // 0x8f711514
char * g6; // 0x8f711530

// ------------------------ Functions -------------------------

// Address range: 0x8f626310 - 0x8f6263a7
int32_t oem_show_screen(int32_t a1, int32_t a2) {
    int32_t v1 = g4;
    int32_t v2;
    int32_t result;
    if (a1 > 1) {
        int32_t v3 = *(int32_t *)(a2 + 4); // 0x8f626360
        show(v3, 1, v1, (int32_t)&g1, a1, v1, g10, 0, v2, 0, 0, 0, 0, 0, 0);
        result = 1;
        // branch -> 0x8f626374
    } else {
        // 0x8f626330
        fboot_info((int32_t)"INFO", (int32_t)"usage:", v1, (int32_t)&g4, a1, v1, g10, 0, v2, 0, 0);
        fboot_info((int32_t)"INFO", (int32_t)"    fastboot oem show_screen screen_name", v1, (int32_t)&g4, a1, v1, g10, 0, v2, 0, 0);
        fboot_info((int32_t)"INFO", (int32_t)&g3, v1, (int32_t)&g4, a1, v1, g10, 0, v2, 0, 0);
        result = 3;
        // branch -> 0x8f626374
    }
    // 0x8f626374
    if (v1 != (int32_t)g4) {
        // 0x8f626384
        __stack_chk_fail();
        // branch -> 0x8f626388
    }
    // 0x8f626388
    return result;
}

// --------------- Statically Linked Functions ----------------

// lldiv_t __aeabi_ldivmod(long long n, long long d);
// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memalign(size_t alignment, size_t size);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int sprintf(char * restrict s, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// int strncasecmp(const char * s1, const char * s2, size_t n);
// int strncmp(const char * s1, const char * s2, size_t n);
// size_t strnlen(const char * string, size_t maxlen);
// char * strrchr(char * s, int c);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 17
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:38:38