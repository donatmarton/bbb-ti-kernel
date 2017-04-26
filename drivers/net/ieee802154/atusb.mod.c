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
	{ 0xc66f04a9, __VMLINUX_SYMBOL_STR(ieee802154_register_hw) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x55da3d4e, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xd6efd600, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xa719459d, __VMLINUX_SYMBOL_STR(ieee802154_alloc_hw) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x94e8602, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xc2102972, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x2fd85baf, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x3b3556e6, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x488d0d39, __VMLINUX_SYMBOL_STR(ieee802154_xmit_complete) },
	{ 0x90117b78, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0x51c8b3e9, __VMLINUX_SYMBOL_STR(ieee802154_wake_queue) },
	{ 0x467414ec, __VMLINUX_SYMBOL_STR(ieee802154_rx_irqsafe) },
	{ 0x18cf6166, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x43102a32, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xae48b57b, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0xc4ad22c6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x92d08eb8, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x8158dc84, __VMLINUX_SYMBOL_STR(ieee802154_free_hw) },
	{ 0x21f6c4b3, __VMLINUX_SYMBOL_STR(ieee802154_unregister_hw) },
	{ 0x16b7c05d, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x3da6f9d3, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8415cc61, __VMLINUX_SYMBOL_STR(usb_get_from_anchor) },
	{ 0x900f303a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac802154";

MODULE_ALIAS("usb:v20B7p1540d*dc*dsc*dp*icFFisc00ip00in*");
