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
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xa634b079, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xf6608bf6, __VMLINUX_SYMBOL_STR(driver_remove_file) },
	{ 0x7130df08, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x2060d6e7, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x815e875d, __VMLINUX_SYMBOL_STR(driver_create_file) },
	{ 0x77011982, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0xf6c0e856, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0xfd418fb8, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x22fcb5d1, __VMLINUX_SYMBOL_STR(scsi_ioctl) },
	{ 0x6fcea7cf, __VMLINUX_SYMBOL_STR(scsi_ioctl_block_when_processing_errors) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x6ae0f10b, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x492621b9, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x22c5aeae, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc538a6c2, __VMLINUX_SYMBOL_STR(scsi_block_when_processing_errors) },
	{ 0x48a0f939, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x70f8d9f0, __VMLINUX_SYMBOL_STR(blk_rq_map_kern) },
	{ 0x16188c6b, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0x98706b34, __VMLINUX_SYMBOL_STR(blk_rq_map_user) },
	{ 0xe094ef39, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xd49bd803, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x48e89e2e, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0xbfdf3fd4, __VMLINUX_SYMBOL_STR(blk_rq_set_block_pc) },
	{ 0x98ddc519, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0x334da4e, __VMLINUX_SYMBOL_STR(scsi_command_size_tbl) },
	{ 0xf9dd9922, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x95ae17c6, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7c1372e8, __VMLINUX_SYMBOL_STR(panic) },
	{ 0x550fdba2, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xd520751a, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0xeeb1210e, __VMLINUX_SYMBOL_STR(blk_rq_unmap_user) },
	{ 0x9cbcaf26, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x89cf4c4a, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x891b5ed2, __VMLINUX_SYMBOL_STR(__scsi_print_sense) },
	{ 0x2b0ba2b0, __VMLINUX_SYMBOL_STR(scsi_sense_desc_find) },
	{ 0x796fc5ce, __VMLINUX_SYMBOL_STR(scsi_get_sense_info_fld) },
	{ 0xb7488905, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0x3dc1747f, __VMLINUX_SYMBOL_STR(scsi_set_medium_removal) },
	{ 0xc2917c16, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xb65a5213, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x9b8d5ba1, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xdb6afd09, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x1ddda5d2, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x6be960f4, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

