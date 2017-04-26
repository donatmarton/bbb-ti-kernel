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
	{ 0x9d589668, __VMLINUX_SYMBOL_STR(wl12xx_cmd_build_probe_req) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1b473307, __VMLINUX_SYMBOL_STR(wl1271_ps_elp_wakeup) },
	{ 0x53dff67d, __VMLINUX_SYMBOL_STR(wl12xx_debug_level) },
	{ 0xf1ae13e9, __VMLINUX_SYMBOL_STR(wlcore_set_key) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x9404cae6, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x8cdce33c, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x946f87c3, __VMLINUX_SYMBOL_STR(wlcore_event_beacon_loss) },
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xd665f0cc, __VMLINUX_SYMBOL_STR(wlcore_event_dummy_packet) },
	{ 0x5d7834a6, __VMLINUX_SYMBOL_STR(wlcore_event_inactive_sta) },
	{ 0xeec245eb, __VMLINUX_SYMBOL_STR(wlcore_event_ba_rx_constraint) },
	{ 0xee0a849e, __VMLINUX_SYMBOL_STR(ieee80211_radar_detected) },
	{ 0x6a08ff8f, __VMLINUX_SYMBOL_STR(wlcore_event_rssi_trigger) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0xf9f941f4, __VMLINUX_SYMBOL_STR(wlcore_cmd_wait_for_event_or_timeout) },
	{ 0xd52ebb86, __VMLINUX_SYMBOL_STR(wlcore_probe) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xa57b02d8, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x365c136d, __VMLINUX_SYMBOL_STR(wlcore_alloc_hw) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9590237e, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x77092dcc, __VMLINUX_SYMBOL_STR(wlcore_get_native_channel_type) },
	{ 0x4a4a4bd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x8c714a7, __VMLINUX_SYMBOL_STR(wl1271_cmd_configure) },
	{ 0x54614509, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x98e68eca, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x1460dfc0, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x51608b8e, __VMLINUX_SYMBOL_STR(wlcore_event_sched_scan_completed) },
	{ 0xa02dd543, __VMLINUX_SYMBOL_STR(wlcore_boot_upload_firmware) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xeb0674af, __VMLINUX_SYMBOL_STR(wlcore_set_partition) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xc1f3ab15, __VMLINUX_SYMBOL_STR(wlcore_enable_interrupts) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xae79e17, __VMLINUX_SYMBOL_STR(wl1271_ps_elp_sleep) },
	{ 0xbe3915f6, __VMLINUX_SYMBOL_STR(irq_get_irq_data) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x43102a32, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x4f05d0c3, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0xa7921271, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x1a23c25d, __VMLINUX_SYMBOL_STR(__cfg80211_send_event_skb) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x33c18c1e, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x973d0f9e, __VMLINUX_SYMBOL_STR(kstrtoul_from_user) },
	{ 0x320ec863, __VMLINUX_SYMBOL_STR(wlcore_event_channel_switch) },
	{ 0xf6e87e17, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_event_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27bc2ba0, __VMLINUX_SYMBOL_STR(wlcore_disable_interrupts) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xc871cdbd, __VMLINUX_SYMBOL_STR(wlcore_remove) },
	{ 0xea07ec7, __VMLINUX_SYMBOL_STR(kstrtou8_from_user) },
	{ 0x230a6ff2, __VMLINUX_SYMBOL_STR(wlcore_event_max_tx_failure) },
	{ 0x4295c100, __VMLINUX_SYMBOL_STR(wl1271_free_tx_id) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb118d4af, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_results) },
	{ 0x5176d1d1, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0x16da77f9, __VMLINUX_SYMBOL_STR(wlcore_free_hw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x91da5146, __VMLINUX_SYMBOL_STR(wl1271_format_buffer) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xad3fb620, __VMLINUX_SYMBOL_STR(wl1271_debugfs_update_stats) },
	{ 0x16e1caf9, __VMLINUX_SYMBOL_STR(wlcore_set_scan_chan_params) },
	{ 0x5ed56e18, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x1e3fb5db, __VMLINUX_SYMBOL_STR(wlcore_boot_run_firmware) },
	{ 0x363fbffa, __VMLINUX_SYMBOL_STR(wlcore_translate_addr) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x7e4e0fbf, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_ssid_list) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xa357402, __VMLINUX_SYMBOL_STR(wlcore_event_roc_complete) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xfb193bb3, __VMLINUX_SYMBOL_STR(wl12xx_is_dummy_packet) },
	{ 0xd945909, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xde767159, __VMLINUX_SYMBOL_STR(wl1271_cmd_send) },
	{ 0x22ef151f, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x89fa8f47, __VMLINUX_SYMBOL_STR(ieee80211_connection_loss) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wlcore,mac80211,cfg80211";

MODULE_ALIAS("platform:wl18xx");
