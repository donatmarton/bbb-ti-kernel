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
	{ 0x7d63a635, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x18e60984, __VMLINUX_SYMBOL_STR(__do_once_start) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xcae75a4c, __VMLINUX_SYMBOL_STR(dev_forward_skb) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xa85075dd, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf68285c0, __VMLINUX_SYMBOL_STR(register_inetaddr_notifier) },
	{ 0x83ca041, __VMLINUX_SYMBOL_STR(ip_local_out) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x7892fb1b, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0xe05aa88f, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0x86253b33, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xd1a46981, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x60352082, __VMLINUX_SYMBOL_STR(register_inet6addr_notifier) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x9e62b14f, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0x9bdc26aa, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x26877e00, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x1030b539, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x9047332b, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x2fe252cc, __VMLINUX_SYMBOL_STR(unregister_inet6addr_notifier) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbe4c8b3b, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x762adcd0, __VMLINUX_SYMBOL_STR(__ethtool_get_settings) },
	{ 0xbe43413c, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xb020475, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x6a628a39, __VMLINUX_SYMBOL_STR(netif_stacked_transfer_operstate) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x43102a32, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x3f1355d5, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xdb70ffac, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0xfe029963, __VMLINUX_SYMBOL_STR(unregister_inetaddr_notifier) },
	{ 0x9615a4fb, __VMLINUX_SYMBOL_STR(ip6_route_output_flags) },
	{ 0xe4be6862, __VMLINUX_SYMBOL_STR(eth_header_cache_update) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf2034f93, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0x20b3d1f3, __VMLINUX_SYMBOL_STR(eth_header_parse) },
	{ 0x2fd85baf, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x1e579dc5, __VMLINUX_SYMBOL_STR(__list_add_rcu) },
	{ 0x86a2cd47, __VMLINUX_SYMBOL_STR(netdev_upper_dev_link) },
	{ 0xd9e787e1, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xdf103cf6, __VMLINUX_SYMBOL_STR(netdev_features_change) },
	{ 0xf24c3d4, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xb01e17ea, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x823882eb, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x6c3b0666, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x2efcaf50, __VMLINUX_SYMBOL_STR(eth_header_cache) },
	{ 0x985c2876, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x856c82d6, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0x6925b50f, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x3bb9c51b, __VMLINUX_SYMBOL_STR(ip6_local_out) },
	{ 0x1d8f4c65, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x58d260cf, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xf5ba0d93, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
	{ 0xd966ddc2, __VMLINUX_SYMBOL_STR(__do_once_done) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

