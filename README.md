# Decompilation of Aboot using free tools

Maybe redundant as snowman and retdec have plugins for [radare2](https://github.com/radare/radare2).

Tools Used For Decompilation:
* [retdec](https://retdec.com/)
* [snowman](https://github.com/yegord/snowman) 
* [hopper]() with the [Generate Pseudo.py](https://github.com/phracker/HopperScripts/blob/9468cdadb2c139d474662ae82716a5098e7350e4/Generate%20PseudoCode.py)


# Fastboot Interface notes
## Available Fastboot Commands
```
Command            Binary Symbol
download           sym.handle_fboot_command_download
flash              sym.handle_fboot_command_flash
multiflash         sym.handle_fboot_command_multiflash
getvar             sym.handle_fboot_command_getvar
erase              sym.handle_fboot_command_erase
boot               sym.handle_fboot_command_boot
reboot             sym.handle_fboot_command_reboot
reboot-bootloader  sym.handle_fboot_command_reboot_bl
oem                sym.handle_fboot_command_oem
continue           sym.handle_fboot_command_continue
```

## Available Fastboot OEM Commands
```
allowed     config           sym.oem_utag
allowed     hw               sym.oem_utag
allowed     partition        sym.oem_partition
restricted  ramdump          sym.oem_ramdump
restricted  blankflash       sym.oem_blankflash
allowed     fb_mode_set      sym.oem_fb_mode_set
allowed     fb_mode_clear    sym.oem_fb_mode_clear
allowed     bp-tools-on      sym.oem_bp_tools_on
allowed     bp-tools-off     sym.oem_bp_tools_off
allowed     qcom-on          sym.oem_qcom_on
allowed     qcom-off         sym.oem_qcom_off
restricted  partitions       sym.oem_partitions
restricted  build-signature  sym.oem_build_sig
restricted  display          ??
restricted  backlight        sym.oem_backlight
restricted  logo             sym.oem_logo
allowed     unlock           sym.handle_fboot_oem_command_unlock
allowed     lock             sym.handle_fboot_oem_command_lock
restricted  verified         sym.handle_fboot_oem_command_verified
allowed     get_unlock_data  sym.handle_fboot_oem_command_get_unlock_data
allowed     cid_prov_req     sym.handle_fboot_oem_command_cid_prov_req    Arguments: [factory/google]
restricted  wptest           sym.handle_fboot_oem_command_write_protect_test
restricted  logdump          sym.oem_dump_logs
restricted  shwi_test        sym.oem_security_test
restricted  prod_fuse        sym.handle_fboot_oem_command_prod_fuse
restricted  regex            sym.oem_regex
restricted  pmic             sym.oem_pmic
restricted  led              sym.oem_led
allowed     read_sv          sym.oem_read_sv
restricted  sp_test          sym.oem_test_sp
allowed     off-mode-charge  sym.oem_off_mode_charge
restricted  show_screen      sym.oem_show_screen
restricted  usb_tune         sym.oem_usb_tune
restricted  bd65060          sym.oem_bd65060
restricted  lp8556           sym.oem_lp8556
restricted  isl98611         sym.oem_isl98611
restricted  smb1359          sym.oem_smb1359
```
