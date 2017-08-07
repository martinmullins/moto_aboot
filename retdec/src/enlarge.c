//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <ctype.h>
#include <regex.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ------------------------ Structures ------------------------

struct re_pattern_buffer {
    char * e0;
    int32_t e1;
    int32_t e2;
    int32_t e3;
    char * e4;
    int32_t e5;
    int32_t e6;
    int32_t e7;
    int32_t e8;
    int32_t e9;
    int32_t e10;
    int32_t e11;
    int32_t e12;
    int32_t e13;
};

// ------------------- Function Prototypes --------------------

int32_t doemit(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t dofwd(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t doinsert(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t dupl(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t enlarge(int32_t a1, int32_t a2);
void function_8f65db8c(struct re_pattern_buffer * a1, char * a2, int32_t a3);
int32_t lstep(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t nonnewline(int32_t * a1);
int32_t ordinary(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t othercase(int32_t c, int32_t a2, int32_t a3, int32_t a4);
int32_t p_b_symbol(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t p_bracket(int32_t * a1);
int32_t p_bre(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t p_ere(int32_t * a1, int32_t a2, uint32_t a3);
int32_t repeat(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t sslow(int32_t * a1, char * a2, int32_t a3, int32_t a4);
int32_t sstep(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);

// --------------------- Global Variables ---------------------

int32_t g7 = 0; // LR
int32_t g8 = 0; // R1
int32_t g9 = 0; // R10
int32_t g10 = 0; // R11
int32_t g11 = 0; // R12
int32_t g12 = 0; // R2
int32_t g13 = 0; // R3
int32_t g14 = 0; // R4
int32_t g15 = 0; // R5
int32_t g16 = 0; // R6
int32_t g17 = 0; // R7
int32_t g18 = 0; // R8
int32_t g19 = 0; // R9
bool g1 = false; // flagc
int32_t g2 = 0x65440030; // 0x8f69c66f
int32_t g3 = 0x746e6300; // 0x8f6a4e20
int32_t g4 = 0xa090807; // 0x8f6a4e27
char * g6; // 0x8f7112f4
char * g5[33] = {
    "alpha",
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",
    (char *)&g3,
    "blank",
    " \t",
    (char *)&g3,
    "cntrl",
    (char *)&g4,
    (char *)&g3,
    "digit",
    "0123456789",
    (char *)&g3,
    "graph",
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789",
    (char *)&g3,
    "lower",
    "abcdefghijklmnopqrstuvwxyz",
    (char *)&g3,
    "print",
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789",
    (char *)&g3,
    "punct",
    "!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~",
    (char *)&g3,
    "space",
    "\t\n\v\f\r ",
    (char *)&g3,
    "upper",
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ",
    (char *)&g3,
    "xdigit",
    "0123456789ABCDEFabcdef",
    (char *)&g3
}; // 0x8f6a4f6c

// ------------------------ Functions -------------------------

// Address range: 0x8f65b704 - 0x8f65b7d7
int32_t enlarge(int32_t a1, int32_t a2) {
    int32_t v1 = g14; // 0x8f65b708
    char * v2 = g6;
    int32_t v3 = a2; // 0x8f65b75c
    int32_t v4 = a1; // 0x8f65b758
    int32_t v5;
    char * v6 = (char *)v5;
    if (a1 == 0) {
        // 0x8f65b728
        _panic(g7, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"lib/regex/regcomp.c", (int32_t)"p != ((void *)0)" & -0x10000 | 1766, (int32_t)"p != ((void *)0)", 0, 0);
        v3 = a2;
        v4 = a1;
        v6 = "p != ((void *)0)";
        // branch -> 0x8f65b744
    }
    int32_t * v7 = (int32_t *)(v4 + 16); // 0x8f65b744_0
    uint32_t v8 = *v7; // 0x8f65b744
    int32_t result = 1;
    if (v8 >= v3) {
        int32_t v9 = 4 * v3; // 0x8f65b754
        int32_t v10 = *(int32_t *)(v4 + 24); // R2
        *v7 = v3;
        int32_t v11 = *(int32_t *)(*(int32_t *)(v4 + 28) + 8); // 0x8f65b760
        g11 = v11;
        int32_t v12 = 16 * v10; // 0x8f65b768
        uint32_t v13 = v12 + v9 + v10 / 8 * v11; // 0x8f65b770
        if (v13 < 0x8000001) {
            char * mem = realloc((char *)*(int32_t *)(a1 + 12), v9); // 0x8f65b798
            if (mem != NULL) {
                // 0x8f65b7a4
                *(int32_t *)(a1 + 12) = (int32_t)mem;
                // branch -> 0x8f65b7ac
                // 0x8f65b7ac
                if (v2 != g6) {
                    // 0x8f65b7bc
                    __stack_chk_fail();
                    // branch -> 0x8f65b7c0
                }
                // 0x8f65b7c0
                g14 = v1;
                return 1;
            }
        }
        // 0x8f65b77c
        *(int32_t *)(a1 + 16) = v8;
        seterr(a1, 12, v13, v12, (int32_t)v6, 0, 0, (int32_t)v2, 0, v1);
        result = 0;
        // branch -> 0x8f65b7ac
    }
    // 0x8f65b7ac
    if (v2 != g6) {
        // 0x8f65b7bc
        __stack_chk_fail();
        // branch -> 0x8f65b7c0
    }
    // 0x8f65b7c0
    g14 = v1;
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// int isalnum(int c);
// int isalpha(int c);
// int isdigit(int c);
// int islower(int c);
// int isupper(int c);
// void * malloc(size_t size);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// void * realloc(void * ptr, size_t size);
// void regfree(regex_t * preg);
// char * strcpy(char * restrict dest, const char * restrict src);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// int tolower(int c);
// int toupper(int c);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 17
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:51:08
