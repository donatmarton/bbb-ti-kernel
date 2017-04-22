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
	{ 0x5788a263, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xefe21d65, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xcbc15637, __VMLINUX_SYMBOL_STR(simple_attr_release) },
	{ 0x689a8ed3, __VMLINUX_SYMBOL_STR(simple_attr_write) },
	{ 0xb743dd09, __VMLINUX_SYMBOL_STR(simple_attr_read) },
	{ 0x1d810aa0, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x1637db1, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0x8441c6d0, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x5f93c9c0, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x3d8dc21b, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xdf54a8f7, __VMLINUX_SYMBOL_STR(netlink_unregister_notifier) },
	{ 0x6c8b996e, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x36cf4f03, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x7efb4de6, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x692f0b54, __VMLINUX_SYMBOL_STR(dev_alloc_name) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x702291be, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xaea45550, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0xfa599bb2, __VMLINUX_SYMBOL_STR(netlink_register_notifier) },
	{ 0xcc747815, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0xccd54680, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x837bc10d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x5537670c, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xc3b06f1b, __VMLINUX_SYMBOL_STR(skb_unlink) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x62b7d473, __VMLINUX_SYMBOL_STR(ieee80211_tx_status_irqsafe) },
	{ 0xe0498488, __VMLINUX_SYMBOL_STR(ieee80211_probereq_get) },
	{ 0xb3c84c90, __VMLINUX_SYMBOL_STR(ieee80211_csa_finish) },
	{ 0xa3ab1cef, __VMLINUX_SYMBOL_STR(ieee80211_csa_is_complete) },
	{ 0x262dfef8, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x1a31cf0d, __VMLINUX_SYMBOL_STR(ieee80211_get_tx_rates) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xa992c0c4, __VMLINUX_SYMBOL_STR(tasklet_hrtimer_init) },
	{ 0x40f24b28, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x5d443c09, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xbf268559, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x5ab4c703, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x17df4fb3, __VMLINUX_SYMBOL_STR(wiphy_apply_custom_regulatory) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x3dc83962, __VMLINUX_SYMBOL_STR(device_bind_driver) },
	{ 0xd25c89ea, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x68447024, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x1fc4f4fe, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x68fb1747, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x4d72b5a7, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xda84ea7a, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0x56c3dcf, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xa23f1c57, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xdea90712, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0xe84eb1ff, __VMLINUX_SYMBOL_STR(genl_notify) },
	{ 0x71f7577d, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x8a1eef06, __VMLINUX_SYMBOL_STR(ieee80211_ready_on_channel) },
	{ 0x1ff82a25, __VMLINUX_SYMBOL_STR(ieee80211_remain_on_channel_expired) },
	{ 0xb5df5137, __VMLINUX_SYMBOL_STR(cfg80211_vendor_cmd_reply) },
	{ 0x71324f04, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_reply_skb) },
	{ 0x43acec8c, __VMLINUX_SYMBOL_STR(__cfg80211_send_event_skb) },
	{ 0xb1ab215e, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_event_skb) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xf965f0ac, __VMLINUX_SYMBOL_STR(ieee80211_radar_detected) },
	{ 0x325a7389, __VMLINUX_SYMBOL_STR(simple_attr_open) },
	{ 0x9cfd625d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9f9d0265, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xd0cba326, __VMLINUX_SYMBOL_STR(skb_add_rx_frag) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x292db41e, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x6c119f4d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xddfee4dd, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xf69ee7fe, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xf2f91462, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x5bd4e33a, __VMLINUX_SYMBOL_STR(__secpath_destroy) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xc38ec8ae, __VMLINUX_SYMBOL_STR(ieee80211_rx_irqsafe) },
	{ 0x21e66d84, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4a6761ad, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x839a39ba, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xeaa0c4ba, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x6d2fc5a6, __VMLINUX_SYMBOL_STR(net_namespace_list) },
	{ 0x3e8ff8ef, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0x73ea6fe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x59a64ca6, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0x2005e93f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xf2177826, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0xd5a5640, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x143a1e84, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xfdf8f58f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x1f19afd4, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x11025677, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x9955a327, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0xad36366e, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0x86e76ee, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0x10b35af4, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfd5989cb, __VMLINUX_SYMBOL_STR(ieee80211_scan_completed) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xbdd44e49, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa0744ea9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1c1e6de, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xca3df0a2, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe61bcaa3, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x535890a0, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xcb62ec7d, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211";

