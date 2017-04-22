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
	{ 0x36cf4f03, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x837bc10d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0x220239b0, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0x82178996, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x9417a8d5, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x9776d7e2, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x4b763e0e, __VMLINUX_SYMBOL_STR(tps65217_clear_bits) },
	{ 0xb743780f, __VMLINUX_SYMBOL_STR(platform_get_irq_byname) },
	{ 0x9ba6a184, __VMLINUX_SYMBOL_STR(devm_power_supply_register) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x71d6a62c, __VMLINUX_SYMBOL_STR(tps65217_set_bits) },
	{ 0x9347187c, __VMLINUX_SYMBOL_STR(power_supply_changed) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x62b2994c, __VMLINUX_SYMBOL_STR(tps65217_reg_read) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x593de0bc, __VMLINUX_SYMBOL_STR(power_supply_get_drvdata) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x686f8a1a, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,tps65217-charger");
MODULE_ALIAS("of:N*T*Cti,tps65217-chargerC*");
