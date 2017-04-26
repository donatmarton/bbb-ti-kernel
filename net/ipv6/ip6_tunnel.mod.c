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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x77833037, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0x1d9ce41c, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_deregister) },
	{ 0xce21811a, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7fcd8600, __VMLINUX_SYMBOL_STR(ipv6_chk_addr) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x86253b33, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x7b0c0a5a, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0xd1a46981, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xa57b02d8, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x2c3cd85d, __VMLINUX_SYMBOL_STR(skb_set_owner_w) },
	{ 0x4e5b6322, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8b68dc5e, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0xec4f6b6a, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x1030b539, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x9047332b, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xe24b0875, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x99591a7a, __VMLINUX_SYMBOL_STR(ipv6_ext_hdr) },
	{ 0x5c54b7e6, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0xbe43413c, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x63fda361, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x8286a48, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x294401b2, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x43102a32, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x3f1355d5, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x6c209eab, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0x8ab0dbc8, __VMLINUX_SYMBOL_STR(ipv6_push_nfrag_opts) },
	{ 0xe57a5790, __VMLINUX_SYMBOL_STR(ip_route_input_noref) },
	{ 0x9615a4fb, __VMLINUX_SYMBOL_STR(ip6_route_output_flags) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3835e6a1, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xf8efb3d2, __VMLINUX_SYMBOL_STR(__get_hash_from_flowi6) },
	{ 0x4819f26a, __VMLINUX_SYMBOL_STR(netdev_state_change) },
	{ 0x823882eb, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x6c3b0666, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xeacf846a, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0xaf695f7, __VMLINUX_SYMBOL_STR(rt6_lookup) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x985c2876, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x3bb9c51b, __VMLINUX_SYMBOL_STR(ip6_local_out) },
	{ 0x1d8f4c65, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x82031350, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_register) },
	{ 0x7f843085, __VMLINUX_SYMBOL_STR(xfrm_lookup) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tunnel6";

