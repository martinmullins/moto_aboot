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

int32_t clock_ce_disable(int32_t a1);
int32_t clock_ce_enable(int32_t a1);
int32_t enable_smb1359_stat_gpio_irq(int32_t a1, int32_t a2, int32_t a3);
int32_t fastboot_get_reason(void);
int32_t fastboot_set_reason(char * a1, int32_t a2, int32_t a3);
int32_t fdt_add_subnode_namelen(int32_t a1, int32_t a2, char * a3, int32_t a4);
int32_t fdt_delprop(int32_t a1, int32_t a2, int32_t a3);
int32_t free_sparse_image(int32_t a1, int32_t a2, int32_t a3);
void function_8f64b57c(void);
void function_8f64b5d8(char * a1, int32_t a2);
int32_t get_brightness(int32_t a1, int32_t a2, int32_t a3);
int32_t get_entry_index_by_name(char * str, int32_t a2, int32_t a3);
char * init_temp_monitoring(void);
int32_t is_launch_to_fastboot_log(void);
void kmain(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mcs_clear_rsa_ctx(char * a1, int32_t a2, int32_t a3);
int32_t mcs_rsa_sig(char * a1, int32_t a2, int16_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t * a7);
int32_t mmc_sdhci_get_wp_status(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mmc_wp(void);
int32_t mutex_init(int32_t * a1, int32_t a2, int32_t a3);
int32_t set_backlight_dev(int32_t a1, int32_t a2, int32_t a3);
int32_t set_launch_to_fastboot_log(char a1, int32_t a2, int32_t a3);
int32_t smb1359_stat_gpio_config(void);
int32_t speedo_log(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t speedo_read(int32_t a1, int32_t a2, int32_t a3);
int32_t target_get_max_flash_size(int32_t a1, int32_t a2, int32_t a3);
int32_t target_get_scratch_address(int32_t a1);
int32_t thread_exit(int32_t a1, int32_t a2, int32_t a3);
int32_t thread_yield(int32_t a1, int32_t a2);
int32_t validate_powerup_reason(char * a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g19 = 0; // LR
int32_t g20 = 0; // R0
int32_t g21 = 0; // R1
int32_t g22 = 0; // R2
int32_t g23 = 0; // R3
int32_t g24 = 0; // R4
int32_t g25 = 0; // R5
int32_t g26 = 0; // R6
int32_t g27 = 0; // R7
int32_t g28 = 0; // R8
int32_t g1 = -0x1a60cfc8; // 0x8f602dd0
int32_t g2 = -0x16d2be0d; // 0x8f6039b8
int32_t g3 = -0x16d2bfed; // 0x8f61adc8
int32_t g4 = -0x1a60df68; // 0x8f61b3e8
int32_t g5 = 0x65440030; // 0x8f69c66f
int32_t g6 = 0x1f3f7fff; // 0x8f6a6a14
int32_t g7 = 1; // 0x8f6ac0f0
int32_t g8 = 255; // 0x8f6aca80
char * g9; // 0x8f6b5080
char * g10; // 0x8f6b509c
char * g11; // 0x8f6b7d40
char g12 = 0; // 0x8f6b7d41
int32_t g13 = 0; // 0x8f6c02ec
char * g14; // 0x8f6c032c
int32_t g15 = 0; // 0x8f6e0a88
int32_t g16 = 0; // 0x8f710c70
int32_t g17 = 0; // 0x8f7112f4
int32_t g18 = 0; // 0x8f7114ac

// ------------------------ Functions -------------------------

// Address range: 0x8f61ae4c - 0x8f61af6f
void kmain(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x8f61ae4c
    g20 = a1;
    g22 = a3;
    g25 = &g17;
    int32_t v1 = g24; // 0x8f61ae50
    int32_t v2 = g19; // 0x8f61ae50
    int32_t v3 = g17;
    g23 = v3;
    int32_t v4 = -0x7094e744; // R4
    g26 = -0x7094e744;
    int32_t v5 = thread_init_early(a1, a2, a3, v3, a1, a2); // 0x8f61ae64
    g20 = v5;
    int32_t v6 = arch_early_init(v5); // 0x8f61ae68
    g20 = v6;
    int32_t v7 = (int32_t)platform_early_init(v6, a2); // 0x8f61ae6c_3
    g20 = v7;
    target_early_init(v7, a2, a3, g23, a1, a2, a3);
    g20 = 2;
    print_log(2, (int32_t)"welcome to lk\n", a3, g23, a1, a2, a3, v3, v1, v2, 0, 0, 0);
    g20 = 0;
    bs_set_timestamp(0, (int32_t)"welcome to lk\n", a3, g23, a1, a2, a3, v3);
    g20 = 2;
    g21 = (int32_t)"calling constructors\n";
    g20 = print_log(2, (int32_t)"calling constructors\n", a3, g23, a1, a2, a3, v3, v1, v2, 0, 0, 0);
    int32_t v8; // 0x8f61af38
    int32_t v9; // 0x8f61aeb0
    int32_t v10; // 0x8f61aeb4
    int32_t v11; // 0x8f61aec8
    int32_t v12; // 0x8f61aed8
    int32_t v13; // 0x8f61aee8
    int32_t v14; // 0x8f61af14
    int32_t v15; // 0x8f61af18
    int32_t v16; // 0x8f61af34
    int32_t v17; // 0x8f61aecc
    int32_t v18; // 0x8f61aedc
    int32_t v19; // 0x8f61aeec
    int32_t v20; // 0x8f61af24
    if (v4 == g26) {
        // 0x8f61aea8
        g20 = 2;
        v9 = print_log(2, (int32_t)"initializing heap\n", a3, g23, a1, a2, a3, v3, v1, v2, 0, 0, 0);
        g20 = v9;
        v10 = heap_init(v9, (int32_t)"initializing heap\n", a3);
        g20 = v10;
        *(int32_t *)g25 = get_canary(v10, (int32_t)"initializing heap\n");
        g20 = 2;
        v11 = print_log(2, (int32_t)"initializing threads\n", a3, g23, a1, a2, a3, v3, v1, v2, 0, 0, 0);
        g20 = v11;
        v17 = thread_init(v11, (int32_t)"initializing threads\n", a3);
        g20 = 2;
        v12 = print_log(2, (int32_t)"initializing dpc\n", v17, g23, a1, a2, a3, v3, v1, v2, 0, 0, 0);
        g20 = v12;
        v18 = dpc_init(v12, (int32_t)"initializing dpc\n", v17, g23, a1, a2);
        g20 = 2;
        v13 = print_log(2, (int32_t)"initializing timers\n", v18, g23, a1, a2, a3, v3, v1, v2, 0, 0, 0);
        g20 = v13;
        v19 = timer_init(v13, (int32_t)"initializing timers\n", v18);
        g20 = 2;
        print_log(2, (int32_t)"creating bootstrap completion thread\n", v19, g23, a1, a2, a3, v3, v1, v2, 0, 0, 0);
        g20 = (int32_t)"bootstrap2";
        v14 = thread_create((int32_t)"bootstrap2", (int32_t)&g3, 0, 16, 0x2000, a2, a3, v3, v1, v2, 0, 0, 0, 0, 0, 0);
        g20 = v14;
        v15 = thread_resume(v14, (int32_t)&g3, 0, 16, 0x2000, a2, a3, v3);
        g20 = v15;
        v20 = g7 - 1;
        g7 = v20;
        v8 = v15;
        if (v20 == 0) {
            // 0x8f61af34
            v16 = function_8f619438();
            g20 = v16;
            v8 = v16;
            // branch -> 0x8f61af38
        }
        // 0x8f61af38
        thread_become_idle(v8, (int32_t)&g3, (int32_t)&g7, v20);
        return;
    }
    g24 = v4 + 4;
    int32_t v21 = *(int32_t *)v4; // 0x8f61ae9c
    g23 = v21;
    g19 = -0x709e515c;
    ((int32_t (*)(int32_t))v21)(v21);
    while (g24 != g26) {
        // 0x8f61ae9c
        v4 = g24;
        g24 = v4 + 4;
        v21 = *(int32_t *)v4;
        g23 = v21;
        g19 = -0x709e515c;
        ((int32_t (*)(int32_t))v21)(v21);
        // continue -> 0x8f61ae9c
    }
    // 0x8f61aea8
    g20 = 2;
    v9 = print_log(2, (int32_t)"initializing heap\n", a3, g23, a1, a2, a3, v3, v1, v2, 0, 0, 0);
    g20 = v9;
    v10 = heap_init(v9, (int32_t)"initializing heap\n", a3);
    g20 = v10;
    *(int32_t *)g25 = get_canary(v10, (int32_t)"initializing heap\n");
    g20 = 2;
    v11 = print_log(2, (int32_t)"initializing threads\n", a3, g23, a1, a2, a3, v3, v1, v2, 0, 0, 0);
    g20 = v11;
    v17 = thread_init(v11, (int32_t)"initializing threads\n", a3);
    g20 = 2;
    v12 = print_log(2, (int32_t)"initializing dpc\n", v17, g23, a1, a2, a3, v3, v1, v2, 0, 0, 0);
    g20 = v12;
    v18 = dpc_init(v12, (int32_t)"initializing dpc\n", v17, g23, a1, a2);
    g20 = 2;
    v13 = print_log(2, (int32_t)"initializing timers\n", v18, g23, a1, a2, a3, v3, v1, v2, 0, 0, 0);
    g20 = v13;
    v19 = timer_init(v13, (int32_t)"initializing timers\n", v18);
    g20 = 2;
    print_log(2, (int32_t)"creating bootstrap completion thread\n", v19, g23, a1, a2, a3, v3, v1, v2, 0, 0, 0);
    g20 = (int32_t)"bootstrap2";
    v14 = thread_create((int32_t)"bootstrap2", (int32_t)&g3, 0, 16, 0x2000, a2, a3, v3, v1, v2, 0, 0, 0, 0, 0, 0);
    g20 = v14;
    v15 = thread_resume(v14, (int32_t)&g3, 0, 16, 0x2000, a2, a3, v3);
    g20 = v15;
    v20 = g7 - 1;
    g7 = v20;
    v8 = v15;
    if (v20 == 0) {
        // 0x8f61af34
        v16 = function_8f619438();
        g20 = v16;
        v8 = v16;
        // branch -> 0x8f61af38
    }
    // 0x8f61af38
    thread_become_idle(v8, (int32_t)&g3, (int32_t)&g7, v20);
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// void free(void * ptr);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int strncmp(const char * s1, const char * s2, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:17:03