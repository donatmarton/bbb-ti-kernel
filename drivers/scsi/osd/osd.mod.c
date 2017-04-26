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
	{ 0x64e15f03, __VMLINUX_SYMBOL_STR(class_find_device) },
	{ 0x8a22159a, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7589d363, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x550fdba2, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0xc17edb1, __VMLINUX_SYMBOL_STR(osd_sec_init_nosec_doall_caps) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xe322b43c, __VMLINUX_SYMBOL_STR(osd_dev_fini) },
	{ 0xb2797252, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xe70f5df4, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x2060d6e7, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xa634b079, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xdae9baa6, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x86dd3238, __VMLINUX_SYMBOL_STR(osd_dev_init) },
	{ 0x394fd24c, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x1fb33ad7, __VMLINUX_SYMBOL_STR(osd_auto_detect_ver) },
	{ 0x9864e30c, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xc2917c16, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x7c8e67a0, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xdb6afd09, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x77011982, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0x36d08a97, __VMLINUX_SYMBOL_STR(scsi_test_unit_ready) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd9ff3ac3, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x133aa2c2, __VMLINUX_SYMBOL_STR(ida_remove) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb05e9ab1, __VMLINUX_SYMBOL_STR(ida_pre_get) },
	{ 0x684ff483, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd035cb86, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x22c5aeae, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0x57ab1297, __VMLINUX_SYMBOL_STR(ida_get_new_above) },
	{ 0xff48aed2, __VMLINUX_SYMBOL_STR(filp_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libosd";

