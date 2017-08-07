//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t allocate_sp_block(int32_t * a1, int32_t a2, uint32_t a3, int32_t a4);
int32_t clear_sparse_data_list(int32_t a1, int32_t a2);
int32_t create_sp_block(int32_t a1, int32_t a2);
int32_t flush_sp_header(void);
int32_t free_sparse_data(char * a1, int32_t a2);
int32_t get_entry_index_by_name(char * str, int32_t a2, int32_t a3);
int32_t get_first_sparse_data(int32_t a1, int32_t a2, int32_t a3);
int32_t get_last_sparse_data(int32_t a1, int32_t a2, int32_t a3);
int32_t get_next_sparse_data(int32_t a1, int32_t a2, int32_t a3);
int32_t get_output_block_count(int32_t a1, int32_t a2, int32_t a3);
int32_t get_prev_sparse_data(int32_t a1, int32_t a2, int32_t a3);
int32_t init_free_blocks(void);
int32_t init_sp_partition(char * a1, int32_t a2);
int32_t is_sparse_image(int32_t * a1, int32_t a2, int32_t a3);
int32_t move_to_sparse_data(int32_t a1, int32_t result, int32_t a3);
int32_t remove_sparse_data(int32_t a1, int32_t a2);
int32_t speedo_find(void);
int32_t speedo_start(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g18 = 0; // R0
int32_t g19 = 0; // R1
int32_t g20 = 0; // R2
int32_t g21 = 0; // R3
int32_t g22 = 0; // R4
int32_t g23 = 0; // R5
int32_t g24 = 0; // R6
int32_t g25 = 0; // R7
int32_t g26 = 0; // R8
int32_t g1 = 1; // 0x8f6ac0f0
int32_t g2 = 0; // 0x8f710c38
int32_t g3 = 0; // 0x8f710c3c
int32_t g4 = 0; // 0x8f710c40
int32_t g5 = 0; // 0x8f710c44
char * g6; // 0x8f710c48
int32_t g7 = 0; // 0x8f710c50
int32_t g8 = 0; // 0x8f710c60
int32_t g9 = 0; // 0x8f710c64
int32_t g10 = 0; // 0x8f710c68
char * g11; // 0x8f710c70
int32_t g12 = 0; // 0x8f710e48
int32_t g13 = 0; // 0x8f710e78
int32_t g14 = 0; // 0x8f710e7c
int32_t g15 = 0; // 0x8f710e80
int32_t g16 = 0; // 0x8f710e84
int32_t g17 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f677dd8 - 0x8f677f03
int32_t speedo_start(int32_t a1, int32_t a2, int32_t a3) {
    // 0x8f677dd8
    g18 = a1;
    g19 = a2;
    int32_t v1 = g22; // 0x8f677dd8
    int32_t v2 = g24; // 0x8f677dd8
    int32_t v3 = g25; // 0x8f677dd8
    g25 = a1;
    g24 = &g17;
    g22 = &g1;
    int32_t v4 = g17;
    int32_t v5 = speedo_find(); // R0
    int32_t v6 = g1 + 1; // 0x8f677df8
    int32_t v7 = v6; // R3
    *(int32_t *)g22 = v6;
    int32_t v8 = v5; // 0x8f677e04
    int32_t v9 = v8; // R5
    int32_t v10 = v8; // 0x8f677eb42
    int32_t v11 = v8; // 0x8f677e10
    if (v7 == 1) {
        // 0x8f677e0c
        v10 = function_8f619448(v8);
        v11 = v9;
        // branch -> 0x8f677e10
    }
    // 0x8f677e10
    int32_t v12; // 0x8f677ec0
    if (v11 != 0) {
        // 0x8f677eb4
        *(int32_t *)(v9 + 40) = get_timestamp(v10, g19, g20, v7);
        v12 = g1 - 1;
        *(int32_t *)g22 = v12;
        if (v12 == 0) {
            // 0x8f677ed0
            function_8f619438();
            // branch -> 0x8f677ed8
        }
        // 0x8f677ed8
        if (v4 != g17) {
            // 0x8f677ee8
            __stack_chk_fail();
            // branch -> 0x8f677eec
        }
        // 0x8f677eec
        return 0;
    }
    char * mem = calloc(56, 1); // 0x8f677e20
    int32_t v13 = (int32_t)mem; // 0x8f677e20_5
    v9 = v13;
    int32_t result;
    if (mem == NULL) {
        // 0x8f677e2c
        int32_t v14;
        print_log(-1, (int32_t)"Error: out of memory\n", g20, v7, a1, v4, a3, v1, g23, v2, v3, 0, v14);
        int32_t v15 = g1 - 1; // 0x8f677e3c
        *(int32_t *)g22 = v15;
        if (v15 == 0) {
            // 0x8f677e4c
            function_8f619438();
            result = -1;
            // branch -> 0x8f677ed8
        } else {
            result = -1;
        }
    } else {
        // 0x8f677e54
        g19 = g25;
        v5 = strlcat(v13 + 8, g25, 31, v7, a1, v4, a3, v1, g23, v2, v3, 0);
        int32_t v16 = g1 + 1; // 0x8f677e68
        *(int32_t *)g22 = v16;
        if (v16 == 1) {
            // 0x8f677e78
            v5 = function_8f619448(v5);
            // branch -> 0x8f677e7c
        }
        // 0x8f677e7c
        v7 = &g15;
        int32_t v17 = g15;
        g20 = v17;
        g15 = v9;
        *(int32_t *)v9 = v17;
        *(int32_t *)(v9 + 4) = v7;
        *(int32_t *)(g20 + 4) = v9;
        int32_t v18 = g1 - 1; // 0x8f677e94
        v7 = v18;
        *(int32_t *)g22 = v18;
        int32_t v19; // 0x8f677eb4
        if (v7 == 0) {
            // 0x8f677ea4
            v19 = function_8f619438();
            // branch -> 0x8f677eb4
        } else {
            // 0x8f677e7c
            v19 = v5;
            // branch -> 0x8f677eb4
        }
        // 0x8f677eb4
        *(int32_t *)(v9 + 40) = get_timestamp(v19, g19, g20, v7);
        v12 = g1 - 1;
        *(int32_t *)g22 = v12;
        if (v12 == 0) {
            // 0x8f677ed0
            function_8f619438();
            result = 0;
            // branch -> 0x8f677ed8
        } else {
            result = 0;
        }
    }
    // 0x8f677ed8
    if (v4 != g17) {
        // 0x8f677ee8
        __stack_chk_fail();
        // branch -> 0x8f677eec
    }
    // 0x8f677eec
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * calloc(size_t nmemb, size_t size);
// uLong crc32(uLong crc, const Bytef * buf, uInt len);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memset(void * s, int c, size_t n);
// int strncmp(const char * s1, const char * s2, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 18
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:53:38
