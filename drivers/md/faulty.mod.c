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
	{ 0x554c86b4, __VMLINUX_SYMBOL_STR(bio_clone_mddev) },
	{ 0xd0aa8d91, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0xad14fc55, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xbd73db98, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x5bfb745c, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x357b579b, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5c9581d3, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe6657df, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";

