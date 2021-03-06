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

int32_t cache_inv_range(int32_t a1, int32_t a2, int32_t a3);
char * mmc_get_card_status_isra_3(char * a1, int32_t * a2, int32_t * a3);
int32_t mmc_parse_response(char * a1, int32_t a2);
char * mmc_send_app_cmd_isra_5(char * a1, int32_t a2);
int32_t mmc_set_bus_width(char * a1);
char * mmc_switch_cmd(char * a1, int32_t a2, int32_t a3, int32_t a4);
char * mot_tzbsp_call(int32_t a1, int32_t a2, int32_t a3);
int32_t sdhci_int_handler(int32_t * a1, int32_t a2);
int32_t sdhci_msm_config_dll_isra_4(char * a1, int32_t a2);
int32_t sdhci_msm_init(int32_t * a1, int32_t * a2);
int32_t sdhci_msm_init_dll(char * a1, int32_t a2, int32_t a3);
int32_t SecReadFuse(int32_t a1, int32_t a2);
int32_t SecReadFuseQC(int32_t a1);
int32_t setup_ack(int32_t result, int32_t a2, int32_t a3);
int32_t target_mmc_do_write_protect(int32_t a1, int32_t a2, int32_t a3);
int32_t target_mmc_erase(int32_t a1, int32_t a2, int32_t a3);
int32_t target_mmc_erase_group_size(int32_t a1, int32_t a2);
int32_t target_mmc_get_protect_group_size(int32_t a1, int32_t a2, int32_t a3);
int32_t target_mmc_read(int32_t a1, int32_t a2, int32_t a3);
int32_t target_mmc_write(int32_t a1, int32_t a2, int32_t a3);
int32_t udc_interrupt(int32_t a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g31 = 0; // LR
int32_t g32 = 0; // R1
int32_t g33 = 0; // R2
int32_t g34 = 0; // R3
int32_t g35 = 0; // R4
int32_t g36 = 0; // R5
int32_t g37 = 0; // R6
int32_t g38 = 0; // R7
int32_t g1 = -0x1a60df78; // 0x8f604cbc
int32_t g2 = -0x16d2bfed; // 0x8f608218
char * g3[12] = {
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
int32_t g4 = 0; // 0x8f67d910
int32_t g5 = 1; // 0x8f67d914
int32_t g6 = 3; // 0x8f67d918
int32_t g7 = 2; // 0x8f67d91c
int32_t g8 = 6; // 0x8f67d920
int32_t g9 = 7; // 0x8f67d924
int32_t g10 = 5; // 0x8f67d928
int32_t g11 = 4; // 0x8f67d92c
int32_t g12 = 12; // 0x8f67d930
int32_t g13 = 13; // 0x8f67d934
int32_t g14 = 15; // 0x8f67d938
int32_t g15 = 14; // 0x8f67d93c
int32_t g16 = 10; // 0x8f67d940
int32_t g17 = 11; // 0x8f67d944
int32_t g18 = 9; // 0x8f67d948
int32_t g19 = 8; // 0x8f67d94c
int32_t g20 = 0; // 0x8f6b7920
int32_t g21 = 0; // 0x8f6b7924
char * g22; // 0x8f6b7928
int32_t g23 = 0; // 0x8f6b792c
int32_t g24 = 0; // 0x8f6b7934
int32_t g25 = 0; // 0x8f6b7938
int32_t g26 = 0; // 0x8f6b793c
int32_t g27 = 0; // 0x8f6b7940
int32_t g28 = 0; // 0x8f6b7944
int32_t g29 = 0; // 0x8f6b7948
int32_t g30 = 0; // 0x8f7112f4

// ------------------------ Functions -------------------------

// Address range: 0x8f606ecc - 0x8f606ff3
int32_t SecReadFuse(int32_t a1, int32_t a2) {
    int32_t v1 = g30;
    g35 = &g30;
    int32_t v2; // 0x8f606f30
    int32_t v3; // 0x8f606f34
    int32_t v4; // 0x8f606fc8
    int32_t v5; // R0
    int32_t v6; // 0x8f606fec_23
    switch (a1) {
        default: {
            // 0x8f606fd0
            v5 = -1;
            v6 = -1;
            // branch -> 0x8f606fd4
            break;
        }
        case 101: {
            // 0x8f606f24
            // branch -> 0x8f606f30
            // 0x8f606f30
            v2 = SecReadFuseQC(0);
            v3 = SecGetSVNum(v2, a2, v1);
            v5 = v3;
            v6 = v3;
            // branch -> 0x8f606fd4
            break;
        }
        case 102: {
            // 0x8f606f2c
            // branch -> 0x8f606f30
            // 0x8f606f30
            v2 = SecReadFuseQC(1);
            v3 = SecGetSVNum(v2, a2, v1);
            v5 = v3;
            v6 = v3;
            // branch -> 0x8f606fd4
            break;
        }
        case 103: {
            // 0x8f606f44
            // branch -> 0x8f606f30
            // 0x8f606f30
            v2 = SecReadFuseQC(3);
            v3 = SecGetSVNum(v2, a2, v1);
            v5 = v3;
            v6 = v3;
            // branch -> 0x8f606fd4
            break;
        }
        case 104: {
            // 0x8f606f3c
            // branch -> 0x8f606f30
            // 0x8f606f30
            v2 = SecReadFuseQC(2);
            v3 = SecGetSVNum(v2, a2, v1);
            v5 = v3;
            v6 = v3;
            // branch -> 0x8f606fd4
            break;
        }
        case 105: {
            int32_t v7 = SecReadFuseQC(4) / 0x8000 % 0x10000; // 0x8f606f54
            v5 = v7;
            v6 = v7;
            // branch -> 0x8f606fd4
            break;
        }
        case 106: {
            int32_t v8 = SecReadFuseQC(4) / 0x2000 % 2; // 0x8f606f64
            v5 = v8;
            v6 = v8;
            // branch -> 0x8f606fd4
            break;
        }
        case 107: {
            int32_t v9 = SecReadFuseQC(4) / 0x4000 % 2; // 0x8f606f74
            v5 = v9;
            v6 = v9;
            // branch -> 0x8f606fd4
            break;
        }
        case 108: {
            int32_t v10 = SecReadFuseQC(4) / 256 % 32; // 0x8f606f84
            v5 = v10;
            v6 = v10;
            // branch -> 0x8f606fd4
            break;
        }
        case 109: {
            int32_t v11 = SecReadFuseQC(4) % 2; // 0x8f606f94
            v5 = v11;
            v6 = v11;
            // branch -> 0x8f606fd4
            break;
        }
        case 110: {
            int32_t v12 = SecReadFuseQC(4) / 2 % 2; // 0x8f606fa4
            v5 = v12;
            v6 = v12;
            // branch -> 0x8f606fd4
            break;
        }
        case 111: {
            int32_t v13 = SecReadFuseQC(5) % 1024; // 0x8f606fb4
            v5 = v13;
            v6 = v13;
            // branch -> 0x8f606fd4
            break;
        }
        case 112: {
            // 0x8f606fc8
            v4 = SecReadFuseQC(6);
            v5 = v4;
            v6 = v4;
            // branch -> 0x8f606fd4
            break;
        }
        case 113: {
            // 0x8f606fc4
            // branch -> 0x8f606fc8
            // 0x8f606fc8
            v4 = SecReadFuseQC(7);
            v5 = v4;
            v6 = v4;
            // branch -> 0x8f606fd4
            break;
        }
    }
    // 0x8f606fd4
    int32_t result; // 0x8f606fec_2
    if (v1 != g30) {
        // 0x8f606fe4
        __stack_chk_fail();
        result = v5;
        // branch -> 0x8f606fe8
    } else {
        result = v6;
    }
    // 0x8f606fe8
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 21
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:32:07
