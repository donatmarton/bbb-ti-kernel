#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2c197ea3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x77833037, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0x86253b33, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb0b4d158, __VMLINUX_SYMBOL_STR(security_skb_classify_flow) },
	{ 0x75dae000, __VMLINUX_SYMBOL_STR(nf_ct_attach) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc2102972, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x9615a4fb, __VMLINUX_SYMBOL_STR(ip6_route_output_flags) },
	{ 0xf4ea6535, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x44da5d0f, __VMLINUX_SYMBOL_STR(__csum_ipv6_magic) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x3bb9c51b, __VMLINUX_SYMBOL_STR(ip6_local_out) },
	{ 0x6c8f596, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0x58d260cf, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x7f843085, __VMLINUX_SYMBOL_STR(xfrm_lookup) },
	{ 0x372da3af, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x2e6ee994, __VMLINUX_SYMBOL_STR(nf_ip6_checksum) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

