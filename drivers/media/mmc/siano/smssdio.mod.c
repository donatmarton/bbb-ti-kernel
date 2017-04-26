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
	{ 0x5f311bd3, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8f4c6363, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x39437dd7, __VMLINUX_SYMBOL_STR(smscore_start_device) },
	{ 0x47e4111d, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x9fdaa7fb, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x8c25dc87, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x61871fc6, __VMLINUX_SYMBOL_STR(smscore_set_board_id) },
	{ 0x428fa69d, __VMLINUX_SYMBOL_STR(smscore_register_device) },
	{ 0x844539ae, __VMLINUX_SYMBOL_STR(sms_get_board) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x24ad3ca8, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0x37d91069, __VMLINUX_SYMBOL_STR(smsendian_handle_tx_message) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa59c440d, __VMLINUX_SYMBOL_STR(smscore_getbuffer) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe782bb6, __VMLINUX_SYMBOL_STR(smscore_onresponse) },
	{ 0x45284ae9, __VMLINUX_SYMBOL_STR(smsendian_handle_rx_message) },
	{ 0x1e62356a, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0xcb6cd648, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa9ab9f51, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{  0xaaa35, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xdabbafae, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xf8b91fc8, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x6ae00087, __VMLINUX_SYMBOL_STR(smscore_unregister_device) },
	{ 0xe8fa148a, __VMLINUX_SYMBOL_STR(smscore_putbuffer) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=smsmdtv";

MODULE_ALIAS("sdio:c*v039Ad5347*");
MODULE_ALIAS("sdio:c*v039Ad1100*");
MODULE_ALIAS("sdio:c*v039Ad0201*");
MODULE_ALIAS("sdio:c*v039Ad0300*");
MODULE_ALIAS("sdio:c*v039Ad0301*");
MODULE_ALIAS("sdio:c*v039Ad0302*");
MODULE_ALIAS("sdio:c*v039Ad0500*");
MODULE_ALIAS("sdio:c*v039Ad0600*");
MODULE_ALIAS("sdio:c*v039Ad0700*");
MODULE_ALIAS("sdio:c*v039Ad0800*");
