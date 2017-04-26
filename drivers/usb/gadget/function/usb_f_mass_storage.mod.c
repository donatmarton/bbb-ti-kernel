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
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x5f352a18, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0x6095e77d, __VMLINUX_SYMBOL_STR(complete_and_exit) },
	{ 0x26c06d6c, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x8bb9b352, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x5f0d19, __VMLINUX_SYMBOL_STR(dequeue_signal) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xeae38b84, __VMLINUX_SYMBOL_STR(config_item_put) },
	{ 0xd297ff6b, __VMLINUX_SYMBOL_STR(file_path) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x75e2edae, __VMLINUX_SYMBOL_STR(vfs_fsync) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x481ac3b0, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0xe564cc94, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x9101360b, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xd49bd803, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x48ec25d6, __VMLINUX_SYMBOL_STR(vfs_read) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x752d5f5b, __VMLINUX_SYMBOL_STR(kstrtobool) },
	{ 0xb2797252, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x87bc1537, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x942c9222, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x9037d445, __VMLINUX_SYMBOL_STR(unregister_gadget_item) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9b5894b0, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5399a3c4, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x6f3db115, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xbc5c84b5, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x394fd24c, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xf4ba9cc1, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x87399e0f, __VMLINUX_SYMBOL_STR(usb_composite_setup_continue) },
	{ 0x7c8e67a0, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xe458c38f, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0xd65172e, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0xf8bdfd6c, __VMLINUX_SYMBOL_STR(send_sig_info) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0x57e21043, __VMLINUX_SYMBOL_STR(invalidate_mapping_pages) },
	{ 0x9f5a8f6c, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xf9dd9922, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0xab318d93, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x684ff483, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xd035cb86, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x719e5acf, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x8c609799, __VMLINUX_SYMBOL_STR(vfs_write) },
	{ 0xff48aed2, __VMLINUX_SYMBOL_STR(filp_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite";

