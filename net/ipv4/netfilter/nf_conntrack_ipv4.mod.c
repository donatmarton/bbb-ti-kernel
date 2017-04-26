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
	{ 0xe6fbe96e, __VMLINUX_SYMBOL_STR(proc_dointvec_minmax) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x9916caba, __VMLINUX_SYMBOL_STR(nf_conntrack_in) },
	{ 0xb5f9b0da, __VMLINUX_SYMBOL_STR(nf_conntrack_l3proto_generic) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe4321b90, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0xcf8920eb, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_register) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0x1851151c, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x8258b9a5, __VMLINUX_SYMBOL_STR(nf_ct_get_tuplepr) },
	{ 0xe6657df, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x687f0fc2, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xed7961c4, __VMLINUX_SYMBOL_STR(nf_conntrack_set_hashsize) },
	{ 0x212f72f8, __VMLINUX_SYMBOL_STR(nf_ct_deliver_cached_events) },
	{ 0x2fefcfbf, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xea054b22, __VMLINUX_SYMBOL_STR(nla_policy_len) },
	{ 0x506852c9, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_tcp4) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xc417c5f4, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0x1701f23f, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0x96ce9a9f, __VMLINUX_SYMBOL_STR(print_tuple) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1b501c04, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_unregister) },
	{ 0x95f58b2d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x91fad5e, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuple) },
	{ 0xb3cca044, __VMLINUX_SYMBOL_STR(__nf_conntrack_confirm) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x701a9a7c, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_unregister) },
	{ 0xc18ac88d, __VMLINUX_SYMBOL_STR(nf_ct_expect_hsize) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x9ad77d0d, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0xec57868c, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_register) },
	{ 0x568a1f51, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8ffe7e89, __VMLINUX_SYMBOL_STR(nf_conntrack_htable_size) },
	{ 0x733b3f19, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_unregister) },
	{ 0xe0ed6ff, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x67d8d35, __VMLINUX_SYMBOL_STR(security_release_secctx) },
	{ 0xefdd70ce, __VMLINUX_SYMBOL_STR(security_secid_to_secctx) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6e224a7a, __VMLINUX_SYMBOL_STR(need_conntrack) },
	{ 0x3bc7cc07, __VMLINUX_SYMBOL_STR(param_get_uint) },
	{ 0xee9e798b, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0x8df56d7, __VMLINUX_SYMBOL_STR(nf_ct_l3protos) },
	{ 0x5b53fad0, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_register) },
	{ 0xb99f0242, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xeb7863a3, __VMLINUX_SYMBOL_STR(nf_ct_seq_adjust) },
	{ 0xc9896c90, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x963de423, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc1fbfc0f, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x6b6c3d10, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0x98c74f45, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0xf38bcdf3, __VMLINUX_SYMBOL_STR(nf_conntrack_max) },
	{ 0xa1a0c3c5, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_unregister) },
	{ 0x2576aef0, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_udp4) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x815c6d1a, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x701d2014, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x372da3af, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x56a28a9e, __VMLINUX_SYMBOL_STR(seq_print_acct) },
	{ 0xf82fb892, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_register) },
	{ 0xae180683, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0xbd057364, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_defrag_ipv4";

