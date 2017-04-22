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
	{ 0x3d3e11f3, __VMLINUX_SYMBOL_STR(wl12xx_cmd_build_probe_req) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb2c099d0, __VMLINUX_SYMBOL_STR(wl1271_ps_elp_wakeup) },
	{ 0x53dff67d, __VMLINUX_SYMBOL_STR(wl12xx_debug_level) },
	{ 0xf4f4c814, __VMLINUX_SYMBOL_STR(wlcore_set_key) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x1d810aa0, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x5d443c09, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x7c84b0f0, __VMLINUX_SYMBOL_STR(wlcore_event_beacon_loss) },
	{ 0xefe21d65, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x5de36463, __VMLINUX_SYMBOL_STR(wlcore_event_dummy_packet) },
	{ 0x89300dd3, __VMLINUX_SYMBOL_STR(wlcore_event_inactive_sta) },
	{ 0xc73a6b7a, __VMLINUX_SYMBOL_STR(wlcore_event_ba_rx_constraint) },
	{ 0xf965f0ac, __VMLINUX_SYMBOL_STR(ieee80211_radar_detected) },
	{ 0x85c091bc, __VMLINUX_SYMBOL_STR(wlcore_event_fw_logger) },
	{ 0xa12d8cfe, __VMLINUX_SYMBOL_STR(wlcore_event_rssi_trigger) },
	{ 0x69c03fc5, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xe8663ae6, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0x6ddbe67, __VMLINUX_SYMBOL_STR(wlcore_cmd_wait_for_event_or_timeout) },
	{ 0xb5addee, __VMLINUX_SYMBOL_STR(wlcore_probe) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x5788a263, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x7696aaf8, __VMLINUX_SYMBOL_STR(wlcore_alloc_hw) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x40f24b28, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x77092dcc, __VMLINUX_SYMBOL_STR(wlcore_get_native_channel_type) },
	{ 0x837bc10d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x7f0cabc5, __VMLINUX_SYMBOL_STR(wl1271_cmd_configure) },
	{ 0x820dcad, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x45d63fe1, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x4b204e74, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x75b2fba8, __VMLINUX_SYMBOL_STR(wlcore_event_sched_scan_completed) },
	{ 0xdebc223b, __VMLINUX_SYMBOL_STR(wlcore_boot_upload_firmware) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x958363fc, __VMLINUX_SYMBOL_STR(wlcore_set_partition) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xa5116351, __VMLINUX_SYMBOL_STR(wlcore_enable_interrupts) },
	{ 0x73ea6fe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x3b5ca186, __VMLINUX_SYMBOL_STR(wl1271_ps_elp_sleep) },
	{ 0x5a1164a5, __VMLINUX_SYMBOL_STR(irq_get_irq_data) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x9badcfb5, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xc4b244af, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0xbdd44e49, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x43acec8c, __VMLINUX_SYMBOL_STR(__cfg80211_send_event_skb) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x839a39ba, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x973d0f9e, __VMLINUX_SYMBOL_STR(kstrtoul_from_user) },
	{ 0xe05ca3d9, __VMLINUX_SYMBOL_STR(wlcore_event_channel_switch) },
	{ 0xb1ab215e, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_event_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf4be00f8, __VMLINUX_SYMBOL_STR(wlcore_disable_interrupts) },
	{ 0x4a6761ad, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x95a80d9b, __VMLINUX_SYMBOL_STR(wlcore_remove) },
	{ 0xea07ec7, __VMLINUX_SYMBOL_STR(kstrtou8_from_user) },
	{ 0x805203bf, __VMLINUX_SYMBOL_STR(wlcore_event_max_tx_failure) },
	{ 0xfc3ac0be, __VMLINUX_SYMBOL_STR(wl1271_free_tx_id) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x4fec8276, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_results) },
	{ 0xea51e963, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0x8aabc980, __VMLINUX_SYMBOL_STR(wlcore_free_hw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x91da5146, __VMLINUX_SYMBOL_STR(wl1271_format_buffer) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3b60840f, __VMLINUX_SYMBOL_STR(wl1271_debugfs_update_stats) },
	{ 0x6c3a63cd, __VMLINUX_SYMBOL_STR(wlcore_set_scan_chan_params) },
	{ 0xde0aeb10, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x646f3741, __VMLINUX_SYMBOL_STR(wlcore_boot_run_firmware) },
	{ 0x41011726, __VMLINUX_SYMBOL_STR(wlcore_translate_addr) },
	{ 0x12ba6a99, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_ssid_list) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xa30e6bb0, __VMLINUX_SYMBOL_STR(wlcore_event_roc_complete) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x105e4e26, __VMLINUX_SYMBOL_STR(wl12xx_is_dummy_packet) },
	{ 0x36cf4f03, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xd9ef669d, __VMLINUX_SYMBOL_STR(wl1271_cmd_send) },
	{ 0x3743de2b, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x20850df5, __VMLINUX_SYMBOL_STR(ieee80211_connection_loss) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wlcore,mac80211,cfg80211";

MODULE_ALIAS("platform:wl18xx");
