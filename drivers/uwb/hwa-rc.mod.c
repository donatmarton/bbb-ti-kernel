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
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x31efc634, __VMLINUX_SYMBOL_STR(uwb_rc_add) },
	{ 0x2fe3966a, __VMLINUX_SYMBOL_STR(usb_get_intf) },
	{ 0xd6efd600, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xe4be8189, __VMLINUX_SYMBOL_STR(uwb_rc_alloc) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x109c1fd8, __VMLINUX_SYMBOL_STR(uwb_rc_reset_all) },
	{ 0xda5ffe1f, __VMLINUX_SYMBOL_STR(uwb_rc_neh_error) },
	{ 0x2dc727f4, __VMLINUX_SYMBOL_STR(uwb_rc_neh_grok) },
	{ 0xc4ad22c6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x55da3d4e, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x900f303a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x16b7c05d, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x94e8602, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8881268b, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x16041f83, __VMLINUX_SYMBOL_STR(usb_lock_device_for_reset) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb58acc19, __VMLINUX_SYMBOL_STR(uwb_rc_put) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x92d08eb8, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x60b3b289, __VMLINUX_SYMBOL_STR(usb_put_intf) },
	{ 0x2bf86bf4, __VMLINUX_SYMBOL_STR(uwb_rc_rm) },
	{ 0xbdc49d27, __VMLINUX_SYMBOL_STR(uwb_rc_pre_reset) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9f602a8e, __VMLINUX_SYMBOL_STR(uwb_rc_post_reset) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=uwb";

MODULE_ALIAS("usb:v07D1p3D02d*dc*dsc*dp*icE0isc01ip02in*");
MODULE_ALIAS("usb:v8086p0C3Bd*dc*dsc*dp*icE0isc01ip02in*");
MODULE_ALIAS("usb:v13DCp5310d*dc*dsc*dp*icE0isc01ip02in*");
MODULE_ALIAS("usb:v13DCp5611d*dc*dsc*dp*icE0isc01ip02in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip02in*");
