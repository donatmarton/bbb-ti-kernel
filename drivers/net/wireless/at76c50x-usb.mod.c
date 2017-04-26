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
	{ 0xd109e4f8, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xfcaca60a, __VMLINUX_SYMBOL_STR(led_trigger_unregister_simple) },
	{ 0x22ef151f, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x76d817, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x8da2ccde, __VMLINUX_SYMBOL_STR(led_trigger_register_simple) },
	{ 0x1cd1a26f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xb50de35f, __VMLINUX_SYMBOL_STR(ieee80211_scan_completed) },
	{ 0x41b18f6, __VMLINUX_SYMBOL_STR(led_trigger_event) },
	{ 0x8881268b, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x156633a, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x55da3d4e, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xe0ab6d16, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0xd8bdde0b, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x5ed56e18, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xd6efd600, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xa59a091d, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x198a4ccf, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0x8c8a5e28, __VMLINUX_SYMBOL_STR(ieee80211_tx_status_irqsafe) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x98e68eca, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0xdf6123a0, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0xa7921271, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xbab51ea8, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xcae4a978, __VMLINUX_SYMBOL_STR(ieee80211_rx_irqsafe) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0x7fe1a403, __VMLINUX_SYMBOL_STR(cfg80211_find_ie) },
	{ 0x43102a32, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xc84fc707, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xc4ad22c6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x18cf6166, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x8286a48, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x94e8602, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x92d08eb8, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe859d507, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0x4c8715ae, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x900f303a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x16b7c05d, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";

MODULE_ALIAS("usb:v03EBp7603d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0864p4100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B3Bp1612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p011Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0320d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D5CpA001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DDpFF31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p0200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0919d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0821d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7604d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055DpA000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0321d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v077Bp2219d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v077Bp2227d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0864p4102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p7605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp4102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p5743d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0506p0A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p001Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p3220d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp0032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DDpFF35d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap3501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D5CpA002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7606d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p0014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1915p2233d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12FDp1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp7613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p1020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7614d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7617d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp7615d*dc*dsc*dp*ic*isc*ip*in*");
