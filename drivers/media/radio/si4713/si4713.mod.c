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
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x89cd8667, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x9d41e38f, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xbe8974c7, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb994b61c, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0x31f1c99d, __VMLINUX_SYMBOL_STR(platform_device_add_data) },
	{ 0xc21222c3, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0xb62a6155, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x12445b96, __VMLINUX_SYMBOL_STR(v4l2_ctrl_cluster) },
	{ 0xd5d1568, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std_menu) },
	{ 0x402121bb, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_custom) },
	{ 0xf30afd02, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x649dace1, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xf9dd9922, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0x97af302b, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
	{ 0x4eea17c7, __VMLINUX_SYMBOL_STR(devm_regulator_get_optional) },
	{ 0x9092ec61, __VMLINUX_SYMBOL_STR(devm_gpiod_get_optional) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x9cbcaf26, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x9e5d01d, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0x8cc1e73b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x66dde26f, __VMLINUX_SYMBOL_STR(v4l2_device_unregister_subdev) },
	{ 0xabab5bb1, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x61b3905f, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x393e4e36, __VMLINUX_SYMBOL_STR(gpiod_set_value) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcd1f63ee, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x2cf3f76d, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xf1969a8e, __VMLINUX_SYMBOL_STR(__usecs_to_jiffies) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x591bd40b, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:si4713");

MODULE_INFO(srcversion, "A59310D0EFA6224BD8102D4");
