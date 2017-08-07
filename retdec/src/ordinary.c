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

// Address range: 0x8f65c5e4 - 0x8f65c74b
int32_t ordinary(int32_t * a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = (int32_t)a1;
    int32_t v2 = a2; // R1
    int32_t v3 = a3; // R2
    int32_t v4 = a3; // bp-40
    int32_t v5 = g14; // 0x8f65c5e4
    int32_t v6 = g15; // 0x8f65c5e4
    int32_t v7 = g16; // 0x8f65c5e4
    int32_t v8 = g17; // 0x8f65c5e4
    int32_t v9 = g18; // 0x8f65c5e4
    int32_t v10 = g19; // 0x8f65c5e4
    int32_t v11 = g9; // 0x8f65c5e4
    g14 = v1;
    g19 = (int32_t)&g6;
    int32_t v12 = g7; // 0x8f65c5f0
    g17 = v12;
    g16 = a2;
    char * v13 = g6;
    int32_t v14 = a2; // 0x8f65c624
    if (a1 == NULL) {
        // 0x8f65c604
        v2 = (int32_t)"ASSERT FAILED at (%s:%d): %s\n";
        v3 = (int32_t)"lib/regex/regcomp.c";
        _panic(v12, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"lib/regex/regcomp.c", (int32_t)"p != ((void *)0)" & -0x10000 | 1077, (int32_t)"p != ((void *)0)", a2, a3);
        v14 = g16;
        v1 = g14;
        // branch -> 0x8f65c620
    }
    int32_t v15 = *(int32_t *)(v1 + 28); // 0x8f65c620
    int32_t c = v14 % 256; // 0x8f65c624
    g15 = c;
    g18 = *(int32_t *)(v15 + 56);
    int32_t v16 = *(int32_t *)(v15 + 24); // 0x8f65c62c
    int32_t * v17; // 0x8f65c708_1
    int32_t result; // R0
    char * v18;
    int32_t v19; // 0x8f65c708
    if ((v16 & 2) == 0) {
        // 0x8f65c6ec
        result = doemit(g14, 0x10000000, c, v16);
        if (*(char *)(g16 + g18) == 0) {
            // if_8f65c704_0_true
            v17 = (int32_t *)(*(int32_t *)(g14 + 28) + 52);
            v19 = *v17;
            *v17 = v19 + 1;
            *(char *)(g16 + g18) = (char)v19;
            // branch -> 0x8f65c718
        }
        // 0x8f65c718
        v18 = g6;
        g13 = (int32_t)v18;
        if (v13 != v18) {
            // 0x8f65c728
            __stack_chk_fail();
            // branch -> 0x8f65c72c
        }
        // 0x8f65c72c
        g14 = v5;
        g15 = v6;
        g16 = v7;
        g17 = v8;
        g18 = v9;
        g19 = v10;
        g9 = v11;
        return result;
    }
    int32_t v20 = g15;
    if (isalpha(c) == 0) {
        // 0x8f65c6ec
        result = doemit(g14, 0x10000000, v20, v16);
        if (*(char *)(g16 + g18) == 0) {
            // if_8f65c704_0_true
            v17 = (int32_t *)(*(int32_t *)(g14 + 28) + 52);
            v19 = *v17;
            *v17 = v19 + 1;
            *(char *)(g16 + g18) = (char)v19;
            // branch -> 0x8f65c718
        }
        // 0x8f65c718
        v18 = g6;
        g13 = (int32_t)v18;
        if (v13 != v18) {
            // 0x8f65c728
            __stack_chk_fail();
            // branch -> 0x8f65c72c
        }
        // 0x8f65c72c
        g14 = v5;
        g15 = v6;
        g16 = v7;
        g17 = v8;
        g18 = v9;
        g19 = v10;
        g9 = v11;
        return result;
    }
    int32_t v21 = othercase(v20, v2, v3, v16); // 0x8f65c64c
    int32_t v22 = g15; // 0x8f65c650
    if (v21 == v22) {
        // 0x8f65c6ec
        result = doemit(g14, 0x10000000, v21, v16);
        if (*(char *)(g16 + g18) == 0) {
            // if_8f65c704_0_true
            v17 = (int32_t *)(*(int32_t *)(g14 + 28) + 52);
            v19 = *v17;
            *v17 = v19 + 1;
            *(char *)(g16 + g18) = (char)v19;
            // branch -> 0x8f65c718
        }
        // 0x8f65c718
        v18 = g6;
        g13 = (int32_t)v18;
        if (v13 != v18) {
            // 0x8f65c728
            __stack_chk_fail();
            // branch -> 0x8f65c72c
        }
        // 0x8f65c72c
        g14 = v5;
        g15 = v6;
        g16 = v7;
        g17 = v8;
        g18 = v9;
        g19 = v10;
        g9 = v11;
        return result;
    }
    int32_t v23 = g14; // 0x8f65c65c
    g9 = *(int32_t *)v23;
    g18 = *(int32_t *)(v23 + 4);
    if (othercase(v22, g8, g12, v16) == g15) {
        // 0x8f65c670
        g8 = (int32_t)"ASSERT FAILED at (%s:%d): %s\n";
        _panic(g17, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"lib/regex/regcomp.c", (int32_t)"othercase(ch) != ch" & -0x10000 | 1054, (int32_t)"othercase(ch) != ch", a2, v4);
        // branch -> 0x8f65c68c
    }
    int32_t * v24 = (int32_t *)g14; // 0x8f65c694_0
    *v24 = (int32_t)&v4;
    int32_t v25;
    int32_t v26 = &v25; // 0x8f65c698_0
    g16 = v26;
    *(int32_t *)(g14 + 4) = v26;
    v4 = 0x1000000 * g15 / 0x1000000;
    v25 = 0;
    result = p_bracket(v24);
    if (*(int32_t *)g14 != g16) {
        // 0x8f65c6c4
        result = _panic(g17, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"lib/regex/regcomp.c", (int32_t)"p->next == bracket+2" & -0x10000 | 1061, (int32_t)"p->next == bracket+2", a2, v4);
        // branch -> 0x8f65c6e0
    }
    // 0x8f65c6e0
    *(int32_t *)g14 = g9;
    *(int32_t *)(g14 + 4) = g18;
    // branch -> 0x8f65c718
    // 0x8f65c718
    v18 = g6;
    g13 = (int32_t)v18;
    if (v13 != v18) {
        // 0x8f65c728
        __stack_chk_fail();
        // branch -> 0x8f65c72c
    }
    // 0x8f65c72c
    g14 = v5;
    g15 = v6;
    g16 = v7;
    g17 = v8;
    g18 = v9;
    g19 = v10;
    g9 = v11;
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