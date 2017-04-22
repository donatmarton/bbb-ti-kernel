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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9ffa3a75, __VMLINUX_SYMBOL_STR(netdev_max_backlog) },
	{ 0x8b971b8b, __VMLINUX_SYMBOL_STR(gro_find_receive_by_type) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x627edf8a, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x7335fd62, __VMLINUX_SYMBOL_STR(udp_tunnel_notify_del_rx_port) },
	{ 0xcd13dc7c, __VMLINUX_SYMBOL_STR(ip_tunnel_metadata_cnt) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xf2f91462, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x351ab7d3, __VMLINUX_SYMBOL_STR(udp_tunnel_xmit_skb) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x720a23ea, __VMLINUX_SYMBOL_STR(dst_cache_set_ip6) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x286f77af, __VMLINUX_SYMBOL_STR(udp_tun_rx_dst) },
	{ 0x5788a263, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x4e76d51d, __VMLINUX_SYMBOL_STR(dst_cache_get_ip4) },
	{ 0x27e89d3f, __VMLINUX_SYMBOL_STR(dst_cache_get_ip6) },
	{ 0x895699ab, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0x9f4ddb2c, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x949e981b, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x452fd28e, __VMLINUX_SYMBOL_STR(udp_sock_create6) },
	{ 0xaeb6f8ce, __VMLINUX_SYMBOL_STR(setup_udp_tunnel_sock) },
	{ 0x143a1e84, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xec82b576, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x2267043, __VMLINUX_SYMBOL_STR(__iptunnel_pull_header) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x79a64de5, __VMLINUX_SYMBOL_STR(udp_tunnel_sock_release) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2cc44b15, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x30821c64, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x75d494e0, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xe26cf767, __VMLINUX_SYMBOL_STR(udp_tunnel_push_rx_port) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0x535890a0, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x73ea6fe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x6fb95e39, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x28a0e395, __VMLINUX_SYMBOL_STR(gro_find_complete_by_type) },
	{ 0x1e7a37c4, __VMLINUX_SYMBOL_STR(ipv6_stub) },
	{ 0xf371b6f6, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0x41370414, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x6c209eab, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0x15d9ce2e, __VMLINUX_SYMBOL_STR(rtnl_configure_link) },
	{ 0x1efa880, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0xe9474bde, __VMLINUX_SYMBOL_STR(dst_cache_init) },
	{ 0x13a3992b, __VMLINUX_SYMBOL_STR(udp_tunnel_notify_add_rx_port) },
	{ 0xa2f80617, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4a6761ad, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xada38766, __VMLINUX_SYMBOL_STR(dst_cache_destroy) },
	{ 0x7da4f3c2, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x77c29585, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x93ee206, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xe41b0acf, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xe61bcaa3, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x66106837, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x1176e07f, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x4c0e357a, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x58af3674, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x41c64bd1, __VMLINUX_SYMBOL_STR(rtnl_create_link) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x8441c6d0, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1baff60f, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xe54ee492, __VMLINUX_SYMBOL_STR(udp_tunnel6_xmit_skb) },
	{ 0x9479c077, __VMLINUX_SYMBOL_STR(dst_cache_set_ip4) },
	{ 0xbe338495, __VMLINUX_SYMBOL_STR(udp_sock_create4) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0xcb62ec7d, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x2abe8a25, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x5f93c9c0, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udp_tunnel,ip6_udp_tunnel";


MODULE_INFO(srcversion, "E27732EE8D9C9233E4A04EA");
