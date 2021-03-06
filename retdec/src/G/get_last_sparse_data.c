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

// Address range: 0x8f67629c - 0x8f6762ff
int32_t get_last_sparse_data(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g17;
    if (a1 == 0) {
        // 0x8f6762e0
        if (v1 != g17) {
            // 0x8f6762f0
            __stack_chk_fail();
            // branch -> 0x8f6762f4
        }
        // 0x8f6762f4
        return 0;
    }
    int32_t v2 = a1 - 20; // 0x8f6762c0
    int32_t v3 = *(int32_t *)v2; // 0x8f6762c0
    int32_t result;
    if (v3 == v2) {
        // after_if_8f6762cc_0.thread
        *(int32_t *)(a1 - 4) = 0;
        result = 0;
        // branch -> 0x8f6762e0
    } else {
        // after_if_8f6762cc_0
        *(int32_t *)(a1 - 4) = v3;
        if (v3 != 0) {
            // 0x8f6762dc
            result = v3 + 8;
            // branch -> 0x8f6762e0
        } else {
            result = 0;
        }
    }
    // 0x8f6762e0
    if (v1 != g17) {
        // 0x8f6762f0
        __stack_chk_fail();
        // branch -> 0x8f6762f4
    }
    // 0x8f6762f4
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
