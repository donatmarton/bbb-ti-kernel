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
	{ 0x5d0b11d6, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0x55281289, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x1eaa1bd4, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8f7a5832, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x340f03c7, __VMLINUX_SYMBOL_STR(hid_validate_values) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xefb6bf27, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0x60ebf412, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x1ca84e69, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0xed932aa, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0x906099bd, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x2b5e81eb, __VMLINUX_SYMBOL_STR(__hid_request) },
	{ 0xf228c79, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v000017EFp00006009");
MODULE_ALIAS("hid:b0003g*v000017EFp00006047");
MODULE_ALIAS("hid:b0005g*v000017EFp00006048");
MODULE_ALIAS("hid:b0003g*v000017EFp00006067");
