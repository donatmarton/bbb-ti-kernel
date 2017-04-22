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
	{ 0xaa9c7627, __VMLINUX_SYMBOL_STR(wlcore_boot_upload_nvs) },
	{ 0x53dff67d, __VMLINUX_SYMBOL_STR(wl12xx_debug_level) },
	{ 0xf4f4c814, __VMLINUX_SYMBOL_STR(wlcore_set_key) },
	{ 0xf5e0e537, __VMLINUX_SYMBOL_STR(wl1271_acx_init_mem_config) },
	{ 0x1d810aa0, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x5d443c09, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x7c84b0f0, __VMLINUX_SYMBOL_STR(wlcore_event_beacon_loss) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5de36463, __VMLINUX_SYMBOL_STR(wlcore_event_dummy_packet) },
	{ 0x89300dd3, __VMLINUX_SYMBOL_STR(wlcore_event_inactive_sta) },
	{ 0xc73a6b7a, __VMLINUX_SYMBOL_STR(wlcore_event_ba_rx_constraint) },
	{ 0x6a397faf, __VMLINUX_SYMBOL_STR(wl1271_acx_pm_config) },
	{ 0x3a384965, __VMLINUX_SYMBOL_STR(wlcore_calc_packet_alignment) },
	{ 0xa12d8cfe, __VMLINUX_SYMBOL_STR(wlcore_event_rssi_trigger) },
	{ 0x69c03fc5, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x6ddbe67, __VMLINUX_SYMBOL_STR(wlcore_cmd_wait_for_event_or_timeout) },
	{ 0xb5addee, __VMLINUX_SYMBOL_STR(wlcore_probe) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x7696aaf8, __VMLINUX_SYMBOL_STR(wlcore_alloc_hw) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x40f24b28, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x71037914, __VMLINUX_SYMBOL_STR(wl1271_acx_set_ht_capabilities) },
	{ 0x837bc10d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x7f0cabc5, __VMLINUX_SYMBOL_STR(wl1271_cmd_configure) },
	{ 0x820dcad, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x83695e41, __VMLINUX_SYMBOL_STR(wl1271_cmd_data_path) },
	{ 0x9e5b4a8d, __VMLINUX_SYMBOL_STR(wl12xx_acx_mem_cfg) },
	{ 0x45d63fe1, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x75b2fba8, __VMLINUX_SYMBOL_STR(wlcore_event_sched_scan_completed) },
	{ 0xdebc223b, __VMLINUX_SYMBOL_STR(wlcore_boot_upload_firmware) },
	{ 0x375fe61b, __VMLINUX_SYMBOL_STR(wl1271_acx_sleep_auth) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x958363fc, __VMLINUX_SYMBOL_STR(wlcore_set_partition) },
	{ 0xa5116351, __VMLINUX_SYMBOL_STR(wlcore_enable_interrupts) },
	{ 0x45133223, __VMLINUX_SYMBOL_STR(wl1271_cmd_test) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xc4b244af, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0xbdd44e49, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xe05ca3d9, __VMLINUX_SYMBOL_STR(wlcore_event_channel_switch) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf4be00f8, __VMLINUX_SYMBOL_STR(wlcore_disable_interrupts) },
	{ 0x95a80d9b, __VMLINUX_SYMBOL_STR(wlcore_remove) },
	{ 0x805203bf, __VMLINUX_SYMBOL_STR(wlcore_event_max_tx_failure) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x4fec8276, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_results) },
	{ 0xcb986b3d, __VMLINUX_SYMBOL_STR(wlcore_event_soft_gemini_sense) },
	{ 0x8aabc980, __VMLINUX_SYMBOL_STR(wlcore_free_hw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xed4150a4, __VMLINUX_SYMBOL_STR(wlcore_tx_complete) },
	{ 0x91da5146, __VMLINUX_SYMBOL_STR(wl1271_format_buffer) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3b60840f, __VMLINUX_SYMBOL_STR(wl1271_debugfs_update_stats) },
	{ 0x6c3a63cd, __VMLINUX_SYMBOL_STR(wlcore_set_scan_chan_params) },
	{ 0x646f3741, __VMLINUX_SYMBOL_STR(wlcore_boot_run_firmware) },
	{ 0x41011726, __VMLINUX_SYMBOL_STR(wlcore_translate_addr) },
	{ 0x12ba6a99, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_ssid_list) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xa30e6bb0, __VMLINUX_SYMBOL_STR(wlcore_event_roc_complete) },
	{ 0x36cf4f03, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xd9ef669d, __VMLINUX_SYMBOL_STR(wl1271_cmd_send) },
	{ 0x42e42777, __VMLINUX_SYMBOL_STR(wl1271_tx_min_rate_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wlcore,mac80211";

MODULE_ALIAS("platform:wl12xx");
