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
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x21d3aba9, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0xa2d6ef9a, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0x90de740d, __VMLINUX_SYMBOL_STR(nat_q931_hook) },
	{ 0x8b9f4b3, __VMLINUX_SYMBOL_STR(nat_callforwarding_hook) },
	{ 0xddb4497b, __VMLINUX_SYMBOL_STR(nat_h245_hook) },
	{ 0xd7396e0c, __VMLINUX_SYMBOL_STR(nat_t120_hook) },
	{ 0x71a9f458, __VMLINUX_SYMBOL_STR(nat_rtp_rtcp_hook) },
	{ 0xe616e2e3, __VMLINUX_SYMBOL_STR(set_ras_addr_hook) },
	{ 0x529f3b3e, __VMLINUX_SYMBOL_STR(set_sig_addr_hook) },
	{ 0x9156a241, __VMLINUX_SYMBOL_STR(set_h225_addr_hook) },
	{ 0xcf7971a0, __VMLINUX_SYMBOL_STR(set_h245_addr_hook) },
	{ 0x63f83f6b, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0x69c03fc5, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x150fe18d, __VMLINUX_SYMBOL_STR(get_h225_addr) },
	{ 0xe7f50803, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x3f0b7517, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x4a14dac2, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0x43aa03ac, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0xfea4bc64, __VMLINUX_SYMBOL_STR(nf_nat_follow_master) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4fec9cf5, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_h323,nf_nat";

