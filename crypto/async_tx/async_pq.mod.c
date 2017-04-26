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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x89cf4c4a, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xb0d904b7, __VMLINUX_SYMBOL_STR(raid6_empty_zero_page) },
	{ 0x6aa005e8, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x492621b9, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x68da5ef7, __VMLINUX_SYMBOL_STR(dmaengine_unmap_put) },
	{ 0xd4cb6873, __VMLINUX_SYMBOL_STR(raid6_call) },
	{ 0x272a0df0, __VMLINUX_SYMBOL_STR(async_tx_submit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x7c0dee45, __VMLINUX_SYMBOL_STR(dmaengine_get_unmap_data) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x6ae0f10b, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xc7a2028d, __VMLINUX_SYMBOL_STR(__async_tx_find_channel) },
	{ 0x7b80c189, __VMLINUX_SYMBOL_STR(async_xor) },
	{ 0x3fd16ffd, __VMLINUX_SYMBOL_STR(async_tx_quiesce) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x15fe0cd3, __VMLINUX_SYMBOL_STR(raid6_gfexp) },
	{ 0x4d265394, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=async_tx,async_xor";

