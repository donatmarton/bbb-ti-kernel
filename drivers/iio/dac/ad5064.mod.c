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
	{ 0x103bacad, __VMLINUX_SYMBOL_STR(iio_enum_available_read) },
	{ 0x13285d23, __VMLINUX_SYMBOL_STR(iio_enum_write) },
	{ 0x3f4037aa, __VMLINUX_SYMBOL_STR(iio_enum_read) },
	{ 0x89cd8667, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x2060d6e7, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x9d41e38f, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xb4b743ae, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x591bd40b, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x752d5f5b, __VMLINUX_SYMBOL_STR(kstrtobool) },
	{ 0x8c663951, __VMLINUX_SYMBOL_STR(regulator_get_voltage) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6ada6489, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5278e086, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0x36ec1661, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0xac385690, __VMLINUX_SYMBOL_STR(devm_regulator_bulk_get) },
	{ 0xbd7f1641, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x963133a1, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x34317eea, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0x684a2bb7, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";

MODULE_ALIAS("i2c:ad5625");
MODULE_ALIAS("i2c:ad5625r-1v25");
MODULE_ALIAS("i2c:ad5625r-2v5");
MODULE_ALIAS("i2c:ad5627");
MODULE_ALIAS("i2c:ad5627r-1v25");
MODULE_ALIAS("i2c:ad5627r-2v5");
MODULE_ALIAS("i2c:ad5629-1");
MODULE_ALIAS("i2c:ad5629-2");
MODULE_ALIAS("i2c:ad5629-3");
MODULE_ALIAS("i2c:ad5645r-1v25");
MODULE_ALIAS("i2c:ad5645r-2v5");
MODULE_ALIAS("i2c:ad5665");
MODULE_ALIAS("i2c:ad5665r-1v25");
MODULE_ALIAS("i2c:ad5665r-2v5");
MODULE_ALIAS("i2c:ad5667");
MODULE_ALIAS("i2c:ad5667r-1v25");
MODULE_ALIAS("i2c:ad5667r-2v5");
MODULE_ALIAS("i2c:ad5669-1");
MODULE_ALIAS("i2c:ad5669-2");
MODULE_ALIAS("i2c:ad5669-3");
MODULE_ALIAS("i2c:ltc2606");
MODULE_ALIAS("i2c:ltc2607");
MODULE_ALIAS("i2c:ltc2609");
MODULE_ALIAS("i2c:ltc2616");
MODULE_ALIAS("i2c:ltc2617");
MODULE_ALIAS("i2c:ltc2619");
MODULE_ALIAS("i2c:ltc2626");
MODULE_ALIAS("i2c:ltc2627");
MODULE_ALIAS("i2c:ltc2629");
MODULE_ALIAS("spi:ad5024");
MODULE_ALIAS("spi:ad5025");
MODULE_ALIAS("spi:ad5044");
MODULE_ALIAS("spi:ad5045");
MODULE_ALIAS("spi:ad5064");
MODULE_ALIAS("spi:ad5064-1");
MODULE_ALIAS("spi:ad5065");
MODULE_ALIAS("spi:ad5628-1");
MODULE_ALIAS("spi:ad5628-2");
MODULE_ALIAS("spi:ad5648-1");
MODULE_ALIAS("spi:ad5648-2");
MODULE_ALIAS("spi:ad5666-1");
MODULE_ALIAS("spi:ad5666-2");
MODULE_ALIAS("spi:ad5668-1");
MODULE_ALIAS("spi:ad5668-2");
MODULE_ALIAS("spi:ad5668-3");
