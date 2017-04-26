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
	{ 0xa750da01, __VMLINUX_SYMBOL_STR(wlcore_boot_upload_nvs) },
	{ 0x53dff67d, __VMLINUX_SYMBOL_STR(wl12xx_debug_level) },
	{ 0xf1ae13e9, __VMLINUX_SYMBOL_STR(wlcore_set_key) },
	{ 0xb2eb2f19, __VMLINUX_SYMBOL_STR(wl1271_acx_init_mem_config) },
	{ 0x9404cae6, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x8cdce33c, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x946f87c3, __VMLINUX_SYMBOL_STR(wlcore_event_beacon_loss) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd665f0cc, __VMLINUX_SYMBOL_STR(wlcore_event_dummy_packet) },
	{ 0x5d7834a6, __VMLINUX_SYMBOL_STR(wlcore_event_inactive_sta) },
	{ 0xeec245eb, __VMLINUX_SYMBOL_STR(wlcore_event_ba_rx_constraint) },
	{ 0x767dbf74, __VMLINUX_SYMBOL_STR(wl1271_acx_pm_config) },
	{ 0xa4467c34, __VMLINUX_SYMBOL_STR(wlcore_calc_packet_alignment) },
	{ 0x6a08ff8f, __VMLINUX_SYMBOL_STR(wlcore_event_rssi_trigger) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xf9f941f4, __VMLINUX_SYMBOL_STR(wlcore_cmd_wait_for_event_or_timeout) },
	{ 0xd52ebb86, __VMLINUX_SYMBOL_STR(wlcore_probe) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x365c136d, __VMLINUX_SYMBOL_STR(wlcore_alloc_hw) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9590237e, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x82fe3045, __VMLINUX_SYMBOL_STR(wl1271_acx_set_ht_capabilities) },
	{ 0x4a4a4bd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x8c714a7, __VMLINUX_SYMBOL_STR(wl1271_cmd_configure) },
	{ 0x54614509, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x63bb9ac3, __VMLINUX_SYMBOL_STR(wl1271_cmd_data_path) },
	{ 0xcbeb4a66, __VMLINUX_SYMBOL_STR(wl12xx_acx_mem_cfg) },
	{ 0x98e68eca, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x51608b8e, __VMLINUX_SYMBOL_STR(wlcore_event_sched_scan_completed) },
	{ 0xa02dd543, __VMLINUX_SYMBOL_STR(wlcore_boot_upload_firmware) },
	{ 0x939aa678, __VMLINUX_SYMBOL_STR(wl1271_acx_sleep_auth) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xeb0674af, __VMLINUX_SYMBOL_STR(wlcore_set_partition) },
	{ 0xc1f3ab15, __VMLINUX_SYMBOL_STR(wlcore_enable_interrupts) },
	{ 0x159cd96e, __VMLINUX_SYMBOL_STR(wl1271_cmd_test) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x4f05d0c3, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0xa7921271, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x320ec863, __VMLINUX_SYMBOL_STR(wlcore_event_channel_switch) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27bc2ba0, __VMLINUX_SYMBOL_STR(wlcore_disable_interrupts) },
	{ 0xc871cdbd, __VMLINUX_SYMBOL_STR(wlcore_remove) },
	{ 0x230a6ff2, __VMLINUX_SYMBOL_STR(wlcore_event_max_tx_failure) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb118d4af, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_results) },
	{ 0x794e391d, __VMLINUX_SYMBOL_STR(wlcore_event_soft_gemini_sense) },
	{ 0x16da77f9, __VMLINUX_SYMBOL_STR(wlcore_free_hw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1bc4796f, __VMLINUX_SYMBOL_STR(wlcore_tx_complete) },
	{ 0x91da5146, __VMLINUX_SYMBOL_STR(wl1271_format_buffer) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xad3fb620, __VMLINUX_SYMBOL_STR(wl1271_debugfs_update_stats) },
	{ 0x16e1caf9, __VMLINUX_SYMBOL_STR(wlcore_set_scan_chan_params) },
	{ 0x1e3fb5db, __VMLINUX_SYMBOL_STR(wlcore_boot_run_firmware) },
	{ 0x363fbffa, __VMLINUX_SYMBOL_STR(wlcore_translate_addr) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x7e4e0fbf, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_ssid_list) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xa357402, __VMLINUX_SYMBOL_STR(wlcore_event_roc_complete) },
	{ 0xd945909, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xde767159, __VMLINUX_SYMBOL_STR(wl1271_cmd_send) },
	{ 0xbbfb3668, __VMLINUX_SYMBOL_STR(wl1271_tx_min_rate_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wlcore,mac80211";

MODULE_ALIAS("platform:wl12xx");
