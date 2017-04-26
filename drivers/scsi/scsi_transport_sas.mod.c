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
	{ 0xee0443a7, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0x2a978004, __VMLINUX_SYMBOL_STR(transport_class_register) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xecba9025, __VMLINUX_SYMBOL_STR(scsi_remove_target) },
	{ 0x8dc00423, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xd8bdde0b, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x8b6a5465, __VMLINUX_SYMBOL_STR(transport_destroy_device) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x8ab884b0, __VMLINUX_SYMBOL_STR(attribute_container_unregister) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5b652af9, __VMLINUX_SYMBOL_STR(scsi_scan_target) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xbb152ef3, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xe8f0c061, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0xed517e43, __VMLINUX_SYMBOL_STR(transport_add_device) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb583d23f, __VMLINUX_SYMBOL_STR(bsg_register_queue) },
	{ 0x80c055b1, __VMLINUX_SYMBOL_STR(transport_configure_device) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x16e7918, __VMLINUX_SYMBOL_STR(attribute_container_register) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x974093a, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0xf080ed1a, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x15297f57, __VMLINUX_SYMBOL_STR(transport_class_unregister) },
	{ 0xb2e39368, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x7c8e67a0, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa0463b8a, __VMLINUX_SYMBOL_STR(transport_setup_device) },
	{ 0x5a338c81, __VMLINUX_SYMBOL_STR(bsg_unregister_queue) },
	{ 0x2c158f66, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd9ff3ac3, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xcd1e0d1, __VMLINUX_SYMBOL_STR(device_for_each_child) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x24e7efb3, __VMLINUX_SYMBOL_STR(blk_end_request_all) },
	{ 0xff58b518, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xc2f36c82, __VMLINUX_SYMBOL_STR(scsi_get_vpd_page) },
	{ 0x6c6a56ce, __VMLINUX_SYMBOL_STR(transport_remove_device) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd035cb86, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xf2867aee, __VMLINUX_SYMBOL_STR(scsi_mode_sense) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

