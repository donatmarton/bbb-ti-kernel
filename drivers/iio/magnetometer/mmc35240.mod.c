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
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x45404215, __VMLINUX_SYMBOL_STR(devm_iio_device_register) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x3663792, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0x88d156ca, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x200cd300, __VMLINUX_SYMBOL_STR(regmap_bulk_read) },
	{ 0xa1746f8a, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x20cc31ce, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf3b439c1, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x159007b0, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
	{ 0x1fc267f8, __VMLINUX_SYMBOL_STR(regcache_sync_region) },
	{ 0x1bfaf4a, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";

MODULE_ALIAS("i2c:mmc35240");
MODULE_ALIAS("acpi*:MMC35240:*");
MODULE_ALIAS("of:N*T*Cmemsic,mmc35240");
MODULE_ALIAS("of:N*T*Cmemsic,mmc35240C*");
