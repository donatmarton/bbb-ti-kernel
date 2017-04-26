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
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xbfdf3fd4, __VMLINUX_SYMBOL_STR(blk_rq_set_block_pc) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd397e2e2, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x189c3a74, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x16188c6b, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0x6a2b7e3a, __VMLINUX_SYMBOL_STR(blk_make_request) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x48e89e2e, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0xbd73db98, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x70f8d9f0, __VMLINUX_SYMBOL_STR(blk_rq_map_kern) },
	{ 0xc2acc033, __VMLINUX_SYMBOL_STR(hex_dump_to_buffer) },
	{ 0xd520751a, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0xf5b075c7, __VMLINUX_SYMBOL_STR(bio_map_kern) },
	{ 0x33b6f9e1, __VMLINUX_SYMBOL_STR(blk_execute_rq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xae8d4ab5, __VMLINUX_SYMBOL_STR(blk_end_request) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xc7a41be6, __VMLINUX_SYMBOL_STR(bio_add_pc_page) },
	{ 0x98ddc519, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0xb859f38b, __VMLINUX_SYMBOL_STR(krealloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

