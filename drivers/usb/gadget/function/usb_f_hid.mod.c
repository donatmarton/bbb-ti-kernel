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
	{ 0x8a22159a, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7589d363, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x5f352a18, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0x8bb9b352, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1ddda5d2, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xcc7508db, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x481ac3b0, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x87bc1537, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x9b5894b0, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0xf2c482be, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x5399a3c4, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0xa634b079, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x9b8d5ba1, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xf4ba9cc1, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x9864e30c, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x16ed89c1, __VMLINUX_SYMBOL_STR(idr_is_empty) },
	{ 0x8f856728, __VMLINUX_SYMBOL_STR(alloc_ep_req) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x5ac15bae, __VMLINUX_SYMBOL_STR(kstrtou16) },
	{ 0xe458c38f, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7130df08, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x9f5a8f6c, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xab318d93, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xfd418fb8, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xc06ec2c8, __VMLINUX_SYMBOL_STR(abort_exclusive_wait) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite";

