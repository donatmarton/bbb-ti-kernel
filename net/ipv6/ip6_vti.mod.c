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
	{ 0xc300c346, __VMLINUX_SYMBOL_STR(ip6_tnl_get_link_net) },
	{ 0xa51c3189, __VMLINUX_SYMBOL_STR(ip6_tnl_get_iflink) },
	{ 0x8abd99cd, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x3f1355d5, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xe24b0875, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xdd33324d, __VMLINUX_SYMBOL_STR(xfrm6_protocol_deregister) },
	{ 0x985c2876, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x5a179619, __VMLINUX_SYMBOL_STR(xfrm6_protocol_register) },
	{ 0xce21811a, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x63fda361, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x364fefd, __VMLINUX_SYMBOL_STR(xfrm6_rcv) },
	{ 0xf9c655c1, __VMLINUX_SYMBOL_STR(ip6_tnl_rcv_ctl) },
	{ 0xeacf846a, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0xe66db42d, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0xb2fb2ea5, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xcab9e1ef, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0xdd0d5c7d, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x6c209eab, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0x77833037, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0x7b0c0a5a, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0xec4f6b6a, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0xfac559f2, __VMLINUX_SYMBOL_STR(ip6_tnl_xmit_ctl) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x86253b33, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x7f843085, __VMLINUX_SYMBOL_STR(xfrm_lookup) },
	{ 0xf0d1142b, __VMLINUX_SYMBOL_STR(__xfrm_decode_session) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x5c54b7e6, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x4819f26a, __VMLINUX_SYMBOL_STR(netdev_state_change) },
	{ 0x5dd1a618, __VMLINUX_SYMBOL_STR(ip6_tnl_dst_reset) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0xea56bf47, __VMLINUX_SYMBOL_STR(ip6_tnl_get_cap) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3835e6a1, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xbe43413c, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x7d63a635, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
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
"depends=ip6_tunnel";

