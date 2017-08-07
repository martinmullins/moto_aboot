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
cid_prov_req     | allowed     | sym.handle_fboot_oem_command_cid_prov_req
get_unlock_data  | allowed     | sym.handle_fboot_oem_command_get_unlock_data
lock             | allowed     | sym.handle_fboot_oem_command_lock
unlock           | allowed     | sym.handle_fboot_oem_command_unlock
bp-tools-off     | allowed     | sym.oem_bp_tools_off
bp-tools-on      | allowed     | sym.oem_bp_tools_on
fb_mode_clear    | allowed     | sym.oem_fb_mode_clear
fb_mode_set      | allowed     | sym.oem_fb_mode_set
off-mode-charge  | allowed     | sym.oem_off_mode_charge
partition        | allowed     | sym.oem_partition
qcom-off         | allowed     | sym.oem_qcom_off
qcom-on          | allowed     | sym.oem_qcom_on
read_sv          | allowed     | sym.oem_read_sv
config           | allowed     | sym.oem_utag
hw               | allowed     | sym.oem_utag
display          | restricted  | ??
prod_fuse        | restricted  | sym.handle_fboot_oem_command_prod_fuse
verified         | restricted  | sym.handle_fboot_oem_command_verified
wptest           | restricted  | sym.handle_fboot_oem_command_write_protect_test
backlight        | restricted  | sym.oem_backlight
bd65060          | restricted  | sym.oem_bd65060
blankflash       | restricted  | sym.oem_blankflash
build-signature  | restricted  | sym.oem_build_sig
logdump          | restricted  | sym.oem_dump_logs
isl98611         | restricted  | sym.oem_isl98611
led              | restricted  | sym.oem_led
logo             | restricted  | sym.oem_logo
lp8556           | restricted  | sym.oem_lp8556
partitions       | restricted  | sym.oem_partitions
pmic             | restricted  | sym.oem_pmic
ramdump          | restricted  | sym.oem_ramdump
regex            | restricted  | sym.oem_regex
shwi_test        | restricted  | sym.oem_security_test
show_screen      | restricted  | sym.oem_show_screen
smb1359          | restricted  | sym.oem_smb1359
sp_test          | restricted  | sym.oem_test_sp
usb_tune         | restricted  | sym.oem_usb_tune
