//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t _fdt_add_property(int32_t a1, int32_t a2, char * a3, int32_t a4);
int32_t _fdt_blocks_misordered(int32_t a1, int32_t a2, int32_t a3);
int32_t _fdt_splice(void);
int32_t _fdt_splice_struct(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t _nextprop(int32_t a1, int32_t result2);
int32_t copyrect24(int32_t * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);
int32_t fdt32_to_cpu_100(int32_t a1, int32_t a2, int32_t a3);
int32_t fdt32_to_cpu_101(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t fdt32_to_cpu_99(int32_t a1, int32_t a2, int32_t a3);
int32_t fdt64_to_cpu(int32_t a1, int32_t a2);
int32_t fdt_check_header(int32_t * a1, int32_t a2, int32_t a3);
int32_t fdt_string(int32_t a1, int32_t a2);
int32_t fillrect24(int32_t * a1, int32_t a2, int32_t a3, uint32_t a4, int32_t a5);
void function_8f649c50(char * a1, int32_t a2);
void function_8f64a450(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t gfx_fillrect(int32_t a1, uint32_t a2, uint32_t a3, int32_t a4, int32_t a5);
int32_t heap_alloc(uint32_t a1, uint32_t a2);
int32_t heap_insert_free_chunk(int32_t * a1, int32_t a2);
int32_t hexval(int32_t a1);
int32_t longlong_to_string_constprop_0(int32_t a1, int32_t a2, int64_t a3, int32_t a4);
int32_t putpixel16(int32_t * a1, int32_t a2, int32_t a3, uint32_t a4);
int32_t putpixel24(int32_t * a1, uint32_t a2, uint32_t a3);

// --------------------- Global Variables ---------------------

int32_t g5 = 0; // LR
int32_t g6 = 0; // R0
int32_t g7 = 0; // R1
int32_t g8 = 0; // R10
int32_t g9 = 0; // R11
int32_t g10 = 0; // R2
int32_t g11 = 0; // R3
int32_t g12 = 0; // R4
int32_t g13 = 0; // R5
int32_t g14 = 0; // R6
int32_t g15 = 0; // R7
int32_t g16 = 0; // R8
int32_t g17 = 0; // R9
int32_t g1 = 1; // 0x8f6ac0f0
int32_t g2 = 0; // 0x8f6e0bf0
int32_t g3 = 0; // 0x8f6e0bf4
int32_t g4 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f64c7c8 - 0x8f64c873
int32_t _fdt_blocks_misordered(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g4;
    uint32_t v2 = fdt32_to_cpu_101(*(int32_t *)(a1 + 16), a2, a3, v1, a1); // 0x8f64c7e8
    if (v2 < 40) {
        // 0x8f64c850
        // branch -> 0x8f64c854
        // 0x8f64c854
        if (v1 != g4) {
            // 0x8f64c864
            __stack_chk_fail();
            // branch -> 0x8f64c868
        }
        // 0x8f64c868
        return 1;
    }
    uint32_t v3 = fdt32_to_cpu_101(*(int32_t *)(a1 + 8), a2, a3, v1, a1); // 0x8f64c800
    if (v3 < a2 + v2) {
        // 0x8f64c850
        // branch -> 0x8f64c854
        // 0x8f64c854
        if (v1 != g4) {
            // 0x8f64c864
            __stack_chk_fail();
            // branch -> 0x8f64c868
        }
        // 0x8f64c868
        return 1;
    }
    int32_t v4 = fdt32_to_cpu_101(*(int32_t *)(a1 + 12), a2, a3, v1, a1); // 0x8f64c818
    if (v4 < a3 + v3) {
        // 0x8f64c850
        // branch -> 0x8f64c854
        // 0x8f64c854
        if (v1 != g4) {
            // 0x8f64c864
            __stack_chk_fail();
            // branch -> 0x8f64c868
        }
        // 0x8f64c868
        return 1;
    }
    uint32_t v5 = fdt32_to_cpu_101(*(int32_t *)(a1 + 4), a2, a3, v1, a1); // 0x8f64c82c
    int32_t v6 = v4 + fdt32_to_cpu_101(*(int32_t *)(a1 + 32), a2, a3, v1, a1); // 0x8f64c83c
    int32_t result = v6; // R0
    int32_t v7 = v6; // 0x8f64c86c_22
    if (v5 < v6) {
        // if_8f64c844_0_true
        result = 1;
        v7 = 1;
        // branch -> 0x8f64c854
    }
    // 0x8f64c854
    if (v1 != g4) {
        // 0x8f64c864
        __stack_chk_fail();
        // branch -> 0x8f64c868
    } else {
        result = v7;
    }
    // 0x8f64c868
    return result;
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// int isdigit(int c);
// int isxdigit(int c);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// size_t strlen(const char * s);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 22
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:49:11
