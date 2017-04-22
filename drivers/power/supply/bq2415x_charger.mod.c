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
	{ 0x3d3d863f, __VMLINUX_SYMBOL_STR(power_supply_get_by_name) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x5985e18f, __VMLINUX_SYMBOL_STR(power_supply_put) },
	{ 0x4d4db1c8, __VMLINUX_SYMBOL_STR(power_supply_get_property) },
	{ 0x217b724e, __VMLINUX_SYMBOL_STR(power_supply_get_by_phandle) },
	{ 0x136209db, __VMLINUX_SYMBOL_STR(power_supply_reg_notifier) },
	{ 0x19d3b7d8, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xa3a7ddf, __VMLINUX_SYMBOL_STR(power_supply_register) },
	{ 0x16e06b09, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x923fcdb9, __VMLINUX_SYMBOL_STR(device_property_read_u32_array) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x44b5ee9a, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0xbfbcddf8, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x32907b91, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xb1ea493e, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x42e28e96, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0x6b81c38b, __VMLINUX_SYMBOL_STR(power_supply_unreg_notifier) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xea8128d3, __VMLINUX_SYMBOL_STR(power_supply_unregister) },
	{ 0x11a13e31, __VMLINUX_SYMBOL_STR(_kstrtol) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x94910ebc, __VMLINUX_SYMBOL_STR(sysfs_notify) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xa0744ea9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x85d472aa, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x593de0bc, __VMLINUX_SYMBOL_STR(power_supply_get_drvdata) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xed5605a9, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,bq24150");
MODULE_ALIAS("of:N*T*Cti,bq24150C*");
MODULE_ALIAS("of:N*T*Cti,bq24150a");
MODULE_ALIAS("of:N*T*Cti,bq24150aC*");
MODULE_ALIAS("of:N*T*Cti,bq24151");
MODULE_ALIAS("of:N*T*Cti,bq24151C*");
MODULE_ALIAS("of:N*T*Cti,bq24151a");
MODULE_ALIAS("of:N*T*Cti,bq24151aC*");
MODULE_ALIAS("of:N*T*Cti,bq24152");
MODULE_ALIAS("of:N*T*Cti,bq24152C*");
MODULE_ALIAS("of:N*T*Cti,bq24153");
MODULE_ALIAS("of:N*T*Cti,bq24153C*");
MODULE_ALIAS("of:N*T*Cti,bq24153a");
MODULE_ALIAS("of:N*T*Cti,bq24153aC*");
MODULE_ALIAS("of:N*T*Cti,bq24155");
MODULE_ALIAS("of:N*T*Cti,bq24155C*");
MODULE_ALIAS("of:N*T*Cti,bq24156");
MODULE_ALIAS("of:N*T*Cti,bq24156C*");
MODULE_ALIAS("of:N*T*Cti,bq24156a");
MODULE_ALIAS("of:N*T*Cti,bq24156aC*");
MODULE_ALIAS("of:N*T*Cti,bq24157s");
MODULE_ALIAS("of:N*T*Cti,bq24157sC*");
MODULE_ALIAS("of:N*T*Cti,bq24158");
MODULE_ALIAS("of:N*T*Cti,bq24158C*");
MODULE_ALIAS("i2c:bq2415x");
MODULE_ALIAS("i2c:bq24150");
MODULE_ALIAS("i2c:bq24150a");
MODULE_ALIAS("i2c:bq24151");
MODULE_ALIAS("i2c:bq24151a");
MODULE_ALIAS("i2c:bq24152");
MODULE_ALIAS("i2c:bq24153");
MODULE_ALIAS("i2c:bq24153a");
MODULE_ALIAS("i2c:bq24155");
MODULE_ALIAS("i2c:bq24156");
MODULE_ALIAS("i2c:bq24156a");
MODULE_ALIAS("i2c:bq24157s");
MODULE_ALIAS("i2c:bq24158");
