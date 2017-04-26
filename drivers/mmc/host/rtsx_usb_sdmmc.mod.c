#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2c197ea3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xd945909, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x4a4a4bd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x985ebe26, __VMLINUX_SYMBOL_STR(rtsx_usb_write_ppbuf) },
	{ 0xc5718627, __VMLINUX_SYMBOL_STR(sg_copy_to_buffer) },
	{ 0x955cfbde, __VMLINUX_SYMBOL_STR(rtsx_usb_transfer_data) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc05119fe, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x8deafbcd, __VMLINUX_SYMBOL_STR(rtsx_usb_ep0_read_register) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xe7d8fbae, __VMLINUX_SYMBOL_STR(rtsx_usb_switch_clock) },
	{ 0x8fc7f638, __VMLINUX_SYMBOL_STR(rtsx_usb_get_card_status) },
	{ 0x8a6dcba3, __VMLINUX_SYMBOL_STR(rtsx_usb_card_exclusive_check) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xcc5c43d2, __VMLINUX_SYMBOL_STR(rtsx_usb_write_register) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb877f52a, __VMLINUX_SYMBOL_STR(rtsx_usb_read_register) },
	{ 0x87cfa098, __VMLINUX_SYMBOL_STR(rtsx_usb_read_ppbuf) },
	{ 0xd43a7083, __VMLINUX_SYMBOL_STR(rtsx_usb_get_rsp) },
	{ 0xdaa8f471, __VMLINUX_SYMBOL_STR(rtsx_usb_send_cmd) },
	{ 0x81a07154, __VMLINUX_SYMBOL_STR(rtsx_usb_add_cmd) },
	{ 0x5838ff3a, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x1f36272d, __VMLINUX_SYMBOL_STR(rtsx_usb_ep0_write_register) },
	{ 0x47249507, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x905079ff, __VMLINUX_SYMBOL_STR(mmc_add_host) },
	{ 0x1eaa1bd4, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca72012e, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x4ea4d298, __VMLINUX_SYMBOL_STR(mmc_alloc_host) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xf3b12552, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0xad7de0cc, __VMLINUX_SYMBOL_STR(mmc_free_host) },
	{ 0x1ca84e69, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x4e506cf, __VMLINUX_SYMBOL_STR(mmc_remove_host) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x78c14912, __VMLINUX_SYMBOL_STR(mmc_request_done) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtsx_usb";

MODULE_ALIAS("platform:rtsx_usb_sdmmc");
