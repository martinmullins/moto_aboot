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

// Address range: 0x8f649098 - 0x8f64923b
int32_t copyrect24(int32_t * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6) {
    int32_t v1 = (int32_t)a1;
    int32_t v2 = a5; // R4
    int32_t v3 = g4;
    int32_t v4 = *(int32_t *)(v1 + 24); // 0x8f6490b8
    int32_t v5 = a6; // 0x8f649148
    int32_t v6;
    int32_t v7 = v6; // 0x8f649148
    int32_t v8 = a2; // 0x8f649140
    int32_t v9 = a3; // 0x8f649140
    if (*(int32_t *)(v1 + 8) != 0) {
        uint32_t v10 = *(int32_t *)(v1 + 16); // 0x8f6490c0
        int32_t result; // 0x8f64911c
        if (a4 + a2 > v10) {
            // 0x8f649108
            result = print_log(-1, (int32_t)"%s width/height checking fails in gfx!", (int32_t)"copyrect24", v3, g12, g13, g14, g15, g16, g17, g8, g9, g5);
            return result;
        }
        uint32_t v11 = *(int32_t *)(v1 + 20); // 0x8f6490d0
        if (a5 + a3 > v11 || a6 + a4 > v10 || v6 + a5 > v11) {
            // 0x8f649108
            result = print_log(-1, (int32_t)"%s width/height checking fails in gfx!", (int32_t)"copyrect24", v3, g12, g13, g14, g15, g16, g17, g8, g9, g5);
            return result;
        }
        // 0x8f649120
        v5 = v10 - a6 - a4;
        v7 = v11 - v6 - a5;
        v8 = v10 - a2 - a4;
        v9 = v11 - a3 - a5;
        // branch -> 0x8f649140
    }
    int32_t v12 = *a1; // 0x8f649144
    int32_t v13 = v12; // R0
    int32_t v14 = v4 - a4; // 0x8f64914c
    int32_t v15 = 3 * (v9 * v4 + v8) + v12; // 0x8f649158
    int32_t v16 = v15; // R7
    int32_t v17 = v12 + 3 * (v7 * v4 + v5); // 0x8f649164
    int32_t v18 = v17; // R6
    int32_t v19; // R9
    int32_t result2; // 0x8f64922c_2
    int32_t v20; // 0x8f6491c4
    if (v17 >= v15) {
        int32_t v21 = 3 * v14; // 0x8f649170
        int32_t v22 = 3 * a4; // 0x8f649174
        v20 = v22;
        v19 = 0;
        if (a5 == 0) {
            // 0x8f649214
            if (v3 != g4) {
                // 0x8f649224
                __stack_chk_fail();
                result2 = v13;
                // branch -> 0x8f649228
            } else {
                result2 = v12;
            }
            // 0x8f649228
            return result2;
        }
        int32_t v23 = 0; // 0x8f6491b046
        int32_t v24 = v21; // 0x8f6491a844
        int32_t v25;
        while (true) {
            // 0x8f649184
            v13 = v17;
            int32_t v26 = a5; // 0x8f64917c
            int32_t v27 = v23; // 0x8f6491b0
            int32_t v28 = v24; // 0x8f6491a8
            int32_t v29 = 0; // 0x8f6491881638
            v25 = v17;
            int32_t v30 = v15;
            if (v22 != 0) {
                memcpy((char *)v17, (char *)v15, 3);
                int32_t v31 = 3; // 0x8f649188
                int32_t v32 = v16 + v31; // 0x8f64918c
                int32_t v33 = v18 + v31; // 0x8f649190
                v13 = v33;
                while (v31 != v20) {
                    // 0x8f649198
                    memcpy((char *)v33, (char *)v32, 3);
                    v31 += 3;
                    v32 = v16 + v31;
                    v33 = v18 + v31;
                    v13 = v33;
                    // continue -> 0x8f649198
                }
                // 0x8f649188
                v26 = v2;
                v27 = v19;
                v28 = v21;
                v29 = v20;
                v25 = v33;
                v30 = v32;
                // branch -> 0x8f6491a8
            }
            int32_t v34 = v25 + v28; // 0x8f6491a8
            v18 = v34;
            int32_t v35 = v30 + v28; // 0x8f6491ac
            v16 = v35;
            int32_t v36 = v27 + 1; // 0x8f6491b0
            v19 = v36;
            if (v36 == v26) {
                // break -> 0x8f649214
                break;
            }
            a5 = v26;
            v23 = v36;
            v24 = v28;
            v17 = v34;
            v15 = v35;
            v22 = v29;
            // continue -> 0x8f649184
        }
        // 0x8f649214
        if (v3 != g4) {
            // 0x8f649224
            __stack_chk_fail();
            result2 = v13;
            // branch -> 0x8f649228
        } else {
            result2 = v25;
        }
        // 0x8f649228
        return result2;
    }
    int32_t v37 = -3 * v14;
    v20 = 3 * a4;
    v19 = 0;
    int32_t v38 = 3 * (v4 * a5 + a4); // 0x8f6491cc
    int32_t v39 = v15 + v38; // 0x8f6491d0
    v16 = v39;
    int32_t v40 = v17 + v38; // 0x8f6491d4
    v18 = v40;
    if (a5 == 0) {
        // 0x8f649214
        if (v3 != g4) {
            // 0x8f649224
            __stack_chk_fail();
            result2 = v13;
            // branch -> 0x8f649228
        } else {
            result2 = v12;
        }
        // 0x8f649228
        return result2;
    }
    int32_t v41 = a5; // 0x8f6491d860
    int32_t v42 = 0; // 0x8f64920c58
    int32_t v43 = v37; // 0x8f64920456
    int32_t v44;
    while (true) {
        // 0x8f6491e0
        v13 = v40;
        int32_t v45 = v41; // 0x8f6491d8
        int32_t v46 = v42; // 0x8f64920c
        int32_t v47 = v43; // 0x8f649204
        int32_t v48 = 0; // 0x8f6491e4250
        v44 = v40;
        int32_t v49 = v39;
        if (v20 != 0) {
            memcpy((char *)v40, (char *)v39, 3);
            int32_t v50 = 3; // 0x8f6491e4
            int32_t v51 = v16 + v50; // 0x8f6491e8
            int32_t v52 = v18 + v50; // 0x8f6491ec
            v13 = v52;
            while (v50 != v20) {
                // 0x8f6491f4
                memcpy((char *)v52, (char *)v51, 3);
                v50 += 3;
                v51 = v16 + v50;
                v52 = v18 + v50;
                v13 = v52;
                // continue -> 0x8f6491f4
            }
            // 0x8f6491e4
            v45 = v2;
            v46 = v19;
            v47 = v37;
            v48 = v20;
            v44 = v52;
            v49 = v51;
            // branch -> 0x8f649204
        }
        int32_t v53 = v44 + v47; // 0x8f649204
        v18 = v53;
        int32_t v54 = v49 + v47; // 0x8f649208
        v16 = v54;
        int32_t v55 = v46 + 1; // 0x8f64920c
        v19 = v55;
        if (v55 == v45) {
            // break -> 0x8f649214
            break;
        }
        v41 = v45;
        v42 = v55;
        v43 = v47;
        v40 = v53;
        v39 = v54;
        v20 = v48;
        // continue -> 0x8f6491e0
    }
    // 0x8f649214
    if (v3 != g4) {
        // 0x8f649224
        __stack_chk_fail();
        result2 = v13;
        // branch -> 0x8f649228
    } else {
        result2 = v44;
    }
    // 0x8f649228
    return result2;
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
