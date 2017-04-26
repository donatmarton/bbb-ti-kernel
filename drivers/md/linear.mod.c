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
	{ 0x8804b529, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfcc7321b, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0x30850167, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0x9ae42a82, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0xad14fc55, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x9c09faeb, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0xd0aa8d91, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x8ab843c5, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x4ff23cb8, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0x5c9581d3, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0xe6657df, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x5ebc344b, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x5447a0b, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0x5bfb745c, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0xac7872c8, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x357b579b, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";

