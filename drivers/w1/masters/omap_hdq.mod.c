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
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xd945909, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4a4a4bd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x45253bc6, __VMLINUX_SYMBOL_STR(w1_add_master_device) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x45560b7e, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0xb62a6155, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xec533192, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xca72012e, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xddb3e439, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x2cf249c1, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x47249507, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x9e931cfd, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5838ff3a, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x2d9b9ea6, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x48a0f939, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7c2f2afb, __VMLINUX_SYMBOL_STR(w1_calc_crc8) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xf3b12552, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,omap3-1w*");
MODULE_ALIAS("of:N*T*Cti,am4372-hdq*");
