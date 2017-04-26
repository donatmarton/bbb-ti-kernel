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
	{ 0x637119f1, __VMLINUX_SYMBOL_STR(ieee80211_rx_napi) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xce264ecd, __VMLINUX_SYMBOL_STR(perf_tp_event) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x9404cae6, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x8cdce33c, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xf4cf9543, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x666fb705, __VMLINUX_SYMBOL_STR(debugfs_create_u8) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1731ab18, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x89cf4c4a, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x56878201, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x95db5ba0, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xe6657df, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x16b7c05d, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xe859d507, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc4170d75, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0x9590237e, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x2fefcfbf, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x492621b9, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x18cf6166, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xbab51ea8, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x14fc29e9, __VMLINUX_SYMBOL_STR(simple_attr_read) },
	{ 0xf09cd5f, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0xbcc5fc49, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0x33a58f4c, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xa347d50f, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xe0ab6d16, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x63ce6a79, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x198a4ccf, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x1d693da5, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0xcf268ff5, __VMLINUX_SYMBOL_STR(usb_poison_urb) },
	{ 0x9ad77d0d, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x94e8602, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8286a48, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x5e8f223, __VMLINUX_SYMBOL_STR(simple_attr_release) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x43102a32, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xf70e4a4d, __VMLINUX_SYMBOL_STR(preempt_schedule_notrace) },
	{ 0x40825f43, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x3e061b94, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x4b33c8c8, __VMLINUX_SYMBOL_STR(devm_kmemdup) },
	{ 0xa7921271, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x6ae0f10b, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x843483d, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xc4ad22c6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x6be960f4, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xc2102972, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xd6efd600, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xea8184e, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8881268b, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x7624ae76, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x92d08eb8, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x2fd85baf, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xa7ed879, __VMLINUX_SYMBOL_STR(ieee80211_send_bar) },
	{ 0xabfcb4c3, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0xf256ff40, __VMLINUX_SYMBOL_STR(ieee80211_get_tx_rates) },
	{ 0x53adf70b, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0x4c6348bb, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xef02ecac, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0x6a9ae4fd, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0x5176d1d1, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0x156633a, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x963de423, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1e236e68, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x27ca73dd, __VMLINUX_SYMBOL_STR(skb_add_rx_frag) },
	{ 0x1ff6c8b8, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x5ed56e18, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x4c8715ae, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0xf9dd9922, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x3139b15e, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0x9cbcaf26, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x3c93ea25, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x1d8f4c65, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x7174ae4a, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xf899faf7, __VMLINUX_SYMBOL_STR(ieee80211_tx_status_noskb) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xcd1f63ee, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x900f303a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x54cace3a, __VMLINUX_SYMBOL_STR(simple_attr_open) },
	{ 0x22ef151f, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xb02435cb, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0x2bfcadc, __VMLINUX_SYMBOL_STR(simple_attr_write) },
	{ 0x55da3d4e, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";

MODULE_ALIAS("usb:v0B05p17D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3431d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3434d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp7601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2717p4106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2A5Fp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7710d*dc*dsc*dp*ic*isc*ip*in*");
