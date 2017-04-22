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
	{ 0x63f83f6b, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0xefe21d65, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb8eec98b, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xfa3fe5a9, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x52e2c4e3, __VMLINUX_SYMBOL_STR(nf_ct_helper_init) },
	{ 0x69c03fc5, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xf662005, __VMLINUX_SYMBOL_STR(nf_ct_expect_init) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf2575591, __VMLINUX_SYMBOL_STR(nf_conntrack_helpers_register) },
	{ 0xec82b576, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd97c066d, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0xf28b0078, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xe7f50803, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x5688ceb3, __VMLINUX_SYMBOL_STR(nf_conntrack_helpers_unregister) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x85825898, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x53611c1c, __VMLINUX_SYMBOL_STR(__nf_ct_expect_find) },
	{ 0xc2abd2fd, __VMLINUX_SYMBOL_STR(nf_conntrack_expect_lock) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0xaccabc6a, __VMLINUX_SYMBOL_STR(in4_pton) },
	{ 0xac20f43c, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0x75d3affc, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xe57878a1, __VMLINUX_SYMBOL_STR(in6_pton) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xa07b08c5, __VMLINUX_SYMBOL_STR(nf_ct_unlink_expect_report) },
	{ 0x5e2cca6d, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x23fa4443, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x3f0b7517, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";

