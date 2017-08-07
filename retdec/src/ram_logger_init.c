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

int32_t append_log(char * a1, int32_t a2);
int32_t flush_all_ram_log(void);
int32_t flush_ram_logs(uint32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t freeset(int32_t a1, int32_t * a2, int32_t a3, int32_t a4);
int32_t get_boot_seq(int32_t a1, int32_t a2, int32_t a3);
int32_t get_checksum_constprop_3(int32_t a1, int32_t a2, int32_t a3);
int32_t get_first_ram_log(int32_t a1, int32_t a2, int32_t a3);
int32_t get_log_line_from_buffer(void);
int32_t get_next_ram_log(int32_t a1, int32_t a2);
int32_t md5_init(int32_t * a1, int32_t result, int32_t a3);
char * md5_process(int32_t a1, char * a2);
int32_t p_b_coll_elem(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t p_b_symbol(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t p_count(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t ram_logger_early_init(int32_t a1, int32_t a2, int32_t a3);
int32_t ram_logger_init(int32_t a1, int32_t a2);
int32_t ram_logger_output(char * a1);
int32_t seterr(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);

// --------------------- Global Variables ---------------------

int32_t g20 = 0; // LR
int32_t g21 = 0; // R0
int32_t g22 = 0; // R1
int32_t g23 = 0; // R10
int32_t g24 = 0; // R11
int32_t g25 = 0; // R2
int32_t g26 = 0; // R4
int32_t g27 = 0; // R5
int32_t g28 = 0; // R6
int32_t g29 = 0; // R7
int32_t g30 = 0; // R8
int32_t g31 = 0; // R9
char * g1; // 0x8f6576f8
char * g2; // 0x8f657e58
char * g3 = "\x01"; // 0x8f6a4258
char (*g4)[4] = "SOH"; // 0x8f6a4524
char * g5 = "\x01"; // 0x8f6aff30
char g6 = 0; // 0x8f6aff5c
char * g7 = "\x01"; // 0x8f6aff80
char * g8; // 0x8f6ed810
int32_t g9 = 0; // 0x8f6ed814
int32_t g10 = 0; // 0x8f6ed818
int64_t g11 = 0; // 0x8f6ed820
int32_t g12 = 0; // 0x8f6ed824
int32_t g13 = 0; // 0x8f6ed828
int32_t g14 = 0; // 0x8f6ed82c
int32_t g15 = 0; // 0x8f6ed830
char * g16; // 0x8f6ed834
int32_t g17 = 0; // 0x8f6ed838
int32_t g18 = 0; // 0x8f70da8d
char * g19; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f657bb0 - 0x8f657d43
int32_t ram_logger_init(int32_t a1, int32_t a2) {
    int32_t v1 = g26; // 0x8f657bb0
    int32_t v2 = g27; // 0x8f657bb0
    int32_t v3 = g28; // 0x8f657bb0
    int32_t v4 = g29; // 0x8f657bb0
    int32_t v5 = g30; // 0x8f657bb0
    int32_t v6 = g20; // 0x8f657bb0
    char * v7 = g19;
    int32_t v8 = (int32_t)v7;
    char * v9 = get_partition_by_name((int32_t)"logs", a2, g25, v8, a1, v8, v1, v2, v3, v4, v5); // 0x8f657bc4
    int32_t v10 = (int32_t)v9; // 0x8f657bc4_12
    g21 = v10;
    if (v9 == NULL) {
        // 0x8f657d08
        if (v7 == g19) {
            // 0x8f657d1c
            return g21;
        }
    } else {
        char v11 = *(char *)(v10 + 33); // 0x8f657bd0
        char v12 = *(char *)(v10 + 32); // 0x8f657bd4
        char v13 = *(char *)(v10 + 41); // 0x8f657bd8
        char v14 = *(char *)(v10 + 34); // 0x8f657be0
        char v15 = *(char *)(v10 + 40); // 0x8f657be4
        int32_t v16 = 0x10000 * (int32_t)v14 | (int32_t)v12 | 256 * (int32_t)v11; // 0x8f657bec
        char v17 = *(char *)(v10 + 42); // 0x8f657bf8
        uint32_t v18 = 0x1000000 * (int32_t)*(char *)(v10 + 35) | v16; // 0x8f657c00
        char v19 = *(char *)(v10 + 37); // 0x8f657c04
        char v20 = *(char *)(v10 + 36); // 0x8f657c08
        char v21 = *(char *)(v10 + 43); // 0x8f657c10
        char v22 = *(char *)(v10 + 38); // 0x8f657c18
        int32_t v23 = 0x10000 * (int32_t)v22 | (int32_t)v20 | 256 * (int32_t)v19; // 0x8f657c1c
        int32_t v24 = 0x1000000 * (int32_t)v21 | 0x10000 * (int32_t)v17 | (int32_t)v15 | 256 * (int32_t)v13; // 0x8f657c28
        char v25 = *(char *)(v10 + 45); // 0x8f657c2c
        uint32_t v26 = v24 + 1; // 0x8f657c30
        char v27 = *(char *)(v10 + 44); // 0x8f657c34
        char v28 = *(char *)(v10 + 46); // 0x8f657c3c
        uint32_t v29 = v26 - v18; // 0x8f657c50
        int32_t v30 = v18 / 0x800000 | 512 * v23; // 0x8f657c5c
        int32_t v31 = 512 * v16; // R2
        g14 = v30;
        int32_t v32 = 512 * ((int32_t)(v24 == -1) - v23 + (int32_t)(v26 < v18) + (0x10000 * (int32_t)v28 | (int32_t)v27 | 256 * (int32_t)v25)) | v29 / 0x800000; // R1
        *(int32_t *)(int32_t)&g11 = 512 * v29;
        g12 = v32;
        *(int32_t *)(int32_t)&g13 = v31;
        int32_t v33 = is_always_on("ram_logger", v32, v31, v30); // 0x8f657c84
        g21 = v33;
        if (v33 == 0) {
            int32_t v34 = is_validation_enabled(NULL, v32, v31, v30); // 0x8f657cb8
            g21 = v34;
            if (v34 != 0) {
                int32_t v35 = g15;
                g6 = v33;
                int32_t v36 = v35; // 0x8f657cf0
                if (*(int32_t *)(v35 + 16) != 1) {
                    // 0x8f657ce0
                    v32 = g14;
                    int32_t v37 = g11;
                    v31 = v37;
                    int32_t v38;
                    generic_mmc_erase_logical(g13, g14, v37, g12, a1, v8, v1, v2, v3, v4, v5, v6, v38, 0, 0, 0, 0, 0);
                    v36 = v35;
                    // branch -> 0x8f657cec
                }
                int32_t v39 = 0; // R3
                *(int32_t *)(v36 + 16) = 0;
                *(int32_t *)(v35 + 28) = v39;
                *(int32_t *)(v35 + 48) = v39;
                int32_t v40 = get_checksum_constprop_3(v36, v32, v31); // 0x8f657d00
                g21 = v40;
                *(int32_t *)(v35 + 48) = v40;
                // branch -> 0x8f657d08
                // 0x8f657d08
                if (v7 != g19) {
                    // 0x8f657d18
                    __stack_chk_fail();
                    // branch -> 0x8f657d1c
                }
                // 0x8f657d1c
                return g21;
            }
        }
        // 0x8f657c90
        *(char *)&g7 = 0;
        if (v7 == g19) {
            // 0x8f657cac
            g26 = v1;
            g27 = v2;
            g28 = v3;
            g29 = v4;
            g30 = v5;
            g20 = v6;
            return flush_all_ram_log();
        }
    }
    // 0x8f657d18
    __stack_chk_fail();
    // branch -> 0x8f657d1c
    // 0x8f657d1c
    return g21;
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// int isdigit(int c);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 18
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:51:02
