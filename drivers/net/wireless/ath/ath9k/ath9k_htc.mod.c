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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x29540d3c, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txq_props) },
	{ 0x7acef08, __VMLINUX_SYMBOL_STR(ieee80211_csa_finish) },
	{ 0x1dd09156, __VMLINUX_SYMBOL_STR(ath9k_hw_init) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x17d16973, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_channel) },
	{ 0xd01ce54c, __VMLINUX_SYMBOL_STR(ath9k_hw_deinit) },
	{ 0xde335816, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_output) },
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xfeebe460, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0xbe543599, __VMLINUX_SYMBOL_STR(ath9k_hw_set_gpio) },
	{ 0xca87baed, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_crypto) },
	{ 0xdf6123a0, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0xe2cf7007, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rate) },
	{ 0x1eaa1bd4, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x6d3c84bb, __VMLINUX_SYMBOL_STR(ieee80211_csa_is_complete) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0xe3ad1e62, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_enable) },
	{ 0x47e984d3, __VMLINUX_SYMBOL_STR(ath9k_hw_wait) },
	{ 0x8cd46b41, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_hw_crypto_keytype) },
	{ 0x6d87f3ce, __VMLINUX_SYMBOL_STR(ath9k_hw_stopdmarecv) },
	{ 0x80cd285e, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0x640286e5, __VMLINUX_SYMBOL_STR(ath9k_cmn_update_txpow) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xb80150f8, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x59d11a1d, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_get) },
	{ 0xa0f33b8a, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x16b7c05d, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xe859d507, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xa59a091d, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4c9446c3, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0x756b05a8, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxfilter) },
	{ 0x97df7be7, __VMLINUX_SYMBOL_STR(ath9k_hw_get_txq_props) },
	{ 0x392c0012, __VMLINUX_SYMBOL_STR(ath9k_hw_releasetxqueue) },
	{ 0xae527934, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_tsf) },
	{ 0x81c8c80b, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0xb55af1d7, __VMLINUX_SYMBOL_STR(ath9k_cmn_reload_chainmask) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x439e06fc, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_channels_rates) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x18cf6166, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xbab51ea8, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x3b3556e6, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0xdf98c806, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0xc84fc707, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xbcc5fc49, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0x702363b5, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x937a23a2, __VMLINUX_SYMBOL_STR(ath9k_hw_setopmode) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xd49bd803, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x556d75b7, __VMLINUX_SYMBOL_STR(ath9k_hw_disable) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf6abf494, __VMLINUX_SYMBOL_STR(ath9k_hw_resettxqueue) },
	{ 0x542a9123, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0x39661495, __VMLINUX_SYMBOL_STR(ath_cmn_process_fft) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xe0ab6d16, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x2def1742, __VMLINUX_SYMBOL_STR(ath9k_hw_set_sta_beacon_timers) },
	{ 0x32a46d06, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tsfadjust) },
	{ 0x5ca79ae2, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_ap) },
	{ 0x198a4ccf, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xa3662061, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_disable) },
	{ 0xe39f4168, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0x1241767b, __VMLINUX_SYMBOL_STR(ath9k_hw_ani_monitor) },
	{ 0x6fce37d1, __VMLINUX_SYMBOL_STR(ath_is_mybeacon) },
	{ 0x8bba711c, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_adhoc) },
	{ 0x94e8602, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xd216c0ad, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rssi) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xaafdb617, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8286a48, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x43102a32, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x51c8f9f6, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0xd43972ec, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0xcc3eb460, __VMLINUX_SYMBOL_STR(ath9k_hw_write_associd) },
	{ 0xa7921271, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0xd35b22ad, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0x182be50f, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x9b80563a, __VMLINUX_SYMBOL_STR(ath9k_hw_init_btcoex_hw) },
	{ 0x843483d, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0x33c18c1e, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xb4783b18, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconq_setup) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xc4ad22c6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xa3045f14, __VMLINUX_SYMBOL_STR(ath9k_hw_name) },
	{ 0x888748da, __VMLINUX_SYMBOL_STR(ath9k_cmn_spectral_scan_trigger) },
	{ 0xa56ffa81, __VMLINUX_SYMBOL_STR(ath9k_hw_init_global_settings) },
	{ 0xc2102972, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xd6efd600, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x3da6f9d3, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x61a75170, __VMLINUX_SYMBOL_STR(ath9k_hw_settsf64) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x59556d16, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x7624ae76, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x92d08eb8, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd378400c, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconinit) },
	{ 0x8c567761, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0xc0945338, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0x108e2ee0, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0x7ce2f94d, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_bt_stomp) },
	{ 0x80e2e124, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxabort) },
	{ 0xaf368495, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_sta) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x8334bd40, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0xb83182e8, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_skb_postprocess) },
	{ 0x1002920f, __VMLINUX_SYMBOL_STR(ath9k_hw_phy_disable) },
	{ 0xc44a9dc6, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0x5176d1d1, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0x8992aaf4, __VMLINUX_SYMBOL_STR(ath9k_hw_setpower) },
	{ 0x205b484e, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0x156633a, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x1ca84e69, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0xb791138b, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_weight) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x13c1d1e0, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x56c6faad, __VMLINUX_SYMBOL_STR(ath9k_hw_setmcastfilter) },
	{ 0x7df02556, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_session) },
	{ 0x710a8035, __VMLINUX_SYMBOL_STR(ath9k_hw_startpcureceive) },
	{ 0xccd9fe36, __VMLINUX_SYMBOL_STR(ath9k_hw_setuptxqueue) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x5ed56e18, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x1d9907a5, __VMLINUX_SYMBOL_STR(ath9k_hw_reset) },
	{ 0x4c8715ae, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0xf9dd9922, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0x4ee20a9e, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_accept) },
	{ 0xa045ff0b, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x4ceedf1a, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x9cbcaf26, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xc0fe2e1, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_3wire) },
	{ 0x438fc715, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xcd1f63ee, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xd109e4f8, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xab9709d3, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_calvalid) },
	{ 0x900f303a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x22ef151f, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xb02435cb, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0xae48b57b, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x55da3d4e, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,ath9k_hw,ath9k_common,ath,cfg80211";

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p209Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");
