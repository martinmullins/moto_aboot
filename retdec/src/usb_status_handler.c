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

int32_t add_dump_region(int32_t a1, char * a2);
int32_t add_pre_crash_regions(int32_t a1);
int32_t disable_shutdown_timer(int32_t a1);
int32_t enable_shutdown_timer(int32_t a1);
int32_t kernel_log_find(char * str, char * a2, int32_t a3);
int32_t send_usb_status_command(char a1, int32_t a2, int32_t a3, int32_t a4);
int32_t sh_erase(int32_t a1);
int32_t sh_flash(int32_t a1);
int32_t sh_recover(int32_t a1);
int32_t shutdown_timer_func(int32_t a1, int32_t a2);
int32_t sod_init(void);
int32_t sod_ramdump_clear(int32_t a1, int32_t a2);
int32_t start_usb_detection(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);
char * test_AES(void);
char * test_rand(void);
int32_t type_atoi_15(char * str, int32_t a2, int32_t a3);
int32_t update_usb_status(int32_t a1, int32_t a2, int32_t a3);
int32_t usb_detection_init(void);
int32_t usb_status_handler(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9);
int32_t userdata_resize(int32_t a1, int32_t a2, int32_t a3);
int32_t userdata_stat(int32_t * a1, int32_t * a2, int32_t * a3);

// --------------------- Global Variables ---------------------

int32_t g24 = 0; // LR
int32_t g25 = 0; // R0
int32_t g26 = 0; // R1
int32_t g27 = 0; // R10
int32_t g28 = 0; // R2
int32_t g29 = 0; // R3
int32_t g30 = 0; // R4
int32_t g31 = 0; // R5
int32_t g32 = 0; // R6
int32_t g33 = 0; // R7
int32_t g34 = 0; // R8
int32_t g35 = 0; // R9
int32_t g1 = -0x16d2bfed; // 0x8f634630
int32_t g2 = -0x1a60ce68; // 0x8f634848
int32_t g3 = -0x16d2bf09; // 0x8f634ac0
int32_t (*g4)(int32_t) = (int32_t (*)(int32_t))-0x16d2bfed; // 0x8f638714
int32_t g5 = 0x2020003a; // 0x8f686ac4
int32_t g6 = 0x65440030; // 0x8f69c66f
int32_t g7 = -0x70a00000; // 0x8f6ac224
int32_t g8 = -0x709c73f8; // 0x8f6ac374
int32_t g9 = 0; // 0x8f6e06fc
char * g10; // 0x8f6e0718
char * g11; // 0x8f6e071c
char * g12; // 0x8f6e0720
int32_t g13 = 0; // 0x8f6e0724
int32_t g14 = 0; // 0x8f6e0740
int32_t g15 = 0; // 0x8f6e0744
int32_t g16 = 0; // 0x8f6e0748
int32_t g17 = 0; // 0x8f6e0764
int32_t g18 = 0; // 0x8f6e078c
int32_t g19 = 0; // 0x8f6e0790
char * g20; // 0x8f6e0794
char * g21; // 0x8f6e0798
int32_t g22 = 0; // 0x8f7112f4
int32_t g23 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f634848 - 0x8f634a07
int32_t usb_status_handler(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9) {
    // 0x8f634848
    g26 = a2;
    g28 = a3;
    int32_t v1 = g30; // 0x8f63484c
    int32_t v2 = g31; // 0x8f63484c
    int32_t v3 = g32; // 0x8f63484c
    int32_t v4 = g33; // 0x8f63484c
    int32_t v5 = g34; // 0x8f63484c
    int32_t v6 = g35; // 0x8f63484c
    int32_t v7 = g27; // 0x8f63484c
    g31 = 0;
    g34 = &g14;
    int32_t v8 = g22;
    g29 = v8;
    g27 = &g14;
    // branch -> 0x8f634864
    while (true) {
        // 0x8f634864
        g33 = (int32_t)&g10;
        event_wait((int32_t)&g17, a2);
        mutex_acquire((int32_t)&g16, g26, g28, g29, a1, v8, v1, v2, v3, v4, v5);
        int32_t v9 = (int32_t)g11;
        int32_t v10 = g33; // 0x8f634880
        int32_t v11 = v9 - v10; // 0x8f634880
        g28 = v11;
        g35 = &g8;
        int32_t v12 = v9 == v10; // R6
        mutex_release((int32_t)&g16, g26, v11, g29, a1, v8, v1);
        if (v12 == 0) {
            while (true) {
                // 0x8f63489c
                mutex_acquire((int32_t)&g16, g26, g28, g29, a1, v8, v1, v2, v3, v4, v5);
                char * v13 = g10;
                int32_t v14 = (int32_t)v13;
                g30 = v14;
                if (v14 == g33) {
                    // if_8f6348b4_0_true
                    g30 = v12;
                    // branch -> after_if_8f6348c8_0
                } else {
                    int32_t v15 = *(int32_t *)(v14 + 4); // 0x8f6348b0
                    g29 = v15;
                    *(int32_t *)v15 = *(int32_t *)v13;
                    int32_t v16 = *(int32_t *)g30; // 0x8f6348bc
                    g28 = v16;
                    *(int32_t *)(v16 + 4) = g29;
                    *(int32_t *)(g30 + 4) = v12;
                    *(int32_t *)g30 = v12;
                    // branch -> after_if_8f6348c8_0
                }
                int32_t v17 = mutex_release((int32_t)&g16, g26, g28, g29, a1, v8, v1); // 0x8f6348cc
                int32_t v18 = g30; // 0x8f6348d0
                if (v18 == 0) {
                  lab_0x8f6349c4_2:
                    // 0x8f6349c4
                    mutex_acquire((int32_t)&g16, g26, g28, g29, a1, v8, v1, v2, v3, v4, v5);
                    int32_t v19 = (int32_t)g11;
                    int32_t v20 = g33; // 0x8f6349d4
                    int32_t v21 = v19 - v20; // 0x8f6349d4
                    g29 = v21;
                    v12 = v19 == v20;
                    mutex_release((int32_t)&g16, g26, g28, v21, a1, v8, v1);
                    if (v12 != 0) {
                        // break -> 0x8f634864
                        break;
                    }
                    // continue -> 0x8f63489c
                    continue;
                } else {
                    int32_t v22 = (int32_t)*(char *)(v18 + 8); // 0x8f6348d8
                    g29 = v22;
                    int32_t v23; // 0x8f634980
                    int32_t v24;
                    switch (v22) {
                        case 0: {
                            int32_t v25 = 0; // 0x8f63490c
                            int32_t v26 = v17; // 0x8f63490c
                            int32_t v27 = 0;
                            if (g31 == 0) {
                                int32_t v28 = disable_shutdown_timer(v17); // 0x8f634904
                                v25 = g29;
                                v26 = v28;
                                v27 = 1;
                                // branch -> 0x8f63490c
                            }
                            // 0x8f63490c
                            g32 = v27;
                            int32_t v29 = is_fastboot_screen(v26, g26, g28, v25); // 0x8f63490c
                            g25 = v29;
                            if (v29 != 0) {
                                // 0x8f634918
                                g29 = (int32_t)&g4;
                                g24 = -0x709cb6e0;
                                ((int32_t (*)(int32_t))&g4)((int32_t)&g4);
                                // branch -> 0x8f634920
                            }
                            // 0x8f634920
                            v24 = 1;
                            if (is_charger_smb1359(v29, g26, g28, g29, a1, v8, v1, v2) == 0) {
                                // 0x8f63492c
                                start_charging(4000, g26, g28, g29, a1, v8);
                                v24 = 1;
                                // branch -> 0x8f63498c
                            }
                          lab_0x8f63498c:
                            // 0x8f63498c
                            g31 = v24;
                            if (g32 != 0) {
                                int32_t v30 = g15;
                                g32 = v30;
                                int32_t v31 = g27; // 0x8f63499813
                                if (v30 != v31) {
                                    while (true) {
                                        int32_t v32 = *(int32_t *)(v30 + 8); // 0x8f6349a0
                                        g29 = v32;
                                        int32_t v33 = v31; // 0x8f634998
                                        int32_t v34 = v30; // 0x8f6349b4
                                        if (v32 != 0) {
                                            int32_t v35 = (int32_t)*(char *)(g30 + 8); // 0x8f6349ac
                                            g25 = v35;
                                            g24 = -0x709cb64c;
                                            ((int32_t (*)(int32_t))v32)(v35);
                                            v33 = g27;
                                            v34 = g32;
                                            // branch -> 0x8f6349b4
                                        }
                                        int32_t v36 = *(int32_t *)(v34 + 4);
                                        g32 = v36;
                                        if (v36 == v33) {
                                            // break (via goto) -> 0x8f6349bc
                                            goto lab_0x8f6349bc_2;
                                        }
                                        v31 = v33;
                                        v30 = v36;
                                        // continue -> 0x8f6349a0
                                    }
                                  lab_0x8f6349bc:
                                    // 0x8f6349bc
                                    free((char *)g30);
                                    // branch -> 0x8f6349c4
                                    goto lab_0x8f6349c4_2;
                                }
                            }
                            break;
                        }
                        case 1: {
                            int32_t v37 = 1; // 0x8f63494c
                            int32_t v38 = v17; // 0x8f63494c
                            int32_t v39 = 0;
                            if (g31 != 0) {
                                int32_t v40 = enable_shutdown_timer(v17); // 0x8f634944
                                v37 = g29;
                                v38 = v40;
                                v39 = 1;
                                // branch -> 0x8f63494c
                            }
                            // 0x8f63494c
                            g32 = v39;
                            int32_t v41 = is_fastboot_screen(v38, g26, g28, v37); // 0x8f63494c
                            int32_t v42 = 0; // 0x8f634960
                            if (v41 != 0) {
                                // 0x8f634958
                                v42 = connect_key(v41);
                                // branch -> 0x8f634960
                            }
                            // 0x8f634960
                            g29 = stop_charging(v42, g26, g28);
                            v24 = 0;
                            // branch -> 0x8f63498c
                            goto lab_0x8f63498c;
                        }
                        case 2: {
                            // 0x8f63496c
                            g26 = (int32_t)"Charger connected!\n";
                            v23 = (int32_t)"Charger connected!\n";
                            // branch -> 0x8f634980
                          lab_0x8f634980:
                            // 0x8f634980
                            print_log(1, v23, g28, v22, a1, v8, v1, v2, v3, v4, v5, v6, v7);
                            // branch -> 0x8f6349bc
                            goto lab_0x8f6349bc;
                            break;
                        }
                        case 3: {
                            // 0x8f634978
                            g26 = (int32_t)"Charger disconnected!\n";
                            v23 = (int32_t)"Charger disconnected!\n";
                            // branch -> 0x8f634980
                            goto lab_0x8f634980;
                        }
                    }
                  lab_0x8f6349bc_2:
                    // 0x8f6349bc
                    free((char *)g30);
                    // branch -> 0x8f6349c4
                    goto lab_0x8f6349c4_2;
                }
            }
        }
        // 0x8f634864
        a2 = g26;
        // branch -> 0x8f634864
    }
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int sprintf(char * restrict s, const char * restrict format, ...);
// char * strchr(char * s, int c);
// int strcmp(const char * s1, const char * s2);
// size_t strlen(const char * s);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// char * strrchr(char * s, int c);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 21
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:42:56
