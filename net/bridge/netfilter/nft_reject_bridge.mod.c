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
	{ 0xa2db3c7f, __VMLINUX_SYMBOL_STR(nft_reject_policy) },
	{ 0xf56690d1, __VMLINUX_SYMBOL_STR(nft_unregister_expr) },
	{ 0xd2e7f50e, __VMLINUX_SYMBOL_STR(nft_register_expr) },
	{ 0x1e6df6f3, __VMLINUX_SYMBOL_STR(nf_reject_ip6_tcphdr_put) },
	{ 0xc0b5f7e2, __VMLINUX_SYMBOL_STR(nf_reject_ip6_tcphdr_get) },
	{ 0xd5ba7e2a, __VMLINUX_SYMBOL_STR(nf_reject_ip_tcphdr_put) },
	{ 0xbb2e4927, __VMLINUX_SYMBOL_STR(nf_reject_ip_tcphdr_get) },
	{ 0xddf15889, __VMLINUX_SYMBOL_STR(nft_reject_icmp_code) },
	{ 0xf42bf09d, __VMLINUX_SYMBOL_STR(nft_bridge_ip6hdr_validate) },
	{ 0xe8cdab4e, __VMLINUX_SYMBOL_STR(nft_reject_icmpv6_code) },
	{ 0x44da5d0f, __VMLINUX_SYMBOL_STR(__csum_ipv6_magic) },
	{ 0x1b68f305, __VMLINUX_SYMBOL_STR(nf_reject_ip6hdr_put) },
	{ 0x2e6ee994, __VMLINUX_SYMBOL_STR(nf_ip6_checksum) },
	{ 0xf4ea6535, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0xa3ad16d2, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x9047332b, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x7e45b475, __VMLINUX_SYMBOL_STR(br_deliver) },
	{ 0x2124474, __VMLINUX_SYMBOL_STR(ip_send_check) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xc4edc41e, __VMLINUX_SYMBOL_STR(nf_reject_iphdr_put) },
	{ 0xf6388c56, __VMLINUX_SYMBOL_STR(sysctl_ip_default_ttl) },
	{ 0xc2102972, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xc417c5f4, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0xd0ba511a, __VMLINUX_SYMBOL_STR(nft_bridge_iphdr_validate) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x43102a32, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x8286a48, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5778f241, __VMLINUX_SYMBOL_STR(nft_chain_validate_hooks) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nft_reject,nf_tables,nf_reject_ipv6,nf_reject_ipv4,nf_tables_bridge,bridge";

