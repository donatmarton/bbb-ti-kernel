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
	{ 0x612ae2b8, __VMLINUX_SYMBOL_STR(hci_recv_diag) },
	{ 0x2f4843ad, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x4a7d7e3c, __VMLINUX_SYMBOL_STR(hci_register_dev) },
	{ 0xfb2de2e4, __VMLINUX_SYMBOL_STR(hci_alloc_dev) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x6204200e, __VMLINUX_SYMBOL_STR(h4_recv_buf) },
	{ 0x3da6f9d3, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0x3b3556e6, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc4ad22c6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xae48b57b, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x900f303a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x8286a48, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x55da3d4e, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x25056aef, __VMLINUX_SYMBOL_STR(__hci_cmd_sync) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x2d1a0e9d, __VMLINUX_SYMBOL_STR(hci_free_dev) },
	{ 0xc71be960, __VMLINUX_SYMBOL_STR(hci_unregister_dev) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth,hci_uart";

MODULE_ALIAS("usb:v08FDp0002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "73118D5C4EBA8B61CF0F165");
