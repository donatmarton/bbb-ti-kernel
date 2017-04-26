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
	{ 0x1e558939, __VMLINUX_SYMBOL_STR(pnfs_unregister_layoutdriver) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x1b87c6f3, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_write) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7129e5f8, __VMLINUX_SYMBOL_STR(hex_asc) },
	{ 0xaf5bf6ef, __VMLINUX_SYMBOL_STR(nfs_debug) },
	{ 0xa76b61a5, __VMLINUX_SYMBOL_STR(ore_read) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xaaa14361, __VMLINUX_SYMBOL_STR(nfs_dreq_bytes_left) },
	{ 0x89cf4c4a, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xe88aed1e, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0x3d64be02, __VMLINUX_SYMBOL_STR(pnfs_ld_write_done) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x23021130, __VMLINUX_SYMBOL_STR(ore_put_io_state) },
	{ 0x492621b9, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x64df141, __VMLINUX_SYMBOL_STR(ore_write) },
	{ 0x34282d1b, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0xdd4071f6, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_test) },
	{ 0x8af622fe, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x589dd314, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_cleanup) },
	{ 0xc2c8c8e8, __VMLINUX_SYMBOL_STR(osduld_info_lookup) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xca419424, __VMLINUX_SYMBOL_STR(pnfs_generic_sync) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf8789e0, __VMLINUX_SYMBOL_STR(ore_check_io) },
	{ 0xc1822553, __VMLINUX_SYMBOL_STR(nfs4_find_get_deviceid) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x77ac0ad7, __VMLINUX_SYMBOL_STR(xdr_init_decode) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xc5fdef94, __VMLINUX_SYMBOL_STR(call_usermodehelper) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x9c318af3, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x6ae0f10b, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xc99f7876, __VMLINUX_SYMBOL_STR(nfs4_put_deviceid_node) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x28806871, __VMLINUX_SYMBOL_STR(ore_verify_layout) },
	{ 0x6be960f4, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x273befb1, __VMLINUX_SYMBOL_STR(osduld_put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2fd85baf, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xdd39a461, __VMLINUX_SYMBOL_STR(empty_zero_page) },
	{ 0x7872dac0, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_readpages) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x65994f1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque_fixed) },
	{ 0xd163663, __VMLINUX_SYMBOL_STR(nfs_pgio_current_mirror) },
	{ 0x1c07be0d, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_writepages) },
	{ 0x89dfe9fd, __VMLINUX_SYMBOL_STR(ore_get_rw_state) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x916ce37c, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_read) },
	{ 0x4d265394, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xa0e6167f, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x78944f28, __VMLINUX_SYMBOL_STR(nfs4_init_deviceid_node) },
	{ 0xe5676ca2, __VMLINUX_SYMBOL_STR(xdr_set_scratch_buffer) },
	{ 0x1da9443a, __VMLINUX_SYMBOL_STR(pnfs_ld_read_done) },
	{ 0xc2fb6809, __VMLINUX_SYMBOL_STR(pnfs_register_layoutdriver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libore,osd";

