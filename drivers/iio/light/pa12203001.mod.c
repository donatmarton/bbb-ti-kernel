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
	{ 0x9cef51a8, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x3fc54cba, __VMLINUX_SYMBOL_STR(iio_read_const_attr) },
	{ 0x703b5194, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xc619b572, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x518d5839, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0xf14cddbd, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0xfdb0e9a1, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0xa1a69463, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x20cc31ce, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x3663792, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0x88d156ca, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x200cd300, __VMLINUX_SYMBOL_STR(regmap_bulk_read) },
	{ 0x31087444, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x72662feb, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa1746f8a, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xcc848dc, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0x1c87ee07, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x5f1c59a6, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf3b439c1, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";

MODULE_ALIAS("i2c:txcpa122");
MODULE_ALIAS("acpi*:TXCPA122:*");
