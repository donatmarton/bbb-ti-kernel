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
	{ 0xa2d6ef9a, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x21d3aba9, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0xfca615a2, __VMLINUX_SYMBOL_STR(nf_nat_sip_hooks) },
	{ 0xc5d696e8, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0x7b116ec4, __VMLINUX_SYMBOL_STR(ct_sip_parse_numerical_param) },
	{ 0xe7a49b9, __VMLINUX_SYMBOL_STR(ct_sip_parse_address_param) },
	{ 0xe76c544d, __VMLINUX_SYMBOL_STR(ct_sip_parse_request) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x5cd8d3bd, __VMLINUX_SYMBOL_STR(ct_sip_parse_header_uri) },
	{ 0xafabc28f, __VMLINUX_SYMBOL_STR(nf_ct_seqadj_set) },
	{ 0xac20f43c, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0x63f83f6b, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0xe7f50803, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x844a4ae8, __VMLINUX_SYMBOL_STR(ct_sip_get_header) },
	{ 0x2946fe14, __VMLINUX_SYMBOL_STR(ct_sip_get_sdp_header) },
	{ 0x4a14dac2, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0x43aa03ac, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4fec9cf5, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_sip,nf_nat";

