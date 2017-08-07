//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t bare_board_clk_enable(int32_t a1, int32_t a2, int32_t a3);
int32_t can_write_partition(int32_t a1, uint32_t a2, int32_t a3);
int32_t charger_gone_irq_handler(int32_t (*a1)(int32_t), int32_t a2, int32_t a3);
int32_t dbval_free(char * a1, int32_t a2, int32_t a3);
int32_t dbval_pal_cid_get_secondary_serial_num_type(char * a1, int32_t a2, int32_t a3);
int32_t dbval_start_timer(int32_t a1, int32_t a2);
int32_t display_image(char * str3, int32_t a2, int32_t a3, int32_t a4);
int32_t fdt_check_header(int32_t * a1, int32_t a2, int32_t a3);
int32_t fdt_get_name(int32_t a1, int32_t a2, int32_t * a3);
int32_t fdt_offset_ptr(int32_t a1, int32_t a2, int32_t a3);
int32_t fdt_subnode_offset(char * a1, int32_t a2, char * str, int32_t a4, int32_t a5);
int32_t finalize_security_policies(int32_t a1, int32_t a2, int32_t a3);
void function_8f64a18c(void);
void function_8f64a1e0(int32_t a1, int32_t a2, int32_t a3);
int32_t hab_check_bound_sig_allowed(int32_t a1, int32_t a2);
int32_t hab_su_srk_selection(int32_t a1, int32_t a2);
int32_t LZ4_decompress_safe_withPrefix64k(char * a1, char * a2, int32_t a3, int32_t a4, int32_t a5);
int32_t mcs_habp_rsa(int32_t a1, int32_t a2, int32_t a3, int32_t a4, uint32_t a5);
int32_t mcs_habp_rsa_crt(int32_t a1, uint32_t a2, int32_t a3, int32_t a4);
int32_t mcs_rng_seed_data(int32_t a1, int32_t a2, int32_t a3);
int32_t mot_sst_pal_delete_user_partition(int32_t a1, int32_t a2);
int32_t mot_sst_pal_erase_token(int32_t a1, int32_t a2);
int32_t ondraw_44(void);
int32_t pm8x41_irq_mask_ack(uint32_t a1, uint32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t pm8x41_irq_unmask(uint32_t a1, uint32_t a2);
int32_t power_source_detected(int32_t a1, int32_t a2, int32_t a3);
int32_t register_usb_connection_callback(char * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t resume_usb_detection(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t type_atoi_2(char * str, int32_t a2, int32_t a3);
int32_t XXH32(char * a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g48 = 0; // LR
int32_t g49 = 0; // R0
int32_t g50 = 0; // R1
int32_t g51 = 0; // R10
int32_t g52 = 0; // R12
int32_t g53 = 0; // R2
int32_t g54 = 0; // R3
int32_t g55 = 0; // R4
int32_t g56 = 0; // R5
int32_t g57 = 0; // R6
int32_t g58 = 0; // R7
int32_t g59 = 0; // R8
int32_t g60 = 0; // R9
bool g1 = false; // flagn
bool g2 = false; // flagv
int32_t g3 = -0x16d2bf09; // 0x8f634ac0
int32_t (*g4)() = (int32_t (*)())-0x16d2bff0; // 0x8f665d64
int32_t g5 = -0x16d2bff0; // 0x8f665ddc
int32_t g6 = -0x16d2bff0; // 0x8f6663f0
int32_t g7 = -0x16d2bff0; // 0x8f666470
int32_t g8 = -0x16d2bfd0; // 0x8f6664f4
int32_t g9 = 0x6e61000a; // 0x8f6826e7
char g10[2] = "/"; // 0x8f686fbc
int32_t g11 = 0x5b5e0029; // 0x8f687c45
char * g13[5] = {
    "Your device didn't start up successfully.\n",
    "Use the Software Repair Assistant on computer\n",
    "to repair your device.\n",
    "Connect your device to your computer to get\n",
    "the Software Repair Assistant.\n"
}; // 0x8f69cca0
char * g14[4] = {
    "Use the Software Repair Assistant on computer\n",
    "to repair your device.\n",
    "Connect your device to your computer to get\n",
    "the Software Repair Assistant.\n"
}; // 0x8f69cca4
char * g15[3] = {
    "to repair your device.\n",
    "Connect your device to your computer to get\n",
    "the Software Repair Assistant.\n"
}; // 0x8f69cca8
char * g16[2] = {
    "Connect your device to your computer to get\n",
    "the Software Repair Assistant.\n"
}; // 0x8f69ccac
char (*g17)[32] = "the Software Repair Assistant.\n"; // 0x8f69ccb0
int32_t g18 = 0; // 0x8f69ccc4
char * g19 = "\x01"; // 0x8f6a3f48
int32_t g20 = 0x746e6300; // 0x8f6a4e20
char * g21[2] = {
    "sp",
    "keystore"
}; // 0x8f6a7d98
char * g22 = "\x01"; // 0x8f6aca1c
char * g23 = "\x02"; // 0x8f6aca74
int32_t g24 = 0; // 0x8f6e0724
int32_t g25 = 0; // 0x8f6e0740
char * g26; // 0x8f6e0a00
char * g27; // 0x8f6e0a08
char * g28; // 0x8f6e0a09
int32_t g29 = 0; // 0x8f6e0a28
int32_t g30 = 0; // 0x8f6e0a44
int32_t g31 = 0; // 0x8f6e0a58
int32_t g32 = 0; // 0x8f70dab0
int32_t g33 = 0; // 0x8f7112f4
char * g34; // 0x8f711464
char * g35; // 0x8f711580
char * g36; // 0x8f711588
char * g37; // 0x8f711589
char g38 = 0; // 0x8f71158a
char g39 = 0; // 0x8f71158b
int32_t g40 = 0; // 0x8f712580
int32_t g41 = 0; // 0x8f712584
int32_t g42 = 0; // 0x8f712588
int32_t g43 = 0; // 0x8f71258c
int32_t g44 = 0; // 0x8f712590
int32_t g45 = 0; // 0x8f712594
int32_t g46 = 0; // 0x8f712598
int32_t g47 = 0; // 0x8f7125ec
char * g12[7] = {
    "         Start Up Failed:\n",
    (char *)&g9,
    "Your device didn't start up successfully.\n",
    "Use the Software Repair Assistant on computer\n",
    "to repair your device.\n",
    "Connect your device to your computer to get\n",
    "the Software Repair Assistant.\n"
}; // 0x8f69cc98

// ------------------------ Functions -------------------------

// Address range: 0x8f64b880 - 0x8f64b99f
int32_t fdt_check_header(int32_t * a1, int32_t a2, int32_t a3) {
    int32_t v1 = (int32_t)a1;
    int32_t v2 = g55; // 0x8f64b880
    int32_t v3 = g33;
    int32_t v4 = fdt32_to_cpu_99(*a1, a2, a3, v3, v1, v3, a3, v2); // 0x8f64b89c
    int32_t v5 = -0x2ff20113; // R3
    int32_t v6; // 0x8f64b8fc
    int32_t v7; // 0x8f64b928
    uint32_t v8; // 0x8f64b944
    int32_t v9; // R5
    int32_t v10; // R6
    int32_t v11; // 0x8f64b8ec
    int32_t v12; // 0x8f64b8f8
    uint32_t v13; // 0x8f64b900
    int32_t v14; // 0x8f64b918
    int32_t v15; // 0x8f64b924
    uint32_t v16; // 0x8f64b92c
    int32_t v17; // 0x8f64b93c
    if (v4 == -0x2ff20113) {
        int32_t v18 = *(int32_t *)(v1 + 20); // 0x8f64b8ac
        if (fdt32_to_cpu_99(v18, a2, a3, -0x2ff20113, v1, v3, a3, v2) >= 16) {
            int32_t v19 = *(int32_t *)(v1 + 24); // 0x8f64b8bc
            if (fdt32_to_cpu_99(v19, a2, a3, v5, v1, v3, a3, v2) < 18) {
                // 0x8f64b8ec
                v11 = *(int32_t *)(v1 + 8);
                v10 = fdt32_to_cpu_99(v11, a2, a3, v5, v1, v3, a3, v2);
                v12 = *(int32_t *)(v1 + 36);
                v6 = fdt32_to_cpu_99(v12, a2, a3, v5, v1, v3, a3, v2);
                v13 = -1 - v6;
                if (v10 <= v13) {
                    // 0x8f64b918
                    v14 = *(int32_t *)(v1 + 12);
                    v9 = fdt32_to_cpu_99(v14, a2, a3, v13, v1, v3, a3, v2);
                    v15 = *(int32_t *)(v1 + 32);
                    v7 = fdt32_to_cpu_99(v15, a2, a3, v13, v1, v3, a3, v2);
                    v16 = -1 - v7;
                    if (v9 <= v16) {
                        // 0x8f64b93c
                        v17 = *(int32_t *)(v1 + 4);
                        v8 = fdt32_to_cpu_99(v17, a2, a3, v16, v1, v3, a3, v2);
                        if (v6 + v10 <= v8) {
                            // 0x8f64b950
                            if (v7 + v9 <= v8) {
                                // if_8f64b958_0_true
                                // branch -> 0x8f64b978
                                // 0x8f64b978
                                if (v3 != g33) {
                                    // 0x8f64b988
                                    __stack_chk_fail();
                                    // branch -> 0x8f64b98c
                                }
                                // 0x8f64b98c
                                g55 = v2;
                                return 0;
                            }
                        }
                    }
                }
                // 0x8f64b910
                // branch -> 0x8f64b978
                // 0x8f64b978
                if (v3 != g33) {
                    // 0x8f64b988
                    __stack_chk_fail();
                    // branch -> 0x8f64b98c
                }
                // 0x8f64b98c
                g55 = v2;
                return 4;
            }
        }
        // 0x8f64b964
        // branch -> 0x8f64b978
        // 0x8f64b978
        if (v3 != g33) {
            // 0x8f64b988
            __stack_chk_fail();
            // branch -> 0x8f64b98c
        }
        // 0x8f64b98c
        g55 = v2;
        return -10;
    }
    // 0x8f64b8d0
    v5 = 0x2ff20112;
    if (v4 != 0x2ff20112) {
        // 0x8f64b96c
        // branch -> 0x8f64b978
        // 0x8f64b978
        if (v3 != g33) {
            // 0x8f64b988
            __stack_chk_fail();
            // branch -> 0x8f64b98c
        }
        // 0x8f64b98c
        g55 = v2;
        return -9;
    }
    int32_t v20 = *(int32_t *)(v1 + 36); // 0x8f64b8dc
    int32_t v21; // R0
    int32_t v22; // 0x8f64b990_23
    if (fdt32_to_cpu_99(v20, a2, a3, 0x2ff20112, v1, v3, a3, v2) == 0) {
        // 0x8f64b974
        v21 = -7;
        v22 = -7;
        // branch -> 0x8f64b978
    } else {
        // 0x8f64b8ec
        v11 = *(int32_t *)(v1 + 8);
        v10 = fdt32_to_cpu_99(v11, a2, a3, v5, v1, v3, a3, v2);
        v12 = *(int32_t *)(v1 + 36);
        v6 = fdt32_to_cpu_99(v12, a2, a3, v5, v1, v3, a3, v2);
        v13 = -1 - v6;
        if (v10 <= v13) {
            // 0x8f64b918
            v14 = *(int32_t *)(v1 + 12);
            v9 = fdt32_to_cpu_99(v14, a2, a3, v13, v1, v3, a3, v2);
            v15 = *(int32_t *)(v1 + 32);
            v7 = fdt32_to_cpu_99(v15, a2, a3, v13, v1, v3, a3, v2);
            v16 = -1 - v7;
            if (v9 <= v16) {
                // 0x8f64b93c
                v17 = *(int32_t *)(v1 + 4);
                v8 = fdt32_to_cpu_99(v17, a2, a3, v16, v1, v3, a3, v2);
                if (v6 + v10 <= v8) {
                    // 0x8f64b950
                    if (v7 + v9 <= v8) {
                        // if_8f64b958_0_true
                        // branch -> 0x8f64b978
                        // 0x8f64b978
                        if (v3 != g33) {
                            // 0x8f64b988
                            __stack_chk_fail();
                            // branch -> 0x8f64b98c
                        }
                        // 0x8f64b98c
                        g55 = v2;
                        return 0;
                    }
                }
            }
        }
        // 0x8f64b910
        v21 = 4;
        v22 = 4;
        // branch -> 0x8f64b978
    }
    // 0x8f64b978
    int32_t result; // 0x8f64b990_2
    if (v3 != g33) {
        // 0x8f64b988
        __stack_chk_fail();
        result = v21;
        // branch -> 0x8f64b98c
    } else {
        result = v22;
    }
    // 0x8f64b98c
    g55 = v2;
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// int isalpha(int c);
// void * malloc(size_t size);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// char * strtok(char * restrict s, const char * restrict delim);

// --------------- Instruction-Idiom Functions ----------------

// int32_t llvm_bswap_i32(int32_t a1);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:45:05
