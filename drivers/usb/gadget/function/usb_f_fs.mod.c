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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdf0f75c6, __VMLINUX_SYMBOL_STR(eventfd_signal) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xb5a12ae1, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xd6837659, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0xe7fcc45d, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x6cafaa20, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xc6cbeb76, __VMLINUX_SYMBOL_STR(dup_iter) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xbfdcfeb8, __VMLINUX_SYMBOL_STR(mount_nodev) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x481ac3b0, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xbf1faebe, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xd22a3a52, __VMLINUX_SYMBOL_STR(d_delete) },
	{ 0xdf98c806, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0x64c5538b, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x7a2add7d, __VMLINUX_SYMBOL_STR(current_kernel_time64) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x4123a956, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x87bc1537, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x48a0f939, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x9037d445, __VMLINUX_SYMBOL_STR(unregister_gadget_item) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2249ac2, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x9b5894b0, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0xd67364f7, __VMLINUX_SYMBOL_STR(eventfd_ctx_fdget) },
	{ 0x48c98fc9, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x5399a3c4, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0xc01c84b, __VMLINUX_SYMBOL_STR(__wake_up_locked) },
	{ 0xab713d46, __VMLINUX_SYMBOL_STR(use_mm) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xf4ba9cc1, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x51ef33b8, __VMLINUX_SYMBOL_STR(kstrndup) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xdd324e1e, __VMLINUX_SYMBOL_STR(simple_dir_operations) },
	{ 0xca65c2f4, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xbec38dcc, __VMLINUX_SYMBOL_STR(kiocb_set_cancel_fn) },
	{ 0x46701a7, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xeef79882, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xaa3f7ca3, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0xf90bbd60, __VMLINUX_SYMBOL_STR(d_alloc_name) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd2e78255, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0xf9dd9922, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0xab318d93, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0x2aadd6e5, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x9cbcaf26, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x7fc085f3, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x941f2aaa, __VMLINUX_SYMBOL_STR(eventfd_ctx_put) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xbab81915, __VMLINUX_SYMBOL_STR(unuse_mm) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x13683783, __VMLINUX_SYMBOL_STR(simple_dir_inode_operations) },
	{ 0x96b9a5f5, __VMLINUX_SYMBOL_STR(usb_string_ids_n) },
	{ 0xceaa752d, __VMLINUX_SYMBOL_STR(d_instantiate) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite";

