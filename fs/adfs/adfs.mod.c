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
	{ 0xb5233f3e, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7129e5f8, __VMLINUX_SYMBOL_STR(hex_asc) },
	{ 0x9404cae6, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x2720d984, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xa024174e, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0x815b5dd4, __VMLINUX_SYMBOL_STR(match_octal) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xe6657df, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0xd47c22c1, __VMLINUX_SYMBOL_STR(block_read_full_page) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x55cf3589, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x8048a07, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xdc76b57f, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0x88fc8474, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0x535dc717, __VMLINUX_SYMBOL_STR(from_kgid_munged) },
	{ 0x64c5538b, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x52e07b4f, __VMLINUX_SYMBOL_STR(__insert_inode_hash) },
	{ 0x7a2add7d, __VMLINUX_SYMBOL_STR(current_kernel_time64) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xe9890e3f, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2249ac2, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xf4b6cdae, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x76478707, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x7782daf8, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0xe4bf70b8, __VMLINUX_SYMBOL_STR(truncate_pagecache) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x2b9d3f01, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0x9b5c6825, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x520e923b, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x55184b5d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x6d957e85, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0xb88bc165, __VMLINUX_SYMBOL_STR(block_write_full_page) },
	{ 0xca65c2f4, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2f7fdbe8, __VMLINUX_SYMBOL_STR(generic_write_end) },
	{ 0x912cc17, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x5faffa5e, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x71aa3ade, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x46701a7, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x7afa89fc, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0x46c824f6, __VMLINUX_SYMBOL_STR(generic_file_write_iter) },
	{ 0xe2994d94, __VMLINUX_SYMBOL_STR(cont_write_begin) },
	{ 0xdf1affdc, __VMLINUX_SYMBOL_STR(generic_file_fsync) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xdccedf00, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x521852b4, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0xeef79882, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x99e72924, __VMLINUX_SYMBOL_STR(mark_buffer_dirty) },
	{ 0x2aadd6e5, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x7fc085f3, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x19bd8907, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xceaa752d, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xbc7705c6, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

