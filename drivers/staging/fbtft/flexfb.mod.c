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
	{ 0x2c197ea3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x54614509, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x29923658, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xd109e4f8, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xa57b02d8, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xd945909, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x2060d6e7, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x4a4a4bd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xb4b743ae, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xfb61ba02, __VMLINUX_SYMBOL_STR(fbtft_write_gpio16_wr) },
	{ 0x3ef3ffba, __VMLINUX_SYMBOL_STR(fbtft_write_spi_emulate_9) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8d0b4f3c, __VMLINUX_SYMBOL_STR(fbtft_write_gpio8_wr) },
	{ 0x2c7ca322, __VMLINUX_SYMBOL_STR(fbtft_write_vmem16_bus16) },
	{ 0x668844c8, __VMLINUX_SYMBOL_STR(fbtft_write_gpio16_wr_latched) },
	{ 0x6976d923, __VMLINUX_SYMBOL_STR(fbtft_write_reg16_bus16) },
	{ 0x903ccb7d, __VMLINUX_SYMBOL_STR(fbtft_write_vmem16_bus8) },
	{ 0x2ae0aae2, __VMLINUX_SYMBOL_STR(fbtft_register_framebuffer) },
	{ 0xe8127c6f, __VMLINUX_SYMBOL_STR(fbtft_register_backlight) },
	{ 0x5d30ad61, __VMLINUX_SYMBOL_STR(fbtft_write_reg8_bus8) },
	{ 0xeecd424a, __VMLINUX_SYMBOL_STR(fbtft_write_vmem16_bus9) },
	{ 0x8c33434, __VMLINUX_SYMBOL_STR(fbtft_write_reg8_bus9) },
	{ 0xaad48f1, __VMLINUX_SYMBOL_STR(fbtft_write_spi) },
	{ 0xef09763b, __VMLINUX_SYMBOL_STR(fbtft_write_reg16_bus8) },
	{ 0x8b22e671, __VMLINUX_SYMBOL_STR(fbtft_init_display) },
	{ 0x1c78e99, __VMLINUX_SYMBOL_STR(fbtft_framebuffer_alloc) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x10200cbf, __VMLINUX_SYMBOL_STR(fbtft_framebuffer_release) },
	{ 0x4e189ad, __VMLINUX_SYMBOL_STR(fbtft_unregister_framebuffer) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fbtft";

