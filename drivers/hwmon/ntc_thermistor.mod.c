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
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9bad0b13, __VMLINUX_SYMBOL_STR(thermal_zone_of_sensor_register) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb0e4ae43, __VMLINUX_SYMBOL_STR(hwmon_device_register) },
	{ 0x8f7a5832, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xaeb4e64d, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x4f161c0a, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb2258da5, __VMLINUX_SYMBOL_STR(iio_get_channel_type) },
	{ 0x98f4cbbc, __VMLINUX_SYMBOL_STR(iio_channel_get) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8b7245c2, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1526cf9e, __VMLINUX_SYMBOL_STR(iio_convert_raw_to_processed) },
	{ 0xd9c5857a, __VMLINUX_SYMBOL_STR(iio_read_channel_raw) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0725a7b, __VMLINUX_SYMBOL_STR(thermal_zone_of_sensor_unregister) },
	{ 0xfb9bee8e, __VMLINUX_SYMBOL_STR(iio_channel_release) },
	{ 0x906099bd, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xe2e4e044, __VMLINUX_SYMBOL_STR(hwmon_device_unregister) },
	{ 0xf1deabf2, __VMLINUX_SYMBOL_STR(div64_u64) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";

MODULE_ALIAS("of:N*T*Cmurata,ncp15wb473*");
MODULE_ALIAS("of:N*T*Cmurata,ncp18wb473*");
MODULE_ALIAS("of:N*T*Cmurata,ncp21wb473*");
MODULE_ALIAS("of:N*T*Cmurata,ncp03wb473*");
MODULE_ALIAS("of:N*T*Cmurata,ncp15wl333*");
MODULE_ALIAS("of:N*T*Cepcos,b57330v2103*");
MODULE_ALIAS("of:N*T*Cmurata,ncp03wf104*");
MODULE_ALIAS("of:N*T*Cntc,ncp15wb473*");
MODULE_ALIAS("of:N*T*Cntc,ncp18wb473*");
MODULE_ALIAS("of:N*T*Cntc,ncp21wb473*");
MODULE_ALIAS("of:N*T*Cntc,ncp03wb473*");
MODULE_ALIAS("of:N*T*Cntc,ncp15wl333*");
