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
	{ 0xd109e4f8, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xd945909, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x89cd8667, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x4a4a4bd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9d41e38f, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xc5c2216b, __VMLINUX_SYMBOL_STR(power_supply_am_i_supplied) },
	{ 0x222a884d, __VMLINUX_SYMBOL_STR(power_supply_get_drvdata) },
	{ 0xfd7a50ea, __VMLINUX_SYMBOL_STR(set_timer_slack) },
	{ 0xb62a6155, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x54b04308, __VMLINUX_SYMBOL_STR(devm_kasprintf) },
	{ 0x8bfd8946, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0xf09eadb1, __VMLINUX_SYMBOL_STR(power_supply_register_no_ws) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x72121e72, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x2bd3f07e, __VMLINUX_SYMBOL_STR(power_supply_changed) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4c0745bf, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e0ffc60, __VMLINUX_SYMBOL_STR(power_supply_unregister) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:bq27200");
MODULE_ALIAS("i2c:bq27210");
MODULE_ALIAS("i2c:bq27500");
MODULE_ALIAS("i2c:bq27510");
MODULE_ALIAS("i2c:bq27520");
MODULE_ALIAS("i2c:bq27530");
MODULE_ALIAS("i2c:bq27531");
MODULE_ALIAS("i2c:bq27541");
MODULE_ALIAS("i2c:bq27542");
MODULE_ALIAS("i2c:bq27546");
MODULE_ALIAS("i2c:bq27742");
MODULE_ALIAS("i2c:bq27545");
MODULE_ALIAS("i2c:bq27421");
MODULE_ALIAS("i2c:bq27425");
MODULE_ALIAS("i2c:bq27441");
MODULE_ALIAS("i2c:bq27621");
