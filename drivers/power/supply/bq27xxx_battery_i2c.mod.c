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
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9776d7e2, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x85d472aa, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x7d0516f6, __VMLINUX_SYMBOL_STR(bq27xxx_battery_setup) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8fb6c99f, __VMLINUX_SYMBOL_STR(devm_kasprintf) },
	{ 0xbfbcddf8, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xed5605a9, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x85d3096, __VMLINUX_SYMBOL_STR(bq27xxx_battery_update) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x32907b91, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x26f49a84, __VMLINUX_SYMBOL_STR(bq27xxx_battery_teardown) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bq27xxx_battery";

MODULE_ALIAS("of:N*T*Cti,bq27200");
MODULE_ALIAS("of:N*T*Cti,bq27200C*");
MODULE_ALIAS("of:N*T*Cti,bq27210");
MODULE_ALIAS("of:N*T*Cti,bq27210C*");
MODULE_ALIAS("of:N*T*Cti,bq27500");
MODULE_ALIAS("of:N*T*Cti,bq27500C*");
MODULE_ALIAS("of:N*T*Cti,bq27510");
MODULE_ALIAS("of:N*T*Cti,bq27510C*");
MODULE_ALIAS("of:N*T*Cti,bq27520");
MODULE_ALIAS("of:N*T*Cti,bq27520C*");
MODULE_ALIAS("of:N*T*Cti,bq27530");
MODULE_ALIAS("of:N*T*Cti,bq27530C*");
MODULE_ALIAS("of:N*T*Cti,bq27531");
MODULE_ALIAS("of:N*T*Cti,bq27531C*");
MODULE_ALIAS("of:N*T*Cti,bq27541");
MODULE_ALIAS("of:N*T*Cti,bq27541C*");
MODULE_ALIAS("of:N*T*Cti,bq27542");
MODULE_ALIAS("of:N*T*Cti,bq27542C*");
MODULE_ALIAS("of:N*T*Cti,bq27546");
MODULE_ALIAS("of:N*T*Cti,bq27546C*");
MODULE_ALIAS("of:N*T*Cti,bq27742");
MODULE_ALIAS("of:N*T*Cti,bq27742C*");
MODULE_ALIAS("of:N*T*Cti,bq27545");
MODULE_ALIAS("of:N*T*Cti,bq27545C*");
MODULE_ALIAS("of:N*T*Cti,bq27421");
MODULE_ALIAS("of:N*T*Cti,bq27421C*");
MODULE_ALIAS("of:N*T*Cti,bq27425");
MODULE_ALIAS("of:N*T*Cti,bq27425C*");
MODULE_ALIAS("of:N*T*Cti,bq27441");
MODULE_ALIAS("of:N*T*Cti,bq27441C*");
MODULE_ALIAS("of:N*T*Cti,bq27621");
MODULE_ALIAS("of:N*T*Cti,bq27621C*");
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
