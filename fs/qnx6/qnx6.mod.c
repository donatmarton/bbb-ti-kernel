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
	{ 0x10ab577b, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xca8c58e3, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1d810aa0, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x292db41e, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x87eb09e3, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xf4b90401, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x69c03fc5, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x309a8694, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xe80a4b2c, __VMLINUX_SYMBOL_STR(d_add) },
	{ 0x38d475d0, __VMLINUX_SYMBOL_STR(page_symlink_inode_operations) },
	{ 0x8f16c859, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x70733fd1, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x39983c6f, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0xa1be1457, __VMLINUX_SYMBOL_STR(mpage_readpage) },
	{ 0x47ec9fac, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xbcff3d85, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xd26e0e90, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x863f0b18, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0x6087373b, __VMLINUX_SYMBOL_STR(inode_nohighmem) },
	{ 0xa726bd83, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0xbed2f853, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x666774aa, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x2d41e8fa, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0x37d79ccd, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x12126351, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x4ada7514, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xedf65a89, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xb6a475eb, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x42aa798f, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x324e8226, __VMLINUX_SYMBOL_STR(read_cache_page) },
	{ 0x1901f6ad, __VMLINUX_SYMBOL_STR(generic_file_fsync) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x76d9bf11, __VMLINUX_SYMBOL_STR(crc32_be) },
	{ 0x7940b12d, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0xfb09f771, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0x268b4710, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x368f8aa8, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xd642af8d, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xac598406, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x2ef3e65f, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x72aa9bf5, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
	{ 0xeb8bacd2, __VMLINUX_SYMBOL_STR(iget_locked) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

