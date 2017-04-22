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
	{ 0xac4a2c47, __VMLINUX_SYMBOL_STR(xfrm6_rcv) },
	{ 0x3846fb1d, __VMLINUX_SYMBOL_STR(xfrm6_find_1stfragopt) },
	{ 0x7ac1f43e, __VMLINUX_SYMBOL_STR(ipcomp_output) },
	{ 0x94a8665a, __VMLINUX_SYMBOL_STR(ipcomp_input) },
	{ 0x1b091965, __VMLINUX_SYMBOL_STR(ipcomp_destroy) },
	{ 0x797cc82c, __VMLINUX_SYMBOL_STR(xfrm6_protocol_deregister) },
	{ 0xd2a0788d, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0xb4db73f4, __VMLINUX_SYMBOL_STR(xfrm6_protocol_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf241df7b, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x8d9fffba, __VMLINUX_SYMBOL_STR(xfrm_state_insert) },
	{ 0xd33c4cc9, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0xa778bd97, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_alloc_spi) },
	{ 0x91b9caf3, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0xb68e29d5, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_spi_lookup) },
	{ 0x9b1c3de3, __VMLINUX_SYMBOL_STR(ipcomp_init_state) },
	{ 0xe67ec118, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0xddf26646, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xa85ea72, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0xc786b4f8, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_ipcomp,xfrm6_tunnel";

