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
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9ffa3a75, __VMLINUX_SYMBOL_STR(netdev_max_backlog) },
	{ 0x33101fb3, __VMLINUX_SYMBOL_STR(gro_find_receive_by_type) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8abd99cd, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xcd13dc7c, __VMLINUX_SYMBOL_STR(ip_tunnel_metadata_cnt) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x86253b33, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x3e40b3ae, __VMLINUX_SYMBOL_STR(udp_add_offload) },
	{ 0xc8c526d7, __VMLINUX_SYMBOL_STR(udp_tunnel_xmit_skb) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x67c0e2f4, __VMLINUX_SYMBOL_STR(udp_tun_rx_dst) },
	{ 0xa57b02d8, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xec4f6b6a, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0x8d7c644e, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x87f51bbb, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xc232e4e7, __VMLINUX_SYMBOL_STR(udp_sock_create6) },
	{ 0x6962d8d3, __VMLINUX_SYMBOL_STR(setup_udp_tunnel_sock) },
	{ 0x1030b539, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x9047332b, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xe5d8223b, __VMLINUX_SYMBOL_STR(udp_tunnel_sock_release) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x95f58b2d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xf6388c56, __VMLINUX_SYMBOL_STR(sysctl_ip_default_ttl) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbe4c8b3b, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xbe43413c, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x2635c0e7, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x1adc0f, __VMLINUX_SYMBOL_STR(gro_find_complete_by_type) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x30d4b430, __VMLINUX_SYMBOL_STR(ipv6_stub) },
	{ 0x81992dc0, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0x3f1355d5, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x6c209eab, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0x53462309, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0xd6fca6e, __VMLINUX_SYMBOL_STR(udp_del_offload) },
	{ 0x7f64a438, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x1b2df43, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x11064f33, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xb99f0242, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x4c6348bb, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xf24c3d4, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x93362b6, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x823882eb, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x6c3b0666, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x91e9637, __VMLINUX_SYMBOL_STR(rtnl_create_link) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xb8ec1b03, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x985c2876, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x617d8beb, __VMLINUX_SYMBOL_STR(udp_tunnel6_xmit_skb) },
	{ 0x6d57b2a9, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0x5af63240, __VMLINUX_SYMBOL_STR(udp_sock_create4) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x1d8f4c65, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x6c8f596, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x18096457, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=udp_tunnel,ip6_udp_tunnel";


MODULE_INFO(srcversion, "755E729DBC895B02637BCB8");
