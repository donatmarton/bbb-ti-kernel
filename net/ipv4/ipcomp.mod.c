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
	{ 0x951e9022, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0xe4c9af9c, __VMLINUX_SYMBOL_STR(xfrm4_rcv) },
	{ 0x1deb9d3a, __VMLINUX_SYMBOL_STR(ipcomp_output) },
	{ 0xe7e22446, __VMLINUX_SYMBOL_STR(ipcomp_input) },
	{ 0x1d7e28cc, __VMLINUX_SYMBOL_STR(ipcomp_destroy) },
	{ 0xabfcc0a2, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7442b8a2, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x6e0ef87f, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7ba54b9e, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x39409238, __VMLINUX_SYMBOL_STR(xfrm_state_insert) },
	{ 0x7fd0e44a, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0xd5fb323, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0xe53d4e1, __VMLINUX_SYMBOL_STR(ipcomp_init_state) },
	{ 0x8122d0da, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0xb2fb2ea5, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xbe326c92, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0xdd0d5c7d, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_ipcomp";

