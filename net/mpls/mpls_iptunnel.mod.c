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
	{ 0x45fdb10c, __VMLINUX_SYMBOL_STR(lwtunnel_encap_del_ops) },
	{ 0x6a49a240, __VMLINUX_SYMBOL_STR(lwtunnel_encap_add_ops) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf67d707a, __VMLINUX_SYMBOL_STR(nla_get_labels) },
	{ 0x542eef40, __VMLINUX_SYMBOL_STR(lwtunnel_state_alloc) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xad3991b0, __VMLINUX_SYMBOL_STR(nla_put_labels) },
	{ 0x69c03fc5, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x4de277e4, __VMLINUX_SYMBOL_STR(neigh_xmit) },
	{ 0x4a6761ad, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xa26bd260, __VMLINUX_SYMBOL_STR(__skb_warn_lro_forwarding) },
	{ 0xfdf8f58f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe41b0acf, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xe5973da4, __VMLINUX_SYMBOL_STR(mpls_pkt_too_big) },
	{ 0xb5d21d7a, __VMLINUX_SYMBOL_STR(mpls_dev_mtu) },
	{ 0x57cbb896, __VMLINUX_SYMBOL_STR(mpls_output_possible) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mpls_router";

