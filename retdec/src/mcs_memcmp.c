//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ----------------- Float Types Definitions ------------------

typedef float float32_t;

// ------------------- Function Prototypes --------------------

int32_t confession_get_buffer(int32_t a1, int32_t a2, int32_t a3);
int32_t confession_get_chars(int32_t a1, int32_t a2, int32_t a3);
int32_t decode_hw_type(char * a1, int32_t a2, int32_t a3);
int32_t display_clear_screen(void);
int32_t display_draw_image(char * str, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t display_draw_image_center(char * str, uint32_t a2, uint32_t a3, int32_t a4);
int32_t display_draw_image_scr_center(char * str, uint32_t a2, uint32_t a3);
void function_8f64aacc(void);
void function_8f64ab04(int32_t a1, int32_t a2, int32_t a3);
int32_t get_hw_rev(int32_t a1, int32_t a2, int32_t a3);
int32_t get_hw_sku(int32_t a1, int32_t a2, int32_t a3);
int32_t get_last_kmsg(int32_t * a1, int32_t a2);
int32_t gfx_create_surface_from_display(int32_t * a1);
int32_t gfx_surface_destroy(char * a1, int32_t a2, int32_t a3, int32_t a4);
char * hwrev_from_utag(void);
int32_t load_and_validate_oem_image(void);
char * lz4_decode(char * a1, uint32_t a2, int32_t a3, uint32_t a4);
int32_t mcs_DER_decodeBoolean(char * a1, int16_t a2, int32_t a3);
int32_t mcs_DER_fieldLengths(int32_t a1, int16_t * a2);
int32_t mcs_memcmp(int32_t a1, int32_t a2, int32_t a3);
int32_t mcs_memset(char * a1, char a2, int32_t a3);
char * md5_process(int32_t a1, char * a2);
int32_t mdp_dma_on(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mdp_dsi_cmd_off(int32_t a1, int32_t a2);
int32_t SecAESEncrypt(char * a1, int32_t a2, int32_t a3);
int32_t SecGetRndData(char * a1, unsigned char a2);
int32_t shutdown_modem(char * a1, int32_t a2, int32_t a3);
int32_t target_display_panel_node(char * a1, int32_t a2, int32_t a3);
int32_t type_atoi_105(char * str, int32_t a2, int32_t a3);
int32_t validate_boot_objects(int32_t a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g16 = 0; // LR
int32_t g17 = 0; // R0
int32_t g18 = 0; // R1
int32_t g19 = 0; // R10
int32_t g20 = 0; // R11
int32_t g21 = 0; // R2
int32_t g22 = 0; // R3
int32_t g23 = 0; // R4
int32_t g24 = 0; // R5
int32_t g25 = 0; // R6
int32_t g26 = 0; // R7
int32_t g27 = 0; // R8
int32_t g28 = 0; // R9
int32_t g1 = -0x16d2b010; // 0x8f658270
char * g2 = "\x01"; // 0x8f6a4214
char * g3 = "\x01"; // 0x8f6a4258
int32_t g4 = -1; // 0x8f6ac1f4
int32_t g5 = 2; // 0x8f6afe0c
char * g6; // 0x8f6b7990
char * g7; // 0x8f6b79a0
int32_t g8 = 0; // 0x8f6b7c38
int32_t g9 = 0; // 0x8f6e0c34
int32_t g10 = 0; // 0x8f6e0c38
int32_t g11 = 0; // 0x8f6e0c3c
char * g12; // 0x8f6e0c40
int32_t g13 = 0; // 0x8f6e12ec
int32_t g14 = 0; // 0x8f6e12f0
int32_t g15 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f6672a0 - 0x8f667303
int32_t mcs_memcmp(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = 0; // 0x8f6672d8
    int32_t v2 = (bool)(a3 != 0);
    // branch -> after_if_8f6672c8_0
    int32_t result; // 0x8f6672dc
    while (true) {
        // after_if_8f6672c8_0
        if (v2 == 0) {
            // 0x8f6672f8
            return 0;
        }
        char v3 = *(char *)(v1 + a1); // 0x8f6672d0
        char v4 = *(char *)(v1 + a2); // 0x8f6672d4
        int32_t v5 = v1 + 1; // 0x8f6672d8
        result = (int32_t)v3 - (int32_t)v4;
        if (v3 != v4) {
            // break -> after_if_8f6672c8_0.thread
            break;
        }
        v1 = v5;
        v2 = v5 == a3 ? a3 - v5 : 1;
        // continue -> after_if_8f6672c8_0
    }
    // after_if_8f6672c8_0.thread
    // branch -> 0x8f6672f8
    // 0x8f6672f8
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// int atoi(const char * nptr);
// void free(void * ptr);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);

// --------------- Instruction-Idiom Functions ----------------

// float32_t fabsf(float32_t a1);
// int32_t llvm_bswap_i32(int32_t a1);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:12:15
