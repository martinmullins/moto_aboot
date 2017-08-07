# Decompilation of Aboot using free tools

Maybe redundant as snowman and retdec have plugins for [radare2](https://github.com/radare/radare2).

Tools Used For Decompilation:
* [retdec](https://retdec.com/)
* [snowman](https://github.com/yegord/snowman) 
* [hopper]() with the [Generate Pseudo.py](https://github.com/phracker/HopperScripts/blob/9468cdadb2c139d474662ae82716a5098e7350e4/Generate%20PseudoCode.py)


# Fastboot Interface notes
## Available Fastboot Commands
Command            | Function Handler Symbol
---                | ---
download           | sym.handle_fboot_command_download
flash              | sym.handle_fboot_command_flash
multiflash         | sym.handle_fboot_command_multiflash
getvar             | sym.handle_fboot_command_getvar
erase              | sym.handle_fboot_command_erase
boot               | sym.handle_fboot_command_boot
reboot             | sym.handle_fboot_command_reboot
reboot-bootloader  | sym.handle_fboot_command_reboot_bl
oem                | sym.handle_fboot_command_oem
continue           | sym.handle_fboot_command_continue

## Available Fastboot OEM Commands
Command          | Restricted  | Function Handler Symbol
---              | ---         | ---
config           | allowed     | sym.oem_utag
hw               | allowed     | sym.oem_utag
partition        | allowed     | sym.oem_partition
ramdump          | restricted  | sym.oem_ramdump
blankflash       | restricted  | sym.oem_blankflash
fb_mode_set      | allowed     | sym.oem_fb_mode_set
fb_mode_clear    | allowed     | sym.oem_fb_mode_clear
bp-tools-on      | allowed     | sym.oem_bp_tools_on
bp-tools-off     | allowed     | sym.oem_bp_tools_off
qcom-on          | allowed     | sym.oem_qcom_on
qcom-off         | allowed     | sym.oem_qcom_off
partitions       | restricted  | sym.oem_partitions
build-signature  | restricted  | sym.oem_build_sig
display          | restricted  | ??
backlight        | restricted  | sym.oem_backlight
logo             | restricted  | sym.oem_logo
unlock           | allowed     | sym.handle_fboot_oem_command_unlock
lock             | allowed     | sym.handle_fboot_oem_command_lock
verified         | restricted  | sym.handle_fboot_oem_command_verified
get_unlock_data  | allowed     | sym.handle_fboot_oem_command_get_unlock_data
cid_prov_req     | allowed     | sym.handle_fboot_oem_command_cid_prov_req    Arguments: [factory/google]
wptest           | restricted  | sym.handle_fboot_oem_command_write_protect_test
logdump          | restricted  | sym.oem_dump_logs
shwi_test        | restricted  | sym.oem_security_test
prod_fuse        | restricted  | sym.handle_fboot_oem_command_prod_fuse
regex            | restricted  | sym.oem_regex
pmic             | restricted  | sym.oem_pmic
led              | restricted  | sym.oem_led
read_sv          | allowed     | sym.oem_read_sv
sp_test          | restricted  | sym.oem_test_sp
off-mode-charge  | allowed     | sym.oem_off_mode_charge
show_screen      | restricted  | sym.oem_show_screen
usb_tune         | restricted  | sym.oem_usb_tune
bd65060          | restricted  | sym.oem_bd65060
lp8556           | restricted  | sym.oem_lp8556
isl98611         | restricted  | sym.oem_isl98611
smb1359          | restricted  | sym.oem_smb1359
