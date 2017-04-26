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
	{ 0x9475e031, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0x2803bb96, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0x6b6c3d10, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0xa03c65b3, __VMLINUX_SYMBOL_STR(__inet_lookup_listener) },
	{ 0x62bd6e63, __VMLINUX_SYMBOL_STR(__inet_lookup_established) },
	{ 0xde44b037, __VMLINUX_SYMBOL_STR(udp4_lib_lookup) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9f414cf0, __VMLINUX_SYMBOL_STR(inet6_lookup_listener) },
	{ 0xbd392c2a, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x10b6bd66, __VMLINUX_SYMBOL_STR(inet_twsk_deschedule_put) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x39f49742, __VMLINUX_SYMBOL_STR(__inet6_lookup_established) },
	{ 0x5c4f7f16, __VMLINUX_SYMBOL_STR(tcp_hashinfo) },
	{ 0x2f5ad43d, __VMLINUX_SYMBOL_STR(inet_twsk_put) },
	{ 0x734426fa, __VMLINUX_SYMBOL_STR(sock_edemux) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x372da3af, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xcd20df91, __VMLINUX_SYMBOL_STR(udp6_lib_lookup) },
	{ 0xec2c8817, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb207999e, __VMLINUX_SYMBOL_STR(sock_gen_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_defrag_ipv6,nf_defrag_ipv4";

