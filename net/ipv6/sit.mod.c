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
	{ 0xd8515446, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0xa57b02d8, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xe281cc01, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0x8abd99cd, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x985c2876, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x27652ab2, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_register) },
	{ 0xce21811a, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xe24b0875, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xd50b8551, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_deregister) },
	{ 0x3f1355d5, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x5c54b7e6, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x796fdb98, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0x809e5118, __VMLINUX_SYMBOL_STR(ip_tunnel_encap) },
	{ 0x1d8f4c65, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x2c3cd85d, __VMLINUX_SYMBOL_STR(skb_set_owner_w) },
	{ 0x8b68dc5e, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x4e5b6322, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0x624399c3, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0x93362b6, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xa9604cf3, __VMLINUX_SYMBOL_STR(ipv6_chk_prefix) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa9309289, __VMLINUX_SYMBOL_STR(ipv6_chk_custom_prefix) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x1030b539, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x6c209eab, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x63fda361, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x7e5ef3ad, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_setup) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x3835e6a1, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x7d63a635, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xa3617243, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0xeacf846a, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x6d57b2a9, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0xbe326c92, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x8122d0da, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9047332b, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x77833037, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0xaf695f7, __VMLINUX_SYMBOL_STR(rt6_lookup) },
	{ 0x43102a32, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xd1a46981, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x4819f26a, __VMLINUX_SYMBOL_STR(netdev_state_change) },
	{ 0xc366d1f9, __VMLINUX_SYMBOL_STR(ip_tunnel_dst_reset_all) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0xdb70ffac, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x86253b33, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x6c3b0666, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xbe43413c, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x823882eb, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,tunnel4";

