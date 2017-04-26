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
	{ 0x2060d6e7, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x9d690a3, __VMLINUX_SYMBOL_STR(class_interface_unregister) },
	{ 0x77011982, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0x803c7bce, __VMLINUX_SYMBOL_STR(scsi_register_interface) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xda97e5a5, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x1db90b, __VMLINUX_SYMBOL_STR(enclosure_add_device) },
	{ 0x2c00b58b, __VMLINUX_SYMBOL_STR(__scsi_iterate_devices) },
	{ 0x8a0189d7, __VMLINUX_SYMBOL_STR(enclosure_register) },
	{ 0x7b8e2091, __VMLINUX_SYMBOL_STR(enclosure_for_each_device) },
	{ 0xae2ebc75, __VMLINUX_SYMBOL_STR(enclosure_component_alloc) },
	{ 0x9b2ffd07, __VMLINUX_SYMBOL_STR(enclosure_component_register) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2afb664f, __VMLINUX_SYMBOL_STR(scsi_execute_req_flags) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x92ee5474, __VMLINUX_SYMBOL_STR(enclosure_remove_device) },
	{ 0x3ca5e585, __VMLINUX_SYMBOL_STR(enclosure_unregister) },
	{ 0x7c8e67a0, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3e6b73ce, __VMLINUX_SYMBOL_STR(enclosure_find) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x95ae17c6, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=enclosure";

