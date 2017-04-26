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
	{ 0x980382ca, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8804b529, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0xec39ab7, __VMLINUX_SYMBOL_STR(md_integrity_add_rdev) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0xfcc7321b, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0x1cc35770, __VMLINUX_SYMBOL_STR(__bio_clone_fast) },
	{ 0xc90a46c3, __VMLINUX_SYMBOL_STR(bio_init) },
	{ 0x1cd0f6c0, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0xd0aa8d91, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x8fa0bc46, __VMLINUX_SYMBOL_STR(md_check_recovery) },
	{ 0x4ff23cb8, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0x5bfb745c, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0xe36f653c, __VMLINUX_SYMBOL_STR(md_register_thread) },
	{ 0x2b90cdaa, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x6a037cf1, __VMLINUX_SYMBOL_STR(mempool_kfree) },
	{ 0xa05c03df, __VMLINUX_SYMBOL_STR(mempool_kmalloc) },
	{ 0x357b579b, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5c9581d3, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x40913bf, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0x2d4e4ffd, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0x920664c8, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0xad14fc55, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x815131ba, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0xe6657df, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9c09faeb, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";

