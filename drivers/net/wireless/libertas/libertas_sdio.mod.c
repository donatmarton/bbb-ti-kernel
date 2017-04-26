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
	{ 0x5838ff3a, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x72658c79, __VMLINUX_SYMBOL_STR(lbs_resume) },
	{ 0x4193a774, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x8c25dc87, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x47e4111d, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x6b757518, __VMLINUX_SYMBOL_STR(lbs_stop_card) },
	{ 0x47249507, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x874d26ed, __VMLINUX_SYMBOL_STR(netdev_alert) },
	{ 0xed6eaf9f, __VMLINUX_SYMBOL_STR(__lbs_cmd) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x7439eeeb, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xc84fc707, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x71f1e688, __VMLINUX_SYMBOL_STR(lbs_start_card) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x3023824b, __VMLINUX_SYMBOL_STR(lbs_queue_event) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x9149247f, __VMLINUX_SYMBOL_STR(lbs_get_firmware_async) },
	{ 0xab9c69b2, __VMLINUX_SYMBOL_STR(lbs_cmd_copyback) },
	{ 0xcc61642b, __VMLINUX_SYMBOL_STR(lbs_suspend) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x4775b51d, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0x5f311bd3, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0xdae3dd50, __VMLINUX_SYMBOL_STR(lbs_remove_card) },
	{ 0xa4288faf, __VMLINUX_SYMBOL_STR(sdio_f0_writeb) },
	{ 0x738fd001, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x731222d1, __VMLINUX_SYMBOL_STR(lbs_process_rxed_packet) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdabbafae, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb80032c0, __VMLINUX_SYMBOL_STR(lbs_host_to_card_done) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x3fd63920, __VMLINUX_SYMBOL_STR(sdio_align_size) },
	{ 0x7a016fc8, __VMLINUX_SYMBOL_STR(lbs_add_card) },
	{ 0xb595f504, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x905079ff, __VMLINUX_SYMBOL_STR(mmc_add_host) },
	{ 0xd9e787e1, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x4e506cf, __VMLINUX_SYMBOL_STR(mmc_remove_host) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x8f4c6363, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xf8b91fc8, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9fdaa7fb, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{  0xaaa35, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xa9ab9f51, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0x4da3d104, __VMLINUX_SYMBOL_STR(lbs_notify_command_response) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libertas";

MODULE_ALIAS("sdio:c*v02DFd9103*");
MODULE_ALIAS("sdio:c*v02DFd9104*");
