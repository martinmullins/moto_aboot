//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <ctype.h>
#include <regex.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ------------------------ Structures ------------------------

struct re_pattern_buffer {
    char * e0;
    int32_t e1;
    int32_t e2;
    int32_t e3;
    char * e4;
    int32_t e5;
    int32_t e6;
    int32_t e7;
    int32_t e8;
    int32_t e9;
    int32_t e10;
    int32_t e11;
    int32_t e12;
    int32_t e13;
};

// ------------------- Function Prototypes --------------------

int32_t doemit(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t dofwd(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t doinsert(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t dupl(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t enlarge(int32_t a1, int32_t a2);
void function_8f65db8c(struct re_pattern_buffer * a1, char * a2, int32_t a3);
int32_t lstep(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t nonnewline(int32_t * a1);
int32_t ordinary(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t othercase(int32_t c, int32_t a2, int32_t a3, int32_t a4);
int32_t p_b_symbol(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t p_bracket(int32_t * a1);
int32_t p_bre(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t p_ere(int32_t * a1, int32_t a2, uint32_t a3);
int32_t repeat(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t sslow(int32_t * a1, char * a2, int32_t a3, int32_t a4);
int32_t sstep(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);

// --------------------- Global Variables ---------------------

int32_t g7 = 0; // LR
int32_t g8 = 0; // R1
int32_t g9 = 0; // R10
int32_t g10 = 0; // R11
int32_t g11 = 0; // R12
int32_t g12 = 0; // R2
int32_t g13 = 0; // R3
int32_t g14 = 0; // R4
int32_t g15 = 0; // R5
int32_t g16 = 0; // R6
int32_t g17 = 0; // R7
int32_t g18 = 0; // R8
int32_t g19 = 0; // R9
bool g1 = false; // flagc
int32_t g2 = 0x65440030; // 0x8f69c66f
int32_t g3 = 0x746e6300; // 0x8f6a4e20
int32_t g4 = 0xa090807; // 0x8f6a4e27
char * g6; // 0x8f7112f4
char * g5[33] = {
    "alpha",
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",
    (char *)&g3,
    "blank",
    " \t",
    (char *)&g3,
    "cntrl",
    (char *)&g4,
    (char *)&g3,
    "digit",
    "0123456789",
    (char *)&g3,
    "graph",
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789",
    (char *)&g3,
    "lower",
    "abcdefghijklmnopqrstuvwxyz",
    (char *)&g3,
    "print",
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789",
    (char *)&g3,
    "punct",
    "!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~",
    (char *)&g3,
    "space",
    "\t\n\v\f\r ",
    (char *)&g3,
    "upper",
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ",
    (char *)&g3,
    "xdigit",
    "0123456789ABCDEFabcdef",
    (char *)&g3
}; // 0x8f6a4f6c

// ------------------------ Functions -------------------------

// Address range: 0x8f65e4e4 - 0x8f65e8ff
int32_t lstep(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    char * v1 = g6;
    int32_t v2;
    if (a1 == 0) {
        // 0x8f65e518
        _panic(g7, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"lib/regex/engine.c", (int32_t)"g != ((void *)0)" & -0x10000 | 967, (int32_t)"g != ((void *)0)", 0, v2);
        // branch -> 0x8f65e534
    }
    int32_t v3 = a2; // R5
    int32_t result;
    if (a2 == a3) {
        // 0x8f65e8c0
        if (v1 != g6) {
            // 0x8f65e8d8
            __stack_chk_fail();
            // branch -> 0x8f65e8dc
        }
        // 0x8f65e8dc
        return result;
    }
    char * v4 = (char *)v2;
    // branch -> 0x8f65e550
    while (true) {
        uint32_t v5 = *(int32_t *)(*(int32_t *)(a1 + 4) + 4 * a2); // 0x8f65e554
        uint32_t v6 = v5 & -0x8000000; // 0x8f65e558
        int32_t v7; // R11
        int32_t v8; // 0x8f65e8b4
        if (v6 == 0x50000000) {
            int32_t v9 = v5 % 0x8000000; // 0x8f65e71c
            v7 = v9;
            char * v10 = (char *)(result + a2 + 1); // 0x8f65e720_0
            *v10 = *v10 | *(char *)(result + a2);
            char * v11 = (char *)(a2 - v9 + result); // 0x8f65e730_0
            char v12 = *v11; // 0x8f65e730
            char v13 = *(char *)(v3 + result) | v12; // 0x8f65e73c45
            int32_t v14 = v13; // R3
            *v11 = v13;
            if (v12 == 0) {
                // 0x8f65e748
                if (v14 != 0) {
                    int32_t v15 = a2 - v7 - 1; // 0x8f65e750
                    a2 = v15;
                    v3 = v15;
                    // branch -> 0x8f65e8b4
                }
            }
        } else {
            // 0x8f65e564
            char v16;
            char * v17;
            int32_t v18; // 0x8f65e64c
            int32_t v19;
            int32_t v20; // 0x8f65e8b0
            int32_t v21; // 0x8f65e8a4
            int32_t v22; // 0x8f65e8b0
            int32_t v23; // 0x8f65e8ac
            if (v6 > 0x50000000) {
                // 0x8f65e5cc
                int32_t v24; // R12
                int32_t v25;
                char * v26;
                char * v27;
                int32_t v28; // 0x8f65e894
                int32_t v29; // 0x8f65e898
                int32_t v30; // 0x8f65e894
                if (v6 == 0x78000000) {
                    int32_t v31 = result + a2; // 0x8f65e760
                    v7 = v5 % 0x8000000;
                    v24 = v31;
                    char * v32 = (char *)(result + a2 + 1); // 0x8f65e76c_0
                    *v32 = *v32 | *(char *)v31;
                    int32_t v33 = *(int32_t *)(a1 + 4); // 0x8f65e778
                    int32_t v34 = *(int32_t *)(4 * (v7 + a2) + v33) & -0x8000000; // 0x8f65e784
                    v26 = v4;
                    if (v34 != -0x78000000) {
                        // 0x8f65e790
                        v25 = v34 | 1036;
                        // branch -> 0x8f65e87c
                      lab_0x8f65e87c:;
                        int32_t v35 = v24; // 0x8f65e87c
                        _panic(g7, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"lib/regex/engine.c", v25, (int32_t)"((g->strip[pc+((int)((s)&((uint32_t)0x07ffffffUL)))])&((uint32_t)0xf8000000UL)) == (((uint32_t)(17))<<((unsigned)27))", 0, v35);
                        v24 = v35;
                        v26 = (char *)v35;
                        // branch -> 0x8f65e888
                    }
                  lab_0x8f65e888:;
                    int32_t v36 = v3 + v7; // 0x8f65e888
                    v29 = v36;
                    v30 = (int32_t)*(char *)(result + v36);
                    v28 = (int32_t)*(char *)v24;
                    v27 = v26;
                    // branch -> 0x8f65e894
                  lab_0x8f65e894_2:
                    // 0x8f65e894
                    *(char *)(result + v29) = (char)(v28 | v30);
                    v17 = v27;
                    // branch -> 0x8f65e8b4
                } else {
                    // 0x8f65e5d4
                    int32_t v37; // 0x8f65e8a4
                    if (v6 > 0x78000000) {
                        // 0x8f65e628
                        if (v6 == -0x70000000) {
                            // 0x8f65e8a0
                            v21 = a2 + 1;
                            // branch -> 0x8f65e8a4
                          lab_0x8f65e8a4_3:
                            // 0x8f65e8a4
                            v37 = result;
                            v22 = v21;
                            v20 = v37;
                            v19 = v37;
                            v23 = (int32_t)*(char *)(v37 + v21);
                            // branch -> 0x8f65e8ac
                          lab_0x8f65e8ac_2:
                            // 0x8f65e8ac
                            v16 = *(char *)(v19 + a2);
                            *(char *)(v20 + v22) = (char)((int32_t)v16 | v23);
                            // branch -> 0x8f65e8b4
                        } else {
                            // 0x8f65e630
                            if (v6 > 0x90000000) {
                                // 0x8f65e648
                                v18 = a2 + 1;
                                int32_t v38 = -0x67fffefb;
                                if (v6 != -0x68000000) {
                                    // 0x8f65e654
                                    if (v6 != -0x60000000) {
                                      lab_0x8f65e8b4_4:
                                        // 0x8f65e8b4
                                        v8 = a2 + 1;
                                        v3++;
                                        if (v8 == a3) {
                                            // break -> 0x8f65e8c0
                                            break;
                                        }
                                        a2 = v8;
                                        // continue -> 0x8f65e550
                                        continue;
                                    } else {
                                        v38 = -0x5ffffefa;
                                    }
                                }
                                // 0x8f65e6c4
                                if (a5 != v38) {
                                    goto lab_0x8f65e8b4_4;
                                }
                              lab_0x8f65e708_5:
                                // 0x8f65e708
                                v22 = v18;
                                v20 = result;
                                v19 = a4;
                                v23 = (int32_t)*(char *)(result + v18);
                                // branch -> 0x8f65e8ac
                                goto lab_0x8f65e8ac_2;
                            } else {
                                // 0x8f65e634
                                if (v6 == -0x80000000) {
                                    char * v39 = (char *)(result + a2); // 0x8f65e7b4_0
                                    if (*v39 == 0) {
                                        goto lab_0x8f65e8b4_4;
                                    }
                                    int32_t v40 = a2; // 0x8f65e7c8
                                    int32_t v41 = a1; // 0x8f65e7c4
                                    int32_t v42 = 1; // 0x8f65e818
                                    char * v43 = v4;
                                    while (true) {
                                        // 0x8f65e7c4
                                        v7 = v42;
                                        int32_t v44 = *(int32_t *)(v41 + 4); // 0x8f65e7c4
                                        uint32_t v45 = *(int32_t *)(4 * (v42 + v40) + v44); // 0x8f65e7cc
                                        int32_t v46 = v45 & -0x8000000; // 0x8f65e7d0
                                        if (v46 == -0x70000000) {
                                            int32_t v47 = v3 + v42; // 0x8f65e818
                                            v29 = v47;
                                            v30 = (int32_t)*(char *)(v47 + result);
                                            v28 = (int32_t)*v39;
                                            v27 = v43;
                                            // branch -> 0x8f65e894
                                            goto lab_0x8f65e894_2;
                                        } else {
                                            int32_t v48 = v40;
                                            int32_t v49 = v41;
                                            int32_t v50 = v42; // 0x8f65e80c
                                            char * v51 = v43;
                                            if (v46 != -0x78000000) {
                                                // 0x8f65e7e4
                                                _panic(g7, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"lib/regex/engine.c", v46 | 1044, (int32_t)"((s)&((uint32_t)0xf8000000UL)) == (((uint32_t)(17))<<((unsigned)27))", 0, v45);
                                                v48 = a2;
                                                v49 = a1;
                                                v50 = v7;
                                                v51 = (char *)v45;
                                                // branch -> 0x8f65e808
                                            }
                                            // 0x8f65e808
                                            v40 = v48;
                                            v41 = v49;
                                            v42 = v50 + v45 % 0x8000000;
                                            v43 = v51;
                                            // branch -> 0x8f65e7c4
                                            continue;
                                        }
                                    }
                                } else {
                                    // 0x8f65e63c
                                    if (v6 != -0x78000000) {
                                        goto lab_0x8f65e8b4_4;
                                    }
                                    int32_t v52 = result + a2; // 0x8f65e82c
                                    v7 = v5 % 0x8000000;
                                    v24 = v52;
                                    char * v53 = (char *)(result + a2 + 1); // 0x8f65e838_0
                                    *v53 = *v53 | *(char *)v52;
                                    int32_t v54 = *(int32_t *)(a1 + 4); // 0x8f65e844
                                    int32_t v55 = *(int32_t *)(4 * (v7 + a2) + v54) & -0x8000000; // 0x8f65e850
                                    if (v55 == -0x70000000) {
                                        goto lab_0x8f65e8b4_4;
                                    }
                                    // 0x8f65e85c
                                    if (v55 == -0x78000000) {
                                        v26 = v4;
                                        goto lab_0x8f65e888;
                                    }
                                    // 0x8f65e864
                                    v25 = v55 | 1051;
                                    // branch -> 0x8f65e87c
                                    goto lab_0x8f65e87c;
                                }
                            }
                        }
                      lab_0x8f65e8b4_6:
                        // 0x8f65e8b4
                        v8 = a2 + 1;
                        v3++;
                        if (v8 == a3) {
                            // break -> 0x8f65e8c0
                            break;
                        }
                        a2 = v8;
                        // continue -> 0x8f65e550
                        continue;
                    } else {
                        int32_t v56 = a2 + 1; // 0x8f65e5dc
                        if (v6 == 0x60000000) {
                            v21 = v56;
                            goto lab_0x8f65e8a4_3;
                        }
                        // 0x8f65e5e4
                        if (v6 > 0x60000000) {
                            // 0x8f65e614
                            if (v6 == 0x68000000) {
                                v21 = v56;
                                goto lab_0x8f65e8a4_3;
                            }
                            // 0x8f65e620
                            if (v6 == 0x70000000) {
                                v21 = v56;
                                goto lab_0x8f65e8a4_3;
                            }
                            goto lab_0x8f65e8b4_6;
                        } else {
                            // 0x8f65e5e8
                            if (v6 != 0x58000000) {
                                goto lab_0x8f65e8b4_6;
                            }
                            char * v57 = (char *)(result + v56); // 0x8f65e5f4_0
                            *v57 = *(char *)(result + a2) | *v57;
                            int32_t v58 = v5 % 0x8000000 + a2; // 0x8f65e608
                            v29 = v58;
                            v30 = (int32_t)*(char *)(v58 + result);
                            v28 = (int32_t)*(char *)(v3 + result);
                            v27 = v4;
                            // branch -> 0x8f65e894
                            goto lab_0x8f65e894_2;
                        }
                    }
                  lab_0x8f65e8a4_6:
                    // 0x8f65e8a4
                    v37 = result;
                    v22 = v21;
                    v20 = v37;
                    v19 = v37;
                    v23 = (int32_t)*(char *)(v37 + v21);
                    // branch -> 0x8f65e8ac
                    goto lab_0x8f65e8ac_2;
                }
              lab_0x8f65e8b4_11:
                // 0x8f65e8b4
                v8 = a2 + 1;
                v3++;
                if (v8 == a3) {
                    // break -> 0x8f65e8c0
                    break;
                }
                a2 = v8;
                v4 = v17;
                // continue -> 0x8f65e550
                continue;
            } else {
                int32_t v59 = a2 + 1; // 0x8f65e56c
                if (v6 == 0x28000000) {
                    // 0x8f65e6d0
                    if (a5 > 255) {
                        v17 = v4;
                        goto lab_0x8f65e8b4_11;
                    }
                    v18 = v59;
                    goto lab_0x8f65e708_5;
                } else {
                    // 0x8f65e574
                    if (v6 > 0x28000000) {
                        // 0x8f65e5a4
                        if (v6 == 0x38000000) {
                            v21 = v59;
                            goto lab_0x8f65e8a4_6;
                        }
                        // 0x8f65e5ac
                        if (v6 > 0x38000000) {
                            // 0x8f65e5bc
                            if (v6 == 0x40000000) {
                                v21 = v59;
                                goto lab_0x8f65e8a4_6;
                            }
                            // 0x8f65e5c4
                            if (v6 == 0x48000000) {
                                v21 = v59;
                                goto lab_0x8f65e8a4_6;
                            }
                            v17 = v4;
                            goto lab_0x8f65e8b4_11;
                        } else {
                            // 0x8f65e5b0
                            if (v6 != 0x30000000) {
                                v17 = v4;
                                goto lab_0x8f65e8b4_11;
                            }
                            // 0x8f65e6dc
                            if (a5 > 255) {
                                v17 = v4;
                                goto lab_0x8f65e8b4_11;
                            }
                            int32_t v60 = *(int32_t *)(a1 + 16) + 16 * (v5 % 0x8000000); // 0x8f65e6f0
                            char v61 = *(char *)(*(int32_t *)v60 + a5 % 256); // 0x8f65e6f8
                            if (v61 == *(char *)(v60 + 4)) {
                                v17 = v4;
                                goto lab_0x8f65e8b4_11;
                            }
                            v18 = v59;
                            goto lab_0x8f65e708_5;
                        }
                      lab_0x8f65e8b4_15:
                        // 0x8f65e8b4
                        v8 = a2 + 1;
                        v3++;
                        if (v8 == a3) {
                            // break -> 0x8f65e8c0
                            break;
                        }
                        a2 = v8;
                        // continue -> 0x8f65e550
                        continue;
                    } else {
                        // 0x8f65e578
                        if (v6 == 0x10000000) {
                            // 0x8f65e6c8
                            if (a5 == v5 % 256) {
                                v18 = v59;
                                goto lab_0x8f65e708_5;
                            }
                            goto lab_0x8f65e8b4_15;
                        } else {
                            // 0x8f65e580
                            if (v6 > 0x10000000) {
                                // 0x8f65e590
                                if (v6 == 0x18000000) {
                                    // 0x8f65e6a0
                                    if ((a5 & -3) == 0x18000101) {
                                        v18 = v59;
                                        goto lab_0x8f65e708_5;
                                    }
                                    goto lab_0x8f65e8b4_15;
                                } else {
                                    // 0x8f65e598
                                    if (v6 != 0x20000000) {
                                        goto lab_0x8f65e8b4_15;
                                    }
                                    // 0x8f65e6b0
                                    if (a5 > 259) {
                                        goto lab_0x8f65e8b4_15;
                                    }
                                    v18 = v59;
                                    goto lab_0x8f65e708_5;
                                }
                              lab_0x8f65e8b4_18:
                                // 0x8f65e8b4
                                v8 = a2 + 1;
                                v3++;
                                if (v8 == a3) {
                                    // break -> 0x8f65e8c0
                                    break;
                                }
                                a2 = v8;
                                // continue -> 0x8f65e550
                                continue;
                            } else {
                                // 0x8f65e584
                                if (v6 != 0x8000000) {
                                    goto lab_0x8f65e8b4_18;
                                }
                                // 0x8f65e664
                                if (a2 == a3 - 1) {
                                    goto lab_0x8f65e8b4_18;
                                }
                                // 0x8f65e674
                                _panic(g7, (int32_t)"ASSERT FAILED at (%s:%d): %s\n", (int32_t)"lib/regex/engine.c", (int32_t)"pc == stop-1" & -0x10000 | 973, (int32_t)"pc == stop-1", 0, (int32_t)v4);
                                // branch -> 0x8f65e8b4
                                goto lab_0x8f65e8b4_18;
                            }
                        }
                    }
                  lab_0x8f65e8b4_19:;
                    int32_t v62 = a2; // 0x8f65e8b4
                    v8 = v62 + 1;
                    a2 = v8;
                    int32_t v63 = v3; // 0x8f65e8b8
                    int32_t v64 = v63 + 1; // 0x8f65e8b8
                    v3 = v64;
                    if (v8 == a3) {
                        // break -> 0x8f65e8c0
                        break;
                    }
                    a2 = v64;
                    a2 = v8;
                    v4 = v17;
                    // continue -> 0x8f65e550
                    continue;
                }
              lab_0x8f65e8ac_3:
                // 0x8f65e8ac
                v16 = *(char *)(v19 + a2);
                *(char *)(v20 + v22) = (char)((int32_t)v16 | v23);
                v17 = v4;
                // branch -> 0x8f65e8b4
                goto lab_0x8f65e8b4_19;
            }
        }
        // 0x8f65e8b4
        v8 = a2 + 1;
        v3++;
        if (v8 == a3) {
            // break -> 0x8f65e8c0
            break;
        }
        a2 = v8;
        // continue -> 0x8f65e550
    }
    // 0x8f65e8c0
    if (v1 != g6) {
        // 0x8f65e8d8
        __stack_chk_fail();
        // branch -> 0x8f65e8dc
    }
    // 0x8f65e8dc
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// int isalnum(int c);
// int isalpha(int c);
// int isdigit(int c);
// int islower(int c);
// int isupper(int c);
// void * malloc(size_t size);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// void * realloc(void * ptr, size_t size);
// void regfree(regex_t * preg);
// char * strcpy(char * restrict dest, const char * restrict src);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// int tolower(int c);
// int toupper(int c);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 17
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 18:51:08
