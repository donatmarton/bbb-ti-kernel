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
	{ 0x1a311dc9, __VMLINUX_SYMBOL_STR(class_find_device) },
	{ 0x1b30ec10, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x314434df, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x4b2dcc2b, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0xc17edb1, __VMLINUX_SYMBOL_STR(osd_sec_init_nosec_doall_caps) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x64de63d3, __VMLINUX_SYMBOL_STR(osd_dev_fini) },
	{ 0x87715811, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x711520a7, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0xce9e09ef, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xd9e5aeb6, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x91d6668b, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x1afe966f, __VMLINUX_SYMBOL_STR(osd_dev_init) },
	{ 0x33ff49a8, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x7b70fdc9, __VMLINUX_SYMBOL_STR(osd_auto_detect_ver) },
	{ 0xc2cbd642, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xaa7a053f, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xf8dfe3ad, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbf4c34d6, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x93b9fb0b, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0xb9e0d3c5, __VMLINUX_SYMBOL_STR(scsi_test_unit_ready) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x657b2089, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xc66fa6a6, __VMLINUX_SYMBOL_STR(ida_remove) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x423d81ed, __VMLINUX_SYMBOL_STR(ida_pre_get) },
	{ 0x4d72b5a7, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x986abfdc, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xcb92229a, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0x9a623142, __VMLINUX_SYMBOL_STR(ida_get_new_above) },
	{ 0xefe324f2, __VMLINUX_SYMBOL_STR(filp_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libosd";

