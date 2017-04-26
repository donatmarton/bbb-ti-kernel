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
	{ 0x45072cd, __VMLINUX_SYMBOL_STR(nf_ct_port_nla_policy) },
	{ 0x3f5b1415, __VMLINUX_SYMBOL_STR(nf_ct_port_nlattr_to_tuple) },
	{ 0x62813e5c, __VMLINUX_SYMBOL_STR(nf_ct_port_nlattr_tuple_size) },
	{ 0xdc3715db, __VMLINUX_SYMBOL_STR(nf_ct_port_tuple_to_nlattr) },
	{ 0x1851151c, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x701d2014, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x95f58b2d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x1b501c04, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_unregister) },
	{ 0xec57868c, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_register) },
	{ 0xb99f0242, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcf8920eb, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_register) },
	{ 0x701a9a7c, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_unregister) },
	{ 0xe4321b90, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0xcbc2381b, __VMLINUX_SYMBOL_STR(__nf_ct_kill_acct) },
	{ 0x3c10e5aa, __VMLINUX_SYMBOL_STR(nf_afinfo) },
	{ 0x1701f23f, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0x372da3af, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xe6657df, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xea054b22, __VMLINUX_SYMBOL_STR(nla_policy_len) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x55cf3589, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";

