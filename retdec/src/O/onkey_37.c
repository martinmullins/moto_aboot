//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

char * display_mode_text(char * a1, int32_t a2);
char * display_sw_version_38(void);
int32_t fastboot_flush_all_logs_35(int32_t a1, int32_t a2);
int32_t get_line(int32_t a1);
int32_t menu_init(int32_t a1);
int32_t menu_ondraw(void);
int32_t menu_onkey(void);
int32_t menu_start(int32_t a1, int32_t a2);
int32_t onkey_37(char * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t screen_onkey(int32_t a1, int32_t a2);
int32_t screen_start(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t screen_stop(int32_t a1, int32_t a2, int32_t a3);
int32_t set_content_to_show_34(int32_t a1, int32_t a2);
int32_t stop_36(int32_t a1, int32_t a2);
int32_t unlock_abort(int32_t a1, int32_t a2, int32_t a3);
int32_t unlock_continue(int32_t a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g55 = 0; // LR
int32_t g56 = 0; // R0
int32_t g57 = 0; // R1
int32_t g58 = 0; // R2
int32_t g59 = 0; // R3
int32_t g60 = 0; // R4
int32_t g61 = 0; // R5
int32_t g62 = 0; // R6
int32_t g63 = 0; // R7
int32_t g64 = 0; // R8
int32_t g1 = -0x16d2bfed; // 0x8f623e84
int32_t (*g2)() = (int32_t (*)())-0x16d2bfc9; // 0x8f638578
int32_t g3 = -0x16d2bc09; // 0x8f638ab0
int32_t g4 = -0x15ffffc9; // 0x8f63ca90
int32_t g5 = -0x16d2bfed; // 0x8f63ccf0
int32_t g6 = 0x40000; // 0x8f69cce4
int32_t g7 = 0x80000; // 0x8f69ccf0
char * g8; // 0x8f6a4e20
int32_t g9 = 0; // 0x8f6ac7f8
int32_t g10 = 0; // 0x8f6ac7fc
int32_t g11 = 0; // 0x8f6ac848
int32_t g12 = 0; // 0x8f6ac84c
int32_t g13 = 0; // 0x8f6ac898
int32_t g14 = 0; // 0x8f6ac89c
int32_t g15 = 0; // 0x8f6ac8f0
int32_t g16 = 0; // 0x8f6ac92c
int32_t g17 = 0; // 0x8f6ac930
int32_t g18 = 0; // 0x8f6ac97c
int32_t g19 = 0; // 0x8f6ac980
int32_t g20 = 0; // 0x8f6ac9cc
int32_t g21 = 0; // 0x8f6ac9d0
int32_t g22 = 3; // 0x8f6aca20
int32_t g23 = 0; // 0x8f6aca24
int32_t g24 = -0x709e1c78; // 0x8f6aca70
int32_t g25 = 2; // 0x8f6aca74
int32_t g26 = 0; // 0x8f6b1698
int32_t g27 = 0; // 0x8f6b16c4
int32_t g28 = 0; // 0x8f6b170c
int32_t g29 = 0; // 0x8f6e09bc
int32_t g30 = 0; // 0x8f6e09c0
int32_t g31 = 0; // 0x8f6e09c4
int32_t g32 = 0; // 0x8f6e09c8
int32_t g33 = 0; // 0x8f6e09e8
int32_t g34 = 0; // 0x8f6e09ec
int32_t g35 = 0; // 0x8f6e09f0
int32_t g36 = 0; // 0x8f6e09f4
int32_t g37 = 0; // 0x8f6e09f8
int32_t g38 = 0; // 0x8f6e09fc
char * g39; // 0x8f6e0a00
int32_t g40 = 0; // 0x8f6e0a04
char * g41; // 0x8f6e0a09
int32_t g42 = 0; // 0x8f6e0a28
int32_t g43 = 0; // 0x8f6e0a44
char * g44; // 0x8f6e0a49
int32_t g45 = 0; // 0x8f6e0a4c
int32_t g46 = 0; // 0x8f7112f4
int32_t g47 = 0; // 0x8f7114b8
int32_t g48 = 0; // 0x8f711514
char * g49; // 0x8f711530
int32_t g50 = 0; // 0x8f712580
int32_t g51 = 0; // 0x8f71259c
int32_t g52 = 0; // 0x8f7125a0
int32_t g53 = 0; // 0x8f7125a4
int32_t g54 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f63cd88 - 0x8f63d06b
int32_t onkey_37(char * a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = (int32_t)a1;
    g56 = v1;
    int32_t v2 = a2; // R1
    int32_t v3 = g60; // 0x8f63cd88
    int32_t v4 = g61; // 0x8f63cd88
    int32_t v5 = g62; // 0x8f63cd88
    int32_t v6 = g63; // 0x8f63cd88
    int32_t v7 = g64; // 0x8f63cd88
    int32_t v8 = g55; // 0x8f63cd88
    g62 = 0;
    g63 = &g46;
    g61 = &g40;
    int32_t v9 = 0; // bp-36
    int32_t v10 = g46;
    int32_t v11 = g40;
    g60 = v11;
    if (a2 == 0 || a1 < (char *)((int32_t)&g5 & -0x10000 || 277)) {
        // 0x8f63d010
        if (v10 != g46) {
            // 0x8f63d020
            __stack_chk_fail();
            // branch -> 0x8f63d024
        }
        // 0x8f63d024
        g60 = v3;
        g64 = v7;
        return g56;
    }
    uint32_t v12 = a3 & -0x10000 | 278; // 0x8f63cdc4
    if (v1 > v12) {
        // 0x8f63cdd0
        if (a1 == (char *)(((int32_t)&g5 & -0x10000 || 277) + 233)) {
            int32_t v13 = 12 * v11; // 0x8f63cf54
            g60 = v13;
            g58 = &g7;
            int32_t v14 = *(int32_t *)(v13 + (int32_t)&g6); // 0x8f63cf5c
            switch (v14) {
                default: {
                    // 0x8f63cfd8
                    g24 = &g1;
                    set_boot_item((int32_t)&g23, a2, (int32_t)&g7, (int32_t)&g1);
                    int32_t v15 = g25;
                    int32_t v16 = *(int32_t *)(4 * v15 + (int32_t)&g45); // 0x8f63cffc
                    set_console_string((char *)v16, v2, v15, (int32_t)&g45, ((int32_t)&g5 & -0x10000 | 277) + 233, v9, (int32_t)fastboot_flush_all_logs_35, v10, v3);
                    int32_t v17 = event_signal((int32_t)&g47, g62, v15, (int32_t)&g45, ((int32_t)&g5 & -0x10000 | 277) + 233, v9, (int32_t)fastboot_flush_all_logs_35, v10); // 0x8f63d00c
                    g56 = v17;
                    // branch -> 0x8f63d010
                    // 0x8f63d010
                    if (v10 != g46) {
                        // 0x8f63d020
                        __stack_chk_fail();
                        // branch -> 0x8f63d024
                    }
                    // 0x8f63d024
                    g60 = v3;
                    g64 = v7;
                    return g56;
                }
                case 0x1000000: {
                    // 0x8f63cf68
                    g60 = &g25;
                    int32_t v18 = (g25 + 1) % g22;
                    g25 = v18;
                    set_content_to_show_34(512, v18);
                    // branch -> 0x8f63cf98
                    break;
                }
                case 0x2000000: {
                    // 0x8f63cfa8
                    int32_t v19;
                    int32_t v20 = show((int32_t)"barcode_screen", 0, (int32_t)&g7, (int32_t)&g3, ((int32_t)&g5 & -0x10000 | 277) + 233, 0, (int32_t)fastboot_flush_all_logs_35, v10, v3, v4, v5, v6, v7, v8, v19); // 0x8f63cfb8
                    g56 = v20;
                    // branch -> 0x8f63d010
                }
                case 0x10000000: {
                    // 0x8f63d010
                    if (v10 != g46) {
                        // 0x8f63d020
                        __stack_chk_fail();
                        // branch -> 0x8f63d024
                    }
                    // 0x8f63d024
                    g60 = v3;
                    g64 = v7;
                    return g56;
                }
                case 0x200000: {
                    int32_t v21 = trigger_to_power_off(((int32_t)&g5 & -0x10000 | 277) + 233, a2, (int32_t)&g7); // 0x8f63cfd0
                    g56 = v21;
                    // branch -> 0x8f63d010
                    // 0x8f63d010
                    if (v10 != g46) {
                        // 0x8f63d020
                        __stack_chk_fail();
                        // branch -> 0x8f63d024
                    }
                    // 0x8f63d024
                    g60 = v3;
                    g64 = v7;
                    return g56;
                }
            }
            // 0x8f63cf98
            g56 = g62;
            g59 = (int32_t)&g2;
            g55 = -0x709c3064;
            ((int32_t (*)())&g2)();
            // branch -> 0x8f63d010
        }
    } else {
        // 0x8f63cde0
        g62 = &g6;
        int32_t v22; // 0x8f63cf38
        int32_t v23; // 0x8f63cec8
        int32_t v24; // 0x8f63ce94
        int32_t v25; // 0x8f63ce14
        char v26; // 0x8f63ce9c
        int32_t v27; // 0x8f63ce9c
        int32_t v28; // 0x8f63ce98
        int32_t v29; // 0x8f63cf28
        if (a1 == (char *)((int32_t)&g5 & -0x10000 || 277)) {
            // 0x8f63cdec
            g64 = 12;
            g60 = v11 == 0 ? 10 : v11 - 1;
            int32_t v30 = is_validation_enabled((char *)((int32_t)&g5 & -0x10000 | 277), a2, v12, v11); // 0x8f63ce0847
            int32_t v31; // 0x8f63ce84
            if (v30 != 0) {
                while (true) {
                    int32_t v32 = g60; // 0x8f63ce14
                    v25 = g62;
                    if (*(char *)(v25 + v32 * g64 + 8) == 0) {
                        int32_t v33 = v32 == 0 ? 10 : v32 - 1;
                        g60 = v33;
                        int32_t v34 = g40;
                        v24 = v33;
                        if (v33 != v34) {
                            int32_t v35 = is_validation_enabled((char *)v30, v2, v12, v34); // 0x8f63ce08
                            if (v35 == 0) {
                                // break -> 0x8f63ce84
                                break;
                            }
                            v30 = v35;
                            // continue -> 0x8f63ce14
                            continue;
                        }
                        // 0x8f63ce8c
                        g58 = 12;
                        g61 = (int32_t)&g41;
                        v28 = *(int32_t *)(12 * v24 + v25);
                        g60 = v28;
                        v26 = *(char *)&g41;
                        v27 = v26;
                        if (v28 == 0x10000000) {
                            // 0x8f63ceac
                            if (v26 == 0) {
                                // 0x8f63ceb4
                                set_logger_ops(2, (int32_t)&v9, 12);
                                v23 = set_logger_capacity(2, 14, 12, v27);
                                set_logger_status(2, 1, v23);
                                *(char *)g61 = 1;
                                g58 = 0x1002ec01;
                                if (*(char *)&g44 == 0) {
                                    // if_8f63cef8_0_true
                                    v22 = 0x10002c01;
                                    // branch -> 0x8f63cf38
                                } else {
                                    // if_8f63cef4_0_true
                                    v22 = 0x1002ec01;
                                    // branch -> 0x8f63cf38
                                }
                                // 0x8f63cf38
                                set_content_to_show_34(v22, 1);
                                // branch -> 0x8f63cf98
                                // 0x8f63cf98
                                g56 = 0;
                                g59 = (int32_t)&g2;
                                g55 = -0x709c3064;
                                ((int32_t (*)())&g2)();
                                // branch -> 0x8f63d010
                                // 0x8f63d010
                                if (v10 != g46) {
                                    // 0x8f63d020
                                    __stack_chk_fail();
                                    // branch -> 0x8f63d024
                                }
                                // 0x8f63d024
                                g60 = v3;
                                g64 = v7;
                                return g56;
                            }
                        } else {
                            // 0x8f63cf00
                            if ((char *)v27 == (char *)1) {
                                // 0x8f63cf08
                                set_logger_ops(2, 0, 12);
                                *(char *)g61 = 0;
                                v29 = g60;
                                if (*(char *)&g44 == 0) {
                                    // if_8f63cf28_0_true
                                    v22 = v29 | 0x2bff;
                                    // branch -> 0x8f63cf38
                                } else {
                                    // if_8f63cf2c_0_true
                                    v22 = v29 | 0x3abff;
                                    // branch -> 0x8f63cf38
                                }
                                // 0x8f63cf38
                                set_content_to_show_34(v22, 0);
                                // branch -> 0x8f63cf98
                                // 0x8f63cf98
                                g56 = 0;
                                g59 = (int32_t)&g2;
                                g55 = -0x709c3064;
                                ((int32_t (*)())&g2)();
                                // branch -> 0x8f63d010
                                // 0x8f63d010
                                if (v10 != g46) {
                                    // 0x8f63d020
                                    __stack_chk_fail();
                                    // branch -> 0x8f63d024
                                }
                                // 0x8f63d024
                                g60 = v3;
                                g64 = v7;
                                return g56;
                            }
                        }
                        // 0x8f63cf38
                        set_content_to_show_34(v28 | 0x2000, v2);
                        // branch -> 0x8f63cf98
                        // 0x8f63cf98
                        g56 = 0;
                        g59 = (int32_t)&g2;
                        g55 = -0x709c3064;
                        ((int32_t (*)())&g2)();
                        // branch -> 0x8f63d010
                        // 0x8f63d010
                        if (v10 != g46) {
                            // 0x8f63d020
                            __stack_chk_fail();
                            // branch -> 0x8f63d024
                        }
                        // 0x8f63d024
                        g60 = v3;
                        g64 = v7;
                        return g56;
                    }
                }
                // 0x8f63ce84
                v31 = g60;
                *(int32_t *)g61 = v31;
                // branch -> 0x8f63ce8c
                // 0x8f63ce8c
                g58 = 12;
                g61 = (int32_t)&g41;
                v28 = *(int32_t *)(12 * v31 + g62);
                g60 = v28;
                v26 = *(char *)&g41;
                v27 = v26;
                if (v28 == 0x10000000) {
                    // 0x8f63ceac
                    if (v26 == 0) {
                        // 0x8f63ceb4
                        set_logger_ops(2, (int32_t)&v9, 12);
                        v23 = set_logger_capacity(2, 14, 12, v27);
                        set_logger_status(2, 1, v23);
                        *(char *)g61 = 1;
                        g58 = 0x1002ec01;
                        if (*(char *)&g44 == 0) {
                            // if_8f63cef8_0_true
                            v22 = 0x10002c01;
                            // branch -> 0x8f63cf38
                        } else {
                            // if_8f63cef4_0_true
                            v22 = 0x1002ec01;
                            // branch -> 0x8f63cf38
                        }
                        // 0x8f63cf38
                        set_content_to_show_34(v22, 1);
                        // branch -> 0x8f63cf98
                        // 0x8f63cf98
                        g56 = 0;
                        g59 = (int32_t)&g2;
                        g55 = -0x709c3064;
                        ((int32_t (*)())&g2)();
                        // branch -> 0x8f63d010
                        // 0x8f63d010
                        if (v10 != g46) {
                            // 0x8f63d020
                            __stack_chk_fail();
                            // branch -> 0x8f63d024
                        }
                        // 0x8f63d024
                        g60 = v3;
                        g64 = v7;
                        return g56;
                    }
                } else {
                    // 0x8f63cf00
                    if ((char *)v27 == (char *)1) {
                        // 0x8f63cf08
                        set_logger_ops(2, 0, 12);
                        *(char *)g61 = 0;
                        v29 = g60;
                        if (*(char *)&g44 == 0) {
                            // if_8f63cf28_0_true
                            v22 = v29 | 0x2bff;
                            // branch -> 0x8f63cf38
                        } else {
                            // if_8f63cf2c_0_true
                            v22 = v29 | 0x3abff;
                            // branch -> 0x8f63cf38
                        }
                        // 0x8f63cf38
                        set_content_to_show_34(v22, 0);
                        // branch -> 0x8f63cf98
                        // 0x8f63cf98
                        g56 = 0;
                        g59 = (int32_t)&g2;
                        g55 = -0x709c3064;
                        ((int32_t (*)())&g2)();
                        // branch -> 0x8f63d010
                        // 0x8f63d010
                        if (v10 != g46) {
                            // 0x8f63d020
                            __stack_chk_fail();
                            // branch -> 0x8f63d024
                        }
                        // 0x8f63d024
                        g60 = v3;
                        g64 = v7;
                        return g56;
                    }
                }
                // 0x8f63cf38
                set_content_to_show_34(v28 | 0x2000, v2);
                // branch -> 0x8f63cf98
                // 0x8f63cf98
                g56 = 0;
                g59 = (int32_t)&g2;
                g55 = -0x709c3064;
                ((int32_t (*)())&g2)();
                // branch -> 0x8f63d010
                // 0x8f63d010
                if (v10 != g46) {
                    // 0x8f63d020
                    __stack_chk_fail();
                    // branch -> 0x8f63d024
                }
                // 0x8f63d024
                g60 = v3;
                g64 = v7;
                return g56;
            }
            // 0x8f63ce84
            v31 = g60;
            *(int32_t *)g61 = v31;
            v25 = g62;
            v24 = v31;
            // branch -> 0x8f63ce8c
        } else {
            uint32_t v36 = v11 + 1; // 0x8f63ce34
            int32_t v37 = v36 % 11;
            v2 = v37;
            g64 = 12;
            g60 = v37;
            if (v37 != v11) {
                int32_t v38 = v11; // 0x8f63ce78
                int32_t v39 = v36 / 11; // 0x8f63ce78
                int32_t v40;
                int32_t v41; // 0x8f63ce4c
                while (true) {
                    // 0x8f63ce78
                    if (is_validation_enabled((char *)v39, v37, v12, v38) != 0) {
                        int32_t v42 = g60; // 0x8f63ce4c
                        v41 = g62;
                        if (*(char *)(v41 + v42 * g64 + 8) == 0) {
                            uint32_t v43 = v42 + 1; // 0x8f63ce5c
                            v40 = v43 % 11;
                            v2 = v40;
                            g60 = v40;
                            int32_t v44 = g40;
                            if (v40 == v44) {
                                // break -> 0x8f63ce8c
                                break;
                            }
                            v38 = v44;
                            v37 = v40;
                            v39 = v43 / 11;
                            // continue -> 0x8f63ce78
                            continue;
                        }
                    }
                    // 0x8f63ce84
                    *(int32_t *)g61 = g60;
                    // branch -> 0x8f63ce8c
                }
                // 0x8f63ce8c
                g58 = 12;
                g61 = (int32_t)&g41;
                v28 = *(int32_t *)(12 * v40 + v41);
                g60 = v28;
                v26 = *(char *)&g41;
                v27 = v26;
                if (v28 == 0x10000000) {
                    // 0x8f63ceac
                    if (v26 == 0) {
                        // 0x8f63ceb4
                        set_logger_ops(2, (int32_t)&v9, 12);
                        v23 = set_logger_capacity(2, 14, 12, v27);
                        set_logger_status(2, 1, v23);
                        *(char *)g61 = 1;
                        g58 = 0x1002ec01;
                        if (*(char *)&g44 == 0) {
                            // if_8f63cef8_0_true
                            v22 = 0x10002c01;
                            // branch -> 0x8f63cf38
                        } else {
                            // if_8f63cef4_0_true
                            v22 = 0x1002ec01;
                            // branch -> 0x8f63cf38
                        }
                        // 0x8f63cf38
                        set_content_to_show_34(v22, 1);
                        // branch -> 0x8f63cf98
                        // 0x8f63cf98
                        g56 = 0;
                        g59 = (int32_t)&g2;
                        g55 = -0x709c3064;
                        ((int32_t (*)())&g2)();
                        // branch -> 0x8f63d010
                        // 0x8f63d010
                        if (v10 != g46) {
                            // 0x8f63d020
                            __stack_chk_fail();
                            // branch -> 0x8f63d024
                        }
                        // 0x8f63d024
                        g60 = v3;
                        g64 = v7;
                        return g56;
                    }
                } else {
                    // 0x8f63cf00
                    if ((char *)v27 == (char *)1) {
                        // 0x8f63cf08
                        set_logger_ops(2, 0, 12);
                        *(char *)g61 = 0;
                        v29 = g60;
                        if (*(char *)&g44 == 0) {
                            // if_8f63cf28_0_true
                            v22 = v29 | 0x2bff;
                            // branch -> 0x8f63cf38
                        } else {
                            // if_8f63cf2c_0_true
                            v22 = v29 | 0x3abff;
                            // branch -> 0x8f63cf38
                        }
                        // 0x8f63cf38
                        set_content_to_show_34(v22, 0);
                        // branch -> 0x8f63cf98
                        // 0x8f63cf98
                        g56 = 0;
                        g59 = (int32_t)&g2;
                        g55 = -0x709c3064;
                        ((int32_t (*)())&g2)();
                        // branch -> 0x8f63d010
                        // 0x8f63d010
                        if (v10 != g46) {
                            // 0x8f63d020
                            __stack_chk_fail();
                            // branch -> 0x8f63d024
                        }
                        // 0x8f63d024
                        g60 = v3;
                        g64 = v7;
                        return g56;
                    }
                }
                // 0x8f63cf38
                set_content_to_show_34(v28 | 0x2000, v2);
                // branch -> 0x8f63cf98
                // 0x8f63cf98
                g56 = 0;
                g59 = (int32_t)&g2;
                g55 = -0x709c3064;
                ((int32_t (*)())&g2)();
                // branch -> 0x8f63d010
                // 0x8f63d010
                if (v10 != g46) {
                    // 0x8f63d020
                    __stack_chk_fail();
                    // branch -> 0x8f63d024
                }
                // 0x8f63d024
                g60 = v3;
                g64 = v7;
                return g56;
            }
            v25 = &g6;
            v24 = v11;
        }
        // 0x8f63ce8c
        g58 = 12;
        g61 = (int32_t)&g41;
        v28 = *(int32_t *)(12 * v24 + v25);
        g60 = v28;
        v26 = *(char *)&g41;
        v27 = v26;
        if (v28 == 0x10000000) {
            // 0x8f63ceac
            if (v26 == 0) {
                // 0x8f63ceb4
                set_logger_ops(2, (int32_t)&v9, 12);
                v23 = set_logger_capacity(2, 14, 12, v27);
                set_logger_status(2, 1, v23);
                *(char *)g61 = 1;
                g58 = 0x1002ec01;
                if (*(char *)&g44 == 0) {
                    // if_8f63cef8_0_true
                    v22 = 0x10002c01;
                    // branch -> 0x8f63cf38
                } else {
                    // if_8f63cef4_0_true
                    v22 = 0x1002ec01;
                    // branch -> 0x8f63cf38
                }
                // 0x8f63cf38
                set_content_to_show_34(v22, 1);
                // branch -> 0x8f63cf98
                // 0x8f63cf98
                g56 = 0;
                g59 = (int32_t)&g2;
                g55 = -0x709c3064;
                ((int32_t (*)())&g2)();
                // branch -> 0x8f63d010
                // 0x8f63d010
                if (v10 != g46) {
                    // 0x8f63d020
                    __stack_chk_fail();
                    // branch -> 0x8f63d024
                }
                // 0x8f63d024
                g60 = v3;
                g64 = v7;
                return g56;
            }
        } else {
            // 0x8f63cf00
            if ((char *)v27 == (char *)1) {
                // 0x8f63cf08
                set_logger_ops(2, 0, 12);
                *(char *)g61 = 0;
                v29 = g60;
                if (*(char *)&g44 == 0) {
                    // if_8f63cf28_0_true
                    v22 = v29 | 0x2bff;
                    // branch -> 0x8f63cf38
                } else {
                    // if_8f63cf2c_0_true
                    v22 = v29 | 0x3abff;
                    // branch -> 0x8f63cf38
                }
                // 0x8f63cf38
                set_content_to_show_34(v22, 0);
                // branch -> 0x8f63cf98
                // 0x8f63cf98
                g56 = 0;
                g59 = (int32_t)&g2;
                g55 = -0x709c3064;
                ((int32_t (*)())&g2)();
                // branch -> 0x8f63d010
                // 0x8f63d010
                if (v10 != g46) {
                    // 0x8f63d020
                    __stack_chk_fail();
                    // branch -> 0x8f63d024
                }
                // 0x8f63d024
                g60 = v3;
                g64 = v7;
                return g56;
            }
        }
        // 0x8f63cf38
        set_content_to_show_34(v28 | 0x2000, v2);
        // branch -> 0x8f63cf98
        // 0x8f63cf98
        g56 = 0;
        g59 = (int32_t)&g2;
        g55 = -0x709c3064;
        ((int32_t (*)())&g2)();
        // branch -> 0x8f63d010
    }
    // 0x8f63d010
    if (v10 != g46) {
        // 0x8f63d020
        __stack_chk_fail();
        // branch -> 0x8f63d024
    }
    // 0x8f63d024
    g60 = v3;
    g64 = v7;
    return g56;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void * memset(void * s, int c, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// size_t strlen(const char * s);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 16
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:44:58
