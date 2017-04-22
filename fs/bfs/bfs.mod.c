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
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xabfed5c8, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x97ee2277, __VMLINUX_SYMBOL_STR(mark_buffer_dirty_inode) },
	{ 0x1d810aa0, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x6ed86506, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x31c46dca, __VMLINUX_SYMBOL_STR(block_write_begin) },
	{ 0xf4b90401, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x2dec9106, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0x8951783, __VMLINUX_SYMBOL_STR(block_read_full_page) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x309a8694, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0xe80a4b2c, __VMLINUX_SYMBOL_STR(d_add) },
	{ 0x8f16c859, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0xc0ddafd9, __VMLINUX_SYMBOL_STR(__getblk_gfp) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x70733fd1, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x5559244c, __VMLINUX_SYMBOL_STR(__insert_inode_hash) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xbddbd222, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0x47ec9fac, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xcef801f7, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0xd26e0e90, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1e9eb54b, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0xa9d91222, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0xc3cc0830, __VMLINUX_SYMBOL_STR(truncate_pagecache) },
	{ 0xa23be2de, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0xa726bd83, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0xbed2f853, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0xbc852264, __VMLINUX_SYMBOL_STR(invalidate_inode_buffers) },
	{ 0x666774aa, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xfa65cc21, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0xf42c9c03, __VMLINUX_SYMBOL_STR(block_write_full_page) },
	{ 0x512eee80, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0x37d79ccd, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe8b464c2, __VMLINUX_SYMBOL_STR(generic_write_end) },
	{ 0x12126351, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x4ada7514, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xedf65a89, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xb6a475eb, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x53406d67, __VMLINUX_SYMBOL_STR(generic_file_write_iter) },
	{ 0x42aa798f, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x1901f6ad, __VMLINUX_SYMBOL_STR(generic_file_fsync) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x73f270da, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x40063b81, __VMLINUX_SYMBOL_STR(current_time) },
	{ 0xfb09f771, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0x4b06df9e, __VMLINUX_SYMBOL_STR(__bforget) },
	{ 0x268b4710, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x3fd074ca, __VMLINUX_SYMBOL_STR(mark_buffer_dirty) },
	{ 0x368f8aa8, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xac598406, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x59ea0803, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xd680cd2b, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x3a7a414a, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x72aa9bf5, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
	{ 0xeb8bacd2, __VMLINUX_SYMBOL_STR(iget_locked) },
	{ 0x2ec4fec7, __VMLINUX_SYMBOL_STR(inode_init_owner) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

