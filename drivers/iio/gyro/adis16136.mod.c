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
	{ 0x5e8f223, __VMLINUX_SYMBOL_STR(simple_attr_release) },
	{ 0x2bfcadc, __VMLINUX_SYMBOL_STR(simple_attr_write) },
	{ 0x14fc29e9, __VMLINUX_SYMBOL_STR(simple_attr_read) },
	{ 0x9404cae6, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x4f05d0c3, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x1460dfc0, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x45fa4cf5, __VMLINUX_SYMBOL_STR(adis_debugfs_reg_access) },
	{ 0xfae24a16, __VMLINUX_SYMBOL_STR(adis_update_scan_mode) },
	{ 0x2060d6e7, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb4b743ae, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xb874f70c, __VMLINUX_SYMBOL_STR(adis_single_conversion) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x54cace3a, __VMLINUX_SYMBOL_STR(simple_attr_open) },
	{ 0x9590237e, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x36ec1661, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xd7cadf89, __VMLINUX_SYMBOL_STR(adis_initial_startup) },
	{ 0x6a45bfe, __VMLINUX_SYMBOL_STR(adis_setup_buffer_and_trigger) },
	{ 0x4aee007d, __VMLINUX_SYMBOL_STR(adis_init) },
	{ 0xbd7f1641, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x6ada6489, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1f772e2d, __VMLINUX_SYMBOL_STR(adis_read_reg) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x6f0f4bc8, __VMLINUX_SYMBOL_STR(adis_cleanup_buffer_and_trigger) },
	{ 0x684a2bb7, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x930f2cc, __VMLINUX_SYMBOL_STR(adis_write_reg) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=adis_lib,industrialio";

MODULE_ALIAS("spi:adis16133");
MODULE_ALIAS("spi:adis16135");
MODULE_ALIAS("spi:adis16136");
MODULE_ALIAS("spi:adis16137");
