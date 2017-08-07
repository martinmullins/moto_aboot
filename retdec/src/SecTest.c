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

int32_t can_write_partition(int32_t a1, uint32_t a2, int32_t a3);
int32_t display_auto_detect(int32_t a1, int32_t a2, int32_t a3);
int32_t display_init(int32_t a1);
int32_t fdt_subnode_offset(char * a1, int32_t a2, char * str, int32_t a4, int32_t a5);
int32_t fdt_subnode_offset_namelen(int32_t a1, int32_t a2, char * a3, int32_t n);
int32_t generic_mmc_do_write_protect(int32_t a1, int32_t a2, int32_t a3);
int32_t get_bar_length(int32_t a1, char * str);
int32_t get_charger_offset_by_type(int32_t a1, int32_t a2, int32_t a3);
int32_t is_battery_max17050(void);
int32_t is_battery_max17058(void);
int32_t lcm(int32_t a1, int32_t a2, int32_t a3);
int32_t led_blink(int32_t a1, int32_t a2);
int32_t led_blink_stop(int32_t a1, int32_t a2, int32_t a3);
int32_t longlong_to_string_constprop_0(int32_t a1, int32_t a2, int64_t a3, int32_t a4);
int32_t mcs_habp_rsa_crt(int32_t a1, uint32_t a2, int32_t a3, int32_t a4);
int32_t mcs_habp_rsa_mod(int32_t a1, int32_t a2, int32_t * a3, int32_t a4);
int32_t platform_led_off(int32_t a1, int32_t a2, int32_t a3);
int32_t platform_led_on(int32_t a1, int32_t a2, int32_t a3);
int32_t pmic_arb_read_cmd(char * a1);
int32_t pmic_arb_write_cmd(char * a1);
int32_t qtimer_init(void);
int32_t qtimer_tick_rate(void);
int32_t SecHABTest(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t SecTest(int32_t a1, int32_t a2);
int32_t SecWriteFuse(int32_t a1, uint32_t a2);
int32_t setup_tx(char * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7);
int32_t test_HAB(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t type_itoa_12(char * a1, int32_t a2, int32_t a3);
int32_t udc_request_queue(int32_t a1, int32_t * a2);
int32_t write_protect_partition(int32_t a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g42 = 0; // LR
int32_t g43 = 0; // R0
int32_t g44 = 0; // R1
int32_t g45 = 0; // R2
int32_t g46 = 0; // R3
int32_t g47 = 0; // R4
int32_t g48 = 0; // R5
int32_t g49 = 0; // R6
int32_t g50 = 0; // R7
int32_t g51 = 0; // R8
int32_t g1 = -0x1a60cfa4; // 0x8f6055d0
int32_t g2 = -0x1a60df94; // 0x8f6502a8
int32_t (*g3)() = (int32_t (*)())-0x16d2bff0; // 0x8f665d64
int32_t g4 = -0x16d2bff0; // 0x8f665ddc
int32_t g5 = 1; // 0x8f6ac0f0
int32_t g6 = 0xffffff; // 0x8f6afe08
int32_t g7 = 2; // 0x8f6afe0c
int32_t g8 = 2; // 0x8f6afe14
int32_t g9 = 3; // 0x8f6afe18
int32_t g10 = 0; // 0x8f6b7938
int32_t g11 = 0; // 0x8f6b7940
int32_t g12 = 0; // 0x8f6b8ab0
uint32_t g13 = 0; // 0x8f6b8ab4
int32_t g14 = 0; // 0x8f6b8ab8
int32_t g15 = 0; // 0x8f6b8afc
int32_t g16 = 0; // 0x8f6b8b04
int32_t g17 = 0; // 0x8f6b8b08
char * g18; // 0x8f6e0699
char * g19; // 0x8f6e069a
char * g20; // 0x8f6e069b
char * g21; // 0x8f6e06a9
int32_t g22 = 0; // 0x8f6e0bfc
int32_t g23 = 0; // 0x8f6e0c10
char g24 = 0; // 0x8f6e0c14
int32_t g25 = 0; // 0x8f6e0c18
int32_t g26 = 0; // 0x8f6e0c1c
int32_t g27 = 0; // 0x8f6e0c20
int32_t g28 = 0; // 0x8f6e0c24
int32_t g29 = 0; // 0x8f6e0c28
int32_t g30 = 0; // 0x8f6e0c2c
int32_t g31 = 0; // 0x8f6e0c30
int32_t g32 = 0; // 0x8f6e0c34
int32_t g33 = 0; // 0x8f6e0c38
int32_t g34 = 0; // 0x8f6e0c3c
int32_t g35 = 0; // 0x8f6e0c44
char * g36; // 0x8f6e0c48
int32_t g37 = 0; // 0x8f6e0c49
int32_t g38 = 0; // 0x8f6e0c4c
int32_t g39 = 0; // 0x8f70f724
char * g40; // 0x8f7112f4
int32_t g41 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f63742c - 0x8f6377af
int32_t SecTest(int32_t a1, int32_t a2) {
    int32_t v1 = (int32_t)&g40; // R3
    char * v2 = g40;
    int32_t result = (int32_t)v2;
    g45 = result;
    g47 = a1;
    g49 = a2;
    g48 = (int32_t)&g40;
    int32_t str;
    int32_t v3;
    if (a1 == 1) {
        int32_t v4 = SecWriteFuse(113, a2); // 0x8f637458
        g45 = g49;
        sprintf((char *)&str, "*** Fastboot WRITE %d to fuse, status from TZ = %d\n", g49, v4);
        int32_t v5 = &str;
        // branch -> 0x8f63767c
        // 0x8f63767c
        // branch -> 0x8f637714
        // 0x8f637714
        fboot_info((int32_t)"INFO", v5, g45, v4, v3, 0, 0, str, 0, 0, 0);
        // branch -> 0x8f637718
        // 0x8f637718
        if (v2 != g40) {
            // 0x8f637728
            __stack_chk_fail();
            // branch -> 0x8f63772c
        }
        // 0x8f63772c
        return result;
    }
    // 0x8f637474
    int32_t v6; // 0x8f637714
    if (a1 == 2) {
        int32_t v7 = SecReadFuse(101, a2, result, (int32_t)&g40); // 0x8f637480
        int32_t v8 = &str; // 0x8f63748c_0
        sprintf((char *)&str, "*** SEC_AP_OS was *** %d\n", v7);
        fboot_info((int32_t)"INFO", v8, v7, v1, v3, 0, 0, str, 0, 0, 0);
        int32_t v9 = SecReadFuse(112, v8, v7, v1); // 0x8f6374a4
        sprintf((char *)&str, "*** SEC_TEST_BANK1 was *** %d\n", v9);
        fboot_info((int32_t)"INFO", v8, v9, v1, v3, 0, 0, str, 0, 0, 0);
        int32_t v10 = SecReadFuse(113, v8, v9, v1); // 0x8f6374c8
        sprintf((char *)&str, "*** SEC_TEST_BANK2 was *** %d\n", v10);
        fboot_info((int32_t)"INFO", v8, v10, v1, v3, 0, 0, str, 0, 0, 0);
        int32_t v11 = SecReadFuse(106, v8, v10, v1); // 0x8f6374ec
        sprintf((char *)&str, "*** SEC_ENG was *** %d\n", v11);
        fboot_info((int32_t)"INFO", v8, v11, v1, v3, 0, 0, str, 0, 0, 0);
        // branch -> 0x8f637678
        // 0x8f637678
        g45 = SecReadFuse(107, v8, v11, v1);
        sprintf((char *)&str, (char *)(int32_t)"*** SEC_PROD was *** %d\n");
        // branch -> 0x8f63767c
        // 0x8f63767c
        v6 = &str;
        // branch -> 0x8f637714
    } else {
        // 0x8f637524
        int32_t v12; // 0x8f6375c0
        int32_t v13;
        int32_t v14;
        int32_t v15; // 0x8f6375d0_0
        if (a1 != 3) {
            // 0x8f637564
            if (a1 == 4) {
                int32_t v16 = SecHashInit(1, a2, result, (int32_t)&g40, v3, 0, 0); // 0x8f637570
                fboot_info((int32_t)"INFO", (int32_t)"Start sha256", g45, v1, v3, 0, 0, str, 0, 0, 0);
                if (v16 == 0) {
                    // 0x8f637590
                    fboot_info((int32_t)"INFO", (int32_t)"Doing update", g45, v1, v3, 0, 0, str, 0, 0, 0);
                    // branch -> 0x8f6375a0
                    // 0x8f6375a0
                    if (SecHashUpdate((int32_t)"abc", 3, g45, v1) == 0) {
                        // 0x8f6375ac
                        fboot_info((int32_t)"INFO", (int32_t)"Doing SechashFinal", g45, v1, v3, 0, 0, str, 0, 0, 0);
                        v12 = SecHashFinal((int32_t)&str, 32, g45, v1, v3, 0, 0, str, 0, 0, 0, 0);
                        if (v12 == 0) {
                            // 0x8f6375cc
                            v15 = str;
                            fboot_info((int32_t)"INFO", (int32_t)"hash: 0x%x 0x%x 0x%x", 0x1000000 * v15 / 0x1000000, 0x1000000 * v14 / 0x1000000, 0x1000000 * v13 / 0x1000000, 0, 0, v15, 0, 0, 0);
                            // branch -> 0x8f637718
                            // 0x8f637718
                            if (v2 != g40) {
                                // 0x8f637728
                                __stack_chk_fail();
                                // branch -> 0x8f63772c
                            }
                            // 0x8f63772c
                            return result;
                        }
                    }
                    // 0x8f6375ec
                    v6 = (int32_t)"SecHashUpdate failed";
                    // branch -> 0x8f637714
                } else {
                    // 0x8f6375f8
                    v6 = (int32_t)"SecHashInit failed";
                    // branch -> 0x8f637714
                }
                // 0x8f637714
                fboot_info((int32_t)"INFO", v6, g45, v1, v3, 0, 0, str, 0, 0, 0);
                // branch -> 0x8f637718
                // 0x8f637718
                if (v2 != g40) {
                    // 0x8f637728
                    __stack_chk_fail();
                    // branch -> 0x8f63772c
                }
                // 0x8f63772c
                return result;
            }
            // 0x8f637600
            if (a1 == 5) {
                // 0x8f637608
                test_rand(5, a2, result, (int32_t)&g40, v3, 0);
                // branch -> 0x8f637718
                // 0x8f637718
                if (v2 != g40) {
                    // 0x8f637728
                    __stack_chk_fail();
                    // branch -> 0x8f63772c
                }
                // 0x8f63772c
                return result;
            }
            // 0x8f637610
            if (a1 == 6) {
                // 0x8f637618
                test_AES(6, a2, result, (int32_t)&g40, v3, 0, 0, str, 0, 0, 0);
                // branch -> 0x8f637718
                // 0x8f637718
                if (v2 != g40) {
                    // 0x8f637728
                    __stack_chk_fail();
                    // branch -> 0x8f63772c
                }
                // 0x8f63772c
                return result;
            }
            // 0x8f637620
            if (a1 == 7) {
                // 0x8f637628
                test_ProcUID(7, a2, result, (int32_t)&g40, v3, 0);
                // branch -> 0x8f637718
            } else {
                // 0x8f637630
                if (a1 != 8) {
                    // 0x8f637640
                    if (a1 == 9) {
                        // if_8f637644_0_true
                        // branch -> 0x8f637714
                        // 0x8f637714
                        fboot_info((int32_t)"INFO", (int32_t)"keystore not supported", g45, v1, v3, 0, 0, str, 0, 0, 0);
                        // branch -> 0x8f637718
                        // 0x8f637718
                        if (v2 != g40) {
                            // 0x8f637728
                            __stack_chk_fail();
                            // branch -> 0x8f63772c
                        }
                        // 0x8f63772c
                        return result;
                    }
                    // 0x8f637650
                    if (a1 == 10) {
                        // 0x8f637658
                        test_HAB(10, a2, result, (int32_t)&g40);
                        // branch -> 0x8f637718
                    } else {
                        // 0x8f637660
                        if (a1 == 11) {
                            int32_t v17 = SecTzVersion(11, a2, result, (int32_t)&g40, v3, 0, 0); // 0x8f637668
                            // branch -> 0x8f637678
                            // 0x8f637678
                            g45 = v17;
                            sprintf((char *)&str, (char *)(int32_t)"TZ current version: %d");
                            // branch -> 0x8f63767c
                            // 0x8f63767c
                            v6 = &str;
                            // branch -> 0x8f637714
                        } else {
                            // 0x8f637688
                            fboot_info((int32_t)"INFO", (int32_t)"shwi test supported commands", result, (int32_t)&g40, v3, 0, 0, str, 0, 0, 0);
                            fboot_info((int32_t)"INFO", (int32_t)"1 [value]: write test fuse", g45, v1, v3, 0, 0, str, 0, 0, 0);
                            fboot_info((int32_t)"INFO", (int32_t)"2: read fuses", g45, v1, v3, 0, 0, str, 0, 0, 0);
                            fboot_info((int32_t)"INFO", (int32_t)"3: sha1 hash abc string", g45, v1, v3, 0, 0, str, 0, 0, 0);
                            fboot_info((int32_t)"INFO", (int32_t)"4: sha256 hash abc string", g45, v1, v3, 0, 0, str, 0, 0, 0);
                            fboot_info((int32_t)"INFO", (int32_t)"5: random num", g45, v1, v3, 0, 0, str, 0, 0, 0);
                            fboot_info((int32_t)"INFO", (int32_t)"6: aes encrypt decrypt", g45, v1, v3, 0, 0, str, 0, 0, 0);
                            fboot_info((int32_t)"INFO", (int32_t)"7: read proc uid", g45, v1, v3, 0, 0, str, 0, 0, 0);
                            fboot_info((int32_t)"INFO", (int32_t)"8 [image size]: verify signed image", g45, v1, v3, 0, 0, str, 0, 0, 0);
                            fboot_info((int32_t)"INFO", (int32_t)"9 [trusted]: verify signed keystore", g45, v1, v3, 0, 0, str, 0, 0, 0);
                            fboot_info((int32_t)"INFO", (int32_t)"10: TZ HAB test", g45, v1, v3, 0, 0, str, 0, 0, 0);
                            v6 = (int32_t)"11: TZ Version";
                            // branch -> 0x8f637714
                        }
                        // 0x8f637714
                        fboot_info((int32_t)"INFO", v6, g45, v1, v3, 0, 0, str, 0, 0, 0);
                        // branch -> 0x8f637718
                    }
                    // 0x8f637718
                    if (v2 != g40) {
                        // 0x8f637728
                        __stack_chk_fail();
                        // branch -> 0x8f63772c
                    }
                    // 0x8f63772c
                    return result;
                }
                // if_8f637634_0_true
                // branch -> 0x8f637714
                // 0x8f637714
                fboot_info((int32_t)"INFO", (int32_t)"user keystore signed image not supported", g45, v1, v3, 0, 0, str, 0, 0, 0);
                // branch -> 0x8f637718
            }
            // 0x8f637718
            if (v2 != g40) {
                // 0x8f637728
                __stack_chk_fail();
                // branch -> 0x8f63772c
            }
            // 0x8f63772c
            return result;
        }
        int32_t v18 = SecHashInit(256, a2, result, (int32_t)&g40, v3, 0, 0); // 0x8f637530
        fboot_info((int32_t)"INFO", (int32_t)"Start sha256", g45, v1, v3, 0, 0, str, 0, 0, 0);
        if (v18 == 0) {
            // 0x8f637550
            fboot_info((int32_t)"INFO", (int32_t)"Doing update", g45, v1, v3, 0, 0, str, 0, 0, 0);
            // branch -> 0x8f6375a0
            // 0x8f6375a0
            if (SecHashUpdate((int32_t)"abc", g47, g45, v1) == 0) {
                // 0x8f6375ac
                fboot_info((int32_t)"INFO", (int32_t)"Doing SechashFinal", g45, v1, v3, 0, 0, str, 0, 0, 0);
                v12 = SecHashFinal((int32_t)&str, 32, g45, v1, v3, 0, 0, str, 0, 0, 0, 0);
                if (v12 == 0) {
                    // 0x8f6375cc
                    v15 = str;
                    fboot_info((int32_t)"INFO", (int32_t)"hash: 0x%x 0x%x 0x%x", 0x1000000 * v15 / 0x1000000, 0x1000000 * v14 / 0x1000000, 0x1000000 * v13 / 0x1000000, 0, 0, v15, 0, 0, 0);
                    // branch -> 0x8f637718
                    // 0x8f637718
                    if (v2 != g40) {
                        // 0x8f637728
                        __stack_chk_fail();
                        // branch -> 0x8f63772c
                    }
                    // 0x8f63772c
                    return result;
                }
            }
            // 0x8f6375ec
            // branch -> 0x8f637714
            // 0x8f637714
            fboot_info((int32_t)"INFO", (int32_t)"SecHashUpdate failed", g45, v1, v3, 0, 0, str, 0, 0, 0);
            // branch -> 0x8f637718
            // 0x8f637718
            if (v2 != g40) {
                // 0x8f637728
                __stack_chk_fail();
                // branch -> 0x8f63772c
            }
            // 0x8f63772c
            return result;
        }
        // 0x8f6375f8
        v6 = (int32_t)"SecHashInit failed";
        // branch -> 0x8f637714
    }
    // 0x8f637714
    fboot_info((int32_t)"INFO", v6, g45, v1, v3, 0, 0, str, 0, 0, 0);
    // branch -> 0x8f637718
    // 0x8f637718
    if (v2 != g40) {
        // 0x8f637728
        __stack_chk_fail();
        // branch -> 0x8f63772c
    }
    // 0x8f63772c
    return result;
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// void free(void * ptr);
// void * memalign(size_t alignment, size_t size);
// void * memchr(void * s, int c, size_t n);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// int sprintf(char * restrict s, const char * restrict format, ...);
// size_t strlen(const char * s);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:12:14
