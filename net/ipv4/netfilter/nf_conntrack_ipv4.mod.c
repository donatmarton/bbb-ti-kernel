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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0xcadbf632, __VMLINUX_SYMBOL_STR(nf_conntrack_in) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xfa3fe5a9, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0x9dc9c078, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_register) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0x697f6d27, __VMLINUX_SYMBOL_STR(nf_ct_get_tuplepr) },
	{ 0x40a9317a, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x69c03fc5, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x34bb2a61, __VMLINUX_SYMBOL_STR(nf_conntrack_set_hashsize) },
	{ 0x5a223080, __VMLINUX_SYMBOL_STR(nf_ct_deliver_cached_events) },
	{ 0xea054b22, __VMLINUX_SYMBOL_STR(nla_policy_len) },
	{ 0x50d305a8, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_tcp4) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x79ec2062, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0xfe4a1eed, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x46a4ce71, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_unregister) },
	{ 0x30821c64, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xeae161b8, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuple) },
	{ 0x6d8df701, __VMLINUX_SYMBOL_STR(__nf_conntrack_confirm) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x53832322, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_unregister) },
	{ 0x73ea6fe7, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xc4461840, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_register) },
	{ 0x8ffe7e89, __VMLINUX_SYMBOL_STR(nf_conntrack_htable_size) },
	{ 0x58bed8cc, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_unregister) },
	{ 0x4a264252, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6e224a7a, __VMLINUX_SYMBOL_STR(need_conntrack) },
	{ 0xc004cbf8, __VMLINUX_SYMBOL_STR(param_get_uint) },
	{ 0xeb207d02, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0xb62ae493, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_register) },
	{ 0x93ee206, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x1cb75a7d, __VMLINUX_SYMBOL_STR(nf_ct_seq_adjust) },
	{ 0x6b6c3d10, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0xbcb5397e, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x3cc77e9, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_unregister) },
	{ 0xf7c2eaa1, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_udp4) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xbbb422c9, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0x9cf1b46, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x3f0b7517, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x2316c35a, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_register) },
	{ 0x94b59202, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x59f8bf1e, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_defrag_ipv4";

