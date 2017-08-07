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

// Address range: 0x8f6575e8 - 0x8f65770f
int32_t ram_logger_early_init(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = (int32_t)g1;
    int32_t v2 = v1; // R4
    g15 = v1;
    int32_t v3; // R1
    int32_t v4; // R2
    int32_t v5; // R3
    if (strncmp(g1, "MBM_LOGGER", 16) == 0) {
        int32_t * v6 = (int32_t *)(v2 + 48); // 0x8f65761c_0
        *v6 = 0;
        int32_t v7 = get_checksum_constprop_3(v2, (int32_t)"MBM_LOGGER", 16); // 0x8f657628
        *(int32_t *)(v2 + 48) = v7;
        if (*v6 != v7) {
          lab_0x8f6576b0:
            // 0x8f6576b0
            memcpy(g1, "MBM_LOGGER", 16);
            v5 = v1;
            v3 = 0;
            *(int32_t *)(v1 + 16) = 1;
            v4 = 512;
            *(int32_t *)(v5 + 24) = v3;
            *(int32_t *)(v5 + 20) = v4;
            *(int32_t *)(v5 + 28) = v3;
            *(int32_t *)(v5 + 32) = v4;
            *(int32_t *)(v5 + 36) = v4;
            // branch -> 0x8f657638
        }
      lab_0x8f657638:
        // 0x8f657638
        v2 = v1;
        memset((char *)(g15 + 512), 0, 0x1ffe00);
        memcpy((char *)(g15 + 512), "\x40\xf8\x7d\x86\x30\xff\x6a\x8f\xf3\x47\x2d\xe9", 2496);
        int32_t v8 = v2; // 0x8f657664
        int32_t * v9 = (int32_t *)(v8 + 28); // 0x8f657664_0
        *v9 = *v9 + 2496;
        int32_t * v10 = (int32_t *)(v2 + 36); // 0x8f657674_0
        *v10 = *v10 + 2496;
        *(int32_t *)(v2 + 48) = 0;
        int32_t result = get_checksum_constprop_3(v8, (int32_t)"\x40\xf8\x7d\x86\x30\xff\x6a\x8f\xf3\x47\x2d\xe9", 2496); // 0x8f657688
        *(int32_t *)(v2 + 48) = result;
        g6 = 1;
        if (g19 == g19) {
            // 0x8f6576ec
            return result;
        }
      lab_0x8f6576ac:
        // 0x8f6576ac
        __stack_chk_fail();
        // branch -> 0x8f6576b0
        goto lab_0x8f6576b0;
    } else {
        // 0x8f6576b0
        memcpy(g1, "MBM_LOGGER", 16);
        v5 = v1;
        v3 = 0;
        *(int32_t *)(v1 + 16) = 1;
        v4 = 512;
        *(int32_t *)(v5 + 24) = v3;
        *(int32_t *)(v5 + 20) = v4;
        *(int32_t *)(v5 + 28) = v3;
        *(int32_t *)(v5 + 32) = v4;
        *(int32_t *)(v5 + 36) = v4;
        // branch -> 0x8f657638
        goto lab_0x8f657638;
    }
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