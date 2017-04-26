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
	{ 0x674702b0, __VMLINUX_SYMBOL_STR(xt_unregister_target) },
	{ 0xe0ed6ff, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x8b078e5c, __VMLINUX_SYMBOL_STR(xt_register_target) },
	{ 0x98c74f45, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x1d8f4c65, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x22034d95, __VMLINUX_SYMBOL_STR(nf_ct_seqadj_init) },
	{ 0x17a99baf, __VMLINUX_SYMBOL_STR(synproxy_tstamp_adjust) },
	{ 0xf4ea6535, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0x90298227, __VMLINUX_SYMBOL_STR(synproxy_init_timestamp_cookie) },
	{ 0x883c2740, __VMLINUX_SYMBOL_STR(__cookie_v6_init_sequence) },
	{ 0x372da3af, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x4efe72e, __VMLINUX_SYMBOL_STR(synproxy_parse_options) },
	{ 0x2e6ee994, __VMLINUX_SYMBOL_STR(nf_ip6_checksum) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xef7db50c, __VMLINUX_SYMBOL_STR(synproxy_net_id) },
	{ 0x11a006b5, __VMLINUX_SYMBOL_STR(synproxy_check_timestamp_cookie) },
	{ 0x8841d39b, __VMLINUX_SYMBOL_STR(synproxy_build_options) },
	{ 0xc2102972, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xb42e336a, __VMLINUX_SYMBOL_STR(synproxy_options_size) },
	{ 0x9973add9, __VMLINUX_SYMBOL_STR(__cookie_v6_check) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bb9c51b, __VMLINUX_SYMBOL_STR(ip6_local_out) },
	{ 0x7f843085, __VMLINUX_SYMBOL_STR(xfrm_lookup) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x86253b33, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x9615a4fb, __VMLINUX_SYMBOL_STR(ip6_route_output_flags) },
	{ 0xb0b4d158, __VMLINUX_SYMBOL_STR(security_skb_classify_flow) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x44da5d0f, __VMLINUX_SYMBOL_STR(__csum_ipv6_magic) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xfe8e1ccd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x78f9b710, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_try_module_get) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb602c57e, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_module_put) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_conntrack,nf_synproxy_core";

