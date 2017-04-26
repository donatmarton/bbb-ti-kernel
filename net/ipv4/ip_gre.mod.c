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
	{ 0xce21811a, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8abd99cd, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0xe281cc01, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0x86253b33, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xa63f3ef6, __VMLINUX_SYMBOL_STR(metadata_dst_alloc) },
	{ 0x7b0c0a5a, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0x8122d0da, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0xf610c7de, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xff848ee3, __VMLINUX_SYMBOL_STR(__ip_tunnel_change_mtu) },
	{ 0xa57b02d8, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x624399c3, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3dee33, __VMLINUX_SYMBOL_STR(inetdev_by_index) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x9047332b, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8a6b2fdc, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0x17ca1ba2, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0x3ab00428, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x4c959e0f, __VMLINUX_SYMBOL_STR(gre_add_protocol) },
	{ 0x7f4df13d, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe24b0875, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xe13fcd1f, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0xbe43413c, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x893bf639, __VMLINUX_SYMBOL_STR(gre_del_protocol) },
	{ 0x8286a48, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x796fdb98, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0xd17f7d57, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xa49637f7, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0xd8515446, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x43102a32, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x3f1355d5, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x8ca0f0ed, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0xb4ba5e9d, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbe326c92, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x70e8af5e, __VMLINUX_SYMBOL_STR(ip_mc_inc_group) },
	{ 0x4c6348bb, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xf24c3d4, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x216dfa5c, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0x93362b6, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x6c3b0666, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x91e9637, __VMLINUX_SYMBOL_STR(rtnl_create_link) },
	{ 0xb8ec1b03, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x985c2876, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x6d57b2a9, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x7e5ef3ad, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_setup) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xe3df0321, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x18096457, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xe55412b4, __VMLINUX_SYMBOL_STR(ip_mc_dec_group) },
	{ 0x691c5ce4, __VMLINUX_SYMBOL_STR(__skb_checksum_complete) },
	{ 0xa3617243, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,gre";

