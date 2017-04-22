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
	{ 0x1fc4f4fe, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x91d6668b, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x767a75ff, __VMLINUX_SYMBOL_STR(device_add_disk) },
	{ 0xb745a827, __VMLINUX_SYMBOL_STR(blk_queue_write_cache) },
	{ 0x966d6b7, __VMLINUX_SYMBOL_STR(blk_queue_prep_rq) },
	{ 0x7012d061, __VMLINUX_SYMBOL_STR(blk_queue_start_tag) },
	{ 0x516ac208, __VMLINUX_SYMBOL_STR(blk_queue_stack_limits) },
	{ 0x85757f2a, __VMLINUX_SYMBOL_STR(blk_queue_init_tags) },
	{ 0xd66faa83, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0x4b2dcc2b, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xb39df327, __VMLINUX_SYMBOL_STR(osd_req_decode_get_attr_list) },
	{ 0xb2739507, __VMLINUX_SYMBOL_STR(osd_execute_request) },
	{ 0x25b1d314, __VMLINUX_SYMBOL_STR(osd_req_add_get_attr_list) },
	{ 0x9d000a45, __VMLINUX_SYMBOL_STR(osd_req_get_attributes) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xc17edb1, __VMLINUX_SYMBOL_STR(osd_sec_init_nosec_doall_caps) },
	{ 0xf49b916d, __VMLINUX_SYMBOL_STR(osduld_path_lookup) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb8e4fba7, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x89df8895, __VMLINUX_SYMBOL_STR(osd_req_flush_object) },
	{ 0x5b4c3e50, __VMLINUX_SYMBOL_STR(osd_execute_request_async) },
	{ 0x820887fc, __VMLINUX_SYMBOL_STR(osd_req_read) },
	{ 0xaa393fbf, __VMLINUX_SYMBOL_STR(blk_requeue_request) },
	{ 0x86855d1b, __VMLINUX_SYMBOL_STR(osd_finalize_request) },
	{ 0xb8b1205f, __VMLINUX_SYMBOL_STR(osd_req_write) },
	{ 0x8cc9de2b, __VMLINUX_SYMBOL_STR(osd_start_request) },
	{ 0xc4105487, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x352d42e5, __VMLINUX_SYMBOL_STR(bio_clone_bioset) },
	{ 0xdd06320c, __VMLINUX_SYMBOL_STR(blk_end_request_all) },
	{ 0xdcc53f82, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0xb15fd798, __VMLINUX_SYMBOL_STR(__blk_end_request_all) },
	{ 0xabc59a9a, __VMLINUX_SYMBOL_STR(osd_end_request) },
	{ 0x649d435d, __VMLINUX_SYMBOL_STR(osd_req_decode_sense_full) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x115c2e99, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x14846fbb, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x40816980, __VMLINUX_SYMBOL_STR(osduld_put_device) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xbf4c34d6, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xf6140fe2, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libosd,osd";

