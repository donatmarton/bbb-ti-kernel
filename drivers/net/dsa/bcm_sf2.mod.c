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
	{ 0x5a58567a, __VMLINUX_SYMBOL_STR(dsa_unregister_switch) },
	{ 0x2fd5005f, __VMLINUX_SYMBOL_STR(phy_init_eee) },
	{ 0x9ebc3586, __VMLINUX_SYMBOL_STR(__mdiobus_register) },
	{ 0x42e28e96, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0x821bc486, __VMLINUX_SYMBOL_STR(mdiobus_unregister) },
	{ 0x5889bcc8, __VMLINUX_SYMBOL_STR(b53_switch_register) },
	{ 0x9776d7e2, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x226994f1, __VMLINUX_SYMBOL_STR(of_mdiobus_register) },
	{ 0xd31ccb06, __VMLINUX_SYMBOL_STR(of_machine_is_compatible) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xc3a7591e, __VMLINUX_SYMBOL_STR(devm_mdiobus_alloc_size) },
	{ 0x657b2089, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x1c9c7a13, __VMLINUX_SYMBOL_STR(of_mdio_find_bus) },
	{ 0x359ad273, __VMLINUX_SYMBOL_STR(of_find_compatible_node) },
	{ 0xa7d99be2, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x35dd5ad6, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x594b9e2e, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x6d80e9e5, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0xb34e82fe, __VMLINUX_SYMBOL_STR(of_get_phy_mode) },
	{ 0x2deb66d0, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0x1c2d7653, __VMLINUX_SYMBOL_STR(of_get_next_available_child) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf2197fb9, __VMLINUX_SYMBOL_STR(b53_switch_alloc) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x5591a60d, __VMLINUX_SYMBOL_STR(mdiobus_read_nested) },
	{ 0x5f8d663e, __VMLINUX_SYMBOL_STR(mdiobus_write_nested) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xd7dd8451, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfdb419d3, __VMLINUX_SYMBOL_STR(phy_init_hw) },
	{ 0x6dfc0d4e, __VMLINUX_SYMBOL_STR(dsa_switch_suspend) },
	{ 0xb592ab1d, __VMLINUX_SYMBOL_STR(dsa_switch_resume) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dsa_core,b53_common";

MODULE_ALIAS("of:N*T*Cbrcm,bcm7445-switch-v4.0");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7445-switch-v4.0C*");
