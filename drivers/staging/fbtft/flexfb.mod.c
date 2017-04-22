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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x9cef51a8, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x820dcad, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x75d3affc, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x23fa4443, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x5788a263, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xefe21d65, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x36cf4f03, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xce9e09ef, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x837bc10d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x36e4c428, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xf07e1be1, __VMLINUX_SYMBOL_STR(fbtft_unregister_framebuffer) },
	{ 0xbfa0331a, __VMLINUX_SYMBOL_STR(fbtft_write_spi_emulate_9) },
	{ 0xc43902e8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xaa7d42d1, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xa0cac10e, __VMLINUX_SYMBOL_STR(fbtft_write_gpio8_wr) },
	{ 0xd6d2fffc, __VMLINUX_SYMBOL_STR(fbtft_write_vmem16_bus16) },
	{ 0x7b7260dd, __VMLINUX_SYMBOL_STR(fbtft_write_gpio16_wr) },
	{ 0x1c257bb7, __VMLINUX_SYMBOL_STR(fbtft_write_gpio16_wr_latched) },
	{ 0x9c5e5e00, __VMLINUX_SYMBOL_STR(fbtft_write_reg16_bus16) },
	{ 0xe2deb234, __VMLINUX_SYMBOL_STR(fbtft_write_vmem16_bus8) },
	{ 0x96f8be19, __VMLINUX_SYMBOL_STR(fbtft_framebuffer_release) },
	{ 0x14b971b9, __VMLINUX_SYMBOL_STR(fbtft_register_framebuffer) },
	{ 0xadd6e42c, __VMLINUX_SYMBOL_STR(fbtft_register_backlight) },
	{ 0x328b5891, __VMLINUX_SYMBOL_STR(fbtft_write_reg8_bus8) },
	{ 0x6b2756d4, __VMLINUX_SYMBOL_STR(fbtft_write_vmem16_bus9) },
	{ 0x750cb47d, __VMLINUX_SYMBOL_STR(fbtft_write_reg8_bus9) },
	{ 0x402a9d34, __VMLINUX_SYMBOL_STR(fbtft_write_spi) },
	{ 0x1f40e18e, __VMLINUX_SYMBOL_STR(fbtft_write_reg16_bus8) },
	{ 0x15d3c9da, __VMLINUX_SYMBOL_STR(fbtft_init_display) },
	{ 0x44c9b6c6, __VMLINUX_SYMBOL_STR(fbtft_framebuffer_alloc) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fbtft";

