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

// Address range: 0x8f64bc10 - 0x8f64bcf7
int32_t fdt_next_node(int32_t a1, uint32_t a2) {
    int32_t v1 = g34; // 0x8f64bc14
    int32_t v2 = g35; // 0x8f64bc14
    int32_t result2; // bp-32
    int32_t v3 = &result2; // 0x8f64bc14_1
    g34 = g32;
    int32_t v4 = g25;
    result2 = 0;
    int32_t v5 = 0; // 0x8f64bc5c
    int32_t result; // 0x8f64bcf0_2
    if (a2 >= 0) {
        int32_t v6 = _fdt_check_node_offset(a1, a2, 0, (int32_t)&g25, 0); // 0x8f64bc3c
        result2 = v6;
        if (v6 < 0) {
            result = v6;
          lab_0x8f64bcd0:
            // 0x8f64bcd0
            if (v4 == g25) {
                // 0x8f64bcec
                g34 = v1;
                g35 = v2;
                return result;
            }
          lab_0x8f64bce0_3:
            // 0x8f64bce0
            __stack_chk_fail();
            // branch -> 0x8f64bce4
            // 0x8f64bce4
            result = g35;
            // branch -> 0x8f64bcd0
            goto lab_0x8f64bcd0;
        } else {
            v5 = v6;
        }
    }
    while (true) {
        // 0x8f64bc4c
        g35 = v5;
        int32_t v7 = &g25; // 0x8f64bc5c
        int32_t v8;
        int32_t v9; // 0x8f64bc50
        int32_t v10; // 0x8f64bc14
        int32_t v11; // 0x8f64bc14
        switch (fdt_next_tag(v9, v5, v3, v7, v5, v4, v12, v1, v2, v10, v11, 0, v8)) {
            case 2: {
                int32_t v13 = g34; // 0x8f64bc8c
                if (v13 != 0) {
                    int32_t * v14 = (int32_t *)v13; // 0x8f64bc94_0
                    int32_t v15 = *v14 - 1; // 0x8f64bc98
                    *v14 = v15;
                    if (v15 <= 0xffffffff) {
                        // 0x8f64bca8
                        // branch -> 0x8f64bcd0
                        // 0x8f64bcd0
                        if (v4 != g25) {
                            goto lab_0x8f64bce0_3;
                        }
                        // 0x8f64bcec
                        g34 = v1;
                        g35 = v2;
                        return result2;
                    }
                    // 0x8f64bc4c
                    v5 = result2;
                    // branch -> 0x8f64bc4c
                    continue;
                }
                // 0x8f64bc4c
                v5 = result2;
                // branch -> 0x8f64bc4c
                continue;
            }
            case 9: {
                int32_t result3 = result2; // 0x8f64bcb0
                if (result3 <= 0xffffffff) {
                    // 0x8f64bcbc
                    if (result3 != -8 || g34 != 0) {
                        // 0x8f64bcd0
                        if (v4 != g25) {
                            goto lab_0x8f64bce0_3;
                        }
                        // 0x8f64bcec
                        g34 = v1;
                        g35 = v2;
                        return result3;
                    }
                }
                // 0x8f64bccc
                result = -1;
                // branch -> 0x8f64bcd0
              lab_0x8f64bcd0_2:
                // 0x8f64bcd0
                if (v4 != g25) {
                    goto lab_0x8f64bce0_3;
                }
                // 0x8f64bcec
                g34 = v1;
                g35 = v2;
                return result;
            }
            case 1: {
                int32_t v16 = g34; // 0x8f64bc78
                if (v16 != 0) {
                    int32_t * v17 = (int32_t *)v16; // 0x8f64bc7c_1
                    *v17 = *v17 + 1;
                    // branch -> 0x8f64bce4
                }
                // 0x8f64bce4
                result = g35;
                // branch -> 0x8f64bcd0
                goto lab_0x8f64bcd0_2;
            }
        }
        // 0x8f64bc4c
        v5 = result2;
        // branch -> 0x8f64bc4c
    }
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
