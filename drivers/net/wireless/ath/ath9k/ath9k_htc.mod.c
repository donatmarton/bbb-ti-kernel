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
	{ 0x97e01d8f, __VMLINUX_SYMBOL_STR(ieee80211_rx_napi) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x28e78501, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txq_props) },
	{ 0xb3c84c90, __VMLINUX_SYMBOL_STR(ieee80211_csa_finish) },
	{ 0x919871e7, __VMLINUX_SYMBOL_STR(ath9k_hw_init) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x870c6bb9, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_channel) },
	{ 0x4ba1c32, __VMLINUX_SYMBOL_STR(ath9k_hw_deinit) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xefe21d65, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xda84ea7a, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0xf3331a26, __VMLINUX_SYMBOL_STR(ath9k_hw_set_gpio) },
	{ 0xdbaf075c, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_crypto) },
	{ 0x6f2b5daa, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x97e1a6ee, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rate) },
	{ 0x592b8e7b, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0xa3ab1cef, __VMLINUX_SYMBOL_STR(ieee80211_csa_is_complete) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x46072351, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_enable) },
	{ 0x6bcdef9d, __VMLINUX_SYMBOL_STR(ath9k_hw_wait) },
	{ 0x2deae18b, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_hw_crypto_keytype) },
	{ 0xf47e7df1, __VMLINUX_SYMBOL_STR(ath9k_hw_stopdmarecv) },
	{ 0x7949a77a, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0x18096711, __VMLINUX_SYMBOL_STR(ath9k_cmn_update_txpow) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x262dfef8, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x154f433b, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_get) },
	{ 0xfe91a5de, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xae9d6cbf, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x56c3dcf, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf3eaafa9, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa0744ea9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xad36366e, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0xdcf27b32, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxfilter) },
	{ 0x51763c11, __VMLINUX_SYMBOL_STR(ath9k_hw_get_txq_props) },
	{ 0x4db5abce, __VMLINUX_SYMBOL_STR(ath9k_hw_releasetxqueue) },
	{ 0x8bffe52b, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_tsf) },
	{ 0x7b7abed4, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x5c037da4, __VMLINUX_SYMBOL_STR(ath9k_cmn_reload_chainmask) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1f9098fa, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_channels_rates) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x71f7577d, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xfd87deb3, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x2e886f21, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x81f3afb, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0x6c119f4d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x401fe68e, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0xb3e857a1, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x279fc4a0, __VMLINUX_SYMBOL_STR(ath9k_hw_setopmode) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x2d215fb6, __VMLINUX_SYMBOL_STR(ath9k_hw_disable) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x93a547c8, __VMLINUX_SYMBOL_STR(ath9k_hw_resettxqueue) },
	{ 0x2683bfed, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0xc1aad725, __VMLINUX_SYMBOL_STR(ath_cmn_process_fft) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x1a329efe, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x68447024, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf9a6a4d9, __VMLINUX_SYMBOL_STR(ath9k_hw_set_sta_beacon_timers) },
	{ 0x5504492c, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tsfadjust) },
	{ 0x67704fa2, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_ap) },
	{ 0xa66b4fcc, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x8beee4ad, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_disable) },
	{ 0x40413de0, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0xfb405a79, __VMLINUX_SYMBOL_STR(ath9k_hw_ani_monitor) },
	{ 0xb692eff6, __VMLINUX_SYMBOL_STR(ath_is_mybeacon) },
	{ 0x55c2e66c, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_adhoc) },
	{ 0x82fc1495, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xd9f889af, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rssi) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xaafdb617, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfdf8f58f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x9badcfb5, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xaa77223c, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0x828deec7, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x188c27e3, __VMLINUX_SYMBOL_STR(ath9k_hw_write_associd) },
	{ 0xbdd44e49, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0xbdce6793, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0xf3cca3cc, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x33cc97d0, __VMLINUX_SYMBOL_STR(ath9k_hw_init_btcoex_hw) },
	{ 0x86e76ee, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0x839a39ba, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xd116fb0f, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconq_setup) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x7500da19, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xfaa08c3c, __VMLINUX_SYMBOL_STR(ath9k_hw_name) },
	{ 0x2a8a95a8, __VMLINUX_SYMBOL_STR(ath9k_cmn_spectral_scan_trigger) },
	{ 0x4b52f877, __VMLINUX_SYMBOL_STR(ath9k_hw_init_global_settings) },
	{ 0x2005e93f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x182469b8, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xd1f0a011, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x1e62d40a, __VMLINUX_SYMBOL_STR(ath9k_hw_settsf64) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8e07663b, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x30800578, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x631c30ca, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x4a6761ad, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xe25a1a34, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconinit) },
	{ 0x6dca9878, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0xc9176f5a, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0x2ccdf392, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0xa352d22f, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_free) },
	{ 0xcd5e1445, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_bt_stomp) },
	{ 0x9a49ff3, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxabort) },
	{ 0xb6709003, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_sta) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xdc832ea3, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x35b9de1b, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_skb_postprocess) },
	{ 0x71b86158, __VMLINUX_SYMBOL_STR(ath9k_hw_phy_disable) },
	{ 0xde8fa188, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0xea51e963, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0x3d994964, __VMLINUX_SYMBOL_STR(ath9k_hw_setpower) },
	{ 0x43b932e7, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0x5ab4c703, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0xbab724fe, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x90138f40, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_weight) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbf268559, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd549c376, __VMLINUX_SYMBOL_STR(ath9k_hw_setmcastfilter) },
	{ 0xfdd390dc, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_session) },
	{ 0xabe2762f, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_request_out) },
	{ 0x418fcf84, __VMLINUX_SYMBOL_STR(ath9k_hw_startpcureceive) },
	{ 0x65a6b31c, __VMLINUX_SYMBOL_STR(ath9k_hw_setuptxqueue) },
	{ 0x60fad71b, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xde0aeb10, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x7237c4bd, __VMLINUX_SYMBOL_STR(ath9k_hw_reset) },
	{ 0x68fb1747, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x9abf66c5, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_accept) },
	{ 0xd5a5640, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x9f9cf61e, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xf1396f5, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_3wire) },
	{ 0xe27d67a5, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x9cfd625d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x23fa4443, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xfee1fddb, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_calvalid) },
	{ 0xa2615298, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x3743de2b, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x10b35af4, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0xe480de3e, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x4ecc5f3f, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
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
MODULE_ALIAS("usb:v0930p0A08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");
