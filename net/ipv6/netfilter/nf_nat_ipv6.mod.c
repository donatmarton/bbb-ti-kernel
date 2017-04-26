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
	{ 0x465cab34, __VMLINUX_SYMBOL_STR(secure_ipv6_port_ephemeral) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x55277108, __VMLINUX_SYMBOL_STR(nf_ct_nat_ext_add) },
	{ 0x86253b33, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2a8d2a8f, __VMLINUX_SYMBOL_STR(nf_nat_used_tuple) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x652f36ec, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_register) },
	{ 0x128c16ca, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace4) },
	{ 0xdc1b8a48, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace16) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xcbc2381b, __VMLINUX_SYMBOL_STR(__nf_ct_kill_acct) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xd9bae4b, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_nlattr_to_range) },
	{ 0x159b5e16, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_unregister) },
	{ 0x6959373c, __VMLINUX_SYMBOL_STR(nf_xfrm_me_harder) },
	{ 0xf4ea6535, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb208afd2, __VMLINUX_SYMBOL_STR(nf_nat_packet) },
	{ 0xb5137fe9, __VMLINUX_SYMBOL_STR(ip6_route_me_harder) },
	{ 0x44da5d0f, __VMLINUX_SYMBOL_STR(__csum_ipv6_magic) },
	{ 0x3a27f0a9, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x98550c53, __VMLINUX_SYMBOL_STR(nf_nat_l3proto_unregister) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0xf6b1610d, __VMLINUX_SYMBOL_STR(nf_nat_l3proto_register) },
	{ 0x53fbfd85, __VMLINUX_SYMBOL_STR(__nf_nat_l4proto_find) },
	{ 0x787c8e1a, __VMLINUX_SYMBOL_STR(nf_nat_alloc_null_binding) },
	{ 0x2e6ee994, __VMLINUX_SYMBOL_STR(nf_ip6_checksum) },
	{ 0x90ff6c9f, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuplepr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat,nf_conntrack";

