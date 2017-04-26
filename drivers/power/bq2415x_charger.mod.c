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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9d41e38f, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xeba04195, __VMLINUX_SYMBOL_STR(power_supply_get_by_name) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x17cac0ac, __VMLINUX_SYMBOL_STR(power_supply_put) },
	{ 0xd67a845b, __VMLINUX_SYMBOL_STR(power_supply_get_property) },
	{ 0x8e45a83e, __VMLINUX_SYMBOL_STR(power_supply_get_by_phandle) },
	{ 0x136209db, __VMLINUX_SYMBOL_STR(power_supply_reg_notifier) },
	{ 0x8f7a5832, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x5973edcd, __VMLINUX_SYMBOL_STR(power_supply_register) },
	{ 0x14253ae5, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x71d48624, __VMLINUX_SYMBOL_STR(device_property_read_u32_array) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x8bfd8946, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x4c0745bf, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x906099bd, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xd0532b4a, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0x6b81c38b, __VMLINUX_SYMBOL_STR(power_supply_unreg_notifier) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e0ffc60, __VMLINUX_SYMBOL_STR(power_supply_unregister) },
	{ 0x11a13e31, __VMLINUX_SYMBOL_STR(_kstrtol) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xe72c7c37, __VMLINUX_SYMBOL_STR(sysfs_notify) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x222a884d, __VMLINUX_SYMBOL_STR(power_supply_get_drvdata) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x72121e72, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:BQ2415X:*");
MODULE_ALIAS("acpi*:BQ241500:*");
MODULE_ALIAS("acpi*:BQA24150:*");
MODULE_ALIAS("acpi*:BQ241510:*");
MODULE_ALIAS("acpi*:BQA24151:*");
MODULE_ALIAS("acpi*:BQ241520:*");
MODULE_ALIAS("acpi*:BQ241530:*");
MODULE_ALIAS("acpi*:BQA24153:*");
MODULE_ALIAS("acpi*:BQ241550:*");
MODULE_ALIAS("acpi*:BQ241560:*");
MODULE_ALIAS("acpi*:BQA24156:*");
MODULE_ALIAS("acpi*:BQS24157:*");
MODULE_ALIAS("acpi*:BQ241580:*");
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
