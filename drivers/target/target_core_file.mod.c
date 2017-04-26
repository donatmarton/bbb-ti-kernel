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
	{ 0x4d1acb83, __VMLINUX_SYMBOL_STR(sbc_attrib_attrs) },
	{ 0x29acfd65, __VMLINUX_SYMBOL_STR(sbc_get_device_type) },
	{ 0x64803573, __VMLINUX_SYMBOL_STR(target_backend_unregister) },
	{ 0xa25c37da, __VMLINUX_SYMBOL_STR(transport_backend_register) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x395522ea, __VMLINUX_SYMBOL_STR(target_configure_unmap_from_queue) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x462a2e75, __VMLINUX_SYMBOL_STR(match_strlcpy) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x167a2a0e, __VMLINUX_SYMBOL_STR(sbc_dif_verify) },
	{ 0x7c84cf72, __VMLINUX_SYMBOL_STR(vfs_iter_read) },
	{ 0xe094ef39, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x6a7b5d4b, __VMLINUX_SYMBOL_STR(vfs_fsync_range) },
	{ 0xd1438c2b, __VMLINUX_SYMBOL_STR(target_complete_cmd) },
	{ 0x1e7a68bc, __VMLINUX_SYMBOL_STR(vfs_iter_write) },
	{ 0x8c279349, __VMLINUX_SYMBOL_STR(iov_iter_bvec) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc18733c6, __VMLINUX_SYMBOL_STR(sbc_get_write_same_sectors) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x70a39369, __VMLINUX_SYMBOL_STR(blkdev_issue_discard) },
	{ 0xfdbb3118, __VMLINUX_SYMBOL_STR(target_to_linux_sector) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa470d417, __VMLINUX_SYMBOL_STR(sbc_parse_cdb) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xff48aed2, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3ca5831c, __VMLINUX_SYMBOL_STR(kernel_write) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xa92f2d5, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";

