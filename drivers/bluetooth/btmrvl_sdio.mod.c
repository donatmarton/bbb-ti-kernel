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
	{ 0x22ef151f, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5ed56e18, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x9fdaa7fb, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x47e4111d, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0xbc57e42f, __VMLINUX_SYMBOL_STR(btmrvl_register_hdev) },
	{ 0x2f0c94a1, __VMLINUX_SYMBOL_STR(btmrvl_add_card) },
	{ 0x8c25dc87, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xf1084d7f, __VMLINUX_SYMBOL_STR(btmrvl_send_module_cfg_cmd) },
	{ 0xc5140e56, __VMLINUX_SYMBOL_STR(btmrvl_remove_card) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x24b6cd22, __VMLINUX_SYMBOL_STR(btmrvl_interrupt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4193a774, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2c61ff3b, __VMLINUX_SYMBOL_STR(btmrvl_check_evtpkt) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x2f4843ad, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x63d4895b, __VMLINUX_SYMBOL_STR(btmrvl_process_event) },
	{ 0x43102a32, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x4775b51d, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xc2102972, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xd4d8a8ba, __VMLINUX_SYMBOL_STR(dev_coredumpv) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0xcb6cd648, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0xb595f504, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{  0xaaa35, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xdabbafae, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa9ab9f51, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0x7a11e985, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0xf8b91fc8, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x738fd001, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x679b9311, __VMLINUX_SYMBOL_STR(btmrvl_enable_hs) },
	{ 0xfff7d0a3, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xc8efedba, __VMLINUX_SYMBOL_STR(hci_suspend_dev) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xfeb220f1, __VMLINUX_SYMBOL_STR(hci_resume_dev) },
	{ 0x7439eeeb, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=btmrvl,bluetooth";

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd9136*");
MODULE_ALIAS("sdio:c*v02DFd912E*");
MODULE_ALIAS("sdio:c*v02DFd9142*");

MODULE_INFO(srcversion, "F41F02713BDBF9DD01A2AF8");
