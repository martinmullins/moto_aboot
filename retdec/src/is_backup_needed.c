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

// Address range: 0x8f674414 - 0x8f6745c3
int32_t is_backup_needed(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g59; // 0x8f674414
    int32_t v2 = g62; // 0x8f674414
    int32_t v3;
    int32_t v4;
    int32_t v5;
    int32_t v6;
    if (a2 == 0) {
        // after_if_8f674438_0.thread8
        // branch -> 0x8f674448
        // 0x8f674448
        v5 = g38;
        g53 = (int32_t)"Invalid partition entry\n";
        print_log(0, (int32_t)"Invalid partition entry\n", a3, v5, v4, v3, 0, v5, 0, v1, g60, g61, v2);
        v6 = v5;
        // branch -> 0x8f67458c
        // 0x8f67458c
        g57 = v6;
        if (v6 != g38) {
            // 0x8f6745a0
            __stack_chk_fail();
            // branch -> 0x8f6745a4
        }
        // 0x8f6745a4
        g59 = v1;
        g62 = v2;
        return 0;
    }
    int32_t n = a3; // R10
    if (a1 == 0) {
        // 0x8f674448
        v5 = g38;
        g53 = (int32_t)"Invalid partition entry\n";
        print_log(0, (int32_t)"Invalid partition entry\n", a3, v5, v4, v3, 0, v5, 0, v1, g60, g61, v2);
        v6 = v5;
        // branch -> 0x8f67458c
        // 0x8f67458c
        g57 = v6;
        if (v6 != g38) {
            // 0x8f6745a0
            __stack_chk_fail();
            // branch -> 0x8f6745a4
        }
        // 0x8f6745a4
        g59 = v1;
        g62 = v2;
        return 0;
    }
    int32_t result = 0; // R9
    int32_t v7 = g38;
    memset((char *)&g32, 0, a3);
    char v8 = *(char *)(a1 + 41); // 0x8f674468
    char v9 = *(char *)(a1 + 40); // 0x8f67446c
    char v10 = *(char *)(a1 + 32); // 0x8f674474
    int32_t v11 = 0; // R7
    char v12 = *(char *)(a1 + 42); // 0x8f674480
    char v13 = *(char *)(a1 + 43); // 0x8f674488
    char v14 = *(char *)(a1 + 33); // 0x8f674490
    char v15 = *(char *)(a1 + 34); // 0x8f6744a0
    int32_t v16 = 0; // R3
    int32_t v17 = 512 * ((0x1000000 * (int32_t)v13 | 0x10000 * (int32_t)v12 | (int32_t)v9 | 256 * (int32_t)v8) + 1 - (0x10000 * (int32_t)v15 | 256 * (int32_t)v14 | (int32_t)v10)) - n; // 0x8f6744c0
    int32_t v18;
    int32_t v19 = load_partition(a1, (int32_t)&g32, v17, 0, n, 0, 0, v7, 0, v1, g60, g61, v2, g63, g64, g54, g55, g51, v18, 0, 0); // 0x8f6744c4
    int32_t v20;
    if (v19 != 0) {
        int32_t v21 = get_entry_name(a1, (int32_t)&g32, v17, v16, n, 0, 0, v7); // 0x8f6744d4
        v20 = (int32_t)"Failed to load signature from primary %s\n";
        // branch -> 0x8f67456c
        // 0x8f67456c
        g53 = v20;
        print_log(result, v20, v21, v16, n, 0, 0, v7, 0, v1, g60, g61, v2);
        v6 = v7;
        // branch -> 0x8f67458c
        // 0x8f67458c
        g57 = v6;
        if (v6 != g38) {
            // 0x8f6745a0
            __stack_chk_fail();
            // branch -> 0x8f6745a4
        }
        // 0x8f6745a4
        g59 = v1;
        g62 = v2;
        return result;
    }
    // 0x8f6744e8
    memset((char *)&g33, result, n);
    char v22 = *(char *)(a2 + 41); // 0x8f6744f8
    char v23 = *(char *)(a2 + 40); // 0x8f6744fc
    char v24 = *(char *)(a2 + 42); // 0x8f67450c
    char v25 = *(char *)(a2 + 43); // 0x8f674514
    char v26 = *(char *)(a2 + 33); // 0x8f67451c
    char v27 = *(char *)(a2 + 32); // 0x8f674520
    char v28 = *(char *)(a2 + 34); // 0x8f67452c
    char v29 = *(char *)(a2 + 35); // 0x8f674534
    v16 = 0;
    int32_t v30 = 512 * ((0x1000000 * (int32_t)v25 | 0x10000 * (int32_t)v24 | (int32_t)v23 | 256 * (int32_t)v22) + 1 - (0x1000000 * (int32_t)v29 | 0x10000 * (int32_t)v28 | (int32_t)v27 | 256 * (int32_t)v26)) - n; // 0x8f674548
    int32_t v31 = load_partition(a2, (int32_t)&g33, v30, 0, n, v11, 0, v7, 0, v1, g60, g61, v2, g63, g64, g54, g55, g51, v18, 0, 0); // 0x8f67454c
    int32_t result2; // 0x8f674590
    if (v31 == 0) {
        // 0x8f674574
        g53 = (int32_t)&g33;
        int32_t memcmp_rc = memcmp((char *)&g32, (char *)&g33, n); // 0x8f674580
        result2 = memcmp_rc != 0;
        v6 = v7;
        // branch -> 0x8f67458c
    } else {
        int32_t v32 = get_entry_name(a2, (int32_t)&g33, v30, v16, n, v11, 0, v7); // 0x8f67455c
        v20 = (int32_t)"Failed to load signature from %s\n";
        // branch -> 0x8f67456c
        // 0x8f67456c
        g53 = v20;
        print_log(result, v20, v32, v16, n, v11, 0, v7, 0, v1, g60, g61, v2);
        result2 = result;
        v6 = v7;
        // branch -> 0x8f67458c
    }
    // 0x8f67458c
    g57 = v6;
    if (v6 != g38) {
        // 0x8f6745a0
        __stack_chk_fail();
        // branch -> 0x8f6745a4
    }
    // 0x8f6745a4
    g59 = v1;
    g62 = v2;
    return result2;
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
