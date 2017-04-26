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
	{ 0x2fefcfbf, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x963de423, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xbb69c266, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9590237e, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x8cdce33c, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x59263c8b, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find_nth) },
	{ 0x8ac80891, __VMLINUX_SYMBOL_STR(l2tp_session_find_nth) },
	{ 0x95db5ba0, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xe6657df, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xfcf2e85d, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0xb2769224, __VMLINUX_SYMBOL_STR(get_net_ns_by_pid) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfbbdaf53, __VMLINUX_SYMBOL_STR(__put_net) },
	{ 0x79087bfd, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "006E87B2739842877FC7D8D");
