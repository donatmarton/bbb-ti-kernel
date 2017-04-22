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
	{ 0x5537670c, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x627edf8a, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0xfafaae5a, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0xf2f91462, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x1c38d274, __VMLINUX_SYMBOL_STR(metadata_dst_alloc) },
	{ 0x3ebeed45, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0xea9066df, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0xe59fc2d8, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x159332b9, __VMLINUX_SYMBOL_STR(__ip_tunnel_change_mtu) },
	{ 0x5788a263, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x4e76d51d, __VMLINUX_SYMBOL_STR(dst_cache_get_ip4) },
	{ 0xc93d3c71, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xd8ace26e, __VMLINUX_SYMBOL_STR(inetdev_by_index) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x2267043, __VMLINUX_SYMBOL_STR(__iptunnel_pull_header) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1c40f645, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0x5607c022, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0xd29cf52e, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x702e8c02, __VMLINUX_SYMBOL_STR(gre_add_protocol) },
	{ 0x47f4300c, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6c8b996e, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x810a2105, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0x535890a0, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x73ea6fe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xe8a750b4, __VMLINUX_SYMBOL_STR(gre_del_protocol) },
	{ 0xfdf8f58f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x878f21f3, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0xd92d9e5b, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x720ab939, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0x1302992, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0x9badcfb5, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x41370414, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xced96bad, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0x24c61a5, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0x15d9ce2e, __VMLINUX_SYMBOL_STR(rtnl_configure_link) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4a6761ad, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd6fb8b5d, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0xbe0577f5, __VMLINUX_SYMBOL_STR(ip_mc_inc_group) },
	{ 0xe41b0acf, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xe61bcaa3, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xa997c1f6, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0x66106837, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x58af3674, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x41c64bd1, __VMLINUX_SYMBOL_STR(rtnl_create_link) },
	{ 0x8441c6d0, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x579bc445, __VMLINUX_SYMBOL_STR(ip6_err_gen_icmpv6_unreach) },
	{ 0x1baff60f, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x9479c077, __VMLINUX_SYMBOL_STR(dst_cache_set_ip4) },
	{ 0x6db727c6, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_setup) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x997b2cbe, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x5f93c9c0, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xe936e217, __VMLINUX_SYMBOL_STR(ip_mc_dec_group) },
	{ 0xa5f23e9f, __VMLINUX_SYMBOL_STR(gre_parse_header) },
	{ 0x31127a3a, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,gre";

