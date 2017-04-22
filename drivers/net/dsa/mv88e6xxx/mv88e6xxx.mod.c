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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x2d6507b5, __VMLINUX_SYMBOL_STR(_find_next_zero_bit_le) },
	{ 0x226994f1, __VMLINUX_SYMBOL_STR(of_mdiobus_register) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x6afb3f25, __VMLINUX_SYMBOL_STR(of_device_get_match_data) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb8eec98b, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x9ebc3586, __VMLINUX_SYMBOL_STR(__mdiobus_register) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9cda40ac, __VMLINUX_SYMBOL_STR(unregister_switch_driver) },
	{ 0x821bc486, __VMLINUX_SYMBOL_STR(mdiobus_unregister) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x949e981b, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x51b652f, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xc3a7591e, __VMLINUX_SYMBOL_STR(devm_mdiobus_alloc_size) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe2dec42d, __VMLINUX_SYMBOL_STR(dsa_host_dev_to_mii_bus) },
	{ 0x5a58567a, __VMLINUX_SYMBOL_STR(dsa_unregister_switch) },
	{ 0xf6c548b9, __VMLINUX_SYMBOL_STR(mdio_driver_unregister) },
	{ 0x508a93bd, __VMLINUX_SYMBOL_STR(register_switch_driver) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x5f8d663e, __VMLINUX_SYMBOL_STR(mdiobus_write_nested) },
	{ 0x173e25cc, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0x77b5037e, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0x10884c51, __VMLINUX_SYMBOL_STR(mdio_driver_register) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x1c49fc83, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x48b9bec8, __VMLINUX_SYMBOL_STR(devm_gpiod_get_optional) },
	{ 0x464b5e08, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xeaaebc5, __VMLINUX_SYMBOL_STR(dsa_register_switch) },
	{ 0x156b8b2b, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5591a60d, __VMLINUX_SYMBOL_STR(mdiobus_read_nested) },
	{ 0x2deb66d0, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0x42e28e96, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dsa_core";

MODULE_ALIAS("of:N*T*Cmarvell,mv88e6085");
MODULE_ALIAS("of:N*T*Cmarvell,mv88e6085C*");
