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
	{ 0xce9e09ef, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x4ece8ded, __VMLINUX_SYMBOL_STR(class_interface_unregister) },
	{ 0x93b9fb0b, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0x4e038fbf, __VMLINUX_SYMBOL_STR(scsi_register_interface) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x944a8362, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xb5f22a15, __VMLINUX_SYMBOL_STR(enclosure_add_device) },
	{ 0x420bbd80, __VMLINUX_SYMBOL_STR(__scsi_iterate_devices) },
	{ 0x22de079b, __VMLINUX_SYMBOL_STR(enclosure_register) },
	{ 0xd29b7ecd, __VMLINUX_SYMBOL_STR(sas_get_address) },
	{ 0xee087405, __VMLINUX_SYMBOL_STR(enclosure_for_each_device) },
	{ 0xf2b754b, __VMLINUX_SYMBOL_STR(scsi_is_sas_rphy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x196431b9, __VMLINUX_SYMBOL_STR(enclosure_component_alloc) },
	{ 0x973151e7, __VMLINUX_SYMBOL_STR(enclosure_component_register) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x874d014b, __VMLINUX_SYMBOL_STR(scsi_execute_req_flags) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x496b670, __VMLINUX_SYMBOL_STR(enclosure_remove_device) },
	{ 0xf8dfe3ad, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb2a12ce7, __VMLINUX_SYMBOL_STR(enclosure_unregister) },
	{ 0x1eb89d79, __VMLINUX_SYMBOL_STR(enclosure_find) },
	{ 0xb60fb5, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=enclosure,scsi_transport_sas";

