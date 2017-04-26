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
	{ 0x8af622fe, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xa75f1fe2, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x327477f2, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x8208930c, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xdb20336a, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x9851ee6a, __VMLINUX_SYMBOL_STR(rndis_tx_fixup) },
	{ 0x54eeb3c, __VMLINUX_SYMBOL_STR(rndis_rx_fixup) },
	{ 0x33840972, __VMLINUX_SYMBOL_STR(rndis_status) },
	{ 0xbd041566, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0xb8ec1b03, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x18096457, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xa8f8b579, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0xea1124f6, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x20385fef, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x92f6a8bc, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0x8022335f, __VMLINUX_SYMBOL_STR(generic_rndis_bind) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x3cdb92b0, __VMLINUX_SYMBOL_STR(wiphy_new_nm) },
	{ 0xd9e787e1, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x169c80e1, __VMLINUX_SYMBOL_STR(usbnet_purge_paused_rxq) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0x46c4411c, __VMLINUX_SYMBOL_STR(cfg80211_cqm_rssi_notify) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x324976b, __VMLINUX_SYMBOL_STR(cfg80211_roamed) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6c8902d6, __VMLINUX_SYMBOL_STR(cfg80211_connect_result) },
	{ 0xd5926754, __VMLINUX_SYMBOL_STR(cfg80211_disconnected) },
	{ 0x38b6f297, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x9c5f0cc4, __VMLINUX_SYMBOL_STR(usbnet_resume_rx) },
	{ 0x3127a6aa, __VMLINUX_SYMBOL_STR(cfg80211_ibss_joined) },
	{ 0x8ca73395, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xd38ef112, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0x73c028c2, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0x1e185393, __VMLINUX_SYMBOL_STR(rndis_unbind) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xb859f38b, __VMLINUX_SYMBOL_STR(krealloc) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x6bf3c5f9, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0x915ca85a, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0xaf443553, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_data) },
	{ 0x2ab5bcbb, __VMLINUX_SYMBOL_STR(__ieee80211_get_channel) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xca2e290d, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xbfbf8133, __VMLINUX_SYMBOL_STR(rndis_command) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2a061cfa, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0x638d691, __VMLINUX_SYMBOL_STR(cfg80211_pmksa_candidate_notify) },
	{ 0x3feb7d4b, __VMLINUX_SYMBOL_STR(usbnet_pause_rx) },
	{ 0x87f51bbb, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0xa83aeacf, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,rndis_host,cfg80211";

MODULE_ALIAS("usb:v0411p00BCd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v050Dp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1799p011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0014d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0026d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0B05p1717d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0A5CpD11Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1690p0715d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p000Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp0111d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0411p004Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");
