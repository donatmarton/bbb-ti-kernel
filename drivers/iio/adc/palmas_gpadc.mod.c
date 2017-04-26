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
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7b6304ec, __VMLINUX_SYMBOL_STR(regmap_bulk_read) },
	{ 0xcd1f63ee, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0x6eaf818b, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x3237dfb4, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xaeb4e64d, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x4f161c0a, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x9763a8a8, __VMLINUX_SYMBOL_STR(device_wakeup_enable) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x33e2d8fe, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x15a7a500, __VMLINUX_SYMBOL_STR(device_set_wakeup_capable) },
	{ 0x36ec1661, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0xec533192, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x55784228, __VMLINUX_SYMBOL_STR(regmap_irq_get_virq) },
	{ 0xf9dd9922, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0xbd7f1641, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9cbcaf26, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x65bcff21, __VMLINUX_SYMBOL_STR(device_wakeup_disable) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x684a2bb7, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";

MODULE_ALIAS("of:N*T*Cti,palmas-gpadc*");
