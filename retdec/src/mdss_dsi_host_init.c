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

int32_t clk_get(char * str2);
int32_t clk_get_set_enable(int32_t a1, int32_t a2, int32_t a3);
int32_t dbval_provision_req(char a1, char * a2, int32_t a3);
int32_t dbval_provision_store(char * a1, int32_t * a2, char * a3);
int32_t event_signal(int32_t a1, int32_t a2, int32_t a3);
void event_unsignal(int32_t a1);
int32_t fdt_next_tag(int32_t a1, int32_t a2, int32_t * a3);
int32_t fdt_offset_ptr(int32_t a1, int32_t a2, int32_t a3);
int32_t generic_mmc_erase_sector(int64_t a1, int64_t a2);
int32_t generic_mmc_get_protect_group_size(int32_t a1, int32_t a2);
int32_t get_root_detect_disabled(void);
int32_t getvar_handler_root_detect(int32_t a1, int32_t a2, int32_t a3);
int32_t hab_map_address(int32_t a1, int32_t a2, int32_t a3);
int32_t hab_virtual_to_physical(int32_t a1, int32_t a2, int32_t a3);
int32_t load_partition(int32_t a1, int32_t a2, int64_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9);
int32_t load_partition_by_name(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t mcs_clear_hash_ctx(char * a1, int32_t a2, int32_t a3);
int32_t mcs_initialize_montgomery_alg(int32_t * a1, int32_t a2);
int32_t mdss_dsi_auto_pll_config(int32_t * a1, int32_t a2);
int32_t mdss_dsi_host_init(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mdss_dsi_phy_init(int32_t a1, int32_t a2, int32_t a3);
int32_t mipi_dsi_cmd_bta_sw_trigger(int32_t a1, int32_t a2, int32_t a3);
int32_t nexus_usbpidvid(int32_t a1, int32_t a2);
int32_t read_root_status(void);
char * sdhci_msm_execute_tuning(char * a1, int32_t a2, int32_t a3);
int32_t sdhci_msm_toggle_cdr(int32_t * a1, int32_t a2, int32_t a3);
int32_t sod_init(void);
int32_t sod_ramdump_run(void);
int32_t thread_init(int32_t a1, int32_t a2);
int32_t thread_set_name(int32_t a1);

// --------------------- Global Variables ---------------------

int32_t g26 = 0; // LR
int32_t g27 = 0; // R0
int32_t g28 = 0; // R1
int32_t g29 = 0; // R10
int32_t g30 = 0; // R11
int32_t g31 = 0; // R2
int32_t g32 = 0; // R3
int32_t g33 = 0; // R4
int32_t g34 = 0; // R5
int32_t g35 = 0; // R6
int32_t g36 = 0; // R7
int32_t g37 = 0; // R8
int32_t g38 = 0; // R9
int32_t g1 = -0x15ffffb3; // 0x8f6361f4
char * g2 = "\xff\xff"; // 0x8f67d950
int32_t g3 = 0xff0fff; // 0x8f67db7c
int32_t g4 = 0x6d0f0703; // 0x8f67f558
int32_t g5 = 0x1c9496e0; // 0x8f67f5a0
int32_t g6 = 0x65440030; // 0x8f69c66f
int32_t g7 = 0x746e6300; // 0x8f6a4e20
int32_t g8 = 1; // 0x8f6ac0f0
int32_t g9 = -1; // 0x8f6ac214
int32_t g10 = -0x70a00000; // 0x8f6ac224
char * g11 = "\xf1"; // 0x8f6affa8
int32_t g12 = 0; // 0x8f6b7988
int32_t g13 = 0; // 0x8f6b798c
int32_t g14 = 0; // 0x8f6b8ad0
int32_t g15 = 0; // 0x8f6b8ad4
char * g16; // 0x8f6c0628
char * g17; // 0x8f6c0649
int32_t (*g18)(int32_t, int32_t, int32_t) = NULL; // 0x8f6e0784
int32_t g19 = 0; // 0x8f6e0790
char * g20; // 0x8f6e0794
int16_t * g21 = NULL; // 0x8f70da9c
int32_t g22 = 0; // 0x8f70da9e
int32_t g23 = 0; // 0x8f7112f4
int32_t g24 = 0; // 0x8f7114ac
int32_t g25 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f60fa88 - 0x8f60fbcf
int32_t mdss_dsi_host_init(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = (int32_t)(0x80000000 * a3); // 0x8f60fa8c
    int32_t v2 = 0x4000000 * a4; // 0x8f60fa94
    char v3 = *(char *)(a1 + 36); // 0x8f60fa9c
    int32_t v4 = (int32_t)*(char *)(a1 + 5); // 0x8f60faa8
    int32_t v5;
    int32_t v6 = (0x1000000 * v5 | 0xffffff) < 0x1ffffff ? 4 : -0x7ffffffc; // R9
    uint32_t v7 = ((int32_t)*(char *)(a1 + 1) + 254) % 256; // 0x8f60fac8
    int32_t v8 = 0x1000000 * (int32_t)*(char *)(a1 + 3); // 0x8f60facc
    int32_t v9 = 1; // 0x8f60fb00
    if (v7 < 3) {
        char v10 = *(char *)(v7 + (int32_t)&g4); // 0x8f60fadc
        v9 = v10;
        // branch -> after_if_8f60fadc_0
    }
    int32_t v11 = (int32_t)*(char *)(a1 + 2); // R4
    int32_t v12 = (int32_t)*(char *)(a1 + 4) | 256 * v4; // R12
    int32_t v13 = v3 == 0 ? a1 & -0x10000 | 261 : v4 & -0x10000 | 259; // R7
    int32_t v14 = 16 * v9; // R6
    int32_t v15; // R1
    if (a2 != 0) {
        // 0x8f60fb08
        v15 = 0x1aa0000;
        *(int32_t *)0x1aa0118 = 1;
        *(int32_t *)(v15 + 280) = 0;
        *(int32_t *)(v15 + 284) = 63;
        *(int32_t *)(v15 + 132) = v6;
        *(int32_t *)(v15 + 4) = v13 | v14;
        *(int32_t *)(v15 + 60) = v8 | v1 | v2 | 0x10000000;
        int32_t v16 = *(int32_t *)0x1a98000; // 0x8f60fb44
        *(int32_t *)(v15 + 176) = v16 == 0x10030001 ? 7 : v11;
        *(int32_t *)(v15 + 196) = v12;
        // branch -> 0x8f60fb60
    }
    // 0x8f60fb60
    v15 = 0x1a98000;
    *(int32_t *)0x1a98118 = 1;
    *(int32_t *)(v15 + 280) = 0;
    *(int32_t *)(v15 + 284) = 63;
    *(int32_t *)(v15 + 132) = v6;
    *(int32_t *)(v15 + 4) = v13 | v14;
    *(int32_t *)(v15 + 60) = v2 | v1 | v8 | 0x10000000;
    *(int32_t *)(v15 + 176) = v11;
    *(int32_t *)(v15 + 196) = v12;
    // 0x8f60fbb4
    return 0;
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memalign(size_t alignment, size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memset(void * s, int c, size_t n);
// int strcmp(const char * s1, const char * s2);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:10:24
