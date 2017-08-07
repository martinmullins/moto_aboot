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

int32_t __utag_describe(int32_t a1, int32_t a2, int32_t a3);
int32_t __utag_format(char * a1, int32_t a2, char * a3, int32_t a4, int32_t a5);
int32_t cmd_multiflash_mmc_img(char * str, char * a2, int32_t a3, int32_t a4);
int32_t cmd_multiflash_mmc_sparse_img(int32_t a1, char * a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12);
int32_t dbval_provision_store(char * a1, int32_t * a2, char * a3);
int32_t dbval_validate_datablock(int32_t a1, int32_t a2, int32_t a3, char * a4);
int32_t disable_charger_mode(int32_t a1, int32_t a2);
int32_t fastboot_init_validators(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t fboot_cmd_multiflash_validate(int32_t a1, int32_t a2);
int32_t get_delay_abs_time(int32_t a1, int32_t a2, int32_t a3);
int32_t get_offset_ui_setting(int32_t a1, int32_t a2);
int32_t get_schedule_abs_time(int32_t a1);
int32_t is_recovery_mode(char * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mcs_clear_rsa_ctx(char * a1, int32_t a2, int32_t a3);
int32_t mcs_hashSHA(int32_t a1, int32_t * a2, int32_t * a3);
int32_t mcs_mp_mont_prod(int32_t * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t mcs_mp_mont_reduce(int32_t * a1, int32_t a2, int32_t a3);
int32_t mutex_acquire(int32_t a1, int32_t a2);
int32_t mutex_release(int32_t a1);
int32_t recovery_mode(int32_t a1, int32_t a2, int32_t a3);
int32_t start_usb_detection(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6);
int32_t stop_charging(int32_t a1, int32_t a2);
int32_t stop_usb_detection(int32_t a1, int32_t a2);
int32_t target_display_pre_on(int32_t a1, int32_t a2, int32_t a3);
int32_t target_reboot_device(int32_t a1);
int32_t thread_preempt(void);
int32_t thread_resume(int32_t a1, int32_t a2);
int32_t wififlash_mode(int32_t a1, int32_t a2, int32_t a3);
int32_t XXH32_intermediateDigest(void);
int32_t XXH32_update(char * a1, char * a2, int32_t a3);

// --------------------- Global Variables ---------------------

int32_t g43 = 0; // LR
int32_t g44 = 0; // R0
int32_t g45 = 0; // R1
int32_t g46 = 0; // R10
int32_t g47 = 0; // R11
int32_t g48 = 0; // R2
int32_t g49 = 0; // R4
int32_t g50 = 0; // R5
int32_t g51 = 0; // R6
int32_t g52 = 0; // R7
int32_t g53 = 0; // R8
int32_t g54 = 0; // R9
int32_t g1 = -0x1a60cfd8; // 0x8f62dd14
int32_t g2 = -0x1a60cfd8; // 0x8f62dd48
int32_t g3 = -0x16d2bfed; // 0x8f62dd7c
int32_t g4 = -0x16d2bf09; // 0x8f62dee0
int32_t g5 = -0x16d2bf8d; // 0x8f62e0bc
int32_t g6 = -0x16d2bfc9; // 0x8f62e21c
int32_t g7 = -0x16d2bf8d; // 0x8f62e284
int32_t g8 = -0x16d2bfc9; // 0x8f62e74c
int32_t g9 = -0x16d2b010; // 0x8f62e900
int32_t g10 = -0x16d2bc10; // 0x8f62eb6c
int32_t g11 = -0x1a60c1d8; // 0x8f62f18c
int32_t g12 = -0x16d2bf8d; // 0x8f630638
int32_t g13 = -0x16d2bf09; // 0x8f634ac0
char * g14 = "\x01"; // 0x8f6a3f48
int32_t g15 = 1; // 0x8f6ac0f0
char * g16 = "\n"; // 0x8f6ac1b0
int32_t g17 = -1; // 0x8f6ac1c4
char * g18 = "\xf1"; // 0x8f6affa8
int32_t g19 = 0; // 0x8f6c0378
int32_t g20 = 0; // 0x8f6c037c
int64_t g21 = 0; // 0x8f6c0380
int32_t g22 = 0; // 0x8f6c0384
int32_t g23 = 0; // 0x8f6c0388
int32_t g24 = 0; // 0x8f6c038c
char * g25; // 0x8f6c0394
char * g26; // 0x8f6c03b8
int32_t g27 = 0; // 0x8f6c03c8
int32_t g28 = 0; // 0x8f6c03cc
char * g29; // 0x8f6c03d4
int32_t g30 = 0; // 0x8f6c03dc
char * g31; // 0x8f6c03e0
int32_t g32 = 0; // 0x8f6e07ec
int32_t g33 = 0; // 0x8f6e07f4
int32_t g34 = 0; // 0x8f6e0828
int16_t * g35 = NULL; // 0x8f70da9c
int32_t g36 = 0; // 0x8f70da9e
int32_t g37 = 0; // 0x8f7112f4
int32_t g38 = 0; // 0x8f7114ac
int32_t g39 = 0; // 0x8f7114f4
int32_t g40 = 0; // 0x8f7114f8
int32_t g41 = 0; // 0x8f71150c
int32_t g42 = 0; // 0x8f711510

// ------------------------ Functions -------------------------

// Address range: 0x8f669324 - 0x8f66a82b
int32_t mcs_hashSHA(int32_t a1, int32_t * a2, int32_t * a3) {
    int32_t v1 = (int32_t)a2;
    int32_t v2 = 0; // R3
    int32_t v3;
    int32_t v4 = &v3; // 0x8f669368_0
    int32_t v5 = a1; // 0x8f66934c
    int32_t v6 = 0; // 0x8f66936c
    // branch -> 0x8f669348
    while (true) {
        char v7 = *(char *)(v6 + a1); // 0x8f669348
        char v8 = *(char *)(v5 + 3); // 0x8f669350
        char v9 = *(char *)(v5 + 1); // 0x8f669358
        char v10 = *(char *)(v5 + 2); // 0x8f669360
        *(int32_t *)(v6 + v4) = 256 * (int32_t)v10 | 0x10000 * (int32_t)v9 | (int32_t)v8 | 0x1000000 * (int32_t)v7;
        int32_t v11 = v2 + 4; // 0x8f669370
        v2 = v11;
        if (v11 == 64) {
            int32_t v12 = v3; // 0x8f669384
            uint32_t v13 = *a2; // 0x8f669388
            uint32_t v14 = *(int32_t *)(v1 + 4); // 0x8f669390
            int32_t v15 = *(int32_t *)(v1 + 8); // 0x8f669390
            int32_t v16 = *(int32_t *)(v1 + 12); // 0x8f6693a0
            int32_t v17 = *(int32_t *)(v1 + 16); // 0x8f6693a4
            uint32_t v18 = (32 * v13 | v13 / 0x8000000) + v12 + 0x5a827999 + v17 + (v16 & -1 - v14 | v15 & v14); // 0x8f6693c0
            int32_t v19 = 0x40000000 * v14 | v14 / 4; // 0x8f6693c8
            int32_t v20 = 0x40000000 * v13 | v13 / 4; // 0x8f6693e4
            int32_t v21;
            uint32_t v22 = v21 + 0x5a827999 + v16 + (v19 & v13 | v15 & -1 - v13) + (32 * v18 | v18 / 0x8000000); // 0x8f6693f4
            int32_t v23 = 0x40000000 * v18 | v18 / 4; // 0x8f669410
            int32_t v24;
            uint32_t v25 = v24 + 0x5a827999 + v15 + (v18 & v20 | v19 & -1 - v18) + (32 * v22 | v22 / 0x8000000); // 0x8f66941c
            int32_t v26 = 0x40000000 * v22 | v22 / 4; // 0x8f66943c
            int32_t v27;
            uint32_t v28 = v27 + 0x5a827999 + v19 + (v22 & v23 | v20 & -1 - v22) + (32 * v25 | v25 / 0x8000000); // 0x8f669440
            int32_t v29;
            uint32_t v30 = v29 + 0x5a827999 + v20 + (v25 & v26 | v23 & -1 - v25) + (32 * v28 | v28 / 0x8000000); // 0x8f669460
            int32_t v31 = 0x40000000 * v25 | v25 / 4; // 0x8f669468
            int32_t v32 = 0x40000000 * v28 | v28 / 4; // 0x8f669484
            int32_t v33;
            uint32_t v34 = v33 + 0x5a827999 + v23 + (v28 & v31 | v26 & -1 - v28) + (32 * v30 | v30 / 0x8000000); // 0x8f669490
            int32_t v35;
            uint32_t v36 = v35 + 0x5a827999 + v26 + (v30 & v32 | v31 & -1 - v30) + (32 * v34 | v34 / 0x8000000); // 0x8f6694b0
            int32_t v37 = 0x40000000 * v30 | v30 / 4; // 0x8f6694b8
            int32_t v38 = 0x40000000 * v34 | v34 / 4; // 0x8f6694d4
            int32_t v39;
            uint32_t v40 = v39 + 0x5a827999 + v31 + (v34 & v37 | v32 & -1 - v34) + (32 * v36 | v36 / 0x8000000); // 0x8f6694e0
            int32_t v41;
            uint32_t v42 = v41 + 0x5a827999 + v32 + (v36 & v38 | v37 & -1 - v36) + (32 * v40 | v40 / 0x8000000); // 0x8f6694fc
            int32_t v43 = 0x40000000 * v36 | v36 / 4; // 0x8f669508
            int32_t v44;
            uint32_t v45 = v44 + 0x5a827999 + v37 + (v40 & v43 | v38 & -1 - v40) + (32 * v42 | v42 / 0x8000000); // 0x8f66952c
            int32_t v46 = 0x40000000 * v40 | v40 / 4; // 0x8f669530
            int32_t v47;
            uint32_t v48 = v47 + 0x5a827999 + v38 + (v42 & v46 | v43 & -1 - v42) + (32 * v45 | v45 / 0x8000000); // 0x8f66954c
            int32_t v49 = 0x40000000 * v42 | v42 / 4; // 0x8f669558
            int32_t v50;
            uint32_t v51 = v50 + 0x5a827999 + v43 + (v45 & v49 | v46 & -1 - v45) + (32 * v48 | v48 / 0x8000000); // 0x8f66957c
            int32_t v52 = 0x40000000 * v45 | v45 / 4; // 0x8f669580
            int32_t v53;
            uint32_t v54 = v53 + 0x5a827999 + v46 + (v48 & v52 | v49 & -1 - v48) + (32 * v51 | v51 / 0x8000000); // 0x8f66959c
            int32_t v55 = 0x40000000 * v48 | v48 / 4; // 0x8f6695a8
            int32_t v56;
            uint32_t v57 = v56 + 0x5a827999 + v49 + (v51 & v55 | v52 & -1 - v51) + (32 * v54 | v54 / 0x8000000); // 0x8f6695cc
            int32_t v58 = 0x40000000 * v51 | v51 / 4; // 0x8f6695d0
            int32_t v59;
            uint32_t v60 = v59 + 0x5a827999 + v52 + (v54 & v58 | v55 & -1 - v54) + (32 * v57 | v57 / 0x8000000); // 0x8f6695ec
            int32_t v61 = 0x40000000 * v54 | v54 / 4; // 0x8f6695f8
            int32_t v62 = 0x40000000 * v57 | v57 / 4; // 0x8f669620
            int32_t v63 = v56 ^ v41 ^ v12 ^ v24; // 0x8f669624
            int32_t v64;
            uint32_t v65 = v64 + 0x5a827999 + v55 + (v57 & v61 | v58 & -1 - v57) + (32 * v60 | v60 / 0x8000000); // 0x8f669628
            int32_t v66 = 2 * v63 | (int32_t)(v63 < 0); // 0x8f669634
            int32_t v67 = 0x40000000 * v60 | v60 / 4; // 0x8f669664
            uint32_t v68 = v66 + 0x5a827999 + v58 + (v60 & v62 | v61 & -1 - v60) + (32 * v65 | v65 / 0x8000000); // 0x8f669668
            int32_t v69 = v44 ^ v21 ^ v59 ^ v27; // 0x8f66967c
            int32_t v70 = 2 * v69 | (int32_t)(v69 < 0); // 0x8f669680
            uint32_t v71 = v70 + 0x5a827999 + v61 + (v65 & v67 | v62 & -1 - v65) + (32 * v68 | v68 / 0x8000000); // 0x8f6696b4
            int32_t v72 = 0x40000000 * v65 | v65 / 4; // 0x8f6696b8
            int32_t v73 = v64 ^ v47 ^ v24 ^ v29; // 0x8f6696c4
            int32_t v74 = 2 * v73 | (int32_t)(v73 < 0); // 0x8f6696cc
            uint32_t v75 = v74 + 0x5a827999 + v62 + (v68 & v72 | v67 & -1 - v68) + (32 * v71 | v71 / 0x8000000); // 0x8f6696f0
            int32_t v76 = 0x40000000 * v68 | v68 / 4; // 0x8f6696fc
            int32_t v77 = v27 ^ v50 ^ v33 ^ v66; // 0x8f669700
            int32_t v78 = 2 * v77 | (int32_t)(v77 < 0); // 0x8f66970c
            int32_t v79 = v78; // R4
            int32_t v80 = 0x40000000 * v71 | v71 / 4; // 0x8f669738
            uint32_t v81 = v78 + 0x5a827999 + v67 + (v71 & v76 | v72 & -1 - v71) + (32 * v75 | v75 / 0x8000000); // 0x8f66973c
            int32_t v82 = v29 ^ v53 ^ v35 ^ v70; // 0x8f669740
            int32_t v83 = 2 * v82 | (int32_t)(v82 < 0); // 0x8f66974c
            int32_t v84 = 0x40000000 * v75 | v75 / 4; // 0x8f669758
            uint32_t v85 = v83 + 0x6ed9eba1 + v72 + (v80 ^ v76 ^ v75) + (32 * v81 | v81 / 0x8000000); // 0x8f66976c
            int32_t v86 = v56 ^ v39 ^ v33 ^ v74; // 0x8f669784
            int32_t v87 = 0x40000000 * v81 | v81 / 4; // 0x8f66978c
            int32_t v88 = 2 * v86 | (int32_t)(v86 < 0); // 0x8f669790
            uint32_t v89 = v88 + 0x6ed9eba1 + v76 + (v84 ^ v80 ^ v81) + (32 * v85 | v85 / 0x8000000); // 0x8f6697b0
            int32_t v90 = v35 ^ v59 ^ v41 ^ v78; // 0x8f6697bc
            int32_t v91 = 0x40000000 * v85 | v85 / 4; // 0x8f6697c4
            int32_t v92 = 2 * v90 | (int32_t)(v90 < 0); // 0x8f6697c8
            uint32_t v93 = v92 + 0x6ed9eba1 + v80 + (v87 ^ v84 ^ v85) + (32 * v89 | v89 / 0x8000000); // 0x8f6697e0
            int32_t v94 = v44 ^ v39 ^ v64 ^ v83; // 0x8f6697f8
            int32_t v95 = 0x40000000 * v89 | v89 / 4; // 0x8f669800
            int32_t v96 = 2 * v94 | (int32_t)(v94 < 0); // 0x8f669804
            uint32_t v97 = v96 + 0x6ed9eba1 + v84 + (v91 ^ v87 ^ v89) + (32 * v93 | v93 / 0x8000000); // 0x8f66981c
            int32_t v98 = v66 ^ v47 ^ v41 ^ v88; // 0x8f669834
            int32_t v99 = 0x40000000 * v93 | v93 / 4; // 0x8f66983c
            int32_t v100 = 2 * v98 | (int32_t)(v98 < 0); // 0x8f669840
            int32_t v101 = v100; // R2
            uint32_t v102 = v87 + 0x6ed9eba1 + v100 + (v95 ^ v91 ^ v93) + (32 * v97 | v97 / 0x8000000); // 0x8f66985c
            int32_t v103 = v50 ^ v44 ^ v70 ^ v92; // 0x8f669870
            int32_t v104 = 2 * v103 | (int32_t)(v103 < 0); // 0x8f669874
            v2 = v104;
            int32_t v105 = 0x40000000 * v97 | v97 / 4; // 0x8f66988c
            uint32_t v106 = v104 + 0x6ed9eba1 + v91 + (v99 ^ v95 ^ v97) + (32 * v102 | v102 / 0x8000000); // 0x8f66989c
            int32_t v107 = v53 ^ v47 ^ v74 ^ v96; // 0x8f6698ac
            int32_t v108 = 2 * v107 | (int32_t)(v107 < 0); // 0x8f6698b0
            int32_t v109 = 0x40000000 * v102 | v102 / 4; // 0x8f6698dc
            uint32_t v110 = v108 + 0x6ed9eba1 + v95 + (v105 ^ v99 ^ v102) + (32 * v106 | v106 / 0x8000000); // 0x8f6698e8
            int32_t v111 = v56 ^ v50 ^ v79 ^ v100; // 0x8f6698f4
            int32_t v112 = 2 * v111 | (int32_t)(v111 < 0); // 0x8f6698f8
            int32_t v113 = 0x40000000 * v106 | v106 / 4; // 0x8f669924
            uint32_t v114 = v112 + 0x6ed9eba1 + v99 + (v109 ^ v105 ^ v106) + (32 * v110 | v110 / 0x8000000); // 0x8f669934
            int32_t v115 = v59 ^ v53 ^ v83 ^ v104; // 0x8f669940
            int32_t v116 = 2 * v115 | (int32_t)(v115 < 0); // 0x8f669944
            int32_t v117 = 0x40000000 * v110 | v110 / 4; // 0x8f669974
            uint32_t v118 = v116 + 0x6ed9eba1 + v105 + (v113 ^ v109 ^ v110) + (32 * v114 | v114 / 0x8000000); // 0x8f669980
            int32_t v119 = v64 ^ v56 ^ v88 ^ v108; // 0x8f669990
            int32_t v120 = 2 * v119 | (int32_t)(v119 < 0); // 0x8f669994
            int32_t v121 = 0x40000000 * v114 | v114 / 4; // 0x8f6699c0
            uint32_t v122 = v120 + 0x6ed9eba1 + v109 + (v117 ^ v113 ^ v114) + (32 * v118 | v118 / 0x8000000); // 0x8f6699cc
            int32_t v123 = v66 ^ v59 ^ v92 ^ v112; // 0x8f6699dc
            int32_t v124 = 2 * v123 | (int32_t)(v123 < 0); // 0x8f6699e0
            int32_t v125 = 0x40000000 * v118 | v118 / 4; // 0x8f669a10
            uint32_t v126 = v124 + 0x6ed9eba1 + v113 + (v121 ^ v117 ^ v118) + (32 * v122 | v122 / 0x8000000); // 0x8f669a1c
            int32_t v127 = v70 ^ v64 ^ v96 ^ v116; // 0x8f669a34
            int32_t v128 = 2 * v127 | (int32_t)(v127 < 0); // 0x8f669a38
            int32_t v129 = 0x40000000 * v122 | v122 / 4; // 0x8f669a64
            uint32_t v130 = v128 + 0x6ed9eba1 + v117 + (v125 ^ v121 ^ v122) + (32 * v126 | v126 / 0x8000000); // 0x8f669a78
            int32_t v131 = v74 ^ v66 ^ v101 ^ v120; // 0x8f669a80
            int32_t v132 = 2 * v131 | (int32_t)(v131 < 0); // 0x8f669a8c
            int32_t v133 = 0x40000000 * v126 | v126 / 4; // 0x8f669ab8
            int32_t v134 = v79; // 0x8f669ac0
            uint32_t v135 = v132 + 0x6ed9eba1 + v121 + (v129 ^ v125 ^ v126) + (32 * v130 | v130 / 0x8000000); // 0x8f669acc
            int32_t v136 = v134 ^ v70 ^ v2 ^ v124; // 0x8f669ad4
            int32_t v137 = 2 * v136 | (int32_t)(v136 < 0); // 0x8f669ae0
            int32_t v138 = 0x40000000 * v130 | v130 / 4; // 0x8f669b10
            uint32_t v139 = v137 + 0x6ed9eba1 + v125 + (v133 ^ v129 ^ v130) + (32 * v135 | v135 / 0x8000000); // 0x8f669b18
            int32_t v140 = v83 ^ v74 ^ v108 ^ v128; // 0x8f669b28
            int32_t v141 = 2 * v140 | (int32_t)(v140 < 0); // 0x8f669b2c
            int32_t v142 = 0x40000000 * v135 | v135 / 4; // 0x8f669b5c
            uint32_t v143 = v129 + 0x6ed9eba1 + v141 + (v138 ^ v133 ^ v135) + (32 * v139 | v139 / 0x8000000); // 0x8f669b64
            int32_t v144 = v134 ^ v112 ^ v88 ^ v132; // 0x8f669b68
            int32_t v145 = 2 * v144 | (int32_t)(v144 < 0); // 0x8f669b70
            int32_t v146 = v83 ^ v92 ^ v116 ^ v137; // 0x8f669ba4
            int32_t v147 = 0x40000000 * v139 | v139 / 4; // 0x8f669bac
            int32_t v148 = 2 * v146 | (int32_t)(v146 < 0); // 0x8f669bb4
            uint32_t v149 = v133 + 0x6ed9eba1 + v145 + (v142 ^ v138 ^ v139) + (32 * v143 | v143 / 0x8000000); // 0x8f669bd0
            int32_t v150 = 0x40000000 * v143 | v143 / 4; // 0x8f669bd4
            int32_t v151 = v88 ^ v96 ^ v120 ^ v141; // 0x8f669bf0
            int32_t v152 = v124 ^ v101 ^ v92 ^ v145; // 0x8f669bf4
            uint32_t v153 = v148 + 0x6ed9eba1 + v138 + (v147 ^ v142 ^ v143) + (32 * v149 | v149 / 0x8000000); // 0x8f669bfc
            int32_t v154 = 2 * v151 | (int32_t)(v151 < 0); // 0x8f669c00
            int32_t v155 = 2 * v152 | (int32_t)(v152 < 0); // 0x8f669c0c
            int32_t v156 = 0x40000000 * v149 | v149 / 4; // 0x8f669c1c
            uint32_t v157 = v154 + 0x6ed9eba1 + v142 + (v150 ^ v147 ^ v149) + (32 * v153 | v153 / 0x8000000); // 0x8f669c40
            int32_t v158 = v128 ^ v2 ^ v96 ^ v148; // 0x8f669c70
            int32_t v159 = 0x40000000 * v153 | v153 / 4; // 0x8f669c78
            int32_t v160 = v101 ^ v108 ^ v132 ^ v154; // 0x8f669c7c
            int32_t v161 = 2 * v158 | (int32_t)(v158 < 0); // 0x8f669c80
            int32_t v162 = 2 * v160 | (int32_t)(v160 < 0); // 0x8f669c90
            uint32_t v163 = v155 + 0x6ed9eba1 + v147 + (v156 ^ v150 ^ v153) + (32 * v157 | v157 / 0x8000000); // 0x8f669c98
            int32_t v164 = 0x40000000 * v157 | v157 / 4; // 0x8f669ca8
            int32_t v165 = v137 ^ v112 ^ v2 ^ v155; // 0x8f669cf8
            uint32_t v166 = v150 + 0x6ed9eba1 + v161 + (v159 ^ v156 ^ v157) + (32 * v163 | v163 / 0x8000000); // 0x8f669cfc
            int32_t v167 = 0x40000000 * v163 | v163 / 4; // 0x8f669d04
            int32_t v168 = 2 * v165 | (int32_t)(v165 < 0); // 0x8f669d08
            uint32_t v169 = v162 - 0x70e44324 + v156 + ((v164 | v159) & v163 | v164 & v159) + (32 * v166 | v166 / 0x8000000); // 0x8f669d34
            int32_t v170 = v141 ^ v116 ^ v108 ^ v161; // 0x8f669d44
            int32_t v171 = 0x40000000 * v166 | v166 / 4; // 0x8f669d50
            int32_t v172 = 2 * v170 | (int32_t)(v170 < 0); // 0x8f669d54
            int32_t v173 = v120 ^ v112 ^ v145 ^ v162; // 0x8f669d90
            uint32_t v174 = v168 - 0x70e44324 + v159 + (v166 & (v167 | v164) | v167 & v164) + (32 * v169 | v169 / 0x8000000); // 0x8f669d9c
            int32_t v175 = 2 * v173 | (int32_t)(v173 < 0); // 0x8f669da4
            int32_t v176 = 0x40000000 * v169 | v169 / 4; // 0x8f669dac
            uint32_t v177 = v172 - 0x70e44324 + v164 + ((v171 | v167) & v169 | v171 & v167) + (32 * v174 | v174 / 0x8000000); // 0x8f669dc4
            int32_t v178 = v124 ^ v116 ^ v148 ^ v168; // 0x8f669dd8
            int32_t v179 = 0x40000000 * v174 | v174 / 4; // 0x8f669de4
            int32_t v180 = 2 * v178 | (int32_t)(v178 < 0); // 0x8f669de8
            uint32_t v181 = v175 - 0x70e44324 + v167 + (v174 & (v176 | v171) | v176 & v171) + (32 * v177 | v177 / 0x8000000); // 0x8f669e1c
            int32_t v182 = 0x40000000 * v177 | v177 / 4; // 0x8f669e24
            int32_t v183 = v128 ^ v120 ^ v154 ^ v172; // 0x8f669e38
            int32_t v184 = 2 * v183 | (int32_t)(v183 < 0); // 0x8f669e48
            uint32_t v185 = v180 - 0x70e44324 + v171 + ((v179 | v176) & v177 | v179 & v176) + (32 * v181 | v181 / 0x8000000); // 0x8f669e84
            int32_t v186 = v132 ^ v124 ^ v155 ^ v175; // 0x8f669e88
            int32_t v187 = 0x40000000 * v181 | v181 / 4; // 0x8f669e8c
            int32_t v188 = 2 * v186 | (int32_t)(v186 < 0); // 0x8f669e98
            uint32_t v189 = v184 - 0x70e44324 + v176 + ((v182 | v179) & v181 | v182 & v179) + (32 * v185 | v185 / 0x8000000); // 0x8f669ecc
            int32_t v190 = 0x40000000 * v185 | v185 / 4; // 0x8f669ed4
            int32_t v191 = v137 ^ v128 ^ v161 ^ v180; // 0x8f669ed8
            int32_t v192 = 2 * v191 | (int32_t)(v191 < 0); // 0x8f669ee8
            uint32_t v193 = v188 - 0x70e44324 + v179 + ((v187 | v182) & v185 | v187 & v182) + (32 * v189 | v189 / 0x8000000); // 0x8f669f24
            int32_t v194 = v141 ^ v132 ^ v162 ^ v184; // 0x8f669f28
            int32_t v195 = 0x40000000 * v189 | v189 / 4; // 0x8f669f2c
            int32_t v196 = 2 * v194 | (int32_t)(v194 < 0); // 0x8f669f38
            uint32_t v197 = ((v190 | v187) & v189 | v190 & v187) + v192 - 0x70e44324 + v182 + (32 * v193 | v193 / 0x8000000); // 0x8f669f68
            int32_t v198 = 0x40000000 * v193 | v193 / 4; // 0x8f669f6c
            int32_t v199 = v145 ^ v137 ^ v168 ^ v188; // 0x8f669f80
            uint32_t v200 = v196 - 0x70e44324 + v187 + ((v195 | v190) & v193 | v195 & v190) + (32 * v197 | v197 / 0x8000000); // 0x8f669f8c
            int32_t v201 = 2 * v199 | (int32_t)(v199 < 0); // 0x8f669f90
            int32_t v202 = 0x40000000 * v197 | v197 / 4; // 0x8f669fc0
            uint32_t v203 = v201 - 0x70e44324 + v190 + ((v198 | v195) & v197 | v198 & v195) + (32 * v200 | v200 / 0x8000000); // 0x8f669fc4
            int32_t v204 = v148 ^ v141 ^ v172 ^ v192; // 0x8f669fd4
            int32_t v205 = 2 * v204 | (int32_t)(v204 < 0); // 0x8f669fdc
            int32_t v206 = 0x40000000 * v200 | v200 / 4; // 0x8f66a010
            int32_t v207 = v154 ^ v145 ^ v175 ^ v196; // 0x8f66a024
            uint32_t v208 = v205 - 0x70e44324 + v195 + ((v202 | v198) & v200 | v202 & v198) + (32 * v203 | v203 / 0x8000000); // 0x8f66a02c
            int32_t v209 = 2 * v207 | (int32_t)(v207 < 0); // 0x8f66a034
            int32_t v210 = 0x40000000 * v203 | v203 / 4; // 0x8f66a058
            uint32_t v211 = v209 - 0x70e44324 + v198 + ((v206 | v202) & v203 | v206 & v202) + (32 * v208 | v208 / 0x8000000); // 0x8f66a068
            int32_t v212 = v155 ^ v148 ^ v180 ^ v201; // 0x8f66a080
            int32_t v213 = 2 * v212 | (int32_t)(v212 < 0); // 0x8f66a088
            int32_t v214 = 0x40000000 * v208 | v208 / 4; // 0x8f66a0a0
            uint32_t v215 = v213 - 0x70e44324 + v202 + ((v210 | v206) & v208 | v210 & v206) + (32 * v211 | v211 / 0x8000000); // 0x8f66a0c0
            int32_t v216 = v161 ^ v154 ^ v184 ^ v205; // 0x8f66a0cc
            int32_t v217 = 2 * v216 | (int32_t)(v216 < 0); // 0x8f66a0dc
            int32_t v218 = v217; // R7
            int32_t v219 = 0x40000000 * v211 | v211 / 4; // 0x8f66a0f8
            int32_t v220 = v162 ^ v155 ^ v188 ^ v209; // 0x8f66a10c
            uint32_t v221 = v206 - 0x70e44324 + v217 + ((v214 | v210) & v211 | v214 & v210) + (32 * v215 | v215 / 0x8000000); // 0x8f66a114
            int32_t v222 = 2 * v220 | (int32_t)(v220 < 0); // 0x8f66a11c
            int32_t v223 = 0x40000000 * v215 | v215 / 4; // 0x8f66a134
            int32_t v224 = v168 ^ v161 ^ v192 ^ v213; // 0x8f66a150
            uint32_t v225 = v210 - 0x70e44324 + v222 + ((v219 | v214) & v215 | v219 & v214) + (32 * v221 | v221 / 0x8000000); // 0x8f66a154
            int32_t v226 = 2 * v224 | (int32_t)(v224 < 0); // 0x8f66a158
            int32_t v227 = 0x40000000 * v221 | v221 / 4; // 0x8f66a170
            uint32_t v228 = v214 - 0x70e44324 + v226 + ((v223 | v219) & v221 | v223 & v219) + (32 * v225 | v225 / 0x8000000); // 0x8f66a188
            int32_t v229 = v162 ^ v217 ^ v172 ^ v196; // 0x8f66a19c
            int32_t v230 = 0x40000000 * v225 | v225 / 4; // 0x8f66a1a8
            int32_t v231 = 2 * v229 | (int32_t)(v229 < 0); // 0x8f66a1ac
            int32_t v232 = v231; // R11
            int32_t v233 = v175 ^ v168 ^ v201 ^ v222; // 0x8f66a1dc
            uint32_t v234 = v219 - 0x70e44324 + v231 + (v225 & (v227 | v223) | v227 & v223) + (32 * v228 | v228 / 0x8000000); // 0x8f66a1e0
            int32_t v235 = 2 * v233 | (int32_t)(v233 < 0); // 0x8f66a1e4
            int32_t v236 = 0x40000000 * v228 | v228 / 4; // 0x8f66a20c
            uint32_t v237 = v223 - 0x70e44324 + v235 + (v228 & (v230 | v227) | v230 & v227) + (32 * v234 | v234 / 0x8000000); // 0x8f66a224
            int32_t v238 = v226 ^ v172 ^ v180 ^ v205; // 0x8f66a230
            int32_t v239 = 2 * v238 | (int32_t)(v238 < 0); // 0x8f66a234
            int32_t v240 = 0x40000000 * v234 | v234 / 4; // 0x8f66a264
            uint32_t v241 = v227 - 0x70e44324 + v239 + ((v236 | v230) & v234 | v236 & v230) + (32 * v237 | v237 / 0x8000000); // 0x8f66a268
            int32_t v242 = v184 ^ v175 ^ v231 ^ v209; // 0x8f66a27c
            int32_t v243 = 2 * v242 | (int32_t)(v242 < 0); // 0x8f66a284
            int32_t v244 = 0x40000000 * v237 | v237 / 4; // 0x8f66a2a0
            int32_t v245 = v188 ^ v180 ^ v213 ^ v235; // 0x8f66a2c4
            uint32_t v246 = v230 - 0x70e44324 + v243 + ((v240 | v236) & v237 | v240 & v236) + (32 * v241 | v241 / 0x8000000); // 0x8f66a2d0
            int32_t v247 = 2 * v245 | (int32_t)(v245 < 0); // 0x8f66a2d4
            int32_t v248 = 0x40000000 * v241 | v241 / 4; // 0x8f66a2f4
            uint32_t v249 = v236 - 0x359d3e2a + v247 + (v244 ^ v240 ^ v241) + (32 * v246 | v246 / 0x8000000); // 0x8f66a2f8
            int32_t v250 = v192 ^ v184 ^ v218 ^ v239; // 0x8f66a30c
            int32_t v251 = 0x40000000 * v246 | v246 / 4; // 0x8f66a318
            int32_t v252 = 2 * v250 | (int32_t)(v250 < 0); // 0x8f66a31c
            uint32_t v253 = v240 - 0x359d3e2a + v252 + (v248 ^ v244 ^ v246) + (32 * v249 | v249 / 0x8000000); // 0x8f66a358
            int32_t v254 = v196 ^ v188 ^ v222 ^ v243; // 0x8f66a36c
            int32_t v255 = 2 * v254 | (int32_t)(v254 < 0); // 0x8f66a374
            int32_t v256 = 0x40000000 * v249 | v249 / 4; // 0x8f66a390
            uint32_t v257 = v244 - 0x359d3e2a + v255 + (v251 ^ v248 ^ v249) + (32 * v253 | v253 / 0x8000000); // 0x8f66a39c
            int32_t v258 = v201 ^ v192 ^ v226 ^ v247; // 0x8f66a3ac
            int32_t v259 = 2 * v258 | (int32_t)(v258 < 0); // 0x8f66a3b4
            int32_t v260 = 0x40000000 * v253 | v253 / 4; // 0x8f66a3dc
            uint32_t v261 = v259 - 0x359d3e2a + v248 + (v256 ^ v251 ^ v253) + (32 * v257 | v257 / 0x8000000); // 0x8f66a3e0
            int32_t v262 = v205 ^ v196 ^ v232 ^ v252; // 0x8f66a3f0
            int32_t v263 = 2 * v262 | (int32_t)(v262 < 0); // 0x8f66a3f8
            int32_t v264 = 0x40000000 * v257 | v257 / 4; // 0x8f66a420
            uint32_t v265 = v251 - 0x359d3e2a + v263 + (v260 ^ v256 ^ v257) + (32 * v261 | v261 / 0x8000000); // 0x8f66a434
            int32_t v266 = v209 ^ v201 ^ v235 ^ v255; // 0x8f66a438
            int32_t v267 = 0x40000000 * v261 | v261 / 4; // 0x8f66a444
            int32_t v268 = 2 * v266 | (int32_t)(v266 < 0); // 0x8f66a448
            uint32_t v269 = v256 - 0x359d3e2a + v268 + (v264 ^ v260 ^ v261) + (32 * v265 | v265 / 0x8000000); // 0x8f66a47c
            int32_t v270 = v239 ^ v205 ^ v213 ^ v259; // 0x8f66a488
            int32_t v271 = 0x40000000 * v265 | v265 / 4; // 0x8f66a494
            int32_t v272 = 2 * v270 | (int32_t)(v270 < 0); // 0x8f66a498
            uint32_t v273 = v272 - 0x359d3e2a + v260 + (v267 ^ v264 ^ v265) + (32 * v269 | v269 / 0x8000000); // 0x8f66a4b0
            int32_t v274 = v218; // 0x8f66a4b4
            int32_t v275 = v243 ^ v209 ^ v274 ^ v263; // 0x8f66a4c4
            int32_t v276 = 0x40000000 * v269 | v269 / 4; // 0x8f66a4d0
            int32_t v277 = 2 * v275 | (int32_t)(v275 < 0); // 0x8f66a4d4
            uint32_t v278 = v277 - 0x359d3e2a + v264 + (v271 ^ v267 ^ v269) + (32 * v273 | v273 / 0x8000000); // 0x8f66a4f4
            int32_t v279 = v222 ^ v213 ^ v247 ^ v268; // 0x8f66a500
            int32_t v280 = 0x40000000 * v273 | v273 / 4; // 0x8f66a50c
            int32_t v281 = 2 * v279 | (int32_t)(v279 < 0); // 0x8f66a510
            uint32_t v282 = v267 - 0x359d3e2a + v281 + (v276 ^ v271 ^ v273) + (32 * v278 | v278 / 0x8000000); // 0x8f66a530
            int32_t v283 = v252 ^ v274 ^ v226 ^ v272; // 0x8f66a53c
            int32_t v284 = 0x40000000 * v278 | v278 / 4; // 0x8f66a544
            int32_t v285 = 2 * v283 | (int32_t)(v283 < 0); // 0x8f66a548
            int32_t v286 = v232; // 0x8f66a558
            uint32_t v287 = v271 - 0x359d3e2a + v285 + (v280 ^ v276 ^ v278) + (32 * v282 | v282 / 0x8000000); // 0x8f66a568
            int32_t v288 = v222 ^ v255 ^ v286 ^ v277; // 0x8f66a574
            int32_t v289 = 0x40000000 * v282 | v282 / 4; // 0x8f66a57c
            int32_t v290 = 2 * v288 | (int32_t)(v288 < 0); // 0x8f66a580
            uint32_t v291 = v276 - 0x359d3e2a + v290 + (v284 ^ v280 ^ v282) + (32 * v287 | v287 / 0x8000000); // 0x8f66a598
            int32_t v292 = v226 ^ v235 ^ v259 ^ v281; // 0x8f66a5b0
            int32_t v293 = 0x40000000 * v287 | v287 / 4; // 0x8f66a5b8
            int32_t v294 = 2 * v292 | (int32_t)(v292 < 0); // 0x8f66a5bc
            uint32_t v295 = v280 - 0x359d3e2a + v294 + (v289 ^ v284 ^ v287) + (32 * v291 | v291 / 0x8000000); // 0x8f66a5e0
            int32_t v296 = v286 ^ v239 ^ v263 ^ v285; // 0x8f66a5ec
            int32_t v297 = 0x40000000 * v291 | v291 / 4; // 0x8f66a5f4
            int32_t v298 = 2 * v296 | (int32_t)(v296 < 0); // 0x8f66a5f8
            uint32_t v299 = v284 - 0x359d3e2a + v298 + (v293 ^ v289 ^ v291) + (32 * v295 | v295 / 0x8000000); // 0x8f66a614
            int32_t v300 = v235 ^ v243 ^ v268 ^ v290; // 0x8f66a628
            int32_t v301 = 2 * v300 | (int32_t)(v300 < 0); // 0x8f66a62c
            int32_t v302 = 0x40000000 * v295 | v295 / 4; // 0x8f66a654
            uint32_t v303 = v301 - 0x359d3e2a + v289 + (v297 ^ v293 ^ v295) + (32 * v299 | v299 / 0x8000000); // 0x8f66a658
            int32_t v304 = v247 ^ v239 ^ v272 ^ v294; // 0x8f66a66c
            int32_t v305 = 2 * v304 | (int32_t)(v304 < 0); // 0x8f66a670
            int32_t v306 = 0x40000000 * v299 | v299 / 4; // 0x8f66a688
            uint32_t v307 = v305 - 0x359d3e2a + v293 + (v302 ^ v297 ^ v299) + (32 * v303 | v303 / 0x8000000); // 0x8f66a694
            int32_t v308 = v252 ^ v243 ^ v277 ^ v298; // 0x8f66a6a8
            int32_t v309 = 0x40000000 * v303 | v303 / 4; // 0x8f66a6b0
            int32_t v310 = 2 * v308 | (int32_t)(v308 < 0); // 0x8f66a6b4
            uint32_t v311 = v297 - 0x359d3e2a + v310 + (v306 ^ v302 ^ v303) + (32 * v307 | v307 / 0x8000000); // 0x8f66a6d0
            int32_t v312 = v247 ^ v255 ^ v281 ^ v301; // 0x8f66a6e4
            int32_t v313 = 2 * v312 | (int32_t)(v312 < 0); // 0x8f66a6f0
            int32_t v314 = 0x40000000 * v307 | v307 / 4; // 0x8f66a6fc
            uint32_t v315 = v313 - 0x359d3e2a + v302 + (v309 ^ v306 ^ v307) + (32 * v311 | v311 / 0x8000000); // 0x8f66a710
            int32_t v316 = v259 ^ v252 ^ v285 ^ v305; // 0x8f66a724
            int32_t v317 = 0x40000000 * v311 | v311 / 4; // 0x8f66a730
            int32_t v318 = v263 ^ v255 ^ v290 ^ v310; // 0x8f66a758
            int32_t v319 = v306 + (2 * v316 | (int32_t)(v316 < 0)) - 0x359d3e2a + (v314 ^ v309 ^ v311) + (32 * v315 | v315 / 0x8000000); // 0x8f66a764
            v79 = v319;
            int32_t v320 = 0x40000000 * v315 | v315 / 4; // 0x8f66a774
            int32_t v321 = v259 ^ v268 ^ v294 ^ v313; // 0x8f66a790
            v232 = v1;
            int32_t v322 = v309 - 0x359d3e2a + (2 * v318 | (int32_t)(v318 < 0)) + (v317 ^ v314 ^ v315) + (32 * v319 | v319 / 0x8000000); // 0x8f66a79c
            int32_t v323 = v13 - 0x359d3e2a + (2 * v321 | (int32_t)(v321 < 0)); // 0x8f66a7a8
            v218 = (int32_t)a3;
            *a3 = v314 + v323 + (v320 ^ v317 ^ v319) + (32 * v322 | v322 / 0x8000000);
            int32_t v324 = *(int32_t *)(v232 + 4); // 0x8f66a7d0
            *(int32_t *)(v218 + 4) = v322 + v324;
            int32_t v325 = *(int32_t *)(v232 + 8); // 0x8f66a7dc
            *(int32_t *)(v218 + 8) = (0x40000000 * v79 | v79 / 4) + v325;
            int32_t v326 = *(int32_t *)(v232 + 12); // 0x8f66a7e8
            *(int32_t *)(v218 + 12) = v320 + v326;
            int32_t v327 = *(int32_t *)(v232 + 16); // 0x8f66a7f8
            *(int32_t *)(v218 + 16) = v317 + v327;
            mcs_memclear(v4, 320, v323, v327);
            // 0x8f66a824
            return 0;
        }
        // 0x8f669348
        v5 += 4;
        v6 = v11;
        // branch -> 0x8f669348
    }
}

// --------------- Statically Linked Functions ----------------

// ulldiv_t __aeabi_uldivmod(unsigned long long a, unsigned long long b);
// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// int snprintf(char * restrict s, size_t maxlen, const char * restrict format, ...);
// int strcmp(const char * s1, const char * s2);

// --------------- Instruction-Idiom Functions ----------------

// int32_t llvm_bswap_i32(int32_t a1);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 30
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:49:15
