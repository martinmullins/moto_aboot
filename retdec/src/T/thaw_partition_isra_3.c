//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t __find_first_utag(int32_t a1, int32_t a2);
int32_t __utag_delete(int32_t a1, int32_t a2, int32_t a3);
int32_t __utag_gets_107(char * a1, char * a2, int32_t a3, int32_t a4);
int32_t __utags_init(int32_t a1, int32_t a2, int32_t a3);
int32_t board_hardware_id(int32_t a1, int32_t a2, int32_t a3);
int32_t board_hardware_subtype(int32_t a1, int32_t a2, int32_t a3);
int32_t disable_smb1359_stat_gpio_irq(int32_t a1, int32_t a2, int32_t a3);
int32_t enable_smb1359_stat_gpio_irq(int32_t a1, int32_t a2, int32_t a3);
int32_t flash_utags(void);
int32_t free_tags(char * a1, int32_t a2);
void function_8f64aa3c(void);
void function_8f64aa80(char * str, char * format, int32_t a3, int32_t a4);
int32_t get_utags(int32_t a1, int32_t a2);
int32_t get_utags_name(int32_t a1, int32_t a2);
int32_t mcs_X509Certificate_getSignature(int32_t a1, int32_t * a2);
int32_t mcs_X509Certificate_getSubjectPublicKey(int32_t a1);
int32_t names_match(int32_t a1, int32_t a2);
int32_t on_utag_change(int32_t a1, int32_t a2);
int32_t sdhci_init(int32_t * a1, int32_t a2, int32_t a3);
int32_t sdhci_int_handler(int32_t * a1, int32_t a2);
int32_t thaw_partition_isra_3(int32_t * a1, int32_t a2);
int32_t type_atoi_106(char * str, int32_t a2);

// --------------------- Global Variables ---------------------

bool g8 = false; // LR
int32_t g9 = 0; // R0
int32_t g10 = 0; // R1
int32_t g11 = 0; // R2
int32_t g12 = 0; // R3
int32_t g13 = 0; // R4
int32_t g14 = 0; // R5
int32_t g15 = 0; // R6
int32_t g16 = 0; // R7
int32_t g17 = 0; // R8
int32_t g18 = 0; // R9
int32_t g1 = -0x1a60cfc8; // 0x8f602dd0
int32_t g2 = 0x2020003a; // 0x8f686ac4
int32_t g3 = 0; // 0x8f6ac074
int32_t g4 = 0; // 0x8f6ac078
int32_t g5 = 1; // 0x8f6ac0f0
char * g6[3] = {
    "config",
    "utags",
    "utagsBackup"
}; // 0x8f6b009c
int32_t g7 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f678e18 - 0x8f679073
int32_t thaw_partition_isra_3(int32_t * a1, int32_t a2) {
    int32_t v1 = (int32_t)a1;
    int32_t v2 = g13; // 0x8f678e18
    int32_t v3 = g14; // 0x8f678e18
    int32_t v4 = g15; // 0x8f678e18
    int32_t v5 = g7;
    int32_t v6;
    int32_t v7 = partition_get_index(a2, a2, g11, v5, v6, v1); // 0x8f678e38
    int32_t v8 = v7; // R4
    int32_t v9 = partition_get_offset(v7, a2, g11); // 0x8f678e40
    int32_t v10 = v9 | a2; // 0x8f678e4c
    if (v9 == a2) {
        // 0x8f679040
        g10 = &g7;
        g11 = v5;
        if (v5 != g7) {
            // 0x8f679054
            __stack_chk_fail();
            // branch -> 0x8f679058
        }
        // 0x8f679058
        g13 = v2;
        g14 = v3;
        g15 = v4;
        return -1;
    }
    int32_t v11 = partition_get_size(v8, v10, g11, v5, v6, v1, 0, v5); // 0x8f678e58
    if (v11 == v10) {
        // 0x8f679040
        g10 = &g7;
        g11 = v5;
        if (v5 != g7) {
            // 0x8f679054
            __stack_chk_fail();
            // branch -> 0x8f679058
        }
        // 0x8f679058
        g13 = v2;
        g14 = v3;
        g15 = v4;
        return -1;
    }
    bool v12 = false; // 0x8f678e70
    bool v13 = true; // 0x8f678e70
    if (v10 == 0) {
        // if_8f678e68_0_true
        v12 = v11 == 0x100000;
        v13 = v11 > 0xfffff;
        // branch -> after_if_8f678e68_0
    }
    // after_if_8f678e68_0
    if (v12 || v13 ^ true) {
        // if_8f678e6c_0_true
        v8 = v11;
        // branch -> after_if_8f678e6c_0
    }
    // after_if_8f678e6c_0
    int32_t size; // 0x8f678e74
    if (v13 && v12 ^ true) {
        // if_8f678e70_0_true
        v8 = 0x100000;
        size = 0x100000;
        // branch -> after_if_8f678e70_0
    } else {
        // after_if_8f678e6c_0.after_if_8f678e70_0_crit_edge
        size = v8;
        // branch -> after_if_8f678e70_0
    }
    char * mem = malloc(size); // 0x8f678e78
    int32_t v14 = (int32_t)mem; // 0x8f678e78_3
    if (mem == NULL) {
        // 0x8f679040
        g10 = &g7;
        g11 = v5;
        if (v5 != g7) {
            // 0x8f679054
            __stack_chk_fail();
            // branch -> 0x8f679058
        }
        // 0x8f679058
        g13 = v2;
        g14 = v3;
        g15 = v4;
        return -1;
    }
    int32_t v15 = v8; // R3
    int32_t result;
    if (mmc_read(v9, a2, v14, v8, v6, v1, 0, v5, 0, v2, v3, v4, g16) == 0) {
        // 0x8f678ebc
        if (v8 < 88) {
            // 0x8f679010
            g13 = 3;
            *a1 = 0;
            // branch -> 0x8f679020
        } else {
            // 0x8f678ec4
            g15 = v14;
            int32_t v16 = 0; // R9
            g14 = 0;
            int32_t v17 = v14; // 0x8f678ef021
            int32_t v18 = 0; // 0x8f678eec19
            int32_t v19 = 0; // 0x8f678ed0
            // branch -> 0x8f678ed0
            while (true) {
                int32_t v20 = v17; // 0x8f678ef0
                int32_t v21 = v18; // 0x8f678eec
                int32_t size2; // 0x8f678f10
                int32_t str; // 0x8f678f1c
                int32_t str2; // 0x8f678f3c
                int32_t v22; // 0x8f678f0c
                if (v19 == 0) {
                    char * mem2 = calloc(1, 52); // 0x8f678ee0
                    int32_t v23 = (int32_t)mem2; // 0x8f678ee0_5
                    v16 = v23;
                    int32_t v24; // 0x8f679014
                    if (mem2 == NULL) {
                        // 0x8f67900c
                        g13 = 4;
                        v24 = v23;
                        // branch -> 0x8f679010
                    } else {
                        // 0x8f678ed8
                        // branch -> 0x8f678eec
                        // 0x8f678eec
                        strlcpy(v23, g15, 32, v15, v6);
                        *(int32_t *)(v16 + 36) = llvm_bswap_i32(*(int32_t *)(g15 + 36));
                        v22 = *(int32_t *)(g15 + 32);
                        v15 = v22;
                        size2 = llvm_bswap_i32(v22);
                        *(int32_t *)(v16 + 32) = size2;
                        str = v16;
                        str2 = str;
                        if (g14 == 0) {
                          lab_0x8f678f1c:;
                            int32_t v25 = v16; // 0x8f678f28
                            g14 = v25;
                            if ((strcmp((char *)str, "__UTAG_HEAD__") || v22) != 0) {
                                // 0x8f678fd4
                                g13 = 5;
                                // branch -> 0x8f678ff0
                                // 0x8f678ff0
                                free_tags((char *)g14, (int32_t)"__UTAG_HEAD__");
                                v24 = 0;
                                // branch -> 0x8f679010
                                // 0x8f679010
                                *a1 = v24;
                                if (v24 == 0) {
                                    // 0x8f679020
                                    print_log(1, (int32_t)"failed to thaw utags from partition \"%s\", error: %d\n", a2, g13, v6, v1, 0, v5, 0, v2, v3, v4, g16);
                                    // branch -> 0x8f679034
                                }
                                // 0x8f679034
                                free((char *)v14);
                                result = g13;
                                // branch -> 0x8f679040
                                // 0x8f679040
                                g10 = &g7;
                                g11 = v5;
                                if (v5 != g7) {
                                    // 0x8f679054
                                    __stack_chk_fail();
                                    // branch -> 0x8f679058
                                }
                                // 0x8f679058
                                g13 = v2;
                                g14 = v3;
                                g15 = v4;
                                return result;
                            }
                            str2 = v25;
                        }
                      lab_0x8f678f3c:;
                        int32_t v26 = (int32_t)"__UTAG_TAIL__"; // R1
                        if (strcmp((char *)str2, "__UTAG_TAIL__") == 0) {
                            // 0x8f678f50
                            if (v22 == 0) {
                                // 0x8f678f58
                                g13 = size2;
                                v24 = g14;
                                // branch -> 0x8f679010
                            } else {
                                // 0x8f678fdc
                                g13 = 6;
                                // branch -> 0x8f678ff0
                                // 0x8f678ff0
                                free_tags((char *)g14, v26);
                                v24 = 0;
                                // branch -> 0x8f679010
                            }
                            // 0x8f679010
                            *a1 = v24;
                            if (v24 == 0) {
                                // 0x8f679020
                                print_log(1, (int32_t)"failed to thaw utags from partition \"%s\", error: %d\n", a2, g13, v6, v1, 0, v5, 0, v2, v3, v4, g16);
                                // branch -> 0x8f679034
                            }
                            // 0x8f679034
                            free((char *)v14);
                            result = g13;
                            // branch -> 0x8f679040
                            // 0x8f679040
                            g10 = &g7;
                            g11 = v5;
                            if (v5 != g7) {
                                // 0x8f679054
                                __stack_chk_fail();
                                // branch -> 0x8f679058
                            }
                            // 0x8f679058
                            g13 = v2;
                            g14 = v3;
                            g15 = v4;
                            return result;
                        }
                        int32_t v27 = g15 + (size2 + 47 & -4); // 0x8f678f70
                        if (v27 - v14 + 44 > v8) {
                            // 0x8f678fe4
                            g13 = 7;
                            // branch -> 0x8f678ff0
                        } else {
                            // 0x8f678f84
                            if (v22 == 0) {
                              lab_0x8f678fb0:
                                // 0x8f678fb0
                                v26 = 52;
                                char * mem3 = calloc(1, 52); // 0x8f678fb8
                                int32_t v28 = (int32_t)mem3; // 0x8f678fb8_5
                                *(int32_t *)(v16 + 48) = v28;
                                if (mem3 != NULL) {
                                    g15 = v27;
                                    v16 = v28;
                                    v17 = v27;
                                    v18 = v28;
                                    v19 = g14;
                                    // branch -> 0x8f678ed0
                                    continue;
                                }
                            } else {
                                // 0x8f678f8c
                                v26 = size2;
                                char * mem4 = calloc(1, size2); // 0x8f678f94
                                *(int32_t *)(v16 + 44) = (int32_t)mem4;
                                if (mem4 != NULL) {
                                    // 0x8f678fa4
                                    memcpy(mem4, (char *)(g15 + 44), *(int32_t *)(v16 + 32));
                                    // branch -> 0x8f678fb0
                                    goto lab_0x8f678fb0;
                                }
                            }
                            // 0x8f678fec
                            g13 = 4;
                            // branch -> 0x8f678ff0
                        }
                        // 0x8f678ff0
                        free_tags((char *)g14, v26);
                        v24 = 0;
                        // branch -> 0x8f679010
                        // 0x8f679010
                        *a1 = v24;
                        if (v24 == 0) {
                            // 0x8f679020
                            print_log(1, (int32_t)"failed to thaw utags from partition \"%s\", error: %d\n", a2, g13, v6, v1, 0, v5, 0, v2, v3, v4, g16);
                            // branch -> 0x8f679034
                        }
                        // 0x8f679034
                        free((char *)v14);
                        result = g13;
                        // branch -> 0x8f679040
                        // 0x8f679040
                        g10 = &g7;
                        g11 = v5;
                        if (v5 != g7) {
                            // 0x8f679054
                            __stack_chk_fail();
                            // branch -> 0x8f679058
                        }
                        // 0x8f679058
                        g13 = v2;
                        g14 = v3;
                        g15 = v4;
                        return result;
                    }
                    // 0x8f679010
                    *a1 = v24;
                    if (v24 == 0) {
                        // 0x8f679020
                        print_log(1, (int32_t)"failed to thaw utags from partition \"%s\", error: %d\n", a2, g13, v6, v1, 0, v5, 0, v2, v3, v4, g16);
                        // branch -> 0x8f679034
                    }
                    // 0x8f679034
                    free((char *)v14);
                    result = g13;
                    // branch -> 0x8f679040
                    // 0x8f679040
                    g10 = &g7;
                    g11 = v5;
                    if (v5 != g7) {
                        // 0x8f679054
                        __stack_chk_fail();
                        // branch -> 0x8f679058
                    }
                    // 0x8f679058
                    g13 = v2;
                    g14 = v3;
                    g15 = v4;
                    return result;
                }
                // 0x8f678eec
                strlcpy(v21, v20, 32, v15, v6);
                *(int32_t *)(v16 + 36) = llvm_bswap_i32(*(int32_t *)(g15 + 36));
                v22 = *(int32_t *)(g15 + 32);
                v15 = v22;
                size2 = llvm_bswap_i32(v22);
                *(int32_t *)(v16 + 32) = size2;
                str = v16;
                if (g14 == 0) {
                    goto lab_0x8f678f1c;
                }
                str2 = str;
                goto lab_0x8f678f3c;
            }
        }
        // 0x8f679020
        print_log(1, (int32_t)"failed to thaw utags from partition \"%s\", error: %d\n", a2, g13, v6, v1, 0, v5, 0, v2, v3, v4, g16);
        // branch -> 0x8f679034
        // 0x8f679034
        free((char *)v14);
        result = g13;
        // branch -> 0x8f679040
    } else {
        // 0x8f678ea0
        print_log(0, (int32_t)"ERROR: Cannot read device info\n", v14, v15, v6, v1, 0, v5, 0, v2, v3, v4, g16);
        free((char *)v14);
        result = -1;
        // branch -> 0x8f679040
    }
    // 0x8f679040
    g10 = &g7;
    g11 = v5;
    if (v5 != g7) {
        // 0x8f679054
        __stack_chk_fail();
        // branch -> 0x8f679058
    }
    // 0x8f679058
    g13 = v2;
    g14 = v3;
    g15 = v4;
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * calloc(size_t nmemb, size_t size);
// void free(void * ptr);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int strcmp(const char * s1, const char * s2);
// int strncmp(const char * s1, const char * s2, size_t n);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// char * strrchr(char * s, int c);
// int vsnprintf(char * restrict s, size_t maxlen, const char * restrict format, _G_va_list arg);
// int vsprintf(char * restrict s, const char * restrict format, _G_va_list arg);

// --------------- Instruction-Idiom Functions ----------------

// int32_t llvm_bswap_i32(int32_t a1);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 22
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:53:23
