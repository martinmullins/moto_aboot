//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2017 Retargetable Decompiler <info@retdec.com>
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ---------------- Integer Types Definitions -----------------

typedef int8_t int4_t;

// ------------------- Function Prototypes --------------------

int32_t __utag_defined(int32_t a1, int32_t a2);
int32_t __utag_exists(int32_t a1, int32_t a2);
int32_t bootstrap2(int32_t a1, int32_t a2);
int32_t clock_config_cdc(int32_t a1, int32_t a2, int32_t a3);
int32_t dbval_pal_cid_get_secondary_serial_num_type(char * a1, int32_t a2, int32_t a3);
int32_t dbval_pal_cid_get_secondary_serial_number(int32_t a1, int32_t a2);
void event_unsignal(int32_t a1);
int32_t fboot_oem_init(void);
int32_t fboot_usb_write_queue(int32_t a1, uint32_t a2, int32_t a3);
int32_t fboot_usb_write_wait(int32_t a1, int32_t a2, int32_t a3);
int32_t hab_code_hash_verification(int32_t a1, int32_t a2, char * str);
int32_t hab_publickey_verification(int32_t a1, int32_t a2, char * a3);
int32_t handle_fboot_command_oem(int32_t a1, int32_t a2);
int32_t heap_free(void);
int32_t heap_realloc(char * a1);
int32_t is_charging_enabled(int32_t a1, int32_t a2, int32_t a3);
int32_t max17042_get_battery_temperature(void);
int32_t max17050_get_battery_capacity(int32_t a1, int32_t a2);
int32_t platform_boot_dev_isemmc(int32_t a1, int32_t a2, int32_t a3);
int32_t pmic_arb_write_cmd(char * a1);
int32_t pmic_charger_cleanup(int32_t a1, int32_t a2);
int32_t register_spmi_int_handler(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t sod_ramdump_set_test_cookie(int32_t a1, int32_t a2);
int32_t sod_share(char * a1, int32_t a2, int32_t a3);
int32_t spmi_acc_irq(uint32_t a1, int32_t a2, int32_t result2, int32_t a4, int32_t a5, int32_t a6, int32_t a7);
int32_t spmi_init(int32_t a1, int32_t a2, int32_t a3);
int32_t unregister_spmi_int_handler(int32_t a1, int32_t a2);

// --------------------- Global Variables ---------------------

bool g27 = false; // LR
int32_t g28 = 0; // R0
int32_t g29 = 0; // R1
int32_t g30 = 0; // R2
int32_t g31 = 0; // R3
int32_t g32 = 0; // R4
int32_t g33 = 0; // R5
int32_t g34 = 0; // R6
int32_t g35 = 0; // R7
int32_t g36 = 0; // R8
int32_t g37 = 0; // R9
int32_t g1 = -0x16d2bfed; // 0x8f626204
int32_t g2 = -0x16d2be0d; // 0x8f627388
int32_t g3 = -0x1a60cf3c; // 0x8f627420
int32_t g4 = -0x1a60cfc4; // 0x8f62d6e8
int32_t g5 = 0x746e6300; // 0x8f6a4e20
int32_t g6 = 0x10100; // 0x8f6a9f58
int32_t g7 = 0x10100; // 0x8f6a9f64
int32_t g8 = 0x7ffd14f4; // 0x8f6aa114
int32_t g9 = 1; // 0x8f6ac0f0
int32_t g10 = 0; // 0x8f6b8afc
int32_t g11 = 0; // 0x8f6b8b00
int32_t g12 = 0; // 0x8f6b8b04
int32_t g13 = 0; // 0x8f6b8b08
char * g14; // 0x8f6b8b0c
char * g15; // 0x8f6b8b10
int32_t g16 = 0; // 0x8f6c064c
int32_t g17 = 0; // 0x8f6c0650
int32_t g18 = 0; // 0x8f6c0654
int32_t g19 = 0; // 0x8f6c0658
int32_t g20 = 0; // 0x8f6c0660
int32_t g21 = 0; // 0x8f6c066c
int32_t g22 = 0; // 0x8f6e0b48
char * g23; // 0x8f6e0b60
int32_t g24 = 0; // 0x8f7112f4
int32_t g25 = 0; // 0x8f7129dc
int32_t g26 = 0; // 0x8f712a1c

// ------------------------ Functions -------------------------

// Address range: 0x8f62b564 - 0x8f62bc6b
int32_t fboot_oem_init(void) {
    int32_t v1 = g27 ? -0x709d4b24 : 0; // 0x8f62b564
    int32_t v2 = 0; // R4
    int32_t v3 = (int32_t)"^[[:print:]]*$"; // R5
    int32_t v4 = g24;
    int32_t v5;
    __utag_define(0, (int32_t)"barcode", (int32_t)"Device serial number\n(used interchangably with 'serialno')", (int32_t)&g2, 0, (int32_t)"^[[:print:]]*$", 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"bare_board", (int32_t)"To indicate the device is a bare board (true|false) such that unnecessary initializations (like display) are skipped", v2, v2, v2, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"battery", (int32_t)"Battery detection control\n(\"test\" or \"no_eprom\")", (int32_t)&g2, v2, (int32_t)"^test$|^no_eprom$", 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"battid", (int32_t)"Battery Installed in Device\n(To contain the Serial Number of the Battery Cell)", v2, v2, v2, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"bootmode", (int32_t)"To force certain bootmode\n(valid values are \"fastboot\", \"factory\", \"bp-tools\", \"qcom\", and \"on-device-diag\")", (int32_t)&g2, v2, (int32_t)"^fastboot$|^factory$|^bp-tools$|^qcom$|^on-device-diag$", 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"bt_mac", (int32_t)"Bluetooth Mac Address.", (int32_t)&g2, v2, (int32_t)"([[:xdigit:]]{2}:){5}([[:xdigit:]]{2})", 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"build_vars", (int32_t)"To provide userspace application read mechnical\nbuild variations of the product\n<build_var string> string would be any color", (int32_t)&g2, v2, (int32_t)"^[[:alpha:]]*$", 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    int32_t v6 = (int32_t)"^[[:xdigit:]]{32}$"; // R7
    __utag_define(v2, (int32_t)"carrier", (int32_t)"Carrier IDs, see http://goo.gl/lojLh3", (int32_t)&g2, v2, (int32_t)"^[[:print:]]{1,32}$", 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"charger_disable", (int32_t)"Disable charger mode? (true|false)", v2, v2, v2, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"console", (int32_t)"Config kernel console log\n  enable|true     - enable with default settings\n  disable|false   - disable\n  <config string> - enable with customized settings\n  (e.g.: \"ttyHSL0\", \"ttyHSL0,230400,n8\")", v2, v2, v2, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"cust_md5", (int32_t)"MotoMaker customization MD5\n(32 hexadecimal digits)", (int32_t)&g2, v2, v6, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"cmdl", (int32_t)"Kernel command line overlay\n add/modify option: <option>=<value>\n remove option: -<option>", v2, v2, v2, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"date", (int32_t)"Manufactoring date\n(mm-dd-yyyy, e.g.: \"12-31-2013\")", (int32_t)&g2, v2, (int32_t)"^[[:digit:]]{2}-[[:digit:]]{2}-[[:digit:]]{4}$", 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"device", (int32_t)"Product name override\n(treating one product as if it is another)", (int32_t)&g1, v2, v2, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"disable-reset", (int32_t)"To disable power key HW reset (true|false)\nDisabling HW reset allows automated RF testing to hold the power key with a rubber band without causing cycling reboots", v2, v2, v2, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"display_auto_detect", (int32_t)"To disable display auto detection (true|false)", v2, v2, v2, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"esd", (int32_t)"Enable or disable display electrostatic discharge detection and recovery in kernel display driver\n(by default this is enabled as long as a display panel is attached)", v2, v2, v2, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"fastboot_after_ramdump", (int32_t)"Force fastboot after ramdump(true|false)", v2, v2, v2, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"fsg-id", (int32_t)"FSG IDs, see http://goo.gl/gPmhU", (int32_t)&g2, v2, v3, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"fti", (int32_t)"Factory tracking information in binary format\n(not configurable via 'fastboot oem config')", v2, v2, v2, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"hwrev", (int32_t)"Hardware revision override\n(e.g. P1B, p3A, or 0x82B0 for P2B)", (int32_t)&g2, v2, (int32_t)"^0[xX][[:xdigit:]]{4}$|^[pP][[:xdigit:]]+$", 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    int32_t v7 = v3; // 0x8f62b7e8
    v3 = (int32_t)"^[DIECX]$";
    __utag_define(v2, (int32_t)"iccid", (int32_t)"Device ICCID", (int32_t)&g2, v2, v7, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"imei", (int32_t)"Device IMEI\n(15 decimal digits including the correct checksum)", (int32_t)&g3, v2, v2, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"kernel.version", (int32_t)"kernel version string\n(automatically updated on each boot)", v2, v2, v2, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"loglevel.ram", (int32_t)"Set RAM log level (D, I, E, C or X)\n  X - emergency messages only\n  C - add critical messages\n  E - add error messages\n  I - add informational messages\n  D - add debug messages\nRAM logs are persisted to logs partition at importantcheckpoints", (int32_t)&g2, v2, v3, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"loglevel.uart", (int32_t)"Set UART/serial log level (D, I, E, C or X)\n  X - emergency messages only\n  C - add critical messages\n  E - add error messages\n  I - add informational messages\n  D - add debug messages", (int32_t)&g2, v2, v3, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"loglevel.ui", (int32_t)"Set on-screen log level (D, I, E, C or X)\n  X - emergency messages only\n  C - add critical messages\n  E - add error messages\n  I - add informational messages\n  D - add debug messages", (int32_t)&g2, v2, v3, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    v3 = (int32_t)"^[[:digit:]]{1,7}$";
    __utag_define(v2, (int32_t)"meid", (int32_t)"Device MEID\n(14 hexadecimal or 18 decimal digits)", (int32_t)&g2, v2, (int32_t)"^[[:xdigit:]]{14}$|^[[:digit:]]{18}$", 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"memtest_blocks", (int32_t)"Number of memory blocks allocated to memtest automation\n  0 - auto-allocate", (int32_t)&g2, v2, v3, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"memtest_cycles", (int32_t)"Number of cycles in memtest automation\n  0 - infinite", (int32_t)&g2, v2, v3, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"memtest_mode", (int32_t)"Memtest mode\n  auto - automation", v2, v2, v2, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"md5-clogo", (int32_t)"MD5 checksum of clogo image.", (int32_t)&g2, v2, v6, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"num-sims", (int32_t)"Number of SIM slots\n(Set in the range 1 to 4)", (int32_t)&g2, v2, (int32_t)"^[1234]$", 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"radio", (int32_t)"Device RF ID override\n(e.g. \"1\", \"0x1\", \"A\" or \"0xA\", see http://goo.gl/0p3rjz)", (int32_t)&g2, v2, (int32_t)"^[[:xdigit:]]$|^0[xX][[:xdigit:]]$", 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"ro.build.fingerprint", (int32_t)"Software build fingerprint\n(automatically updated on each boot)", v2, v2, v2, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"ro.build.version.full", (int32_t)"Full software version string\n(automatically updated on each boot)", v2, v2, v2, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"ro.build.version.qcom", (int32_t)"QCOM meta build ID\n(automatically updated on each boot)", v2, v2, v2, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"ro.carrier", (int32_t)"ro.carrier value passed from kernel\n(automatically updated on each boot)", v2, v2, v2, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"serialno", (int32_t)"Device serial number\n(used interchangably with 'barcode')", (int32_t)&g2, v2, (int32_t)"[^[:cntrl:]]", 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"sku", (int32_t)"Device stock-keeping unit\n(less or equal than 15 alphanumeric or hyphen characters)", (int32_t)&g2, v2, (int32_t)"^[-[:alnum:]]{1,15}$", 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"time.offset", (int32_t)"UTC time offset in seconds since Epoch\n(automatically updated on each boot)", v2, v2, v2, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"version.baseband", (int32_t)"Modem release version\n(automatically updated on each boot)", v2, v2, v2, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"WPDisable", (int32_t)"To indicate if write protect feature should be disabled(true|false)", v2, v2, v2, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    __utag_define(v2, (int32_t)"wifi_mac", (int32_t)"WIFI Mac Address(es).", (int32_t)&g2, v2, (int32_t)"([[:xdigit:]]{2}:){5}([[:xdigit:]]{2})(,([[:xdigit:]]{2}:){5}([[:xdigit:]]{2})){0,1}", 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0);
    int32_t result = __utag_define(v2, (int32_t)"enable_dump_gpt", (int32_t)"Indicate if the oem command to dump gpt is enabled (true|false)", v2, v2, v2, 0, v4, 0, g32, g33, g34, g35, v1, v5, 0, 0); // 0x8f62ba90
    if (v4 != g24) {
        // 0x8f62baa4
        __stack_chk_fail();
        // branch -> 0x8f62baa8
    }
    // 0x8f62baa8
    return result;
}

// --------------- Statically Linked Functions ----------------

// void __stack_chk_fail(void);
// void free(void * ptr);
// void * malloc(size_t size);
// int memcmp(const void * s1, const void * s2, size_t n);
// void * memcpy(void * restrict dest, const void * restrict src, size_t n);
// int strcmp(const char * s1, const char * s2);
// int strncmp(const char * s1, const char * s2, size_t n);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: android-ndk-r8 (4.4.3 armv5te, armv7a(arm-linux-androideabi-gcc))
// Detected functions: 27
// Decompiler release: v2.2.1 (2016-09-07)
// Decompilation date: 2017-08-06 19:33:17