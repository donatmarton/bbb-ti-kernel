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
	{ 0x7efb4de6, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x18e60984, __VMLINUX_SYMBOL_STR(__do_once_start) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd6e6f05a, __VMLINUX_SYMBOL_STR(dev_forward_skb) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x732b8a82, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf68285c0, __VMLINUX_SYMBOL_STR(register_inetaddr_notifier) },
	{ 0x597ab492, __VMLINUX_SYMBOL_STR(ip_local_out) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x9970441d, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0x190d088, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0xf2f91462, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x3007ee30, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x60352082, __VMLINUX_SYMBOL_STR(register_inet6addr_notifier) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xb224b3ec, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0xe3c161d5, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x4a59f15e, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0x895699ab, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xe6e69b6c, __VMLINUX_SYMBOL_STR(_nf_register_hooks) },
	{ 0x143a1e84, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xec82b576, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x2fe252cc, __VMLINUX_SYMBOL_STR(unregister_inet6addr_notifier) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x2cc44b15, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xf5eebf14, __VMLINUX_SYMBOL_STR(__ethtool_get_link_ksettings) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x75d494e0, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x50c4ad99, __VMLINUX_SYMBOL_STR(_nf_unregister_hooks) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0x535890a0, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x73ea6fe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x5caebafe, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xb1be9c30, __VMLINUX_SYMBOL_STR(netif_stacked_transfer_operstate) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x9badcfb5, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x41370414, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x91a6cb5, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x1d39c06a, __VMLINUX_SYMBOL_STR(ip_route_input_noref) },
	{ 0xfe029963, __VMLINUX_SYMBOL_STR(unregister_inetaddr_notifier) },
	{ 0x356b0d80, __VMLINUX_SYMBOL_STR(ip6_route_output_flags) },
	{ 0xcb9f4b92, __VMLINUX_SYMBOL_STR(eth_header_cache_update) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5170cd3c, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0x5686f76e, __VMLINUX_SYMBOL_STR(eth_header_parse) },
	{ 0xba8bb333, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x4a6761ad, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x1e579dc5, __VMLINUX_SYMBOL_STR(__list_add_rcu) },
	{ 0x569de689, __VMLINUX_SYMBOL_STR(netdev_upper_dev_link) },
	{ 0x1c49fc83, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xcf83b528, __VMLINUX_SYMBOL_STR(netdev_features_change) },
	{ 0xe61bcaa3, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x98212134, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x1176e07f, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x4c0e357a, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x58af3674, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x2effbb98, __VMLINUX_SYMBOL_STR(eth_header_cache) },
	{ 0x1baff60f, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xbdd9a237, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0x4d73c532, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xeda5ce86, __VMLINUX_SYMBOL_STR(ip6_local_out) },
	{ 0xcb62ec7d, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x5b344826, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xbdc15b4, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
	{ 0x5a496855, __VMLINUX_SYMBOL_STR(ip6_route_input_lookup) },
	{ 0xd966ddc2, __VMLINUX_SYMBOL_STR(__do_once_done) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

