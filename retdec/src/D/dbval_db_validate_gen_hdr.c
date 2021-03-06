//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

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

int32_t charging_timer_func(int32_t a1, int32_t a2);
int32_t clock_lib2_rcg_enable(int32_t a1, int32_t a2, int32_t a3);
int32_t clock_lib2_rcg_set_rate(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t dbval_db_validate_gen_hdr(char * a1, char a2, char * a3);
int32_t dbval_debug_print2(int32_t a1, int32_t a2);
int32_t dbval_read_flash_uid(char * a1, int32_t * a2);
int32_t dbval_read_processor_uid(char * a1, int32_t * a2);
int32_t display_draw_logo(char * str, uint32_t a2, uint32_t a3, int32_t a4);
int32_t display_set_bg_color(int32_t a1, int32_t a2);
int32_t fastboot_handler(int32_t a1, int32_t a2);
void function_8f64b354(void);
void function_8f64b39c(char * a1, int32_t a2, int32_t a3);
void function_8f65db8c(void);
int32_t get_bs_info_addr(void);
int32_t get_last_powerup_reason(char * a1, int32_t a2, int32_t a3);
int32_t handle_fboot_command_reboot(int32_t a1, int32_t a2);
int32_t is_skip_sparse_preflash_validation(int32_t a1, int32_t a2);
int32_t is_skip_validation(int32_t a1);
int32_t is_warm_reset(int32_t a1);
int32_t platform_use_identity_mmu_mappings(int32_t a1);
int32_t qtimer_disable(int32_t result);
int32_t qtimer_set_physical_timer(int32_t a1, int32_t a2, int32_t a3);
int32_t request_warm_reset(char a1, int32_t a2, int32_t a3);
int32_t sdhci_send_command(char * a1, int16_t * a2);
int32_t sdhci_set_bus_width(int32_t * a1, int32_t a2);
int32_t smb1359_get_power_source(void);
int32_t smb1359_power_source_detected(int32_t a1);
char * smem_get_ram_ptable_entry(char * a1, int32_t a2, int32_t a3);
int32_t smem_get_ram_ptable_len(int32_t a1, int32_t a2, int32_t a3);
int32_t sstep(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);

// --------------------- Global Variables ---------------------

int32_t g46 = 0; // LR
int32_t g47 = 0; // R0
int32_t g48 = 0; // R1
int32_t g49 = 0; // R10
int32_t g50 = 0; // R11
int32_t g51 = 0; // R2
int32_t g52 = 0; // R3
int32_t g53 = 0; // R4
int32_t g54 = 0; // R5
int32_t g55 = 0; // R6
int32_t g56 = 0; // R7
int32_t g57 = 0; // R8
int32_t g58 = 0; // R9
bool g1 = false; // flagc
int32_t g2 = -0x1a60cf90; // 0x8f60c6d8
int32_t g3 = -0x16d2bf10; // 0x8f621a7c
int32_t g4 = -0x16d2b801; // 0x8f621dcc
int32_t g5 = -0x16d2bf09; // 0x8f622f94
int32_t g6 = -0x16d2bc10; // 0x8f623c30
int32_t g7 = -0x16d2bf8d; // 0x8f623db0
int32_t g8 = -0x16d2b010; // 0x8f62d370
int32_t g9 = -0x16d2bfed; // 0x8f638714
int32_t g10 = -0x16d2bc09; // 0x8f638ab0
int32_t g12 = 0x65440030; // 0x8f69c66f
int32_t g13 = 0x746e6300; // 0x8f6a4e20
int32_t g14 = 1; // 0x8f6ac0f0
int32_t g15 = -0x709c73f8; // 0x8f6ac374
int32_t g16 = 2; // 0x8f6afe0c
int32_t g17 = 0; // 0x8f6b50a8
char g18 = 0; // 0x8f6b50b8
char g19 = 0; // 0x8f6b50b9
char g20 = 0; // 0x8f6b50ba
char g21 = 0; // 0x8f6b50bb
int32_t g22 = 0; // 0x8f6b8ac0
int32_t g23 = 0; // 0x8f6b8ac4
int32_t g24 = 0; // 0x8f6b8ac8
int32_t g25 = 0; // 0x8f6b8acc
char * g26; // 0x8f6c02dd
int32_t g27 = 0; // 0x8f6c0390
int32_t g28 = 0; // 0x8f6c0398
int32_t g29 = 0; // 0x8f6c03d0
int32_t g30 = 0; // 0x8f6e07a8
char * g31; // 0x8f6e07c8
int32_t g32 = 0; // 0x8f6e07ec
int32_t g33 = 0; // 0x8f6e0bd4
int32_t g34 = 0; // 0x8f6e0c34
int32_t g35 = 0; // 0x8f6e0c38
int32_t g36 = 0; // 0x8f6e0c3c
char * g37; // 0x8f6e0c40
int32_t g38 = 0; // 0x8f7112f4
int32_t g39 = 0; // 0x8f7114f4
int32_t g40 = 0; // 0x8f7114f8
int32_t g41 = 0; // 0x8f7114fc
int32_t g42 = 0; // 0x8f711508
int32_t g43 = 0; // 0x8f71150c
int32_t g44 = 0; // 0x8f711510
int32_t g45 = 0; // 0x8f711534
char * g11[13] = {
    "download",
    (char *)&g3,
    "flash",
    (char *)&g5,
    "multiflash",
    (char *)&g6,
    "getvar",
    (char *)&g8,
    "erase",
    (char *)&g7,
    "boot",
    (char *)&g4,
    "reboot"
}; // 0x8f68422c

// ------------------------ Functions -------------------------

// Address range: 0x8f663924 - 0x8f663b8f
int32_t dbval_db_validate_gen_hdr(char * a1, char a2, char * a3) {
    int32_t v1 = a2;
    g54 = (int32_t)a1;
    g56 = (int32_t)a3;
    int32_t v2 = g38;
    char * v3 = dbval_malloc(32, v1); // 0x8f663948
    g53 = (int32_t)v3;
    if (g54 == 0) {
        // if_8f663954_0_true
        // branch -> 0x8f663b50
        // 0x8f663b50
        if (v2 != g38) {
            // 0x8f663b60
            __stack_chk_fail();
            // branch -> 0x8f663b64
        }
        // 0x8f663b64
        return 240;
    }
    // 0x8f66395c
    int32_t v4; // R6
    int32_t v5; // 0x8f663b48
    if (v3 == NULL) {
        // 0x8f663b3c
        v4 = 18;
        // branch -> 0x8f663b44
    } else {
        // 0x8f663964
        dbval_debug_print2((int32_t)"dbval_db_validate_gen_hdr - Check Type", v1);
        int32_t v6 = g54; // 0x8f66396c
        int32_t v7 = (int32_t)*(char *)v6; // 0x8f66396c
        int32_t v8 = (int32_t)*(char *)(v6 + 1) | 256 * v7; // 0x8f663974
        int32_t v9; // 0x8f663b34
        int32_t v10; // 0x8f663b34
        if (v8 == v1) {
            // 0x8f663988
            int32_t v11;
            g55 = &v11;
            v11 = 16;
            dbval_debug_print2((int32_t)"dbval_db_validate_gen_hdr - Read Processor UID", g48);
            int32_t v12 = dbval_read_processor_uid((char *)g53, &v11); // 0x8f6639a4
            int32_t v13 = v11; // 0x8f6639a8
            g52 = v13;
            if (v12 == 15) {
                // 0x8f6639b4
                if (v13 == 16) {
                    // 0x8f6639bc
                    dbval_debug_print2((int32_t)"dbval_db_validate_gen_hdr - Read Flash UID", g48);
                    int32_t v14 = dbval_read_flash_uid((char *)(g53 + 16), &v11); // 0x8f6639cc
                    int32_t v15 = v11; // 0x8f6639d0
                    g52 = v15;
                    if (v14 == 15) {
                        // 0x8f6639dc
                        if (v15 == 16) {
                            // 0x8f6639e4
                            v11 = 32;
                            dbval_debug_print2((int32_t)"dbval_db_validate_gen_hdr - PAL UID", g48);
                            int32_t v16;
                            int32_t v17 = &v16; // 0x8f6639f8_0
                            dbval_memset(v17, 0, 100, 32);
                            int32_t v18;
                            int32_t v19 = &v18; // 0x8f663a04_0
                            int32_t v20 = 0; // 0x8f663a0c
                            // branch -> 0x8f663a0c
                            while (true) {
                                char v21 = *(char *)(g53 + v20); // 0x8f663a0c
                                uint32_t v22 = (int32_t)v21; // 0x8f663a0c
                                int32_t v23 = v20 + 1; // R2
                                int32_t v24 = v19 + 2; // R3
                                int32_t v25 = v22 / 16; // 0x8f663a18
                                uint32_t v26 = v22 % 16; // 0x8f663a1c
                                int32_t v27 = v25; // 0x8f663a28
                                if (v21 > -1) {
                                    // if_8f663a24_0_true
                                    v27 = v25 + 48;
                                    // branch -> after_if_8f663a24_0
                                }
                                char v28 = v27;
                                if (v21 < 0) {
                                    // if_8f663a28_0_true
                                    v28 = v27 + 55;
                                    // branch -> after_if_8f663a28_0
                                }
                                // after_if_8f663a28_0
                                *(char *)(v19 - 1) = v28;
                                int32_t v29 = v26 + (v26 < 10 ? 48 : 55);
                                int32_t v30 = v29; // R1
                                *(char *)(v24 - 2) = (char)v29;
                                if (v23 == 32) {
                                    // 0x8f663a48
                                    dbval_debug_print2(v17, v30);
                                    dbval_debug_print2((int32_t)"dbval_db_validate_gen_hdr - DB UID", g48);
                                    dbval_memset(v17, 0, 100, g52);
                                    int32_t v31 = g54 + 7; // 0x8f663a74
                                    // branch -> 0x8f663a74
                                    while (true) {
                                        int32_t v32 = v31 + 1; // 0x8f663a74
                                        char v33 = *(char *)v32; // 0x8f663a74
                                        uint32_t v34 = (int32_t)v33; // 0x8f663a74
                                        v24 = v19 + 2;
                                        int32_t v35 = v34 / 16; // 0x8f663a7c
                                        v30 = v35;
                                        uint32_t v36 = v34 % 16; // 0x8f663a80
                                        int32_t v37 = v35; // 0x8f663a8c
                                        if (v33 > -1) {
                                            int32_t v38 = v35 + 48; // 0x8f663a88
                                            v30 = v38;
                                            v37 = v38;
                                            // branch -> after_if_8f663a88_0
                                        }
                                        char v39 = v37;
                                        if (v33 < 0) {
                                            int32_t v40 = v37 + 55; // 0x8f663a8c
                                            v30 = v40;
                                            v39 = v40;
                                            // branch -> after_if_8f663a8c_0
                                        }
                                        // after_if_8f663a8c_0
                                        *(char *)(v19 - 1) = v39;
                                        *(char *)(v24 - 2) = (char)(v36 + (v36 < 10 ? 48 : 55));
                                        int32_t v41 = v24; // 0x8f663aa4
                                        int32_t v42;
                                        if (v41 == (int32_t)&v42) {
                                            // 0x8f663aac
                                            dbval_debug_print2(v17, v30);
                                            if (dbval_memcmp(g53, g54 + 8, 6, g52) == 0) {
                                                int32_t v43 = g54 + 16; // 0x8f663ad4
                                                if (dbval_memcmp(g53 + 8, v43, v11 - 8, g52) == 0) {
                                                    // 0x8f663ae8
                                                    dbval_debug_print2((int32_t)"dbval_db_validate_gen_hdr - Success", v43);
                                                    // branch -> 0x8f663b1c
                                                    // 0x8f663b1c
                                                    g48 = 0;
                                                    dbval_memset(g53, 0, 32, g52);
                                                    // branch -> 0x8f663b30
                                                    // 0x8f663b30
                                                    dbval_free(g53, g48, 32, g52);
                                                    // branch -> 0x8f663b44
                                                    // 0x8f663b44
                                                    v5 = g56;
                                                    if (v5 != 0) {
                                                        // if_8f663b4c_0_true
                                                        *(char *)v5 = (char)17;
                                                        // branch -> 0x8f663b50
                                                    }
                                                    // 0x8f663b50
                                                    if (v2 != g38) {
                                                        // 0x8f663b60
                                                        __stack_chk_fail();
                                                        // branch -> 0x8f663b64
                                                    }
                                                    // 0x8f663b64
                                                    return 15;
                                                }
                                            }
                                            // 0x8f663b18
                                            // branch -> 0x8f663b1c
                                            // 0x8f663b1c
                                            g48 = 0;
                                            dbval_memset(g53, 0, 32, g52);
                                            // branch -> 0x8f663b30
                                            // 0x8f663b30
                                            dbval_free(g53, g48, 32, g52);
                                            // branch -> 0x8f663b44
                                            // 0x8f663b44
                                            v5 = g56;
                                            if (v5 != 0) {
                                                // if_8f663b4c_0_true
                                                *(char *)v5 = (char)17;
                                                // branch -> 0x8f663b50
                                            }
                                            // 0x8f663b50
                                            if (v2 != g38) {
                                                // 0x8f663b60
                                                __stack_chk_fail();
                                                // branch -> 0x8f663b64
                                            }
                                            // 0x8f663b64
                                            return 85;
                                        }
                                        // after_if_8f663a8c_0.dec_label_pc_8f663a74_crit_edge
                                        v19 = v41;
                                        v31 = v32;
                                        // branch -> 0x8f663a74
                                    }
                                } else {
                                    // after_if_8f663a28_0.dec_label_pc_8f663a0c_crit_edge
                                    v19 = v24;
                                    v20 = v23;
                                    // branch -> 0x8f663a0c
                                    continue;
                                }
                            }
                        } else {
                            // 0x8f663af8
                            // branch -> 0x8f663b14
                            // 0x8f663b14
                            dbval_debug_print2((int32_t)"dbval_db_validate_gen_hdr - Flash UID Length returned INVALID, must be 16 bytes", g48);
                            // branch -> 0x8f663b18
                        }
                        // 0x8f663b18
                        // branch -> 0x8f663b1c
                        // 0x8f663b1c
                        g48 = 0;
                        dbval_memset(g53, 0, 32, g52);
                        // branch -> 0x8f663b30
                        // 0x8f663b30
                        dbval_free(g53, g48, 32, g52);
                        // branch -> 0x8f663b44
                        // 0x8f663b44
                        v5 = g56;
                        if (v5 != 0) {
                            // if_8f663b4c_0_true
                            *(char *)v5 = (char)17;
                            // branch -> 0x8f663b50
                        }
                        // 0x8f663b50
                        if (v2 != g38) {
                            // 0x8f663b60
                            __stack_chk_fail();
                            // branch -> 0x8f663b64
                        }
                        // 0x8f663b64
                        return 85;
                    }
                    // 0x8f663af8
                    if (v15 == 16) {
                        // 0x8f663b18
                        // branch -> 0x8f663b1c
                        // 0x8f663b1c
                        g48 = 0;
                        dbval_memset(g53, 0, 32, g52);
                        // branch -> 0x8f663b30
                        // 0x8f663b30
                        dbval_free(g53, g48, 32, g52);
                        // branch -> 0x8f663b44
                        // 0x8f663b44
                        v5 = g56;
                        if (v5 != 0) {
                            // if_8f663b4c_0_true
                            *(char *)v5 = (char)17;
                            // branch -> 0x8f663b50
                        }
                        // 0x8f663b50
                        if (v2 != g38) {
                            // 0x8f663b60
                            __stack_chk_fail();
                            // branch -> 0x8f663b64
                        }
                        // 0x8f663b64
                        return 85;
                    }
                    // 0x8f663b14
                    dbval_debug_print2((int32_t)"dbval_db_validate_gen_hdr - Flash UID Length returned INVALID, must be 16 bytes", g48);
                    // branch -> 0x8f663b18
                } else {
                    // 0x8f663b08
                    // branch -> 0x8f663b14
                    // 0x8f663b14
                    dbval_debug_print2((int32_t)"dbval_db_validate_gen_hdr - Processor UID Length returned INVALID, must be 16 bytes", g48);
                    // branch -> 0x8f663b18
                }
                // 0x8f663b18
                // branch -> 0x8f663b1c
                // 0x8f663b1c
                g48 = 0;
                dbval_memset(g53, 0, 32, g52);
                // branch -> 0x8f663b30
                // 0x8f663b30
                dbval_free(g53, g48, 32, g52);
                // branch -> 0x8f663b44
                // 0x8f663b44
                v5 = g56;
                if (v5 != 0) {
                    // if_8f663b4c_0_true
                    *(char *)v5 = (char)17;
                    // branch -> 0x8f663b50
                }
                // 0x8f663b50
                if (v2 != g38) {
                    // 0x8f663b60
                    __stack_chk_fail();
                    // branch -> 0x8f663b64
                }
                // 0x8f663b64
                return 85;
            }
            // 0x8f663b08
            if (v13 == 16) {
                // 0x8f663b18
                // branch -> 0x8f663b1c
                // 0x8f663b1c
                g48 = 0;
                dbval_memset(g53, 0, 32, g52);
                // branch -> 0x8f663b30
                // 0x8f663b30
                dbval_free(g53, g48, 32, g52);
                // branch -> 0x8f663b44
                // 0x8f663b44
                v5 = g56;
                if (v5 != 0) {
                    // if_8f663b4c_0_true
                    *(char *)v5 = (char)17;
                    // branch -> 0x8f663b50
                }
                // 0x8f663b50
                if (v2 != g38) {
                    // 0x8f663b60
                    __stack_chk_fail();
                    // branch -> 0x8f663b64
                }
                // 0x8f663b64
                return 85;
            }
            // 0x8f663b14
            dbval_debug_print2((int32_t)"dbval_db_validate_gen_hdr - Processor UID Length returned INVALID, must be 16 bytes", g48);
            // branch -> 0x8f663b18
            // 0x8f663b18
            // branch -> 0x8f663b1c
            // 0x8f663b1c
            g48 = 0;
            v4 = 17;
            dbval_memset(g53, 0, 32, g52);
            v10 = g52;
            v9 = 32;
            // branch -> 0x8f663b30
        } else {
            // if_8f66397c_0_true
            v4 = 8;
            v10 = v8;
            v9 = v7;
            // branch -> 0x8f663b30
        }
        // 0x8f663b30
        dbval_free(g53, g48, v9, v10);
        // branch -> 0x8f663b44
    }
    // 0x8f663b44
    v5 = g56;
    if (v5 != 0) {
        // if_8f663b4c_0_true
        *(char *)v5 = (char)v4;
        // branch -> 0x8f663b50
    }
    // 0x8f663b50
    if (v2 != g38) {
        // 0x8f663b60
        __stack_chk_fail();
        // branch -> 0x8f663b64
    }
    // 0x8f663b64
    return 85;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memalign(size_t alignment, size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// void * realloc(void * ptr, size_t size);
// void regfree(regex_t * preg);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:53:53
