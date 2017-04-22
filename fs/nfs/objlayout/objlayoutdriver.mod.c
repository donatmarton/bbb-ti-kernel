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
	{ 0x981339cc, __VMLINUX_SYMBOL_STR(pnfs_unregister_layoutdriver) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x63b47b25, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_write) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7129e5f8, __VMLINUX_SYMBOL_STR(hex_asc) },
	{ 0xaf5bf6ef, __VMLINUX_SYMBOL_STR(nfs_debug) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x373de640, __VMLINUX_SYMBOL_STR(ore_read) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xaaa14361, __VMLINUX_SYMBOL_STR(nfs_dreq_bytes_left) },
	{ 0x292db41e, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xc72f6987, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0xc0ebf593, __VMLINUX_SYMBOL_STR(pnfs_ld_write_done) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x719cf652, __VMLINUX_SYMBOL_STR(ore_put_io_state) },
	{ 0xddfee4dd, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xbef0a13a, __VMLINUX_SYMBOL_STR(ore_write) },
	{ 0xca6ef829, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0x567f6332, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_test) },
	{ 0x5b110496, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x9a24ff4c, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_cleanup) },
	{ 0xc082655a, __VMLINUX_SYMBOL_STR(osduld_info_lookup) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x68080d04, __VMLINUX_SYMBOL_STR(pnfs_generic_sync) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xffeb727, __VMLINUX_SYMBOL_STR(ore_check_io) },
	{ 0x6968edcb, __VMLINUX_SYMBOL_STR(nfs4_find_get_deviceid) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xbee764fd, __VMLINUX_SYMBOL_STR(xdr_init_decode) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xc5fdef94, __VMLINUX_SYMBOL_STR(call_usermodehelper) },
	{ 0xbeed5ae8, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0xf69ee7fe, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x52d09f74, __VMLINUX_SYMBOL_STR(nfs4_put_deviceid_node) },
	{ 0x28806871, __VMLINUX_SYMBOL_STR(ore_verify_layout) },
	{ 0x9f9d0265, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x40816980, __VMLINUX_SYMBOL_STR(osduld_put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xba8bb333, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x8f7a6c9, __VMLINUX_SYMBOL_STR(empty_zero_page) },
	{ 0x8f5a84ce, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_readpages) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x65994f1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque_fixed) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x3c254029, __VMLINUX_SYMBOL_STR(nfs_pgio_current_mirror) },
	{ 0xe617511c, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_writepages) },
	{ 0xdc5ffdf2, __VMLINUX_SYMBOL_STR(ore_get_rw_state) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1fd6f38c, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_read) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x13b06a5f, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0x11e48144, __VMLINUX_SYMBOL_STR(nfs4_init_deviceid_node) },
	{ 0x4301b153, __VMLINUX_SYMBOL_STR(xdr_set_scratch_buffer) },
	{ 0x2bb0d707, __VMLINUX_SYMBOL_STR(pnfs_ld_read_done) },
	{ 0x2ef3e65f, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0xca016137, __VMLINUX_SYMBOL_STR(pnfs_register_layoutdriver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libore,osd";

