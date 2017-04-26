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
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x5ed438b1, __VMLINUX_SYMBOL_STR(dvb_usb_generic_write) },
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x570b6b8e, __VMLINUX_SYMBOL_STR(dvb_usb_device_exit) },
	{ 0x6f37c406, __VMLINUX_SYMBOL_STR(dvb_usb_device_init) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xd304f5a5, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x532f0a2f, __VMLINUX_SYMBOL_STR(dvb_usb_generic_rw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x29923658, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x286d9ab7, __VMLINUX_SYMBOL_STR(dvb_usb_nec_rc_key_to_event) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-usb";

MODULE_ALIAS("usb:v14AAp0201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0222d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0221d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp022Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp022Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0225d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0220d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18F3p0220d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9ACA6F8E1DD160D877073EA");
