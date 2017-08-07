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

int32_t __utag_notify(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t __utags_walk_existing(int32_t a1, int32_t (*a2)(int32_t, int32_t, int32_t), int32_t a3);
int32_t add_panel_to_manager(int32_t * a1, int32_t a2, int32_t a3);
int32_t build_sig_is_uniform(void);
int32_t cmd_token_free(char * a1, int32_t a2);
int32_t dbval_validate_cert_chain(char * a1);
int32_t dbval_validate_signature(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t disable_source_detect_irq(void);
int32_t enable_source_detect_irq(int32_t a1, int32_t a2);
int32_t fboot_cmd_multiflash_validate(int32_t a1, int32_t a2);
int32_t fboot_cmd_preflash_validate(int32_t * a1);
int32_t fboot_usb_read(int32_t a1, int32_t a2);
int32_t fboot_usb_write(int32_t a1, int32_t a2);
int32_t fdt_node_check_compatible(int32_t a1, int32_t a2, char * a3);
int32_t fdt_node_offset_by_compatible(int32_t a1, int32_t a2, int32_t a3);
int32_t get_current_panel(void);
int32_t gfx_flush(int32_t * a1, int32_t a2, int32_t a3);
int32_t gfx_flush_rows(int32_t * a1, int32_t a2, int32_t a3);
int32_t is_charger_fan54046(void);
int32_t is_charger_smb1359(int32_t a1, int32_t a2);
int32_t is_sparse_image(int32_t * a1, int32_t a2, int32_t a3);
int32_t parse_sparse_image(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t platform_get_phys_to_virt_mapping(int32_t a1, int32_t a2, int32_t a3);
int32_t platform_is_msm8939(int32_t a1, int32_t a2);
int32_t poweroff_handler_start(char * a1, int32_t a2, int32_t a3);
int32_t SecMakeEngineering(int32_t a1, int32_t a2);
int32_t SecMakeProduction(int32_t a1, int32_t a2, int32_t a3);
int32_t smem_read_alloc_entry(int32_t a1, int32_t a2);
int32_t smem_read_alloc_entry_offset(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t trigger_to_power_off(int32_t a1, int32_t a2);
int32_t unknown_69732061(int32_t a1);

// --------------------- Global Variables ---------------------

int32_t g47 = 0; // LR
int32_t g48 = 0; // R0
int32_t g49 = 0; // R1
int32_t g50 = 0; // R10
int32_t g51 = 0; // R12
int32_t g52 = 0; // R2
int32_t g53 = 0; // R3
int32_t g54 = 0; // R4
int32_t g55 = 0; // R5
int32_t g56 = 0; // R6
int32_t g57 = 0; // R7
int32_t g58 = 0; // R8
int32_t g59 = 0; // R9
int32_t g1 = -0x1a60cfc4; // 0x8f62d6e8
int32_t g2 = -0x16d2bf10; // 0x8f651560
int32_t g3 = -0x1a60cfd4; // 0x8f6760e8
int32_t g4 = -0x1a60cfd4; // 0x8f676120
int32_t g5 = -0x1a60cfa8; // 0x8f676158
int32_t g6 = -0x1a60cf9c; // 0x8f6761bc
int32_t g7 = -0x1a60cf9c; // 0x8f67622c
int32_t g8 = -0x1a60cfa8; // 0x8f67629c
int32_t g9 = -0x1a60cfd0; // 0x8f676300
int32_t g10 = -0x1a60cf70; // 0x8f6763ac
int32_t g11 = -0x21fc7dd0; // 0x8f6a56d3
int32_t g12 = 1; // 0x8f6ac0f0
int32_t g13 = 0xffff; // 0x8f6ac218
int32_t g14 = 1; // 0x8f6afe1c
int32_t g15 = 0; // 0x8f6b50a4
char * g16; // 0x8f6c03bc
int32_t g17 = 0; // 0x8f6c064c
int32_t g18 = 0; // 0x8f6c0650
int32_t g19 = 0; // 0x8f6c0654
int32_t g20 = 0; // 0x8f6c0658
int32_t g21 = 0; // 0x8f6c065c
int32_t g22 = 0; // 0x8f6c0660
int32_t g23 = 0; // 0x8f6c066c
int32_t g24 = 0; // 0x8f6c0688
int32_t g25 = 0; // 0x8f6c068c
char * g26; // 0x8f6c0690
int32_t g27 = 0; // 0x8f6e0690
char * g28; // 0x8f6e0694
char * g29; // 0x8f6e0698
char * g30; // 0x8f6e069c
char * g31; // 0x8f6e06a5
char * g32; // 0x8f6e06a8
char * g33; // 0x8f6e06aa
char * g34; // 0x8f6e06b0
int32_t g35 = 0; // 0x8f6e06b4
int32_t g36 = 0; // 0x8f6e06c0
char * g37; // 0x8f6e06dc
int32_t g38 = 0; // 0x8f6e0bd0
char * g39; // 0x8f6e1200
int32_t g40 = 0; // 0x8f6e1228
int32_t g41 = 0; // 0x8f6e12dc
int32_t g42 = 0; // 0x8f6e12e0
int32_t g43 = 0; // 0x8f7112f4
int32_t g44 = 0; // 0x8f711550
int32_t g45 = 0; // 0x8f711554
int32_t g46 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f662690 - 0x8f6627f7
int32_t dbval_validate_cert_chain(char * a1) {
    int32_t v1 = (int32_t)a1; // R4
    int32_t v2 = g43;
    int32_t v3; // R0
    int32_t v4; // 0x8f6627d4_24
    if (a1 == NULL) {
        // if_8f6626a8_0_true
        v3 = 240;
        v4 = 240;
        // branch -> 0x8f6627bc
    } else {
        int32_t v5 = (int32_t)&g43 & -0x10000 | 994;
        dbval_debug_print2((int32_t)"dbval_validate_cert_chain: status == DBVAL_ERR_NONE", g49, v2);
        int32_t v6 = (int32_t)*(char *)(v1 + 1202); // 0x8f6626cc
        int32_t v7;
        int32_t v8 = &v7; // 0x8f6626d8_0
        int32_t v9 = (int32_t)*(char *)(v1 + 1203) | 256 * v6; // 0x8f6626e4
        v7 = v9;
        if (v9 < 1201) {
            // 0x8f6626fc
            dbval_debug_print2((int32_t)"dbval_validate_cert_chain: Setup the pointer to the data location for the 1st cert", g49, v6);
            int32_t v10 = v7; // 0x8f662704
            int32_t v11 = v1 + 1204; // 0x8f662710
            int32_t v12 = 1200 - v10; // 0x8f66271c
            int32_t v13;
            if (dbval_memcmp_value(v11 + v10, v12, 0, v9, v13) == 15) {
                int32_t v14 = 0; // R5
                dbval_debug_print2((int32_t)"dbval_validate_cert_chain: Setup the chain struct for the certificate", v12, 0);
                int32_t v15;
                int32_t v16 = &v15; // 0x8f66273c_0
                int32_t v17 = (int32_t)*(char *)(v1 + 1); // 0x8f662744
                int32_t v18 = 0x1000000 * v14 / 0x1000000; // 0x8f662748_0
                int32_t v19 = v17 | 256 * (int32_t)*(char *)v1; // 0x8f66274c
                v15 = v19;
                if (v19 <= 1200) {
                    // 0x8f66275c
                    dbval_debug_print2((int32_t)"dbval_validate_cert_chain: Set the ptr to the data location for the 2nd cert", v12, v19);
                    int32_t v20 = v15; // 0x8f662764
                    int32_t v21 = v1 + 2; // 0x8f662768
                    int32_t v22 = 1200 - v20; // 0x8f662778
                    int32_t result = dbval_memcmp_value(v21 + v20, v22, v14, v17, v13); // 0x8f66277c
                    if (result == 15) {
                        // 0x8f66278c
                        dbval_debug_print2((int32_t)"dbval_validate_cert_chain: Setup the final chain", v22, v14);
                        int32_t v23 = &v5; // 0x8f662798_0
                        int32_t v24;
                        int32_t v25 = mcs_verify_cert_chain(2, v23, v14, v17, v13, (int32_t)&g43 & -0x10000 | 994, (int32_t)&g11, 1, v8, v7, v11, v18, v16, v15, v21, 0x1000000 * v14 / 0x1000000, v14, v2, g54, g55, g56, g47, v24, 0, 0, 0, 0, 0); // 0x8f6627a4
                        if (v25 == v14) {
                            // 0x8f6627b0
                            dbval_debug_print2((int32_t)"dbval_validate_cert_chain: set success", v23, v14);
                            // branch -> 0x8f6627bc
                            // 0x8f6627bc
                            if (v2 != g43) {
                                // 0x8f6627cc
                                __stack_chk_fail();
                                // branch -> 0x8f6627d0
                            }
                            // 0x8f6627d0
                            return result;
                        }
                    }
                }
            }
        }
        // 0x8f6626f4
        v3 = 85;
        v4 = 85;
        // branch -> 0x8f6627bc
    }
    // 0x8f6627bc
    int32_t result2; // 0x8f6627d4_2
    if (v2 != g43) {
        // 0x8f6627cc
        __stack_chk_fail();
        result2 = v3;
        // branch -> 0x8f6627d0
    } else {
        result2 = v4;
    }
    // 0x8f6627d0
    return result2;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * calloc(size_t nmemb, size_t size);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memchr(void * s, int c, size_t n);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:16:33
