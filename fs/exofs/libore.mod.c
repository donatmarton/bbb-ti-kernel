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
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd397e2e2, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf1deabf2, __VMLINUX_SYMBOL_STR(div64_u64) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xf54bd49b, __VMLINUX_SYMBOL_STR(lcm) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x50faaadf, __VMLINUX_SYMBOL_STR(osd_req_read) },
	{ 0x9b4fb8b7, __VMLINUX_SYMBOL_STR(osd_req_decode_get_attr_list) },
	{ 0x492621b9, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x2904e75, __VMLINUX_SYMBOL_STR(osd_req_remove_object) },
	{ 0x79e1331a, __VMLINUX_SYMBOL_STR(osd_req_read_sg) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xd49bd803, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xd1a5deac, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9d27047d, __VMLINUX_SYMBOL_STR(osd_req_get_attributes) },
	{ 0xf82a9512, __VMLINUX_SYMBOL_STR(osd_req_write_kern) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x5203c6bf, __VMLINUX_SYMBOL_STR(osd_finalize_request) },
	{ 0xbbe0ec3b, __VMLINUX_SYMBOL_STR(osd_req_add_get_attr_list) },
	{ 0x6ae0f10b, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xbd73db98, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x6be960f4, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x7b80c189, __VMLINUX_SYMBOL_STR(async_xor) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5523720c, __VMLINUX_SYMBOL_STR(osd_start_request) },
	{ 0x60f632bc, __VMLINUX_SYMBOL_STR(osd_end_request) },
	{ 0x367457ea, __VMLINUX_SYMBOL_STR(osd_execute_request_async) },
	{ 0xde3a1875, __VMLINUX_SYMBOL_STR(osd_req_create_object) },
	{ 0x476fa0c6, __VMLINUX_SYMBOL_STR(osd_req_decode_sense_full) },
	{ 0xb2d80b86, __VMLINUX_SYMBOL_STR(osd_req_set_attributes) },
	{ 0x3e7d8653, __VMLINUX_SYMBOL_STR(bio_clone_bioset) },
	{ 0xf1821ba7, __VMLINUX_SYMBOL_STR(async_gen_syndrome) },
	{ 0x6eb2d930, __VMLINUX_SYMBOL_STR(osd_req_add_set_attr_list) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8036ecc6, __VMLINUX_SYMBOL_STR(osd_req_write) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x9cbcaf26, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xc7a41be6, __VMLINUX_SYMBOL_STR(bio_add_pc_page) },
	{ 0xb9a1aebe, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libosd,async_xor,async_pq";

