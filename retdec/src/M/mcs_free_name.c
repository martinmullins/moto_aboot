//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t free_context(int32_t a1, int32_t a2, int32_t a3);
void function_8f660c54(int32_t * a1, char * a2, int32_t a3, int32_t * a4);
int32_t lbackref(int32_t * a1, char * a2, int32_t a3, int32_t a4, uint32_t a5);
int32_t ldissect(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t lslow(int32_t * a1, char * a2, int32_t a3, int32_t a4);
int32_t mcs_ctx_init_rsa_sig(char a1, char a2, char a3, int32_t a4, uint32_t a5);
int32_t mcs_free_name(char * a1, int32_t a2);
int32_t mcs_rsa_add_cipher_pad_isra_1(int32_t a1, char * a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, uint32_t a7, int32_t a8);
int32_t mcs_rsa_do_rsa(char * a1, int32_t a2, int32_t a3, uint32_t a4);
int32_t mcs_rsa_mgf_isra_0(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mcs_rsa_remove_cipher_pad_isra_3(char * a1, int32_t * a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);
int32_t mcs_verify_cert_chain(int32_t a1, int16_t * a2);
int32_t mcs_X509Certificate_decodeExtension(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mcs_X509Certificate_decodeName(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t read_parser_data(int32_t a1);
int32_t read_verify_data(int32_t a1);
int32_t sbackref(int32_t * a1, char * a2, int32_t a3, int32_t a4, uint32_t a5);
int32_t sdissect(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t sslow(int32_t * a1, char * a2, int32_t a3, int32_t a4);

// --------------------- Global Variables ---------------------

int32_t g6 = 0; // LR
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
int32_t g1 = -0x79b779d6; // 0x8f6a69c9
int32_t g2 = 0x2b0b0455; // 0x8f6a69d2
int32_t g3 = 0x20494b50; // 0x8f6a69dd
int32_t g4 = 0x67251d55; // 0x8f6a69e7
int32_t g5 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f663f60 - 0x8f663ffb
int32_t mcs_free_name(char * a1, int32_t a2) {
    int32_t result = (int32_t)a1;
    g7 = a2;
    int32_t v1 = g12; // 0x8f663f64
    int32_t v2 = g14; // 0x8f663f64
    int32_t v3 = g15; // 0x8f663f64
    int32_t v4 = g16; // 0x8f663f64
    g14 = result;
    g16 = a2;
    g15 = &g5;
    if (a1 == NULL) {
        // 0x8f663ff0
        g12 = v1;
        g14 = v2;
        g15 = v3;
        g16 = v4;
        return 0;
    }
    // 0x8f663f80
    g12 = result;
    if (a2 != 0) {
        // 0x8f663fcc
        g12 = v1;
        g14 = v2;
        g15 = v3;
        g16 = v4;
        free(a1);
        return result;
    }
    int32_t v5 = *(int32_t *)(result + 4); // 0x8f663f9021
    int32_t result2 = v5;
    if (v5 != 0) {
        // 0x8f663f9c
        free((char *)result2);
        return result2;
    }
    while (true) {
        int32_t v6 = *(int32_t *)(result + 16); // 0x8f663fa0
        int32_t result3 = v6; // R0
        if (v6 != 0) {
            // 0x8f663fac
            free((char *)v6);
            return result3;
        }
        int32_t v7 = result + 24; // 0x8f663fb4
        g12 = v7;
        int32_t v8 = *(int32_t *)(result + 28); // 0x8f663f90
        if (v8 != 0) {
            result2 = v8;
            // break -> 0x8f663f9c
            break;
        }
        result = v7;
        // continue -> 0x8f663fa0
    }
    // 0x8f663f9c
    free((char *)result2);
    return result2;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// int isalnum(int c);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// size_t strlen(const char * s);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 19
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:51:38