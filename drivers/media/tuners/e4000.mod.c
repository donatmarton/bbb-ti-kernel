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
	{ 0x703b5194, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xc619b572, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x51c4cf1f, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5a2fa021, __VMLINUX_SYMBOL_STR(v4l2_ctrl_auto_cluster) },
	{ 0xaf68dd7b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x5624c03d, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x3663792, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x200cd300, __VMLINUX_SYMBOL_STR(regmap_bulk_read) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x7fe0dc08, __VMLINUX_SYMBOL_STR(regmap_bulk_write) },
	{ 0x20cc31ce, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa1746f8a, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcab184b3, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:e4000");
