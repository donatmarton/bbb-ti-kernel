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
	{ 0xd2c202f9, __VMLINUX_SYMBOL_STR(sbc_attrib_attrs) },
	{ 0x54e0e376, __VMLINUX_SYMBOL_STR(sbc_get_device_type) },
	{ 0xd1771fd6, __VMLINUX_SYMBOL_STR(target_backend_unregister) },
	{ 0x8ade10aa, __VMLINUX_SYMBOL_STR(transport_backend_register) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x49a48963, __VMLINUX_SYMBOL_STR(bioset_integrity_create) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x1627750f, __VMLINUX_SYMBOL_STR(target_configure_unmap_from_queue) },
	{ 0xaa7e6720, __VMLINUX_SYMBOL_STR(blkdev_get_by_path) },
	{ 0xb84d76d1, __VMLINUX_SYMBOL_STR(bioset_create) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x694a15cb, __VMLINUX_SYMBOL_STR(bioset_free) },
	{ 0xca9efd4f, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0x462a2e75, __VMLINUX_SYMBOL_STR(match_strlcpy) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xd1ba148b, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x57c638cf, __VMLINUX_SYMBOL_STR(bio_integrity_add_page) },
	{ 0x3dc7833f, __VMLINUX_SYMBOL_STR(bio_integrity_alloc) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x69c03fc5, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xf69ee7fe, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x9f9d0265, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x1424f59, __VMLINUX_SYMBOL_STR(sg_copy_to_buffer) },
	{ 0x292db41e, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xddfee4dd, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x48777952, __VMLINUX_SYMBOL_STR(blkdev_issue_write_same) },
	{ 0x675076e1, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xe9e9cad1, __VMLINUX_SYMBOL_STR(sbc_get_write_same_sectors) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x6032723b, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0x1f133aaa, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xd599350a, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xc4105487, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xf8379cca, __VMLINUX_SYMBOL_STR(target_complete_cmd) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x77b442a2, __VMLINUX_SYMBOL_STR(blkdev_issue_discard) },
	{ 0xab754007, __VMLINUX_SYMBOL_STR(target_to_linux_sector) },
	{ 0xd458c787, __VMLINUX_SYMBOL_STR(sbc_parse_cdb) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";

