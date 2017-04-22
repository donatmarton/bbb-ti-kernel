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
	{ 0x40d2cb0b, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0x8d6117a4, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1cbd70a3, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0x810d352c, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0x11ffbd4d, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0xafa0c984, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xd1ba148b, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x3c161b96, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x1f133aaa, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x4f428ff, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0x4de88136, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0x40a9317a, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xcb4020cf, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x3bd55cdc, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0x457f8ecd, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x18e10ff8, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xcaf93c26, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";

