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
	{ 0x71997d11, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0xa63f3ef6, __VMLINUX_SYMBOL_STR(metadata_dst_alloc) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xef1d2a9c, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x782f45ec, __VMLINUX_SYMBOL_STR(kernel_connect) },
	{ 0x796fdb98, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0x92f19c62, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x99517682, __VMLINUX_SYMBOL_STR(udp_encap_enable) },
	{ 0x30d4b430, __VMLINUX_SYMBOL_STR(ipv6_stub) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd82b0a59, __VMLINUX_SYMBOL_STR(udp_set_csum) },
	{ 0x3039633a, __VMLINUX_SYMBOL_STR(kernel_bind) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

