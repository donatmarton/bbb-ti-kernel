#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x9cef51a8, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe93e49c3, __VMLINUX_SYMBOL_STR(devres_free) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xcc747f08, __VMLINUX_SYMBOL_STR(iio_kfifo_allocate) },
	{ 0xa5507aaa, __VMLINUX_SYMBOL_STR(devres_alloc_node) },
	{ 0x7a731d98, __VMLINUX_SYMBOL_STR(devm_iio_device_match) },
	{ 0x8c3cb67a, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_postenable) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x85bd392c, __VMLINUX_SYMBOL_STR(iio_buffer_get) },
	{ 0x2538f6a5, __VMLINUX_SYMBOL_STR(devres_release) },
	{ 0xaba4bfe1, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_predisable) },
	{ 0x31bbb241, __VMLINUX_SYMBOL_STR(iio_kfifo_free) },
	{ 0x3ab372a6, __VMLINUX_SYMBOL_STR(devres_add) },
	{ 0x3ede8d62, __VMLINUX_SYMBOL_STR(iio_alloc_pollfunc) },
	{ 0xdbaef8a9, __VMLINUX_SYMBOL_STR(iio_dealloc_pollfunc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kfifo_buf,industrialio";

