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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4deca1c0, __VMLINUX_SYMBOL_STR(irq_to_desc) },
	{ 0x431fb0b2, __VMLINUX_SYMBOL_STR(__irq_set_handler) },
	{ 0x20a789ac, __VMLINUX_SYMBOL_STR(irq_set_chip_data) },
	{ 0x2a765b86, __VMLINUX_SYMBOL_STR(irq_find_mapping) },
	{ 0xa7d99be2, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x837bc10d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x4fae6198, __VMLINUX_SYMBOL_STR(irq_domain_xlate_onecell) },
	{ 0xc23a3f87, __VMLINUX_SYMBOL_STR(__irq_domain_add) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5a1164a5, __VMLINUX_SYMBOL_STR(irq_get_irq_data) },
	{ 0x131152af, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x77b5037e, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0x14846fbb, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xece09f8f, __VMLINUX_SYMBOL_STR(irq_set_chip_and_handler_name) },
	{ 0xb743780f, __VMLINUX_SYMBOL_STR(platform_get_irq_byname) },
	{ 0x3dcb88a0, __VMLINUX_SYMBOL_STR(irq_set_handler_data) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xb2cffb18, __VMLINUX_SYMBOL_STR(platform_get_resource_byname) },
	{ 0x7ceaf0d5, __VMLINUX_SYMBOL_STR(generic_handle_irq) },
	{ 0x2c7db649, __VMLINUX_SYMBOL_STR(irq_dispose_mapping) },
	{ 0x69d6a9ca, __VMLINUX_SYMBOL_STR(irq_domain_remove) },
	{ 0x16d5da11, __VMLINUX_SYMBOL_STR(of_find_device_by_node) },
	{ 0x36cf4f03, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x42e28e96, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7e58e48d, __VMLINUX_SYMBOL_STR(handle_level_irq) },
	{ 0xb8e4fba7, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,am3356-pruss-intc");
MODULE_ALIAS("of:N*T*Cti,am3356-pruss-intcC*");
MODULE_ALIAS("of:N*T*Cti,am4376-pruss-intc");
MODULE_ALIAS("of:N*T*Cti,am4376-pruss-intcC*");
MODULE_ALIAS("of:N*T*Cti,am5728-pruss-intc");
MODULE_ALIAS("of:N*T*Cti,am5728-pruss-intcC*");
MODULE_ALIAS("of:N*T*Cti,k2g-pruss-intc");
MODULE_ALIAS("of:N*T*Cti,k2g-pruss-intcC*");
