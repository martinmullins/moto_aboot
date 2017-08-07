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

// Address range: 0x8f6225bc - 0x8f622737
int32_t flash_partition(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = g59; // 0x8f6225bc
    int32_t v2 = g38;
    int32_t v3;
    int32_t v4;
    int32_t v5;
    int32_t v6;
    if (a2 == 0) {
        // 0x8f6225e4
        print_log(0, (int32_t)"invalid image!\n", v2, (int32_t)&g38, v6, v5, v4, v3, 0, v2, 0, v1, g60);
        // branch -> 0x8f6226e8
        // 0x8f6226e8
        // branch -> 0x8f6226ec
        // 0x8f6226ec
        g53 = &g38;
        g57 = v2;
        if (v2 != g38) {
            // 0x8f622704
            __stack_chk_fail();
            // branch -> 0x8f622708
        }
        // 0x8f622708
        g59 = v1;
        return -1;
    }
    int32_t v7 = partition_get_index(a1, a2, v2, (int32_t)&g38, v6, v5); // 0x8f6225f4
    if (v7 == -1) {
        // 0x8f622604
        print_log(0, (int32_t)"Unable to find partition \"%s\"\n", a1, (int32_t)&g38, v6, v5, v4, v3, 0, v2, 0, v1, g60);
        // branch -> 0x8f6226e8
        // 0x8f6226e8
        // branch -> 0x8f6226ec
        // 0x8f6226ec
        g53 = &g38;
        g57 = v2;
        if (v2 != g38) {
            // 0x8f622704
            __stack_chk_fail();
            // branch -> 0x8f622708
        }
        // 0x8f622708
        g59 = v1;
        return -1;
    }
    int32_t v8 = partition_get_size(v7, a2, v2, (int32_t)&g38, v6, v5, v4, v3); // 0x8f622618
    int32_t v9 = partition_get_offset(v7, a2, v2); // 0x8f622628
    bool v10 = false; // 0x8f62263c
    bool v11 = a4 >= a2; // 0x8f62263c
    if (a4 == a2) {
        // if_8f622630_0_true
        v10 = a3 == v8;
        v11 = a3 >= v8;
        // branch -> after_if_8f622630_0
    }
    if (v10 || v11 ^ true) {
        // 0x8f622668
        print_log(1, (int32_t)"erasing %s\n", a1, (int32_t)&g38, v6, v5, v4, v3, 0, v2, 0, v1, g60);
        int32_t result = erase_partition(a1, (int32_t)"erasing %s\n", a1, (int32_t)&g38, v6, v5, v4); // 0x8f62267c
        if (result == -1) {
            // 0x8f62268c
            print_log(0, (int32_t)"Failed to erase partition %s\n", a1, (int32_t)&g38, v6, v5, v4, v3, 0, v2, 0, v1, g60);
            // branch -> 0x8f6226ec
        } else {
            // 0x8f6226a0
            print_log(2, (int32_t)"flashing %s: offset=0x%llx, data_size=0x%llx\n", a1, (int32_t)&g38, v9, a2, a3, a4, 0, v2, 0, v1, g60);
            int32_t v12;
            if (generic_mmc_write_logical(v9, a2, a3, a4, a2, a2, a3, a4, 0, v2, 0, v1, g60, g61, g62, g63, g64, g54, g55, g51, v12, 0, 0, 0, 0, 0, 0, 0) != 0) {
                // 0x8f6226d8
                fboot_info((int32_t)"INFO", (int32_t)"Failed to flash partition %s\n", a1, a4, a2, a2, a3, a4, 0, v2, 0);
                // branch -> 0x8f6226e8
                // 0x8f6226e8
                result = -1;
                // branch -> 0x8f6226ec
            } else {
                result = 0;
            }
        }
        // 0x8f6226ec
        g53 = &g38;
        g57 = v2;
        if (v2 != g38) {
            // 0x8f622704
            __stack_chk_fail();
            // branch -> 0x8f622708
        }
        // 0x8f622708
        g59 = v1;
        return result;
    }
    // 0x8f622640
    print_log(0, (int32_t)"image %s size exceeds limit: size=0x%llx, actual=0x%llx\n", a1, (int32_t)&g38, v8, a2, a3, a4, 0, v2, 0, v1, g60);
    fboot_info((int32_t)"INFO", (int32_t)"image size exceeds limit", a1, (int32_t)&g38, v8, a2, a3, a4, 0, v2, 0);
    // branch -> 0x8f6226e8
    // 0x8f6226e8
    // branch -> 0x8f6226ec
    // 0x8f6226ec
    g53 = &g38;
    g57 = v2;
    if (v2 != g38) {
        // 0x8f622704
        __stack_chk_fail();
        // branch -> 0x8f622708
    }
    // 0x8f622708
    g59 = v1;
    return -1;
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
