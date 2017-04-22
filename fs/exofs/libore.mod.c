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
	{ 0x9cef51a8, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd599350a, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf1deabf2, __VMLINUX_SYMBOL_STR(div64_u64) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xf54bd49b, __VMLINUX_SYMBOL_STR(lcm) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x820887fc, __VMLINUX_SYMBOL_STR(osd_req_read) },
	{ 0xb39df327, __VMLINUX_SYMBOL_STR(osd_req_decode_get_attr_list) },
	{ 0xddfee4dd, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x61bf95d5, __VMLINUX_SYMBOL_STR(osd_req_remove_object) },
	{ 0xd34ff91e, __VMLINUX_SYMBOL_STR(osd_req_read_sg) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x49163ab3, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9d000a45, __VMLINUX_SYMBOL_STR(osd_req_get_attributes) },
	{ 0xc8ac978a, __VMLINUX_SYMBOL_STR(osd_req_write_kern) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x86855d1b, __VMLINUX_SYMBOL_STR(osd_finalize_request) },
	{ 0x25b1d314, __VMLINUX_SYMBOL_STR(osd_req_add_get_attr_list) },
	{ 0xf69ee7fe, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xc4105487, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x9f9d0265, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x52e13eea, __VMLINUX_SYMBOL_STR(async_xor) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8cc9de2b, __VMLINUX_SYMBOL_STR(osd_start_request) },
	{ 0xabc59a9a, __VMLINUX_SYMBOL_STR(osd_end_request) },
	{ 0x5b4c3e50, __VMLINUX_SYMBOL_STR(osd_execute_request_async) },
	{ 0x57b53f6f, __VMLINUX_SYMBOL_STR(osd_req_create_object) },
	{ 0x649d435d, __VMLINUX_SYMBOL_STR(osd_req_decode_sense_full) },
	{ 0x8934f1cc, __VMLINUX_SYMBOL_STR(osd_req_set_attributes) },
	{ 0x352d42e5, __VMLINUX_SYMBOL_STR(bio_clone_bioset) },
	{ 0xfc5f9fe3, __VMLINUX_SYMBOL_STR(async_gen_syndrome) },
	{ 0xce589a77, __VMLINUX_SYMBOL_STR(osd_req_add_set_attr_list) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb8b1205f, __VMLINUX_SYMBOL_STR(osd_req_write) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xaecf5bc2, __VMLINUX_SYMBOL_STR(bio_add_pc_page) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xe9785bb8, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libosd,async_xor,async_pq";

