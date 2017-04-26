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
	{ 0x5870b9ef, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0x750ca8c2, __VMLINUX_SYMBOL_STR(__devm_regmap_init_spi) },
	{ 0x6ada6489, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0x36ec1661, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x8c663951, __VMLINUX_SYMBOL_STR(regulator_get_voltage) },
	{ 0x9e5d01d, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0xf05fd8a6, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbd7f1641, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x752d5f5b, __VMLINUX_SYMBOL_STR(kstrtobool) },
	{ 0x3237dfb4, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x33e2d8fe, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x6eaf818b, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x61b3905f, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x684a2bb7, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";

MODULE_ALIAS("i2c:ad5380-3");
MODULE_ALIAS("i2c:ad5380-5");
MODULE_ALIAS("i2c:ad5381-3");
MODULE_ALIAS("i2c:ad5381-5");
MODULE_ALIAS("i2c:ad5382-3");
MODULE_ALIAS("i2c:ad5382-5");
MODULE_ALIAS("i2c:ad5383-3");
MODULE_ALIAS("i2c:ad5383-5");
MODULE_ALIAS("i2c:ad5384-3");
MODULE_ALIAS("i2c:ad5384-5");
MODULE_ALIAS("i2c:ad5390-3");
MODULE_ALIAS("i2c:ad5390-5");
MODULE_ALIAS("i2c:ad5391-3");
MODULE_ALIAS("i2c:ad5391-5");
MODULE_ALIAS("i2c:ad5392-3");
MODULE_ALIAS("i2c:ad5392-5");
MODULE_ALIAS("spi:ad5380-3");
MODULE_ALIAS("spi:ad5380-5");
MODULE_ALIAS("spi:ad5381-3");
MODULE_ALIAS("spi:ad5381-5");
MODULE_ALIAS("spi:ad5382-3");
MODULE_ALIAS("spi:ad5382-5");
MODULE_ALIAS("spi:ad5383-3");
MODULE_ALIAS("spi:ad5383-5");
MODULE_ALIAS("spi:ad5384-3");
MODULE_ALIAS("spi:ad5384-5");
MODULE_ALIAS("spi:ad5390-3");
MODULE_ALIAS("spi:ad5390-5");
MODULE_ALIAS("spi:ad5391-3");
MODULE_ALIAS("spi:ad5391-5");
MODULE_ALIAS("spi:ad5392-3");
MODULE_ALIAS("spi:ad5392-5");
