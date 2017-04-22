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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x9cef51a8, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x6e0f1e8c, __VMLINUX_SYMBOL_STR(gb_gbphy_register_driver) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x75d2f178, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0x5db3044a, __VMLINUX_SYMBOL_STR(usb_create_hcd) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe39a145e, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0xf62a9d43, __VMLINUX_SYMBOL_STR(gb_gbphy_deregister_driver) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8974e92e, __VMLINUX_SYMBOL_STR(gb_operation_sync_timeout) },
	{ 0xe2608795, __VMLINUX_SYMBOL_STR(gb_connection_destroy) },
	{ 0x521cea4b, __VMLINUX_SYMBOL_STR(gb_operation_request_send_sync_timeout) },
	{ 0x4f466aa8, __VMLINUX_SYMBOL_STR(gb_connection_enable) },
	{ 0xc20fb595, __VMLINUX_SYMBOL_STR(gb_connection_create) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1412ba83, __VMLINUX_SYMBOL_STR(gb_connection_disable) },
	{ 0xaa7d42d1, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x5baaa7dd, __VMLINUX_SYMBOL_STR(usb_hcd_resume_root_hub) },
	{ 0x2739c57f, __VMLINUX_SYMBOL_STR(gb_operation_put) },
	{ 0x62112121, __VMLINUX_SYMBOL_STR(gb_operation_create_flags) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gb-gbphy,greybus";

