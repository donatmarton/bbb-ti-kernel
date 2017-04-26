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
	{ 0x6a5d8cd0, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x365e9475, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0xe9679927, __VMLINUX_SYMBOL_STR(nf_nat_sip_hooks) },
	{ 0x3a27f0a9, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0xef873811, __VMLINUX_SYMBOL_STR(ct_sip_parse_numerical_param) },
	{ 0xe0d8d086, __VMLINUX_SYMBOL_STR(ct_sip_parse_address_param) },
	{ 0x5850d50d, __VMLINUX_SYMBOL_STR(ct_sip_parse_request) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x59db5267, __VMLINUX_SYMBOL_STR(ct_sip_parse_header_uri) },
	{ 0x7edfd7dd, __VMLINUX_SYMBOL_STR(nf_ct_seqadj_set) },
	{ 0xe8eb169f, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0xe0b469c5, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0x24f09db9, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x77a9b70f, __VMLINUX_SYMBOL_STR(ct_sip_get_header) },
	{ 0x33382ae6, __VMLINUX_SYMBOL_STR(ct_sip_get_sdp_header) },
	{ 0x90e79dfc, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0x4917a575, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf4db5ed9, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_sip,nf_nat";

