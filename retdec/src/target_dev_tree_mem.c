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

int32_t clock_config_blsp_i2c(int32_t a1, int32_t a2);
int32_t clock_init_mmc(int32_t a1);
int32_t clock_lib2_branch_clk_disable(int32_t a1, int32_t a2, int32_t a3);
int32_t clock_lib2_branch_clk_enable(int32_t a1, int32_t a2, int32_t a3);
int32_t dbval_provision_cid_req(char * a1, int32_t * a2, int16_t * a3);
int32_t dbval_provision_cid_store(char * a1, char * a2, int32_t a3, int32_t a4);
int32_t disable_smb1359_irq(int32_t a1);
int32_t display_draw_text_at_line_with_color(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);
int32_t display_draw_text_with_color(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8);
int32_t enable_smb1359_irq(int32_t a1, int32_t a2, int32_t a3);
int32_t generic_mmc_erase_logical(int64_t a1, int32_t a2, uint32_t a3, int32_t a4);
int32_t generic_mmc_erase_sector(int64_t a1, int64_t a2);
int32_t hsusb_clock_init(int32_t a1);
int32_t is_piv_tail(int32_t a1, int32_t a2);
int32_t mcs_mp_copy(int32_t a1, int32_t a2, int32_t a3);
int32_t mcs_mpint_to_bytes(int32_t a1, int32_t a2, int32_t a3);
int32_t mot_sst_oem_unlock_handler(void);
int32_t mot_sst_pal_read_token(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t piv_validate(int32_t a1, int32_t a2, int32_t a3);
int32_t platform_clock_init(int32_t a1);
int32_t qtimer_init(void);
int32_t SecHashInit(int32_t a1, int32_t a2, int32_t a3);
int32_t SecLockFuse(void);
int32_t SecProcessorUID(char * a1, int32_t a2, int32_t a3);
int32_t SecSetSSTState(uint32_t a1, int32_t a2);
int32_t speedo_early_init(char * a1, int32_t a2, int32_t a3);
int32_t strings_new(int32_t a1, int32_t a2, int32_t a3);
int32_t target_dev_tree_mem(int32_t a1, int32_t a2);
int32_t target_get_scratch_address(int32_t a1);
int32_t udelay(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

bool g57 = false; // LR
int32_t g58 = 0; // R0
int32_t g59 = 0; // R1
int32_t g60 = 0; // R10
int32_t g61 = 0; // R2
int32_t g62 = 0; // R3
int32_t g63 = 0; // R4
int32_t g64 = 0; // R5
int32_t g65 = 0; // R6
int32_t g66 = 0; // R7
int32_t g67 = 0; // R8
int32_t g68 = 0; // R9
int32_t g1 = -0x16d2bf10; // 0x8f647764
int32_t g2 = 0x65440030; // 0x8f69c66f
int32_t g3 = 0; // 0x8f6aa1b4
int32_t g4 = 0; // 0x8f6aa1e8
int32_t g5 = 0; // 0x8f6aa218
int32_t g6 = 0; // 0x8f6aa278
int32_t g7 = 0; // 0x8f6aa2dc
int32_t g8 = 0; // 0x8f6aa58c
int32_t g9 = 0; // 0x8f6aa680
int32_t g10 = 0x184d014; // 0x8f6aa6a4
int32_t g11 = 0; // 0x8f6aa6c4
int32_t g12 = 0; // 0x8f6aa714
int32_t g13 = 0; // 0x8f6aa748
int32_t g14 = 0; // 0x8f6aa77c
int32_t g16 = 0; // 0x8f6aa908
int32_t g17 = 0; // 0x8f6aa9a4
int32_t g18 = 0; // 0x8f6aaa0c
int32_t g19 = 0; // 0x8f6aaa40
int32_t g20 = 0; // 0x8f6aaa70
int32_t g21 = 0; // 0x8f6aaac8
int32_t g22 = 0; // 0x8f6aaafc
int32_t g23 = 0; // 0x8f6aab7c
int32_t g24 = 0; // 0x8f6aabf0
int32_t g25 = 0; // 0x8f6aac14
int32_t g26 = 0x2faf080; // 0x8f6aad0c
int32_t g27 = 0; // 0x8f6aae78
int32_t g28 = 0; // 0x8f6aaf3c
int32_t g29 = 0; // 0x8f6aafa4
int32_t g30 = 2; // 0x8f6afe0c
int32_t g31 = -1; // 0x8f6affb0
int32_t g32 = 0; // 0x8f6b7c24
int32_t g33 = 0; // 0x8f6b8ab0
uint32_t g34 = 0; // 0x8f6b8ab4
int32_t g35 = 0; // 0x8f6b8ab8
char * g36; // 0x8f6e0b64
int32_t g37 = 0; // 0x8f6e0c38
char * g38; // 0x8f6e0c40
int32_t g39 = 0; // 0x8f70da40
int32_t g40 = 0; // 0x8f70da44
int32_t g41 = 0; // 0x8f70da48
int32_t g42 = 0; // 0x8f70da4c
char * g43; // 0x8f70da50
int32_t g44 = 0; // 0x8f70da54
int32_t g45 = 0; // 0x8f70da58
int32_t g46 = 0; // 0x8f70da60
int32_t g47 = 0; // 0x8f70da64
int32_t g48 = 0; // 0x8f70da68
char * g49; // 0x8f70da6c
char * g50; // 0x8f70da8c
int32_t g51 = 0; // 0x8f710e80
int32_t g52 = 0; // 0x8f710e84
int32_t g53 = 0; // 0x8f710e88
int32_t g54 = 0; // 0x8f710e8c
int32_t g55 = 0; // 0x8f7112f4
int32_t g56 = 0; // 0x8f7125ec
char * g15[52] = {
    "sdc1_iface_clk",
    (char *)&g8,
    "sdc1_core_clk",
    (char *)&g17,
    "sdc2_iface_clk",
    (char *)&g14,
    "sdc2_core_clk",
    (char *)&g9,
    "blsp1_ahb_clk",
    (char *)&g5,
    "blsp1_qup4_i2c_apps_clk",
    (char *)&g23,
    "uart1_iface_clk",
    (char *)&g5,
    "uart1_core_clk",
    (char *)&g25,
    "uart2_iface_clk",
    (char *)&g5,
    "uart2_core_clk",
    (char *)&g22,
    "usb_iface_clk",
    (char *)&g27,
    "usb_core_clk",
    (char *)&g28,
    "mdp_ahb_clk",
    (char *)&g18,
    "mdss_esc0_clk",
    (char *)&g3,
    "mdss_esc1_clk",
    (char *)&g12,
    "mdss_axi_clk",
    (char *)&g4,
    "mdss_vsync_clk",
    (char *)&g13,
    "mdss_mdp_clk_src",
    (char *)&g11,
    "mdss_mdp_clk",
    (char *)&g21,
    "ce1_ahb_clk",
    (char *)&g20,
    "ce1_axi_clk",
    (char *)&g7,
    "ce1_core_clk",
    (char *)&g24,
    "ce1_src_clk",
    (char *)&g16,
    "blsp1_qup1_i2c_apps_clk",
    (char *)&g29,
    "blsp1_qup2_i2c_apps_clk",
    (char *)&g19,
    "blsp1_qup5_i2c_apps_clk",
    (char *)&g6
}; // 0x8f6aa7a0

// ------------------------ Functions -------------------------

// Address range: 0x8f60145c - 0x8f60155b
int32_t target_dev_tree_mem(int32_t a1, int32_t a2) {
    int32_t v1 = a2; // R1
    int32_t v2 = g55;
    int32_t v3 = v2; // R3
    int32_t v4;
    int32_t v5;
    int32_t v6 = smem_ram_ptable_init_v1(a1, a2, g61, v2, v5, v4); // 0x8f601480
    int32_t v7 = v6; // 0x8f6014a8
    if (v6 == 0) {
        int32_t v8 = g57 ? -0x709aeed8 : 0; // 0x8f601490
        v1 = (int32_t)"ASSERT FAILED at (%s:%d): %s\n";
        g61 = (int32_t)"target/msm8916/meminfo.c";
        v3 = 46;
        v7 = _panic(v8, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"target/msm8916/meminfo.c", 46, (int32_t)"smem_ram_ptable_init_v1()", v4, 0);
        // branch -> 0x8f6014a8
    }
    int32_t v9 = smem_get_ram_ptable_len(v7, v1, g61, v3); // 0x8f6014a8
    int32_t v10 = 0; // R4
    int32_t result; // R5
    if (v9 == 0) {
        // 0x8f601524
        result = 0;
        // branch -> 0x8f601528
        // 0x8f601528
        g58 = result;
        if (v2 != g55) {
            // 0x8f60153c
            __stack_chk_fail();
            // branch -> 0x8f601540
        }
        // 0x8f601540
        return result;
    }
    int32_t v11 = 0; // 0x8f6014c0
    // branch -> 0x8f6014bc
    while (true) {
        // 0x8f6014bc
        int32_t v12;
        smem_get_ram_ptable_entry((int32_t)&v12, v11, g61, v3);
        int32_t v13;
        v3 = v13;
        if (v13 == 14) {
            // 0x8f6014d4
            int32_t v14;
            v3 = v14;
            if (v14 == 1) {
                // 0x8f6014e0
                int32_t v15;
                g61 = v15;
                int32_t v16;
                v3 = v16;
                int32_t v17;
                int32_t v18;
                int32_t v19 = dev_tree_add_mem_info(a1, a2, v15, v16, v18, v17, 0, v12, 0, 0, 0, v15, v16, v18, v17, 0, 14, 0, 1, 0); // 0x8f601500
                result = v19;
                if (v19 != 0) {
                    // 0x8f60150c
                    print_log(-1, (int32_t)"Failed to add secondary banks memory addresses\n", g61, v3, v18, v17, 0, v12, 0, 0, 0, v15, v16);
                    // branch -> 0x8f601528
                    // 0x8f601528
                    g58 = result;
                    if (v2 != g55) {
                        // 0x8f60153c
                        __stack_chk_fail();
                        // branch -> 0x8f601540
                    }
                    // 0x8f601540
                    return result;
                }
            }
        }
        int32_t v20 = v10 + 1; // 0x8f60151c
        v10 = v20;
        if (v20 == v9) {
            // break -> 0x8f601524
            break;
        }
        v11 = v20;
        // continue -> 0x8f6014bc
    }
    // 0x8f601524
    result = 0;
    // branch -> 0x8f601528
    // 0x8f601528
    g58 = result;
    if (v2 != g55) {
        // 0x8f60153c
        __stack_chk_fail();
        // branch -> 0x8f601540
    }
    // 0x8f601540
    return result;
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// void * calloc(size_t nmemb, size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int strncmp(const char * s1, const char * s2, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:40:14
