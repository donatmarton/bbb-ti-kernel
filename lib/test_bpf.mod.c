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
	{ 0x5b110496, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x75d3affc, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xefe21d65, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xf69ee7fe, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6d2808a4, __VMLINUX_SYMBOL_STR(bpf_prog_destroy) },
	{ 0x957dbc34, __VMLINUX_SYMBOL_STR(bpf_prog_free) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x4a6761ad, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x9f9d0265, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xd0cba326, __VMLINUX_SYMBOL_STR(skb_add_rx_frag) },
	{ 0xbcff3d85, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0x2d41e8fa, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0xddfee4dd, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x2005e93f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x2397ea1d, __VMLINUX_SYMBOL_STR(bpf_prog_select_runtime) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x81e1a902, __VMLINUX_SYMBOL_STR(bpf_prog_alloc) },
	{ 0x19d293dd, __VMLINUX_SYMBOL_STR(bpf_prog_create) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x33c7435c, __VMLINUX_SYMBOL_STR(prandom_u32_state) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x34a6fa23, __VMLINUX_SYMBOL_STR(__bpf_call_base) },
	{ 0x31f03090, __VMLINUX_SYMBOL_STR(bpf_skb_vlan_pop_proto) },
	{ 0x939caf39, __VMLINUX_SYMBOL_STR(bpf_skb_vlan_push_proto) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

