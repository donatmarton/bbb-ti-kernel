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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xed22c62d, __VMLINUX_SYMBOL_STR(nf_ct_nat_ext_add) },
	{ 0x390b1104, __VMLINUX_SYMBOL_STR(nf_ct_kill_acct) },
	{ 0xf2f91462, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x34995664, __VMLINUX_SYMBOL_STR(nf_nat_used_tuple) },
	{ 0x69c03fc5, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xc5809b1d, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_register) },
	{ 0x4f495d7f, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace4) },
	{ 0xd03c7700, __VMLINUX_SYMBOL_STR(secure_ipv4_port_ephemeral) },
	{ 0x79ec2062, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0xd29cf52e, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0xd9bae4b, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_nlattr_to_range) },
	{ 0xaff2608a, __VMLINUX_SYMBOL_STR(ip_route_me_harder) },
	{ 0x4eb32853, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_unregister) },
	{ 0x9b1e0c0e, __VMLINUX_SYMBOL_STR(nf_xfrm_me_harder) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4cf6d69a, __VMLINUX_SYMBOL_STR(nf_nat_packet) },
	{ 0xc5d696e8, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x5d57f24d, __VMLINUX_SYMBOL_STR(nf_nat_l3proto_unregister) },
	{ 0xf19e7e2, __VMLINUX_SYMBOL_STR(nf_nat_l3proto_register) },
	{ 0xf71c4548, __VMLINUX_SYMBOL_STR(__nf_nat_l4proto_find) },
	{ 0x35e9fa37, __VMLINUX_SYMBOL_STR(nf_nat_alloc_null_binding) },
	{ 0x90ff6c9f, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuplepr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat,nf_conntrack";

