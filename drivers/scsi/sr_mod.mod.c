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
	{ 0x3dc1747f, __VMLINUX_SYMBOL_STR(scsi_set_medium_removal) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb502f2e1, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x550fdba2, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xb7488905, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x455547b3, __VMLINUX_SYMBOL_STR(cdrom_number_of_slots) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x2afb664f, __VMLINUX_SYMBOL_STR(scsi_execute_req_flags) },
	{ 0x6fcea7cf, __VMLINUX_SYMBOL_STR(scsi_ioctl_block_when_processing_errors) },
	{ 0x9868d95f, __VMLINUX_SYMBOL_STR(unregister_cdrom) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xe094ef39, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2f7e2e14, __VMLINUX_SYMBOL_STR(scmd_printk) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x31d2e00c, __VMLINUX_SYMBOL_STR(cdrom_open) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x47ae190f, __VMLINUX_SYMBOL_STR(scsi_execute) },
	{ 0x4b14684a, __VMLINUX_SYMBOL_STR(scsi_autopm_get_device) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x18e30363, __VMLINUX_SYMBOL_STR(cdrom_release) },
	{ 0x251b483d, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xaf3dd7dc, __VMLINUX_SYMBOL_STR(scsi_logging_level) },
	{ 0x2060d6e7, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x95ae17c6, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xca3ba07, __VMLINUX_SYMBOL_STR(cdrom_get_media_event) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x75140d8a, __VMLINUX_SYMBOL_STR(cdrom_check_events) },
	{ 0xb6936ffe, __VMLINUX_SYMBOL_STR(_bcd2bin) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x7f3fdcc8, __VMLINUX_SYMBOL_STR(cdrom_get_last_written) },
	{ 0xc2917c16, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x22fcb5d1, __VMLINUX_SYMBOL_STR(scsi_ioctl) },
	{ 0xdb6afd09, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x77011982, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0xc538a6c2, __VMLINUX_SYMBOL_STR(scsi_block_when_processing_errors) },
	{ 0x36d08a97, __VMLINUX_SYMBOL_STR(scsi_test_unit_ready) },
	{ 0x9f4660d5, __VMLINUX_SYMBOL_STR(scsi_init_io) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6a3868ff, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x78c0acb9, __VMLINUX_SYMBOL_STR(cdrom_ioctl) },
	{ 0x19109ec6, __VMLINUX_SYMBOL_STR(blk_pm_runtime_init) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x51a338bf, __VMLINUX_SYMBOL_STR(register_cdrom) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x22c5aeae, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0xd09b6e5d, __VMLINUX_SYMBOL_STR(scsi_autopm_put_device) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x8800bc09, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0xf2867aee, __VMLINUX_SYMBOL_STR(scsi_mode_sense) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdrom";

