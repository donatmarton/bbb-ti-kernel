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
	{ 0x2a978004, __VMLINUX_SYMBOL_STR(transport_class_register) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8d221cfd, __VMLINUX_SYMBOL_STR(attribute_container_classdev_to_container) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd8bdde0b, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x8ab884b0, __VMLINUX_SYMBOL_STR(attribute_container_unregister) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x16e7918, __VMLINUX_SYMBOL_STR(attribute_container_register) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xf080ed1a, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x15297f57, __VMLINUX_SYMBOL_STR(transport_class_unregister) },
	{ 0x52ca3623, __VMLINUX_SYMBOL_STR(attribute_container_find_class_device) },
	{ 0x7c8e67a0, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd9ff3ac3, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xff58b518, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x684ff483, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd035cb86, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x1e22fcb2, __VMLINUX_SYMBOL_STR(scsi_is_sdev_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

