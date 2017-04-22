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
	{ 0xdc05acf5, __VMLINUX_SYMBOL_STR(iio_unregister_sw_trigger_type) },
	{ 0x9cac71fb, __VMLINUX_SYMBOL_STR(iio_register_sw_trigger_type) },
	{ 0x59227b48, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x85f37eac, __VMLINUX_SYMBOL_STR(iio_trigger_register) },
	{ 0x192441c6, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x92a00280, __VMLINUX_SYMBOL_STR(iio_trigger_alloc) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9955a327, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x130e7c3f, __VMLINUX_SYMBOL_STR(iio_trigger_poll) },
	{ 0xfe009c06, __VMLINUX_SYMBOL_STR(hrtimer_forward) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc0b08007, __VMLINUX_SYMBOL_STR(iio_trigger_free) },
	{ 0x11025677, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0xac1ce979, __VMLINUX_SYMBOL_STR(iio_trigger_unregister) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio-sw-trigger,industrialio";

