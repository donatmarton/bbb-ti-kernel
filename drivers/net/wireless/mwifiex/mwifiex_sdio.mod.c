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
	{ 0x7a11e985, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0xcb6cd648, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd006aa3, __VMLINUX_SYMBOL_STR(mwifiex_cancel_hs) },
	{ 0x4193a774, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x8c25dc87, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x47e4111d, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x5a0f1b24, __VMLINUX_SYMBOL_STR(mmc_hw_reset) },
	{ 0x4fe38dbd, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe087312c, __VMLINUX_SYMBOL_STR(mwifiex_disable_auto_ds) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xa59a091d, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xf291b744, __VMLINUX_SYMBOL_STR(mwifiex_process_sleep_confirm_resp) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x8fd62670, __VMLINUX_SYMBOL_STR(mwifiex_main_process) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7439eeeb, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0x18cf6166, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x34557fd5, __VMLINUX_SYMBOL_STR(_mwifiex_dbg) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe950f50, __VMLINUX_SYMBOL_STR(mwifiex_add_card) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x43102a32, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x31bd9748, __VMLINUX_SYMBOL_STR(mwifiex_alloc_dma_align_buf) },
	{ 0x4775b51d, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0x5f311bd3, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x738fd001, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x33c18c1e, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xdabbafae, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb595f504, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x364b3fff, __VMLINUX_SYMBOL_STR(up) },
	{ 0xc3d0372b, __VMLINUX_SYMBOL_STR(mwifiex_handle_rx_packet) },
	{ 0xe9eda7d8, __VMLINUX_SYMBOL_STR(mwifiex_deauthenticate_all) },
	{ 0x574f9aad, __VMLINUX_SYMBOL_STR(mwifiex_remove_card) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x86f4020e, __VMLINUX_SYMBOL_STR(mwifiex_enable_hs) },
	{ 0x3878254f, __VMLINUX_SYMBOL_STR(mwifiex_upload_device_dump) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x8f4c6363, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xf8b91fc8, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xb94bd08a, __VMLINUX_SYMBOL_STR(mwifiex_drv_info_dump) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x6cc83af1, __VMLINUX_SYMBOL_STR(mwifiex_init_shutdown_fw) },
	{ 0x9fdaa7fb, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{  0xaaa35, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xa9ab9f51, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mwifiex";

MODULE_ALIAS("sdio:c*v02DFd9116*");
MODULE_ALIAS("sdio:c*v02DFd9119*");
MODULE_ALIAS("sdio:c*v02DFd9129*");
MODULE_ALIAS("sdio:c*v02DFd912D*");
MODULE_ALIAS("sdio:c*v02DFd9135*");
MODULE_ALIAS("sdio:c*v02DFd9139*");
MODULE_ALIAS("sdio:c*v02DFd9141*");

MODULE_INFO(srcversion, "9A22339DEBDD9B867F6763D");
