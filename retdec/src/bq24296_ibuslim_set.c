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

int32_t __aeabi_idivmod(int32_t a1, int32_t a2);
int32_t bq24296_ibuslim_set(int32_t result, int32_t a2, int32_t a3);
int32_t bq24296_init(int32_t a1, int32_t a2, int32_t a3);
int32_t dbval_cid_swap(int32_t a1, int32_t a2, char * str);
int32_t dbval_provision_req(char a1, char * a2, int32_t a3);
int32_t detect_current_secure_state(char * a1, int32_t a2);
int32_t fan54046_ibuslim_set(int32_t result, int32_t a2);
int32_t fan54046_ibuslim_unlimited(void);
void function_8f67b488(void);
int32_t function_8f67b490(int32_t a1);
void function_8f67b554(int32_t a1);
int32_t generic_mmc_do_write_protect_test(int32_t a1);
int32_t generic_mmc_get_protect_group_size(int32_t a1, int32_t a2);
int32_t get_controller_drv_ver(void);
int32_t get_first_selected_menu(int32_t a1, uint32_t a2, int32_t a3);
int32_t gfx_create_surface(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t gfx_create_surface_from_display(int32_t * a1);
int32_t gpio_config_blsp_i2c(int32_t a1, int32_t a2);
int32_t init_26(char * a1, int32_t a2);
int32_t is_verified_boot_flow(int32_t a1, int32_t a2);
int32_t mipi_mot_panel_on(int32_t a1, int32_t a2, int32_t a3);
int32_t mot_sst_oem_lock_handler(int32_t a1, int32_t a2);
int32_t mot_sst_validate_token(void);
int32_t msm_gpio_int_enable(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t piv_finish(int32_t a1, int32_t a2);
int32_t piv_init(char * a1, int32_t a2, char * a3);
int32_t set_blankflash_magic(char * a1, int32_t a2);
int32_t shutdown_device(void);
int32_t target_detect(int32_t a1, int32_t a2, int32_t a3);
int32_t target_fact_cbl_detect(int32_t a1, int32_t a2);
int32_t utags_set_chosen(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t utags_set_cmdline(char * a1, char * a2, int32_t a3, int32_t a4);

// --------------------- Global Variables ---------------------

bool g75 = false; // LR
int32_t g76 = 0; // R0
int32_t g77 = 0; // R1
int32_t g78 = 0; // R2
int32_t g79 = 0; // R4
int32_t g80 = 0; // R5
int32_t g81 = 0; // R6
int32_t g82 = 0; // R7
int32_t g83 = 0; // R8
int32_t g84 = 0; // R9
bool g1 = false; // flagn
int32_t g2 = -0x16d2bf90; // 0x8f61db1c
int32_t g3 = -0x16d2bf81; // 0x8f61dca0
int32_t g4 = -0x1a603fcc; // 0x8f648b5c
int32_t g5 = -0x16d2b80d; // 0x8f648b9c
int32_t g6 = -0x16d2be0d; // 0x8f648ca4
int32_t g7 = -0x16d2b80d; // 0x8f648d44
int32_t g8 = -0x1a603f88; // 0x8f648e48
int32_t g9 = -0x16d2b010; // 0x8f648ecc
int32_t g10 = -0x16d2b009; // 0x8f649098
int32_t g11 = -0x1a603f5c; // 0x8f64923c
int32_t g12 = -0x1a603fb0; // 0x8f6492f4
int32_t g13 = -0x16d2b810; // 0x8f655294
int32_t g14 = -0x16d2b810; // 0x8f6554ac
int32_t g15 = 0x65440030; // 0x8f69c66f
char (*g17)[18] = "ttyHSL0,115200,n8"; // 0x8f6ac1a8
char (*g18)[18] = "ttyHSL0,115200,n8"; // 0x8f6ac1ac
int32_t g19 = 0; // 0x8f6ac3ec
int32_t g20 = 0; // 0x8f6ac43c
int32_t g21 = 0; // 0x8f6ac48c
int32_t g22 = 0; // 0x8f6ac4dc
int32_t g23 = 3; // 0x8f6ac52c
int32_t g24 = 0; // 0x8f6ac530
int32_t g25 = 0; // 0x8f6ac580
int32_t g26 = 2; // 0x8f6ac614
int32_t g27 = 0; // 0x8f6ac618
int32_t g28 = 0; // 0x8f6ac668
int32_t g29 = 0; // 0x8f6ac6b8
int32_t g30 = 0; // 0x8f6ac708
int32_t g31 = 0; // 0x8f6ac758
int32_t g32 = 0; // 0x8f6ac7a8
int32_t g33 = -1; // 0x8f6acaac
int32_t g34 = 4; // 0x8f6acacc
int32_t g35 = 4; // 0x8f6acb18
int32_t g36 = 0xffff; // 0x8f6acb6c
int32_t g37 = 4; // 0x8f6acb94
int32_t g38 = 241; // 0x8f6affa8
char * g39 = "\x01"; // 0x8f6affac
char * g40; // 0x8f6e0980
int32_t g41 = 0; // 0x8f6e0984
char * g42; // 0x8f6e0988
int32_t g43 = 0; // 0x8f6e098c
int32_t g44 = 0; // 0x8f6e0990
int32_t g45 = 0; // 0x8f6e0994
int32_t g46 = 0; // 0x8f6e099c
int32_t g47 = 0; // 0x8f6e09a0
int32_t g48 = 0; // 0x8f6e09a4
char * g49; // 0x8f6e09a8
int32_t g50 = 0; // 0x8f6e09ac
int32_t g51 = 0; // 0x8f6e09b0
int32_t g52 = 0; // 0x8f6e09b4
int32_t g53 = 0; // 0x8f6e09b8
int32_t g54 = 0; // 0x8f6e0aa0
char * g55; // 0x8f6e0aa4
int32_t g56 = 0; // 0x8f6e0aac
char * g57; // 0x8f6eda40
int32_t g58 = 0; // 0x8f6eda80
int32_t g59 = 0; // 0x8f70da40
int32_t g60 = 0; // 0x8f70da44
int32_t g61 = 0; // 0x8f70da48
int32_t g62 = 0; // 0x8f70da4c
char * g63; // 0x8f70da50
int32_t g64 = 0; // 0x8f70da54
int32_t g65 = 0; // 0x8f70da58
int32_t g66 = 0; // 0x8f70da60
int32_t g67 = 0; // 0x8f70da64
int32_t g68 = 0; // 0x8f70da68
char * g69; // 0x8f70da8c
int16_t * g70 = NULL; // 0x8f70da9c
int32_t g71 = 0; // 0x8f70da9e
char * g72; // 0x8f710a25
int32_t g73 = 0; // 0x8f7112f4
int32_t g74 = 0; // 0x8f7125ec
char * g16[4] = {
    "null",
    "fastboot",
    (char *)&g2,
    (char *)&g3
}; // 0x8f6ac108

// ------------------------ Functions -------------------------

// Address range: 0x8f6419a8 - 0x8f641a37
int32_t bq24296_ibuslim_set(int32_t result, int32_t a2, int32_t a3) {
    int32_t v1 = g80; // 0x8f6419a8
    int32_t v2 = g75 ? -0x709aede4 : 0; // 0x8f6419a8
    int32_t v3 = g73;
    g80 = &g73;
    if (g54 == 0) {
        // 0x8f641a24
        g80 = v1;
        return result;
    }
    // 0x8f6419d0
    int32_t v4;
    int32_t result2 = bq24296_modify(0, result % 256, 0, 3, result, v3, a3, g79, v1, v2, v4, 0, 0, 0, 0); // 0x8f6419e0
    if (result2 == 0) {
        // 0x8f6419d0
        // branch -> 0x8f641a10
        // 0x8f641a10
        if (v3 == g73) {
            // 0x8f641a24
            g80 = v1;
            return 0;
        }
    } else {
        // 0x8f6419ec
        if (v3 == g73) {
            // 0x8f6419fc
            g80 = v1;
            return print_log(-1, (int32_t)"BQ24296: Error setting Ibuslim\n", v3, v3, g79, v1, v2, v4, 0, 0, 0, 0, 0);
        }
    }
    // 0x8f641a20
    __stack_chk_fail();
    // branch -> 0x8f641a24
    // 0x8f641a24
    g80 = v1;
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

// --------------- Instruction-Idiom Functions ----------------

// int32_t llvm_ctlz_i32(int32_t a1, bool a2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 32
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:40:01
