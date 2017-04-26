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
	{ 0x2060d6e7, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x9d41e38f, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xb4b743ae, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6ada6489, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0x98a28081, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x4f161c0a, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x8b7245c2, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0xaeb4e64d, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x7522f3ba, __VMLINUX_SYMBOL_STR(irq_modify_status) },
	{ 0xf74179f5, __VMLINUX_SYMBOL_STR(irq_set_chip) },
	{ 0x20a789ac, __VMLINUX_SYMBOL_STR(irq_set_chip_data) },
	{ 0xe17650dd, __VMLINUX_SYMBOL_STR(irq_to_desc) },
	{ 0x3dd69d32, __VMLINUX_SYMBOL_STR(irq_create_mapping) },
	{ 0xb62a6155, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x562805a6, __VMLINUX_SYMBOL_STR(__irq_domain_add) },
	{ 0xf9b979e9, __VMLINUX_SYMBOL_STR(irq_domain_simple_ops) },
	{ 0x815d1ee0, __VMLINUX_SYMBOL_STR(gpiochip_add) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x549525ef, __VMLINUX_SYMBOL_STR(handle_nested_irq) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x65f4b78e, __VMLINUX_SYMBOL_STR(gpiochip_lock_as_irq) },
	{ 0x6bcd5e59, __VMLINUX_SYMBOL_STR(gpiochip_unlock_as_irq) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x95db5ba0, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xe6657df, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xa0c2da4c, __VMLINUX_SYMBOL_STR(gpiochip_is_requested) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3232f56d, __VMLINUX_SYMBOL_STR(spi_write_then_read) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x70dae047, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xd1b3c58f, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0xc9dfcbec, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0xa50c250, __VMLINUX_SYMBOL_STR(i2c_smbus_write_word_data) },
	{ 0x9c51c7cc, __VMLINUX_SYMBOL_STR(gpiochip_remove) },
	{ 0x3767d7f8, __VMLINUX_SYMBOL_STR(irq_domain_remove) },
	{ 0x2c7db649, __VMLINUX_SYMBOL_STR(irq_dispose_mapping) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x59014ab1, __VMLINUX_SYMBOL_STR(irq_find_mapping) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("spi:mcp23s08");
MODULE_ALIAS("spi:mcp23s17");
MODULE_ALIAS("i2c:mcp23008");
MODULE_ALIAS("i2c:mcp23017");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23008*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23017*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23008*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23017*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s08*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp23s17*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s08*");
MODULE_ALIAS("of:N*T*Cmcp,mcp23s17*");
