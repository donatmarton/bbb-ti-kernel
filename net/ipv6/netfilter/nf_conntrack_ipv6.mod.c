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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x9916caba, __VMLINUX_SYMBOL_STR(nf_conntrack_in) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe4321b90, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0xcf8920eb, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_register) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0x8258b9a5, __VMLINUX_SYMBOL_STR(nf_ct_get_tuplepr) },
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0xe6657df, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x212f72f8, __VMLINUX_SYMBOL_STR(nf_ct_deliver_cached_events) },
	{ 0xea054b22, __VMLINUX_SYMBOL_STR(nla_policy_len) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x1701f23f, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x1b501c04, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_unregister) },
	{ 0x95f58b2d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x91fad5e, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuple) },
	{ 0xb3cca044, __VMLINUX_SYMBOL_STR(__nf_conntrack_confirm) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x701a9a7c, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_unregister) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xec57868c, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_register) },
	{ 0x733b3f19, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_unregister) },
	{ 0xe0ed6ff, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xf4ea6535, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6e224a7a, __VMLINUX_SYMBOL_STR(need_conntrack) },
	{ 0xee9e798b, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0x625e304b, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_tcp6) },
	{ 0x5b53fad0, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_register) },
	{ 0xb99f0242, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xeb7863a3, __VMLINUX_SYMBOL_STR(nf_ct_seq_adjust) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x9b130661, __VMLINUX_SYMBOL_STR(nf_conntrack_untracked) },
	{ 0x98c74f45, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0xa1a0c3c5, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_unregister) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x815c6d1a, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0x1740cc72, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_udp6) },
	{ 0x701d2014, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x372da3af, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x2e6ee994, __VMLINUX_SYMBOL_STR(nf_ip6_checksum) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xf82fb892, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_register) },
	{ 0xae180683, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0xbd057364, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_defrag_ipv6";

