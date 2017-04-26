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
	{ 0x7130df08, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xdae9baa6, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6a3868ff, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0xaf0f167f, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0x7a29d1da, __VMLINUX_SYMBOL_STR(blk_queue_prep_rq) },
	{ 0x6f524476, __VMLINUX_SYMBOL_STR(blk_queue_start_tag) },
	{ 0xabd9412e, __VMLINUX_SYMBOL_STR(blk_queue_stack_limits) },
	{ 0xf66cc9d5, __VMLINUX_SYMBOL_STR(blk_queue_init_tags) },
	{ 0xee0443a7, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0x550fdba2, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x9b4fb8b7, __VMLINUX_SYMBOL_STR(osd_req_decode_get_attr_list) },
	{ 0x3f7b410a, __VMLINUX_SYMBOL_STR(osd_execute_request) },
	{ 0xbbe0ec3b, __VMLINUX_SYMBOL_STR(osd_req_add_get_attr_list) },
	{ 0x9d27047d, __VMLINUX_SYMBOL_STR(osd_req_get_attributes) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xc17edb1, __VMLINUX_SYMBOL_STR(osd_sec_init_nosec_doall_caps) },
	{ 0xfb859678, __VMLINUX_SYMBOL_STR(osduld_path_lookup) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x9e931cfd, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xd849798b, __VMLINUX_SYMBOL_STR(osd_req_flush_object) },
	{ 0x50faaadf, __VMLINUX_SYMBOL_STR(osd_req_read) },
	{ 0x367457ea, __VMLINUX_SYMBOL_STR(osd_execute_request_async) },
	{ 0xbd73db98, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xdef3f308, __VMLINUX_SYMBOL_STR(blk_requeue_request) },
	{ 0x5203c6bf, __VMLINUX_SYMBOL_STR(osd_finalize_request) },
	{ 0x8036ecc6, __VMLINUX_SYMBOL_STR(osd_req_write) },
	{ 0x5523720c, __VMLINUX_SYMBOL_STR(osd_start_request) },
	{ 0x3e7d8653, __VMLINUX_SYMBOL_STR(bio_clone_bioset) },
	{ 0x24e7efb3, __VMLINUX_SYMBOL_STR(blk_end_request_all) },
	{ 0x2c158f66, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0xd2df4266, __VMLINUX_SYMBOL_STR(__blk_end_request_all) },
	{ 0x60f632bc, __VMLINUX_SYMBOL_STR(osd_end_request) },
	{ 0x476fa0c6, __VMLINUX_SYMBOL_STR(osd_req_decode_sense_full) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x251b483d, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x2d9b9ea6, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x273befb1, __VMLINUX_SYMBOL_STR(osduld_put_device) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xdb6afd09, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x8dc00423, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libosd,osd";

