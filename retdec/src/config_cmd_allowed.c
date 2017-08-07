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

// Address range: 0x8f626144 - 0x8f626203
int32_t config_cmd_allowed(char * a1, int32_t a2) {
    int32_t v1 = a2; // R1
    int32_t v2 = (int32_t)a1; // R6
    int32_t v3 = g4;
    int32_t v4 = is_validation_enabled(a1, a2, g8, v3); // 0x8f62615c
    if (v4 != 0) {
        int32_t v5 = is_factory_product(v4, v1, g8, v3); // 0x8f626170
        if (v5 == 0) {
            int32_t v6 = 0; // R5
            int32_t v7 = 0; // 0x8f626188
            // branch -> 0x8f626184
            while (true) {
                int32_t str = *(int32_t *)(v7 + (int32_t)&g2); // 0x8f626188
                int32_t str2 = utag_shortnameof(v2, v1); // 0x8f62618c
                v1 = str2;
                if (strcmp((char *)str, (char *)str2) != 0) {
                    int32_t v8 = v6 + 4; // 0x8f6261a4
                    v6 = v8;
                    if (v8 == 24) {
                        int32_t str3 = utag_shortnameof(v2, v1); // 0x8f6261b4
                        int32_t result; // 0x8f6261dc
                        if (strcmp("console", (char *)str3) == 0) {
                            // 0x8f6261cc
                            result = secure_allow_console(0, str3, g8, v3) != 0;
                            // branch -> 0x8f6261d8
                        } else {
                            // 0x8f6261b0
                            result = v5;
                            // branch -> 0x8f6261d8
                        }
                        // 0x8f6261d8
                        if (v3 != (int32_t)g4) {
                            // 0x8f6261ec
                            __stack_chk_fail();
                            // branch -> 0x8f6261f0
                        }
                        // 0x8f6261f0
                        return result;
                    }
                    // 0x8f6261a4
                    v7 = v8;
                    // branch -> 0x8f626184
                    continue;
                }
                // 0x8f626168
                // branch -> 0x8f6261d8
                // 0x8f6261d8
                if (v3 != (int32_t)g4) {
                    // 0x8f6261ec
                    __stack_chk_fail();
                    // branch -> 0x8f6261f0
                }
                // 0x8f6261f0
                return 1;
            }
        }
    }
    // 0x8f626168
    // branch -> 0x8f6261d8
    // 0x8f6261d8
    if (v3 != (int32_t)g4) {
        // 0x8f6261ec
        __stack_chk_fail();
        // branch -> 0x8f6261f0
    }
    // 0x8f6261f0
    return 1;
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
