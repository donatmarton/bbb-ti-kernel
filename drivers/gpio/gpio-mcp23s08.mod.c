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
	{ 0xce9e09ef, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xc619b572, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x36e4c428, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x549525ef, __VMLINUX_SYMBOL_STR(handle_nested_irq) },
	{ 0x2a765b86, __VMLINUX_SYMBOL_STR(irq_find_mapping) },
	{ 0x1e8c0eb, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0x594b9e2e, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2deb66d0, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0x131152af, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x3e2bef0a, __VMLINUX_SYMBOL_STR(gpiochip_set_chained_irqchip) },
	{ 0x7b8169a6, __VMLINUX_SYMBOL_STR(_gpiochip_irqchip_add) },
	{ 0xeebeedd5, __VMLINUX_SYMBOL_STR(handle_simple_irq) },
	{ 0x9776d7e2, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x1f97d8b9, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc4bbd13f, __VMLINUX_SYMBOL_STR(gpiochip_add_data) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x87eb09e3, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x40a9317a, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xaeaa89b3, __VMLINUX_SYMBOL_STR(gpiochip_is_requested) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8af3b585, __VMLINUX_SYMBOL_STR(gpiochip_get_data) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe98ad5f5, __VMLINUX_SYMBOL_STR(spi_write_then_read) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb153e01d, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x6651f0dd, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0xbf39463, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0xfc19255, __VMLINUX_SYMBOL_STR(i2c_smbus_write_word_data) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xbae5955a, __VMLINUX_SYMBOL_STR(gpiochip_remove) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("spi:mcp23s08");
MODULE_ALIAS("spi:mcp23s17");
MODULE_ALIAS("spi:mcp23s18");
MODULE_ALIAS("i2c:mcp23008");
MODULE_ALIAS("i2c:mcp23017");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23008");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23008C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23017");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23017C*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23008");
MODULE_ALIAS("of:N*T*Cmcp,mcp23008C*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23017");
MODULE_ALIAS("of:N*T*Cmcp,mcp23017C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s08");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s08C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s17");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s17C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s18");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s18C*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s08");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s08C*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s17");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s17C*");
