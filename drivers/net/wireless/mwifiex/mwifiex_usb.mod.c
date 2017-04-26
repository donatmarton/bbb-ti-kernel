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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xd006aa3, __VMLINUX_SYMBOL_STR(mwifiex_cancel_hs) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x4fe38dbd, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x16b7c05d, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xa59a091d, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x939d3a14, __VMLINUX_SYMBOL_STR(mwifiex_write_data_complete) },
	{ 0xf291b744, __VMLINUX_SYMBOL_STR(mwifiex_process_sleep_confirm_resp) },
	{ 0xff0d0727, __VMLINUX_SYMBOL_STR(mwifiex_queue_main_work) },
	{ 0x18cf6166, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xc84fc707, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x34557fd5, __VMLINUX_SYMBOL_STR(_mwifiex_dbg) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe950f50, __VMLINUX_SYMBOL_STR(mwifiex_add_card) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8286a48, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x43102a32, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x33c18c1e, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc4ad22c6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xd6efd600, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8881268b, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x7624ae76, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x92d08eb8, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1a9d5548, __VMLINUX_SYMBOL_STR(mwifiex_process_hs_config) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbd28e8b0, __VMLINUX_SYMBOL_STR(mwifiex_multi_chan_resync) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x364b3fff, __VMLINUX_SYMBOL_STR(up) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xe9eda7d8, __VMLINUX_SYMBOL_STR(mwifiex_deauthenticate_all) },
	{ 0x574f9aad, __VMLINUX_SYMBOL_STR(mwifiex_remove_card) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x86f4020e, __VMLINUX_SYMBOL_STR(mwifiex_enable_hs) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x6cc83af1, __VMLINUX_SYMBOL_STR(mwifiex_init_shutdown_fw) },
	{ 0x900f303a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x55da3d4e, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mwifiex";

MODULE_ALIAS("usb:v1286p2041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p2042d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p2044d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2049d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p204Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p204Ed*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "04C4BDA998B8D6F9F91F378");
