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
	{ 0xcae4a978, __VMLINUX_SYMBOL_STR(ieee80211_rx_irqsafe) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6095e77d, __VMLINUX_SYMBOL_STR(complete_and_exit) },
	{ 0x8cdce33c, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xf4cf9543, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x95db5ba0, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x20b812e6, __VMLINUX_SYMBOL_STR(ieee80211_cqm_rssi_notify) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xe6657df, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xe859d507, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9590237e, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x2eada87e, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x2fefcfbf, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xe564cc94, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xbab51ea8, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0xc84fc707, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xf09cd5f, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xd49bd803, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfff7d0a3, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xe0ab6d16, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x63ce6a79, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0xaf0d0b73, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x8286a48, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x43102a32, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x310917fe, __VMLINUX_SYMBOL_STR(sort) },
	{ 0x843483d, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0x33c18c1e, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x973d0f9e, __VMLINUX_SYMBOL_STR(kstrtoul_from_user) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8c8a5e28, __VMLINUX_SYMBOL_STR(ieee80211_tx_status_irqsafe) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd65172e, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xef02ecac, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0x74f7b328, __VMLINUX_SYMBOL_STR(ieee80211_generic_frame_duration) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x156633a, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x963de423, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7df02556, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_session) },
	{ 0x4c8715ae, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xf9dd9922, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0xa045ff0b, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x1d8f4c65, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xb02435cb, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0x6629307f, __VMLINUX_SYMBOL_STR(ieee80211_queue_stopped) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";


MODULE_INFO(srcversion, "B3A89895FFB49D3E91C8D76");
