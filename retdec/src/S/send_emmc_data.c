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

// Address range: 0x8f625c6c - 0x8f625e1b
int32_t send_emmc_data(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = a3; // R4
    int64_t v2 = g4;
    int32_t v3 = v2;
    int32_t str;
    int32_t v4 = &str; // 0x8f625c94_0
    char * v5 = memalign(64, 0x8000); // 0x8f625c9c
    int32_t v6 = (int32_t)v5; // R6
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    if (v5 == NULL) {
        // 0x8f625ca8
        print_log(-1, (int32_t)"Error: out of memory!\n", a3, v3, v9, v8, a1, a2, 0, v7, 0, 0, 0);
        // branch -> 0x8f625dec
        // 0x8f625dec
        g7 = &g4;
        g8 = v3;
        v10 = g4;
        g9 = v10;
        if (v3 != v10) {
            // 0x8f625e04
            __stack_chk_fail();
            // branch -> 0x8f625e08
        }
        // 0x8f625e08
        return -1;
    }
    char * v11 = memalign(64, 0x8000); // 0x8f625cc4
    int32_t v12 = (int32_t)v11; // R9
    int32_t v13; // 0x8f625ddc
    if (v11 == NULL) {
        // 0x8f625cd0
        print_log(-1, (int32_t)"Error: out of memory!\n", a3, v3, v9, v8, a1, a2, 0, v7, 0, 0, 0);
        // branch -> 0x8f625dd0
    } else {
        int32_t v14 = v1; // 0x8f625ce8
        int32_t v15 = a4; // 0x8f625ce8
        snprintf((char *)&str, 64, "DATA%016llx", v2);
        int32_t v16 = strnlen((char *)&str, 64); // 0x8f625cfc
        if (fboot_usb_write(v4, v16, (int32_t)"DATA%016llx", v3, v14, v15, a1, a2, 0, v7, 0, 0, 0, 0) >= 0) {
            int32_t v17 = v6; // R7
            int32_t result = 0; // R8
            int32_t v18 = a4; // 0x8f625d1c6
            int32_t v19 = v1; // 0x8f625d1c8
            if ((v19 || v18) != 0) {
                int32_t v20 = v6; // 0x8f625d34
                uint32_t v21; // 0x8f625d74
                int32_t v22; // R1
                int32_t v23; // 0x8f625d90
                while (true) {
                    bool v24 = false; // 0x8f625d4c
                    bool v25 = true; // 0x8f625d4c
                    if (v18 == 0) {
                        // if_8f625d28_0_true
                        v24 = v19 == 0x8000;
                        v25 = v19 > 0x7fff;
                        // branch -> after_if_8f625d28_0
                    }
                    int32_t v26 = v19; // R10
                    int32_t v27; // R11
                    int32_t v28; // 0x8f625d4027
                    int32_t v29; // 0x8f625d5425
                    if (v25 && v24 ^ true) {
                        // if_8f625d4c_0_true
                        v26 = 0x8000;
                        v27 = 0;
                        v28 = 0x81ff;
                        v29 = 0x8000;
                        // branch -> after_if_8f625d4c_0
                    } else {
                        // after_if_8f625d38_0.thread29
                        v27 = v18;
                        v28 = v19 + 511;
                        v29 = v19;
                        // branch -> after_if_8f625d4c_0
                    }
                    int32_t v30 = v28 & -512; // 0x8f625d50
                    if (mmc_read(a1, a2, v20, v30, v14, v15, a1, a2, 0, v29, 0, 0, 0) == 0) {
                        // 0x8f625d64
                        if (result != 0) {
                            // 0x8f625dac
                            if (fboot_usb_write_wait(0, a2, v20, v30, v14, v15, a1) <= 0xffffffff) {
                                // 0x8f625dd0
                                // branch -> 0x8f625dd4
                                // 0x8f625dd4
                                free((char *)v6);
                                v13 = v12;
                                if (v13 != 0) {
                                    // 0x8f625de4
                                    free((char *)v13);
                                    // branch -> 0x8f625dec
                                }
                                // 0x8f625dec
                                g7 = &g4;
                                g8 = v3;
                                v10 = g4;
                                g9 = v10;
                                if (v3 != v10) {
                                    // 0x8f625e04
                                    __stack_chk_fail();
                                    // branch -> 0x8f625e08
                                }
                                // 0x8f625e08
                                return -1;
                            }
                        }
                        // 0x8f625d6c
                        v22 = v29;
                        v21 = fboot_usb_write_queue(v17, v29, v20, v30, v14, v15, a1);
                        if (v21 >= 0) {
                            uint32_t v31 = v1; // 0x8f625d84
                            int32_t v32 = v31 - v26; // 0x8f625d84
                            v1 = v32;
                            int32_t v33 = v27; // 0x8f625d88
                            int32_t v34 = a4 - v33 + (int32_t)(v31 < v26); // 0x8f625d88
                            a4 = v34;
                            result = 1;
                            v23 = v26 + a1;
                            int32_t v35 = v33 + a2 + (int32_t)(v23 < a1); // 0x8f625d94
                            int32_t v36 = v17 == v6 ? v12 : v6;
                            v17 = v36;
                            if ((v34 || v32) == 0) {
                                // break -> 0x8f625dc4
                                break;
                            }
                            v20 = v36;
                            v19 = v32;
                            v18 = v34;
                            a1 = v23;
                            a2 = v35;
                            // continue -> 0x8f625d24
                            continue;
                        }
                    }
                    // 0x8f625dd0
                    result = -1;
                    // branch -> 0x8f625dd4
                }
                // 0x8f625dc4
                result = fboot_usb_write_wait(v21, v22, v23, 0, v14, v15, v23) >> 31;
                // branch -> 0x8f625dd4
            }
            // 0x8f625dd4
            free((char *)v6);
            v13 = v12;
            if (v13 != 0) {
                // 0x8f625de4
                free((char *)v13);
                // branch -> 0x8f625dec
            }
            // 0x8f625dec
            g7 = &g4;
            g8 = v3;
            v10 = g4;
            g9 = v10;
            if (v3 != v10) {
                // 0x8f625e04
                __stack_chk_fail();
                // branch -> 0x8f625e08
            }
            // 0x8f625e08
            return result;
        }
    }
    // 0x8f625dd0
    // branch -> 0x8f625dd4
    // 0x8f625dd4
    free((char *)v6);
    v13 = v12;
    if (v13 != 0) {
        // 0x8f625de4
        free((char *)v13);
        // branch -> 0x8f625dec
    }
    // 0x8f625dec
    g7 = &g4;
    g8 = v3;
    v10 = g4;
    g9 = v10;
    if (v3 != v10) {
        // 0x8f625e04
        __stack_chk_fail();
        // branch -> 0x8f625e08
    }
    // 0x8f625e08
    return -1;
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
