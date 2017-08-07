//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int32_t _fdt_check_prop_offset(int32_t a1);
int32_t boot_linux_from_flash(void);
int32_t check_mbm_addr_range_overlap(uint32_t a1, uint32_t a2, int32_t a3);
int32_t confirm_unlock(int32_t a1, int32_t a2);
int32_t display_set_fg_color(int32_t a1, int32_t a2, int32_t a3);
int32_t display_set_mdp_version(int32_t a1);
int32_t fdt_get_property_by_offset(int32_t a1, int32_t a2, int32_t * a3);
int32_t fdt_get_property_namelen(int32_t a1, int32_t a2, char * a3, int32_t a4);
int32_t fdt_next_node(int32_t a1, uint32_t a2);
int32_t get_panel_offset_by_index(int32_t a1, int32_t a2);
int32_t get_pmic_gpio_setting(int32_t a1, int32_t * a2, int32_t a3);
int32_t hab_health_state_check(int32_t a1, int32_t a2);
int32_t hab_map_address(int32_t a1, int32_t a2, int32_t a3);
int32_t handle_fboot_oem_command_verified(int32_t a1, int32_t a2);
int32_t lock_phone(int32_t a1, int32_t a2);
int32_t make_product_phone(int32_t a1, int32_t a2);
int32_t mdp_clock_disable(int32_t a1, int32_t a2, int32_t a3);
int32_t mdss_bus_clocks_disable(int32_t a1, int32_t a2, int32_t a3);
int32_t pm8x41_masked_reg_write(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t pm8x41_reg_write(int32_t a1);
int32_t sdhci_msm_set_mci_clk(int32_t * a1, int32_t a2, int32_t a3);
int32_t sdhci_msm_toggle_cdr(int32_t * a1, int32_t a2, int32_t a3);
int32_t smb1359_get_power_source(void);
int32_t smb1359_get_usbin_power_source_type(int32_t a1);
int32_t thread_unblock_from_wait_queue(int32_t a1, int32_t a2, int32_t a3);
int32_t udc_init(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t udc_register_gadget(int32_t a1, int32_t a2);
char * update_cmdline(char * a1, char * a2);
int32_t validate_boot_objects(int32_t a1, int32_t a2);
int32_t wait_queue_wake_all(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g30 = 0; // R0
int32_t g31 = 0; // R1
int32_t g32 = 0; // R2
int32_t g33 = 0; // R3
int32_t g34 = 0; // R4
int32_t g35 = 0; // R5
int32_t g36 = 0; // R6
int32_t g37 = 0; // R7
int32_t g38 = 0; // R8
int32_t g1 = -0x16d2bfc9; // 0x8f6387c0
int32_t g2 = -0x16d2bc09; // 0x8f638ab0
int32_t g3 = 0x7325002f; // 0x8f686fbc
char * g4 = "\xd0\x0d\xfe\xed"; // 0x8f68ac00
int32_t g5 = 0x65440030; // 0x8f69c66f
int32_t g6 = 0x65440031; // 0x8f69c693
char * g7; // 0x8f6a4e20
int32_t g8 = 1; // 0x8f6ac0f0
char * g9 = "\x01"; // 0x8f6ac1b4
int32_t g10 = -0x709c73f8; // 0x8f6ac374
int32_t g11 = 0xffffff; // 0x8f6afe08
int32_t g12 = 0; // 0x8f6b7920
int32_t g13 = 0; // 0x8f6b792c
char * g14; // 0x8f6b7930
int32_t g15 = 0; // 0x8f6b7938
int32_t g16 = 0; // 0x8f6b7940
int32_t g17 = 0; // 0x8f6b794c
int32_t g18 = 0; // 0x8f6b7988
int32_t g19 = 0; // 0x8f6b798c
int32_t g20 = 0; // 0x8f6c0330
char * g21; // 0x8f6c0335
int32_t g22 = 0; // 0x8f6e0bd4
int32_t g23 = 0; // 0x8f6e0bfc
char * g24; // 0x8f710a25
int32_t g25 = 0; // 0x8f7112f4
int32_t g26 = 0; // 0x8f7114ac
int32_t g27 = 0; // 0x8f7114d4
int32_t g28 = 0; // 0x8f711514
char * g29; // 0x8f711530

// ------------------------ Functions -------------------------

// Address range: 0x8f605ca4 - 0x8f605e6f
int32_t udc_init(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = g34; // 0x8f605ca4
    int32_t v2 = g35; // 0x8f605ca4
    g35 = &g25;
    g34 = 0x78d9000;
    int32_t v3 = g25;
    hsusb_clock_init(a1, a2, a3, v3, a1, a2, a3, v3, v1, v2);
    *(int32_t *)(g34 + 320) = 0x80002;
    int32_t v4 = thread_sleep(20, a2, a3, 0x80002, a1, a2, a3, v3); // 0x8f605cd0
    int32_t v5 = g34; // 0x8f605cd4
    g34 = 0x78d9000;
    int32_t v6 = *(int32_t *)(v5 + 320) & 2; // 0x8f605ce0
    // branch -> 0x8f605cd8
    while (v6 != 0) {
        // 0x8f605cd8
        g34 = 0x78d9000;
        v6 = *(int32_t *)(v5 + 320) & 2;
        // continue -> 0x8f605cd8
    }
    // 0x8f605ce8
    *(int32_t *)0x78d9184 = -0x80000000;
    int32_t v7 = target_usb_init(v4, a2, v5, -0x80000000, a1, a2); // 0x8f605cf0
    int32_t result = v7; // R0
    int32_t v8 = -1; // 0x8f605e3c_23
    if (v7 != -1) {
        // 0x8f605cfc
        *(int32_t *)(g34 + 144) = v6;
        int32_t v9 = 8; // R3
        *(int32_t *)(g34 + 152) = 8;
        g34 = (int32_t)&g14;
        char * v10 = memalign(lcm(0x1000, 64, v5, v9, a1, a2, a3), 0x1000); // 0x8f605d1c
        *(int32_t *)g34 = (int32_t)v10;
        char * v11 = (char *)a1;
        if (v10 == NULL) {
            // 0x8f605d2c
            v9 = (int32_t)"epts" & -0x10000 | 790;
            _panic(0, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"platform/msm_shared/hsusb.c", (int32_t)"epts" & -0x10000 | 790, (int32_t)"epts", a2, a3);
            v11 = "epts";
            // branch -> 0x8f605d48
        }
        int32_t v12 = (int32_t)v11;
        print_log(1, (int32_t)"USB init ept @ %p\n", (int32_t)g14, v9, v12, a2, a3, v3, v1, v2, g36, g37, g38);
        memset(g14, 0, 2048);
        function_8f6193d4((int32_t)g14, 2048);
        int32_t v13 = (int32_t)g14;
        platform_get_virt_to_phys_mapping(v13, 2048, 2048, v9);
        *(int32_t *)0x78d9158 = v13;
        *(int32_t *)0x78d91a8 = 2;
        *(int32_t *)0x78d91b4 = -1;
        thread_sleep(20, 2048, -1, 0x78d9000, v12, a2, a3, v3);
        int32_t v14;
        g12 = _udc_endpoint_alloc(0, 0, 64, 0, v12, a2, a3, v3, v1, v2, g36, g37, g38, 0, v14, 0);
        int32_t v15 = _udc_endpoint_alloc(0, 1, 64, 0, v12, a2, a3, v3, v1, v2, g36, g37, g38, 0, v14, 0); // 0x8f605dc8
        g15 = v15;
        int32_t v16 = udc_request_alloc(v15, 1, 64, (int32_t)&g15, v12, a2, a3, v3); // 0x8f605dd4
        g16 = v16;
        g34 = v16;
        *(int32_t *)v16 = (int32_t)memalign(64, 0x1000);
        int32_t v17 = udc_descriptor_alloc(3, 0, 4, (int32_t)&g16, v12, a2, a3, v3, v1, v2, g36, g37, g38); // 0x8f605e00
        *(char *)(v17 + 10) = 9;
        *(char *)(v17 + 11) = 4;
        udc_descriptor_register(v17, 0, 4, (int32_t)&g16);
        result = 0;
        g17 = a1;
        v8 = 0;
        // branch -> 0x8f605e24
    }
    // 0x8f605e24
    if (v3 != g25) {
        // 0x8f605e34
        __stack_chk_fail();
        // branch -> 0x8f605e38
    } else {
        result = v8;
    }
    // 0x8f605e38
    g34 = v1;
    g35 = v2;
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memalign(size_t alignment, size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int sprintf(char * restrict s, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:06:20