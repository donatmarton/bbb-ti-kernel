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
	{ 0x17ca1ba2, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0xe281cc01, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0x8abd99cd, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0xe3df0321, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0xe13fcd1f, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0x3f1355d5, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xe24b0875, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xabfcc0a2, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0x985c2876, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x6e0ef87f, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0xce21811a, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x216dfa5c, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xccba1257, __VMLINUX_SYMBOL_STR(xfrm_garbage_collect) },
	{ 0xd17f7d57, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0x951e9022, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0xeacf846a, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x8122d0da, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0xb2fb2ea5, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xbe326c92, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0xdd0d5c7d, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xf610c7de, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xa49637f7, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xec4f6b6a, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1d8f4c65, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x86253b33, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x7f843085, __VMLINUX_SYMBOL_STR(xfrm_lookup) },
	{ 0xf0d1142b, __VMLINUX_SYMBOL_STR(__xfrm_decode_session) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x8ca0f0ed, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x8a6b2fdc, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0x7f4df13d, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0xb4ba5e9d, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel";

