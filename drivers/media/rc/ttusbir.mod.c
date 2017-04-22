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
	{ 0x1a329efe, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x60fad71b, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xca475b49, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x592b8e7b, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x570b43fe, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x4ecc5f3f, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x6fbc742a, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xf1a7be79, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x33458a6a, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa8a24e19, __VMLINUX_SYMBOL_STR(ir_raw_event_handle) },
	{ 0xffbf98c9, __VMLINUX_SYMBOL_STR(ir_raw_event_store_with_filter) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x677071c6, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa2615298, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xe47cb9b4, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xbab724fe, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0xbf9aaee6, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0xe74060a0, __VMLINUX_SYMBOL_STR(led_classdev_suspend) },
	{ 0xae9d6cbf, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xaa7d42d1, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x7500da19, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xe8bd0389, __VMLINUX_SYMBOL_STR(led_classdev_resume) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0B48p2003d*dc*dsc*dp*ic*isc*ip*in*");
