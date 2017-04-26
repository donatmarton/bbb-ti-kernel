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
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xce21811a, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0xc2c01528, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x3e40b3ae, __VMLINUX_SYMBOL_STR(udp_add_offload) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x86734dc1, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0xa5ea9ed2, __VMLINUX_SYMBOL_STR(inet6_offloads) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x18cf6166, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xc232e4e7, __VMLINUX_SYMBOL_STR(udp_sock_create6) },
	{ 0x9047332b, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xe5d8223b, __VMLINUX_SYMBOL_STR(udp_tunnel_sock_release) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f9b4d40, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_del_ops) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xe24b0875, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8286a48, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x99517682, __VMLINUX_SYMBOL_STR(udp_encap_enable) },
	{ 0xc9533946, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x81992dc0, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0xd6fca6e, __VMLINUX_SYMBOL_STR(udp_del_offload) },
	{ 0xc2102972, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x4c6348bb, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x303041c6, __VMLINUX_SYMBOL_STR(udp_flow_hashrnd) },
	{ 0x93362b6, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x30669e6f, __VMLINUX_SYMBOL_STR(inet_offloads) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd82b0a59, __VMLINUX_SYMBOL_STR(udp_set_csum) },
	{ 0x7b9701b7, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0x5af63240, __VMLINUX_SYMBOL_STR(udp_sock_create4) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x1c4fd211, __VMLINUX_SYMBOL_STR(inet_get_local_port_range) },
	{ 0xa36115ad, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_add_ops) },
	{ 0x691c5ce4, __VMLINUX_SYMBOL_STR(__skb_checksum_complete) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip6_udp_tunnel,udp_tunnel,ip_tunnel";

