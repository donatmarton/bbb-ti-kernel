#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2c197ea3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x131a5ed7, __VMLINUX_SYMBOL_STR(regmap_del_irq_chip) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0xfcd48613, __VMLINUX_SYMBOL_STR(mfd_remove_devices) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x33e2d8fe, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xbf1faebe, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xdf98c806, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x28a40999, __VMLINUX_SYMBOL_STR(regmap_irq_get_domain) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x48afbf88, __VMLINUX_SYMBOL_STR(mfd_add_devices) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb6f0b84c, __VMLINUX_SYMBOL_STR(regmap_add_irq_chip) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xbfd19bbc, __VMLINUX_SYMBOL_STR(devm_free_irq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x87a10d5, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0xd460a022, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0xf9dd9922, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x55784228, __VMLINUX_SYMBOL_STR(regmap_irq_get_virq) },
	{ 0x3237dfb4, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xb62a6155, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x6eaf818b, __VMLINUX_SYMBOL_STR(regmap_write) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

