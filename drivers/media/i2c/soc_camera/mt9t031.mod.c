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
	{ 0x89cd8667, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x9d41e38f, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x2477d21e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9af9917, __VMLINUX_SYMBOL_STR(v4l2_clk_get) },
	{ 0x9b66b765, __VMLINUX_SYMBOL_STR(v4l2_ctrl_auto_cluster) },
	{ 0xd5d1568, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std_menu) },
	{ 0xf30afd02, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x649dace1, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x97af302b, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xd1b9f377, __VMLINUX_SYMBOL_STR(soc_camera_power_on) },
	{ 0x14426dca, __VMLINUX_SYMBOL_STR(soc_camera_power_off) },
	{ 0x74372a2c, __VMLINUX_SYMBOL_STR(soc_camera_apply_board_flags) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf5ef842e, __VMLINUX_SYMBOL_STR(v4l_bound_align_image) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xc040d3ba, __VMLINUX_SYMBOL_STR(v4l2_ctrl_g_ctrl) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa50c250, __VMLINUX_SYMBOL_STR(i2c_smbus_write_word_data) },
	{ 0xc9dfcbec, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0x8cc1e73b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x66dde26f, __VMLINUX_SYMBOL_STR(v4l2_device_unregister_subdev) },
	{ 0x6e430650, __VMLINUX_SYMBOL_STR(v4l2_clk_put) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=soc_camera";

MODULE_ALIAS("i2c:mt9t031");
