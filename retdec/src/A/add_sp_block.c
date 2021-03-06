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
int32_t add_sp_block(int32_t a1, int32_t a2, int32_t a3);
int32_t alloc_scm_command(int32_t a1, int32_t a2, int32_t a3);
int32_t check_cid_provisioned(void);
int32_t cmd_overlay_command_tokens(char * str6, int32_t a2);
int32_t confession_redirect_to_logger(char a1, int32_t a2, int32_t a3);
int32_t delay(uint32_t a1, uint32_t a2, int32_t a3, int32_t a4);
void function_8f67b584(void);
int32_t get_canary(int32_t a1);
int32_t get_db_cid_version_byte(int32_t a1, int32_t a2);
int32_t get_imei_buf(int32_t a1, int32_t a2, int32_t a3);
int32_t get_reset_gpt(char * a1, int32_t a2);
int32_t get_sku_buf(int32_t a1, int32_t a2, int32_t a3);
int32_t get_sp_block(int32_t a1, int32_t a2, int32_t a3);
int32_t gic_register_int_handler(uint32_t a1);
int32_t gpio_set_dir(int32_t a1, int32_t a2, int32_t a3);
int32_t gpio_set_value(uint32_t a1, int32_t a2, int32_t a3);
int32_t hlos_iface_init(void);
int32_t is_scm_arm_support(int32_t a1);
int32_t mdss_source_pipe_config(int32_t * a1, int32_t * a2, int32_t * a3);
int32_t mot_sst_pal_debug_print(int32_t a1, int32_t a2, int32_t a3);
int32_t mot_sst_pal_get_cmac_length(int32_t * a1, int32_t a2, int32_t a3);
int32_t oem_smb1359(int32_t a1, int32_t a2, int32_t a3);
int32_t partition_resize(uint32_t a1, int32_t a2, int32_t a3);
int32_t reboot_device(char * a1);
char * scm_random(int32_t a1, int32_t a2);
int32_t sod_dump_to_sd(int32_t a1, int32_t a2);
char * token_present(char * str, char * a2, char * str3);
int32_t unlock_volatile_write_access(int32_t a1, int32_t a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g30 = 0; // LR
int32_t g31 = 0; // R1
int32_t g32 = 0; // R10
int32_t g33 = 0; // R11
int32_t g34 = 0; // R2
int32_t g35 = 0; // R3
int32_t g36 = 0; // R4
int32_t g37 = 0; // R5
int32_t g38 = 0; // R6
int32_t g39 = 0; // R7
int32_t g40 = 0; // R8
int32_t g41 = 0; // R9
int32_t g1 = -0x16d2b010; // 0x8f65597c
int32_t g2 = 1; // 0x8f6ac0f0
int32_t g3 = 0; // 0x8f6b7d48
int32_t g4 = 0; // 0x8f6c02aa
int32_t g5 = 0; // 0x8f6c02ca
char * g6; // 0x8f6e0780
char * g7; // 0x8f6e0788
int32_t g8 = 0; // 0x8f6e0bd4
char * g9; // 0x8f6e12e8
int32_t g10 = 0; // 0x8f6e130c
int32_t g11 = 0; // 0x8f6e1310
int32_t g12 = 0; // 0x8f6e1318
char * g13; // 0x8f6e131c
char * g14; // 0x8f6e1400
int32_t g15 = 0; // 0x8f6e9600
char g16 = 0; // 0x8f70da98
char * g17; // 0x8f70da9b
int32_t g18 = 0; // 0x8f710c38
int32_t g19 = 0; // 0x8f710c3c
int32_t g20 = 0; // 0x8f710c48
int32_t g21 = 0; // 0x8f710c60
char * g22; // 0x8f710c70
int32_t g23 = 0; // 0x8f710e70
char * g24; // 0x8f710e74
int32_t g25 = 0; // 0x8f710e78
int32_t g26 = 0; // 0x8f710e7c
int32_t g27 = 0; // 0x8f7112f4
char * g28; // 0x8f7114b0
int32_t g29 = 0; // 0x8f7125ec

// ------------------------ Functions -------------------------

// Address range: 0x8f6772c0 - 0x8f67759b
int32_t add_sp_block(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = g36; // 0x8f6772c0
    int32_t v2 = g37; // 0x8f6772c0
    int32_t v3 = g40; // 0x8f6772c0
    int32_t v4 = g41; // 0x8f6772c0
    int32_t v5 = g27;
    int32_t v6 = g25; // R6
    int32_t v7 = g26; // R7
    char v8 = *(char *)&g24; // 0x8f6772f0
    int32_t v9 = v8; // 0x8f6772f0
    int32_t v10; // 0x8f6775345
    int32_t v11; // 0x8f67753416
    int32_t v12; // R10
    int32_t v13; // R3
    int32_t v14;
    int32_t v15;
    int32_t v16;
    int32_t v17;
    int32_t v18;
    int32_t v19;
    int32_t v20;
    int32_t result; // 0x8f677484
    int32_t v21; // 0x8f6772d423
    if (v8 == 0) {
        // 0x8f6772fc
        print_log(v9, (int32_t)"SP not initialized\n", (int32_t)&g27, v9, v19, v18, v16, v15, a3, g35, 0, v14, 0);
        // branch -> 0x8f67732c
        // 0x8f67732c
        v12 = -1;
        v21 = v19;
        v11 = v15;
        v17 = v16;
        v10 = v18;
        // branch -> 0x8f677480
        // 0x8f677480
        result = v12;
        v20 = g27;
        v13 = v20;
        if (v5 != v20) {
            goto lab_0x8f677498_6;
        }
        // 0x8f67754c
        return result;
    }
    int32_t v22 = get_entry_index_by_name(a1, v14, (int32_t)&g27, v9, v19, v18, v16, v15, a3); // 0x8f67730c
    v12 = v22;
    if (v22 != -1) {
        // 0x8f67731c
        print_log(0, (int32_t)"block %s has existed\n", a1, v9, v19, v18, v16, v15, a3, g35, 0, v14, 0);
        // branch -> 0x8f67732c
        // 0x8f67732c
        v12 = -1;
        v21 = v19;
        v11 = v15;
        v17 = v16;
        v10 = v18;
        // branch -> 0x8f677480
        // 0x8f677480
        result = v12;
        v20 = g27;
        v13 = v20;
        if (v5 != v20) {
            goto lab_0x8f677498_6;
        }
        // 0x8f67754c
        return result;
    }
    int32_t v23 = g21; // 0x8f677338
    int32_t v24; // 0x8f6775348
    int32_t v25; // 0x8f67753417
    int32_t v26;
    int32_t v27; // 0x8f6772d426
    if (v23 == 16) {
        // if_8f677340_0_true
        v27 = v19;
        v25 = v15;
        v26 = v16;
        v24 = v18;
        // branch -> 0x8f677478
        // 0x8f677478
        print_log(0, (int32_t)"No free slot for new block %s\n", a1, v23, v27, v24, v26, v25, a3, g35, 0, v14, 0);
        v21 = v27;
        v11 = v25;
        v17 = v26;
        v10 = v24;
        // branch -> 0x8f677480
    } else {
        int32_t v28 = g35 | a3; // 0x8f677350
        int32_t v29; // 0x8f67747c
        int32_t v30; // 0x8f67747c
        int32_t v31; // 0x8f6775349
        int32_t v32; // 0x8f6774d0
        int32_t v33; // 0x8f6774e4
        int32_t v34; // 0x8f677464
        int32_t v35; // 0x8f6774dc
        int32_t v36; // 0x8f6774b0
        int32_t v37; // 0x8f6772d427
        char v38; // 0x8f677458
        int32_t v39; // 0x8f6774c0
        int32_t v40; // 0x8f6774c8
        int32_t v41; // 0x8f6774cc
        int32_t v42; // 0x8f6774c8
        if (g35 != a3) {
            // 0x8f677358
            if (v14 == 0) {
                // 0x8f677364
                print_log(0, (int32_t)"block data can't be NULL\n", a3, v28, v19, v18, v16, v15, a3, g35, 0, 0, 0);
                v21 = v19;
                v11 = v15;
                v17 = v16;
                v10 = v18;
                // branch -> 0x8f677480
            } else {
                int32_t v43 = g36 & -0x10000 | 511; // 0x8f677378
                g36 = v43;
                g37 = 0;
                g40 = a3;
                g41 = g35;
                int32_t v44 = 0; // 0x8f67743c60
                int32_t v45 = g35; // 0x8f677414
                int32_t v46 = a3; // 0x8f67740c
                if ((v43 & a3) != 0) {
                    int32_t v47 = v43 + a3; // 0x8f6773a0
                    g36 = v47;
                    int32_t v48 = (int32_t)(v47 < v43) + g35; // 0x8f6773a4
                    g37 = v48;
                    int32_t v49 = v47 & -512; // 0x8f6773a8
                    g40 = v49;
                    g41 = v48;
                    v44 = g35;
                    v45 = v48;
                    v46 = v49;
                    // branch -> 0x8f6773b0
                }
                int32_t v50 = v6; // 0x8f6773b4
                int32_t v51 = v50 + 1; // 0x8f6773b4
                v6 = v51;
                int32_t v52 = (int32_t)(v50 == -1) + v7; // 0x8f6773b8
                v7 = v52;
                int32_t v53; // 0x8f6775346
                int32_t v54; // 0x8f6772d424
                if (g19 == (int32_t)&g18) {
                    // branch -> after_if_8f677400_0
                } else {
                    int32_t v55 = 0; // 0x8f6773f852
                    int32_t v56 = g19; // 0x8f6773f0
                    int32_t v57; // 0x8f6773f851
                    int32_t v58; // 0x8f6773cc
                    while (true) {
                        int32_t v59 = *(int32_t *)(v56 + 8); // 0x8f6773cc
                        v58 = *(int32_t *)(v56 + 12);
                        int32_t v60;
                        int32_t v61; // 0x8f6773dc46
                        int32_t v62; // 0x8f6773e049
                        if (v58 == v45) {
                            // if_8f6773d4_0_true
                            if (v59 >= v46) {
                              lab_0x8f6773dc:
                                // 0x8f6773dc
                                if (v58 == v52) {
                                    // if_8f6773e0_0_true
                                    if (v59 >= v51) {
                                        v57 = v55;
                                        v62 = v51;
                                        v61 = v52;
                                      lab_0x8f6773f0_4:
                                        // 0x8f6773f0
                                        v60 = *(int32_t *)(v56 + 4);
                                        if (v60 == (int32_t)&g18) {
                                            // break -> 0x8f6773f8
                                            break;
                                        }
                                        v55 = v57;
                                        v51 = v62;
                                        v52 = v61;
                                        v56 = v60;
                                        // continue -> 0x8f6773cc
                                        continue;
                                    }
                                } else {
                                    // after_if_8f6773e0_0
                                    if (v58 >= v52) {
                                        v57 = v55;
                                        v62 = v51;
                                        v61 = v52;
                                        goto lab_0x8f6773f0_4;
                                    }
                                    // if_8f6773ec_0_true
                                    v6 = v59;
                                    v7 = v58;
                                    v57 = v56;
                                    v62 = v59;
                                    v61 = v58;
                                    // branch -> 0x8f6773f0
                                    goto lab_0x8f6773f0_4;
                                }
                                // if_8f6773ec_0_true
                                v6 = v59;
                                v7 = v58;
                                v57 = v56;
                                v62 = v59;
                                v61 = v58;
                                // branch -> 0x8f6773f0
                                goto lab_0x8f6773f0_4;
                            } else {
                                v57 = v55;
                            }
                        } else {
                            // after_if_8f6773d4_0
                            if (v58 < v45) {
                                v57 = v55;
                                v62 = v51;
                                v61 = v52;
                                goto lab_0x8f6773f0_4;
                            }
                            goto lab_0x8f6773dc;
                        }
                        // 0x8f6773f0
                        v60 = *(int32_t *)(v56 + 4);
                        if (v60 == (int32_t)&g18) {
                            // break -> 0x8f6773f8
                            break;
                        }
                        v55 = v57;
                        v56 = v60;
                        // continue -> 0x8f6773cc
                    }
                    // 0x8f6773f8
                    if (v57 != 0) {
                        int32_t v63 = *(int32_t *)(v57 + 16); // 0x8f677408
                        v6 = v63;
                        int32_t v64 = *(int32_t *)(v57 + 20); // 0x8f677410
                        g37 = v64;
                        int32_t v65 = allocate_sp_block(v57, (int32_t)&g18, v46, v45, v63, v64, v16, v15, a3, g35, 0, v14, 0, v5, 0, v1, v2, g38, g39, v3, v4, g32, g33, g30, v14); // 0x8f677420
                        if (v65 != 0) {
                            // 0x8f67742c
                            v54 = g40;
                            v53 = g41;
                            // branch -> 0x8f677438
                            // 0x8f677438
                            print_log(0, (int32_t)"Failed to allocate space for %s: 0x%llx\n", a1, v45, v54, v53, v16, v15, a3, g35, 0, v14, 0);
                            v21 = v54;
                            v11 = v15;
                            v17 = v16;
                            v10 = v53;
                            // branch -> 0x8f677480
                            // 0x8f677480
                            result = v12;
                            v20 = g27;
                            v13 = v20;
                            if (v5 != v20) {
                                goto lab_0x8f677498_6;
                            }
                            // 0x8f67754c
                            return result;
                        }
                        v37 = v63;
                        v31 = v64;
                        // 0x8f677450
                        g36 = (int32_t)&g22;
                        v13 = &g23;
                        v34 = (int32_t)&g22;
                        // branch -> 0x8f677458
                        while (true) {
                            // 0x8f677458
                            v38 = *(char *)v34;
                            v7 = v38;
                            if (v38 != 0) {
                                goto lab_0x8f677464;
                            }
                            int32_t v66 = &g23; // 0x8f6774a8
                            // 0x8f67749c
                            strlcat(v34, a1, 16, v66, v37, v31, v16, v15, a3, g35, 0, v14);
                            *(int32_t *)(g36 + 28) = g37;
                            v36 = g36;
                            *(int32_t *)(v36 + 16) = g40;
                            *(int32_t *)(v36 + 20) = g41;
                            *(int32_t *)(g36 + 24) = v6;
                            v39 = g37;
                            v40 = g40;
                            v42 = g41;
                            v41 = v6;
                            v32 = print_log(1, (int32_t)"set new entry for %s: block [0x%llx, 0x%llx]", a1, v13, v40, v42, v41, v39, a3, g35, 0, v14, 0);
                            v13 = &g20;
                            v35 = g21 + 1;
                            g21 = v35;
                            v33 = flush_sp_header(v32, (int32_t)"set new entry for %s: block [0x%llx, 0x%llx]", v35, (int32_t)&g20, v40);
                            g37 = v33;
                            if (v33 == 0) {
                              lab_0x8f6774f8_2:;
                                int32_t v67 = v40; // 0x8f6772d428
                                int32_t v68 = v42; // 0x8f67753410
                                if (g35 != a3) {
                                    int32_t v69 = *(int32_t *)(g36 + 24); // 0x8f67750c
                                    int32_t v70 = *(int32_t *)(g36 + 28); // 0x8f67750c
                                    print_log(2, (int32_t)"save data to block block [0x%llx, 0x%llx]\n", a3, g35, v69, v70, v41, v39, a3, g35, 0, v14, 0);
                                    int32_t v71 = *(int32_t *)(g36 + 24); // 0x8f677528
                                    int32_t v72 = *(int32_t *)(g36 + 28); // 0x8f677528
                                    v13 = g35;
                                    if (generic_mmc_write_logical(v71, v72, a3, g35, v14, v70, v41, v39, a3, g35, 0, v14, 0, v5, 0, v1, v2, g38, g39, v3, v4, g32, g33, g30, v14, 0, 0, 0) != 0) {
                                        // 0x8f677540
                                        v29 = g37;
                                        v27 = v14;
                                        v25 = v39;
                                        v26 = v41;
                                        v24 = v70;
                                        v30 = (int32_t)"Failed to save block data for %s\n";
                                        // branch -> 0x8f677478
                                        goto lab_0x8f677478_2;
                                    } else {
                                        v67 = v14;
                                        v68 = v70;
                                    }
                                }
                                // 0x8f677504
                                v12 = 0;
                                v21 = v67;
                                v11 = v39;
                                v17 = v41;
                                v10 = v68;
                                // branch -> 0x8f677480
                                goto lab_0x8f677480;
                            } else {
                              lab_if_8f6774ec_0_true_2:
                                // if_8f6774ec_0_true
                                v29 = v7;
                                v27 = v40;
                                v25 = v39;
                                v26 = v41;
                                v24 = v42;
                                v30 = (int32_t)"Failed to flush header for new block %s\n";
                                // branch -> 0x8f677478
                                goto lab_0x8f677478_2;
                            }
                        }
                    } else {
                        v44 = v58;
                    }
                }
                // after_if_8f677400_0
                v54 = v46;
                v53 = v45;
                // branch -> 0x8f677438
                // 0x8f677438
                print_log(0, (int32_t)"no enough space for block %s: 0x%llx\n", a1, v44, v54, v53, v16, v15, a3, g35, 0, v14, 0);
                v21 = v54;
                v11 = v15;
                v17 = v16;
                v10 = v53;
                // branch -> 0x8f677480
            }
            // 0x8f677480
            result = v12;
            v20 = g27;
            v13 = v20;
            if (v5 != v20) {
                goto lab_0x8f677498_6;
            }
            // 0x8f67754c
            return result;
        }
        // 0x8f677444
        g40 = a3;
        g41 = a3;
        v6 = a3;
        g37 = a3;
        v37 = v19;
        v31 = v18;
        // branch -> 0x8f677450
        // 0x8f677450
        g36 = (int32_t)&g22;
        v13 = &g23;
        v34 = (int32_t)&g22;
        // branch -> 0x8f677458
        while (true) {
            // 0x8f677458
            v38 = *(char *)v34;
            v7 = v38;
            if (v38 != 0) {
              lab_0x8f677464:;
                int32_t v73 = v34 + 32; // 0x8f677464
                g36 = v73;
                if (v73 == (int32_t)&g23) {
                    // break -> 0x8f677470
                    break;
                }
                v34 = v73;
                // continue -> 0x8f677458
                continue;
            }
        }
        // 0x8f677470
        v29 = 0;
        v27 = v37;
        v25 = v15;
        v26 = v16;
        v24 = v31;
        v30 = (int32_t)"Failed to get the free slot for %s\n";
        // branch -> 0x8f677478
      lab_0x8f677478_2:
        // 0x8f677478
        print_log(v29, v30, a1, v13, v27, v24, v26, v25, a3, g35, 0, v14, 0);
        v21 = v27;
        v11 = v25;
        v17 = v26;
        v10 = v24;
        // branch -> 0x8f677480
      lab_0x8f677480:
        // 0x8f677480
        result = v12;
        v20 = g27;
        v13 = v20;
        if (v5 == v20) {
            // 0x8f67754c
            return result;
        }
      lab_0x8f677498_6:
        // 0x8f677498
        __stack_chk_fail();
        // branch -> 0x8f67749c
        // 0x8f67749c
        strlcat(g36, a1, 16, v13, v21, v10, v17, v11, a3, g35, 0, v14);
        *(int32_t *)(g36 + 28) = g37;
        v36 = g36;
        *(int32_t *)(v36 + 16) = g40;
        *(int32_t *)(v36 + 20) = g41;
        *(int32_t *)(g36 + 24) = v6;
        v39 = g37;
        v40 = g40;
        v42 = g41;
        v41 = v6;
        v32 = print_log(1, (int32_t)"set new entry for %s: block [0x%llx, 0x%llx]", a1, v13, v40, v42, v41, v39, a3, g35, 0, v14, 0);
        v13 = &g20;
        v35 = g21 + 1;
        g21 = v35;
        v33 = flush_sp_header(v32, (int32_t)"set new entry for %s: block [0x%llx, 0x%llx]", v35, (int32_t)&g20, v40);
        g37 = v33;
        if (v33 == 0) {
            goto lab_0x8f6774f8_2;
        }
        goto lab_if_8f6774ec_0_true_2;
    }
    // 0x8f677480
    result = v12;
    v20 = g27;
    v13 = v20;
    if (v5 != v20) {
        goto lab_0x8f677498_6;
    }
    // 0x8f67754c
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// long int atol(const char * nptr);
// uLong crc32(uLong crc, const Bytef * buf, uInt len);
// void free(void * ptr);
// void * malloc(size_t size);
// void * memalign(size_t alignment, size_t size);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// void * memset(void * s, int c, size_t n);
// int rand(void);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// char * strchr(char * s, int c);
// int strcmp(const char * s1, const char * s2);
// char * strdup(const char * s);
// size_t strlen(const char * s);
// char * strncpy(char * restrict dest, const char * restrict src, size_t n);
// size_t strnlen(const char * string, size_t maxlen);
// char * strrchr(char * s, int c);
// char * strstr(char * haystack, const char * needle);
// char * strtok_r(char * restrict s, const char * restrict delim, char ** restrict save_ptr);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 29
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:25:52
