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
	{ 0xcd9e399f, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x6e52c753, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x74de8469, __VMLINUX_SYMBOL_STR(hci_register_dev) },
	{ 0xd89f3611, __VMLINUX_SYMBOL_STR(hci_alloc_dev) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x9e16acb, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x9badcfb5, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x36d9eb3e, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0xfdf8f58f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xd5a5640, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4a6761ad, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x846fa768, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0x9cfd625d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2005e93f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xc4c2d383, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xbc44a147, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xc17b8191, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0xf6b006ca, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x8a0c700c, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xe6557692, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x979c2164, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xcb0ad105, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x4d8bd8a7, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xc8b224e2, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x839a39ba, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x69c03fc5, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x5a778a23, __VMLINUX_SYMBOL_STR(hci_free_dev) },
	{ 0x3d8c393b, __VMLINUX_SYMBOL_STR(hci_unregister_dev) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("sdio:c02v*d*");
MODULE_ALIAS("sdio:c03v*d*");
MODULE_ALIAS("sdio:c09v*d*");

MODULE_INFO(srcversion, "7618B081FB139854F60EA44");
