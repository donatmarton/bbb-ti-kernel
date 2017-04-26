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
	{ 0x8af622fe, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x29923658, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x6ae0f10b, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3f33d675, __VMLINUX_SYMBOL_STR(bpf_prog_destroy) },
	{ 0x81e6ed89, __VMLINUX_SYMBOL_STR(bpf_prog_free) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x4a211dfd, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6be960f4, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x27ca73dd, __VMLINUX_SYMBOL_STR(skb_add_rx_frag) },
	{ 0x82bf6794, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0xd50d26aa, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0x492621b9, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xc2102972, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xf3428b75, __VMLINUX_SYMBOL_STR(bpf_prog_select_runtime) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x96c050ba, __VMLINUX_SYMBOL_STR(bpf_prog_alloc) },
	{ 0xa2ddba15, __VMLINUX_SYMBOL_STR(bpf_prog_create) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x33c7435c, __VMLINUX_SYMBOL_STR(prandom_u32_state) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x34a6fa23, __VMLINUX_SYMBOL_STR(__bpf_call_base) },
	{ 0x6f7e5c91, __VMLINUX_SYMBOL_STR(bpf_skb_vlan_pop_proto) },
	{ 0xe4c511c3, __VMLINUX_SYMBOL_STR(bpf_skb_vlan_push_proto) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

