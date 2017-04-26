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
	{ 0x4c82ba79, __VMLINUX_SYMBOL_STR(w1_unregister_family) },
	{ 0x81a51c7a, __VMLINUX_SYMBOL_STR(w1_register_family) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc8321c8d, __VMLINUX_SYMBOL_STR(w1_read_8) },
	{ 0xfcf5a3d2, __VMLINUX_SYMBOL_STR(w1_write_8) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xbe8974c7, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0xb994b61c, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0x31f1c99d, __VMLINUX_SYMBOL_STR(platform_device_add_data) },
	{ 0xc21222c3, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xabab5bb1, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

