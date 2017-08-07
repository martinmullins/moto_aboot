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

int32_t check_wififlash_mode(char * a1, int32_t a2);
int32_t dbval_finalise_cid_datablock(int32_t a1, int32_t a2, int32_t a3);
int32_t endpoint_enable(int32_t a1, int32_t a2, int32_t a3);
int32_t gcc_dsi_clocks_disable(int32_t a1, int32_t a2, int32_t a3);
int32_t gcc_dsi_clocks_enable(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t get_current_boot_mode(int32_t a1, int32_t a2, int32_t a3);
int32_t get_date_buf(int32_t a1, int32_t a2, int32_t a3);
int32_t get_font_type(int32_t a1, int32_t a2);
int32_t init_barcodes(int32_t a1, int32_t a2, int32_t a3);
int32_t is_bootloader_partition(char * str, int32_t a2, int32_t a3);
int32_t is_menu_auto_scroll(int32_t a1);
int32_t mcs_X509Certificate_initialize(int16_t * a1, int32_t a2);
int32_t mdss_dsi_auto_pll_config(int32_t * a1, int32_t a2);
int32_t mdss_dsi_wait4_video_done(int32_t a1);
int32_t mdss_dual_dsi_cmds_tx(int32_t a1, int32_t a2);
int32_t mipi_mot_get_controller_ver(void);
int32_t mipi_mot_get_manufacture_id(int32_t * a1, int32_t a2, int32_t a3);
int32_t normal_mode(int32_t a1, int32_t a2, int32_t a3);
int32_t partition_get_offset(uint32_t a1, int32_t a2);
int32_t qup_i2c_interrupt(int32_t a1, int32_t a2, int32_t a3);
int32_t request_warm_reset(char a1, int32_t a2, int32_t a3);
int32_t smem_get_ram_ptable_version(void);
int32_t spmi_enable_periph_interrupts(int32_t a1, int32_t a2, int32_t a3);
int32_t target_baseband(char * a1, int32_t a2, int32_t a3);
int32_t target_display_panel_node(char * a1, int32_t a2, int32_t a3);
int32_t target_ram_size(int32_t a1, int32_t a2);
int32_t target_usb_init(int32_t a1, int32_t a2);
int32_t write_gpt(int32_t a1, int32_t a2);
int32_t write_protect_was_enabled(char * a1, int32_t a2, int32_t a3);
int32_t write_wdata_from_array(int32_t a1, int32_t a2, int32_t a3, char * a4);

// --------------------- Global Variables ---------------------

int32_t g37 = 0; // LR
int32_t g38 = 0; // R1
int32_t g39 = 0; // R2
int32_t g40 = 0; // R4
int32_t g41 = 0; // R5
int32_t g42 = 0; // R6
int32_t g43 = 0; // R7
int32_t g44 = 0; // R8
int32_t g1 = -0x1a60cf8c; // 0x8f612158
int32_t g2 = 0x1c9496e0; // 0x8f67f5a0
int32_t g3 = 0; // 0x8f67f620
int32_t g4 = 8; // 0x8f67f624
int32_t g5 = 0x65440030; // 0x8f69c66f
char * g6[7] = {
    "utags",
    "pds",
    "persist",
    "mdm1hob",
    "sp",
    "cid",
    "hw"
}; // 0x8f6a2b9c
int32_t g7 = -0x79b779d6; // 0x8f6a6a2b
char * g8 = "\n"; // 0x8f6ac1b0
int32_t g9 = -1; // 0x8f6ac210
int32_t g10 = 0xffff; // 0x8f6acae4
int32_t g11 = 0xffff; // 0x8f6acaec
int32_t g12 = 4; // 0x8f6acb74
int32_t g13 = 4; // 0x8f6acb84
char (*g14)[5] = "sbl1"; // 0x8f6affb4
char g15 = 0; // 0x8f6b50b0
char g16 = 0; // 0x8f6b50b1
char g17 = 0; // 0x8f6b50b2
char g18 = 0; // 0x8f6b50b3
int32_t g19 = 0; // 0x8f6b7944
int32_t g20 = 0; // 0x8f6b8b04
int32_t g21 = 0; // 0x8f6c02aa
int32_t g22 = 0; // 0x8f6c02ba
int32_t g23 = 0; // 0x8f6c02ca
char * g24; // 0x8f6c02dd
char * g25; // 0x8f6c02e4
int32_t g26 = 0; // 0x8f6e130c
int32_t g27 = 0; // 0x8f6e1310
char * g28; // 0x8f6e1314
int32_t g29 = 0; // 0x8f6e1318
int32_t g30 = 0; // 0x8f6e1320
int32_t g31 = 0; // 0x8f6e1324
char * g32; // 0x8f6e9404
char * g33; // 0x8f6e9408
char * g34; // 0x8f70f724
int32_t g35 = 0; // 0x8f7112f4
int32_t g36 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f604aa8 - 0x8f604b7f
int32_t endpoint_enable(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g35;
    char * v2 = (char *)(a1 + 16); // 0x8f604ab8_0
    char v3 = *v2; // 0x8f604ab8
    int32_t v4 = *(int32_t *)(4 * (int32_t)v3 + 0x78d91c0); // 0x8f604acc
    int32_t result; // 0x8f604b44
    if (a2 == 0) {
        // 0x8f604b44
        result = (int32_t)*v2;
        *(int32_t *)(4 * result + 0x78d91c0) = v4;
        if (v1 != g35) {
            // 0x8f604b68
            __stack_chk_fail();
            // branch -> 0x8f604b6c
        }
        // 0x8f604b6c
        return result;
    }
    // 0x8f604ad4
    int32_t v5; // R3
    int32_t v6; // 0x8f604b14
    if (*(char *)(a1 + 17) != 0) {
        // 0x8f604ae4
        if (*(char *)(a1 + 18) == 0) {
            // if_8f604aec_0_true
            v5 = v4 | 0xc80000;
            // branch -> 0x8f604af4
        } else {
            // if_8f604af0_0_true
            v5 = v4 | 0xcc0000;
            // branch -> 0x8f604af4
        }
        // 0x8f604af4
        if (v3 != 0) {
            // 0x8f604afc
            if (*(char *)(a1 + 18) == 0) {
                // 0x8f604b08
                v6 = *(int32_t *)(a1 + 8);
                *(int32_t *)v6 = g19 == 0 ? 0x20400000 : 0x22000000;
                // branch -> 0x8f604b24
            }
        }
        // 0x8f604b24
        if (*v2 != 0) {
            // 0x8f604b30
            if (*(char *)(a1 + 18) != 0) {
                // if_8f604b38_0_true
                *(int32_t *)*(int32_t *)(a1 + 8) = 0x20400000;
                // branch -> 0x8f604b44
            }
        }
        // 0x8f604b44
        result = (int32_t)*v2;
        *(int32_t *)(4 * result + 0x78d91c0) = v5;
        if (v1 != g35) {
            // 0x8f604b68
            __stack_chk_fail();
            // branch -> 0x8f604b6c
        }
        // 0x8f604b6c
        return result;
    }
    // if_8f604adc_0_true
    v5 = v4 | 200;
    // branch -> 0x8f604af4
    // 0x8f604af4
    if (v3 != 0) {
        // 0x8f604afc
        if (*(char *)(a1 + 18) == 0) {
            // 0x8f604b08
            v6 = *(int32_t *)(a1 + 8);
            *(int32_t *)v6 = g19 == 0 ? 0x20400000 : 0x22000000;
            // branch -> 0x8f604b24
        }
    }
    // 0x8f604b24
    if (*v2 == 0) {
        // 0x8f604b44
        result = (int32_t)*v2;
        *(int32_t *)(4 * result + 0x78d91c0) = v5;
        if (v1 != g35) {
            // 0x8f604b68
            __stack_chk_fail();
            // branch -> 0x8f604b6c
        }
        // 0x8f604b6c
        return result;
    }
    // 0x8f604b30
    if (*(char *)(a1 + 18) != 0) {
        // if_8f604b38_0_true
        *(int32_t *)*(int32_t *)(a1 + 8) = 0x20400000;
        // branch -> 0x8f604b44
    }
    // 0x8f604b44
    result = (int32_t)*v2;
    *(int32_t *)(4 * result + 0x78d91c0) = v5;
    if (v1 != g35) {
        // 0x8f604b68
        __stack_chk_fail();
        // branch -> 0x8f604b6c
    }
    // 0x8f604b6c
    return result;
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// uLong crc32(uLong crc, const Bytef * buf, uInt len);
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
// Decompilation date: 2017-08-06 19:00:15
