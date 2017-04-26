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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x8286a48, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2cfc6659, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4a7d7e3c, __VMLINUX_SYMBOL_STR(hci_register_dev) },
	{ 0xfb2de2e4, __VMLINUX_SYMBOL_STR(hci_alloc_dev) },
	{ 0x22ef151f, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7624ae76, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x94e8602, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0x5ed56e18, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2f4843ad, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x55da3d4e, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x8b021de0, __VMLINUX_SYMBOL_STR(skb_unlink) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0xc4ad22c6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xc2102972, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x2d1a0e9d, __VMLINUX_SYMBOL_STR(hci_free_dev) },
	{ 0xc71be960, __VMLINUX_SYMBOL_STR(hci_unregister_dev) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x900f303a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x33c18c1e, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x16b7c05d, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xfff7d0a3, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xa045ff0b, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("usb:v057Cp2200d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "71A1D07543976FC1F5426C7");
