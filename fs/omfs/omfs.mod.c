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
	{ 0x2d6507b5, __VMLINUX_SYMBOL_STR(_find_next_zero_bit_le) },
	{ 0x54884034, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xbf13ec1f, __VMLINUX_SYMBOL_STR(save_mount_options) },
	{ 0xa88eda77, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0x9404cae6, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x2720d984, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf5b4a948, __VMLINUX_SYMBOL_STR(crc_itu_t) },
	{ 0x815b5dd4, __VMLINUX_SYMBOL_STR(match_octal) },
	{ 0x4b122bb8, __VMLINUX_SYMBOL_STR(block_write_begin) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x17396551, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xd47c22c1, __VMLINUX_SYMBOL_STR(block_read_full_page) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8048a07, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xdc76b57f, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x88fc8474, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0x64c5538b, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x52e07b4f, __VMLINUX_SYMBOL_STR(__insert_inode_hash) },
	{ 0x7a2add7d, __VMLINUX_SYMBOL_STR(current_kernel_time64) },
	{ 0xa74262f7, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xe9890e3f, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2249ac2, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0xbaf6064d, __VMLINUX_SYMBOL_STR(mpage_writepages) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9ec0a1e7, __VMLINUX_SYMBOL_STR(setattr_copy) },
	{ 0x7782daf8, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0xe4bf70b8, __VMLINUX_SYMBOL_STR(truncate_pagecache) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x2b9d3f01, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0x9b5c6825, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x6d957e85, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0xb88bc165, __VMLINUX_SYMBOL_STR(block_write_full_page) },
	{ 0x14a7dc3e, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0xca65c2f4, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2f7fdbe8, __VMLINUX_SYMBOL_STR(generic_write_end) },
	{ 0x22feb4ba, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x912cc17, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0xf00ce6b4, __VMLINUX_SYMBOL_STR(inode_newsize_ok) },
	{ 0x5e95b1cd, __VMLINUX_SYMBOL_STR(current_umask) },
	{ 0x5faffa5e, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd4e04d83, __VMLINUX_SYMBOL_STR(generic_show_options) },
	{ 0x46701a7, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x46c824f6, __VMLINUX_SYMBOL_STR(generic_file_write_iter) },
	{ 0xde158532, __VMLINUX_SYMBOL_STR(iput) },
	{ 0xdf1affdc, __VMLINUX_SYMBOL_STR(generic_file_fsync) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x521852b4, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0xeef79882, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x99e72924, __VMLINUX_SYMBOL_STR(mark_buffer_dirty) },
	{ 0x2aadd6e5, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x7fc085f3, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x19bd8907, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xefe1b74e, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xceaa752d, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xbc7705c6, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
	{ 0x9a4c3731, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0x5916d7fb, __VMLINUX_SYMBOL_STR(iget_locked) },
	{ 0xe5bbba02, __VMLINUX_SYMBOL_STR(inode_init_owner) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=crc-itu-t";

