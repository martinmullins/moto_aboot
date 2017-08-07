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

int32_t board_baseband(int32_t a1);
int32_t board_target_id(int32_t a1);
int32_t clk_get_parent(void);
int32_t cmd_flash_mmc_img(char * a1, char * a2, int32_t a3);
int32_t disable_cont_splash_screen(int32_t a1, int32_t a2);
int32_t enable_cont_splash_screen(int32_t a1);
int32_t flash_partition(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t gfx_surface_destroy(char * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t hab_rsa_init(void);
int32_t heap_insert_free_chunk(int32_t * a1, int32_t a2);
int32_t is_backup_needed(int32_t a1, int32_t a2, int32_t a3);
int32_t is_most_like_hab_image(int32_t a1, int32_t a2, int32_t a3);
int32_t is_skip_sparse_preflash_validation(int32_t result, int32_t a2);
int32_t mask_interrupt(int32_t a1);
int32_t mcs_DER_decodeContents(int32_t a1);
int32_t mcs_DER_recordLength(int32_t a1);
int32_t mdss_dsi_phy_regulator_init(int32_t * a1, int32_t a2);
int32_t mdss_dsi_v2_phy_init(int32_t a1, int32_t a2);
int32_t mot_sst_get_security_state(void);
int32_t mot_sst_oem_lock_handler(int32_t a1, int32_t a2);
int32_t register_int_handler(int32_t a1, int32_t a2, int32_t a3);
int32_t set_logo(char a1, int32_t a2, int32_t a3);
int32_t set_logo_screen_mode(char a1, int32_t a2, int32_t a3);
int32_t smem_get_ram_ptable_len(int32_t a1, int32_t a2, int32_t a3);
int32_t smem_get_ram_ptable_version(void);
int32_t timer_cancel(int32_t result, int32_t a2);
int32_t timer_init(int32_t a1, int32_t a2);
int32_t udc_interrupt(int32_t a1, int32_t a2);
int32_t ulpi_read(uint32_t a1, int32_t a2);
int32_t unmask_interrupt(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g51 = 0; // LR
int32_t g52 = 0; // R0
int32_t g53 = 0; // R1
int32_t g54 = 0; // R10
int32_t g55 = 0; // R11
int32_t g56 = 0; // R12
int32_t g57 = 0; // R2
int32_t g58 = 0; // R3
int32_t g59 = 0; // R4
int32_t g60 = 0; // R5
int32_t g61 = 0; // R6
int32_t g62 = 0; // R7
int32_t g63 = 0; // R8
int32_t g64 = 0; // R9
int32_t g1 = -0x1a60cf24; // 0x8f61c060
char * g2[12] = {
    "GET_STATUS",
    "CLEAR_FEATURE",
    "*UNKNOWN*",
    "SET_FEATURE",
    "*UNKNOWN*",
    "SET_ADDRESS",
    "GET_DESCRIPTOR",
    "SET_DESCRIPTOR",
    "GET_CONFIGURATION",
    "SET_CONFIGURATION",
    "GET_INTERFACE",
    "SET_INTERFACE"
}; // 0x8f67d234
int32_t g3 = 0; // 0x8f69eef0
char * g4 = "\x01"; // 0x8f6a84ee
int32_t g6 = 0; // 0x8f6ac07c
int32_t g7 = 0; // 0x8f6ac080
int32_t g8 = 1; // 0x8f6ac0f0
char * g9 = "\x01"; // 0x8f6ac220
char g10 = 0; // 0x8f6b50b0
char g11 = 0; // 0x8f6b50b1
char g12 = 0; // 0x8f6b50b2
char g13 = 0; // 0x8f6b50b3
char g14 = 0; // 0x8f6b50b8
char g15 = 0; // 0x8f6b50b9
char g16 = 0; // 0x8f6b50ba
char g17 = 0; // 0x8f6b50bb
int32_t g18 = 0; // 0x8f6b7920
int32_t g19 = 0; // 0x8f6b7924
char * g20; // 0x8f6b7928
int32_t g21 = 0; // 0x8f6b792c
int32_t g22 = 0; // 0x8f6b7934
int32_t g23 = 0; // 0x8f6b793c
int32_t g24 = 0; // 0x8f6b7944
int32_t g25 = 0; // 0x8f6b7948
int32_t g26 = 0; // 0x8f6c01d0
int32_t g27 = 0; // 0x8f6c01d4
char * g28; // 0x8f6e08f9
char * g29; // 0x8f6e0938
int32_t g30 = 0; // 0x8f6e0bf0
int32_t g31 = 0; // 0x8f6e0bf4
char * g32; // 0x8f70e724
char * g33; // 0x8f70fa25
int32_t g34 = 0; // 0x8f710c28
int32_t g35 = 0; // 0x8f710c2c
int32_t g36 = 0; // 0x8f710c30
int32_t g37 = 0; // 0x8f710c34
int32_t g38 = 0; // 0x8f7112f4
char * g39; // 0x8f71302c
int32_t g40 = 0; // 0x8f713030
int32_t g41 = 0; // 0x8f713034
int32_t g42 = 0; // 0x8f713036
int32_t g43 = 0; // 0x8f713038
int32_t g44 = 0; // 0x8f71303c
int32_t g45 = 0; // 0x8f713040
char * g46; // 0x8f713044
int32_t g47 = 0; // 0x8f713048
int32_t g48 = 0; // 0x8f71304c
int32_t g49 = 0; // 0x8f71304e
int32_t g50 = 0; // 0x8f713050
int32_t * g5 = &g3; // 0x8f6a9eec

// ------------------------ Functions -------------------------

// Address range: 0x8f665144 - 0x8f6652c7
int32_t mcs_DER_decodeContents(int32_t a1) {
    int32_t v1;
    int32_t v2 = v1; // bp-32
    int32_t v3 = g38;
    int32_t v4;
    int32_t v5;
    int32_t v6;
    int32_t v7 = mcs_DER_fieldLengths(a1, g53, (int32_t)&v5, (int32_t)&v2, v6, 0, v1, v3, v4, g59, g60, g61); // 0x8f665168
    int32_t result = v7; // R0
    int32_t v8;
    if (v7 != 0) {
        // 0x8f66520c
        v8 = g38;
        if (v3 != v8) {
            goto lab_0x8f66521c_4;
        }
        // 0x8f6652bc
        return result;
    }
    int32_t v9 = (int32_t)*(char *)g57; // 0x8f665174
    int32_t v10 = v9 & 247; // 0x8f66517c
    g56 = v10;
    uint16_t v11 = *(int16_t *)(g57 + 8); // 0x8f665180
    int32_t v12 = v11; // 0x8f665180
    int32_t v13 = a1 + v5 % 0x10000 + 1; // 0x8f66518c
    result = v13;
    int32_t v14; // 0x8f66526c
    int32_t v15; // 0x8f6651f0
    int32_t v16;
    int32_t v17;
    int32_t v18; // 0x8f6651ec
    int32_t v19; // 0x8f6651dc_0
    int32_t v20; // 0x8f6651e4
    uint32_t v21; // 0x8f66524c_0
    if (v10 == 2 && (v12 & 256) == 0) {
        uint32_t v22 = v2 % 0x10000; // 0x8f66519c
        if (v22 != 0) {
            char v23 = *(char *)v13; // 0x8f6651a8
            if (((int32_t)v23 & 128) == 0) {
                int32_t v24 = v13; // 0x8f6651f07
                if (v22 > 1 && v23 == 0) {
                    int32_t v25 = v13 + 1; // 0x8f6651c0
                    result = v25;
                    v2 = 0x10000 * (v22 - 1) / 0x10000;
                    v24 = v25;
                    // branch -> 0x8f6651cc
                }
                // 0x8f6651cc
                int32_t v26; // 0x8f665254
                if (v11 % 2 == 0) {
                    // 0x8f6651d4
                    if ((v12 & 128) != 0) {
                        v18 = g57;
                      lab_0x8f6651dc:
                        // 0x8f6651dc
                        v19 = v2;
                        v20 = *(int32_t *)(v18 + 4);
                        v17 = 0x10000 * v19 / 0x10000;
                        v15 = mcs_DER_decode(v24, (int32_t)&v17, v20, v18 + 2, v6, 0, v19, v3, v4, g59, g60, g61, g62, g51, v16, 0, 0, 0, 0, 0);
                        result = v15;
                        if ((v15 & 253) == 0) {
                          lab_0x8f6651fc:
                            // 0x8f6651fc
                            if (v17 % 0x10000 != v2 % 0x10000) {
                                // if_8f665208_0_true
                                result = 1;
                                // branch -> 0x8f66520c
                            }
                        }
                      lab_0x8f66520c_6:
                        // 0x8f66520c
                        v8 = g38;
                        if (v3 == v8) {
                            // 0x8f6652bc
                            return result;
                        }
                      lab_0x8f66521c_4:
                        // 0x8f66521c
                        __stack_chk_fail();
                        v14 = v8;
                        // branch -> 0x8f665220
                    } else {
                        v14 = v9;
                    }
                } else {
                    v26 = v9;
                  lab_0x8f66524c_4:
                    // 0x8f66524c
                    v21 = v2;
                    mcs_DER_decodeRaw(result, v21 % 0x10000, g57, v26, v6, 0, v21, v3, v4, g59, g60);
                    // branch -> 0x8f66520c
                    goto lab_0x8f66520c_6;
                }
                // 0x8f665220
                if (v14 == 48) {
                  lab_0x8f665220:
                    // 0x8f665220
                    v24 = result;
                    v18 = g57;
                    // branch -> 0x8f6651dc
                    goto lab_0x8f6651dc;
                  lab_0x8f66520c_8:
                    // 0x8f66520c
                    v8 = g38;
                    if (v3 != v8) {
                        goto lab_0x8f66521c_4;
                    }
                    // 0x8f6652bc
                    return result;
                }
              lab_0x8f665228:
                // 0x8f665228
                if ((v14 & 253) == 4) {
                    v26 = v14;
                    goto lab_0x8f66524c_4;
                }
                // 0x8f665234
                if (v14 == 12) {
                    v26 = 12;
                    goto lab_0x8f66524c_4;
                }
                // 0x8f66523c
                if (v14 == 19) {
                    v26 = 19;
                    goto lab_0x8f66524c_4;
                }
                // 0x8f665244
                if (v14 == 22) {
                    v26 = 22;
                    goto lab_0x8f66524c_4;
                }
                // 0x8f66525c
                if (g56 == 2) {
                    uint32_t v27 = v2; // 0x8f665264_0
                    mcs_DER_decodeInteger(result, v27 % 0x10000, g57, v14, v6, 0, v27, v3, v4);
                    // branch -> 0x8f66520c
                    goto lab_0x8f66520c_6;
                }
                // 0x8f665274
                switch (v14) {
                    default: {
                        // after_if_8f6652a8_0
                        result = 4;
                        // branch -> 0x8f66520c
                        goto lab_0x8f66520c_6;
                        break;
                    }
                    case 3: {
                        // 0x8f66527c
                        mcs_DER_decodeBitString(result, v2 % 0x10000, g57, 3, v6);
                        // branch -> 0x8f66520c
                        goto lab_0x8f66520c_6;
                        break;
                    }
                    case 1: {
                        // 0x8f665294
                        mcs_DER_decodeBoolean(result, v2 % 0x10000, g57, 1, v6);
                        // branch -> 0x8f66520c
                        goto lab_0x8f66520c_6;
                        break;
                    }
                    case 5: {
                        // if_8f6652ac_0_true
                        result = 0;
                        // branch -> 0x8f66520c
                        goto lab_0x8f66520c_6;
                        break;
                    }
                }
                // 0x8f66520c
                v8 = g38;
                if (v3 != v8) {
                    goto lab_0x8f66521c_4;
                }
                int32_t result2 = result; // 0x8f6652c0_2
                return result2;
            }
        }
        // 0x8f6652b4
        result = 1;
        // branch -> 0x8f66520c
    } else {
        // 0x8f6651cc
        if (v11 % 2 == 0) {
            // 0x8f6651d4
            if ((v12 & 128) != 0) {
                v18 = g57;
                // 0x8f6651dc
                v19 = v2;
                v20 = *(int32_t *)(v18 + 4);
                v17 = 0x10000 * v19 / 0x10000;
                v15 = mcs_DER_decode(v13, (int32_t)&v17, v20, v18 + 2, v6, 0, v19, v3, v4, g59, g60, g61, g62, g51, v16, 0, 0, 0, 0, 0);
                result = v15;
                if ((v15 & 253) == 0) {
                    goto lab_0x8f6651fc;
                }
                goto lab_0x8f66520c_8;
            } else {
                v14 = v9;
            }
        } else {
            // 0x8f66524c
            v21 = v2;
            mcs_DER_decodeRaw(result, v21 % 0x10000, g57, v9, v6, 0, v21, v3, v4, g59, g60);
            // branch -> 0x8f66520c
            goto lab_0x8f66520c_8;
        }
        // 0x8f665220
        if (v14 == 48) {
            goto lab_0x8f665220;
        }
        goto lab_0x8f665228;
    }
    // 0x8f66520c
    v8 = g38;
    if (v3 != v8) {
        goto lab_0x8f66521c_4;
    }
    // 0x8f6652bc
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:42:21
