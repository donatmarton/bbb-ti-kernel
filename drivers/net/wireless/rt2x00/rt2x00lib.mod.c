#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2c197ea3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x637119f1, __VMLINUX_SYMBOL_STR(ieee80211_rx_napi) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x189c3a74, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc068440e, __VMLINUX_SYMBOL_STR(__kfifo_alloc) },
	{ 0xdf6123a0, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x1eaa1bd4, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x6aa005e8, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x9e14108e, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x365b1e3f, __VMLINUX_SYMBOL_STR(ieee80211_rts_get) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xb80150f8, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xe859d507, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xa59a091d, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xe03ae3ae, __VMLINUX_SYMBOL_STR(led_classdev_resume) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4c9446c3, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0x81c8c80b, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x18cf6166, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xbab51ea8, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0xc84fc707, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xf09cd5f, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0xbcc5fc49, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x63ce6a79, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8286a48, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x43102a32, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xa2520d7a, __VMLINUX_SYMBOL_STR(ieee80211_ctstoself_get) },
	{ 0x51c8f9f6, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0xa7921271, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x59556d16, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0xc0945338, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0x1e579dc5, __VMLINUX_SYMBOL_STR(__list_add_rcu) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xef02ecac, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0xdb760f52, __VMLINUX_SYMBOL_STR(__kfifo_free) },
	{ 0x5176d1d1, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0x156633a, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x1ca84e69, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x85d0a7a5, __VMLINUX_SYMBOL_STR(led_classdev_suspend) },
	{ 0x5ed56e18, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x1d8f4c65, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x49775e1f, __VMLINUX_SYMBOL_STR(ieee80211_iterate_interfaces) },
	{ 0x22ef151f, __VMLINUX_SYMBOL_STR(release_firmware) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";


MODULE_INFO(srcversion, "72E39180D883A5541F66494");
