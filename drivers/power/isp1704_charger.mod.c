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
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x102a2d8b, __VMLINUX_SYMBOL_STR(atomic_notifier_chain_register) },
	{ 0x5973edcd, __VMLINUX_SYMBOL_STR(power_supply_register) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x43a65ce9, __VMLINUX_SYMBOL_STR(devm_usb_get_phy) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xfafeb247, __VMLINUX_SYMBOL_STR(devm_usb_get_phy_by_phandle) },
	{ 0x8e376325, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x81e373bd, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x222a884d, __VMLINUX_SYMBOL_STR(power_supply_get_drvdata) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2bd3f07e, __VMLINUX_SYMBOL_STR(power_supply_changed) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e0ffc60, __VMLINUX_SYMBOL_STR(power_supply_unregister) },
	{ 0xc1fa4c36, __VMLINUX_SYMBOL_STR(atomic_notifier_chain_unregister) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xefac7c4c, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0xfaed45a9, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cnxp,isp1704*");
