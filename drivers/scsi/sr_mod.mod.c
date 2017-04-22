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
	{ 0x560829e6, __VMLINUX_SYMBOL_STR(scsi_set_medium_removal) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc21c10a6, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x4b2dcc2b, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xb7488905, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0xefe21d65, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa7960f66, __VMLINUX_SYMBOL_STR(cdrom_number_of_slots) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x874d014b, __VMLINUX_SYMBOL_STR(scsi_execute_req_flags) },
	{ 0xa854d47e, __VMLINUX_SYMBOL_STR(scsi_ioctl_block_when_processing_errors) },
	{ 0x471560b2, __VMLINUX_SYMBOL_STR(unregister_cdrom) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x352a82b, __VMLINUX_SYMBOL_STR(scmd_printk) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xdc201953, __VMLINUX_SYMBOL_STR(cdrom_open) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xccac14a, __VMLINUX_SYMBOL_STR(scsi_execute) },
	{ 0x5e4ebdf3, __VMLINUX_SYMBOL_STR(scsi_autopm_get_device) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x3fb24427, __VMLINUX_SYMBOL_STR(cdrom_release) },
	{ 0x115c2e99, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xaf3dd7dc, __VMLINUX_SYMBOL_STR(scsi_logging_level) },
	{ 0xce9e09ef, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xb60fb5, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x35691473, __VMLINUX_SYMBOL_STR(cdrom_get_media_event) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x4edf2171, __VMLINUX_SYMBOL_STR(cdrom_check_events) },
	{ 0xb6936ffe, __VMLINUX_SYMBOL_STR(_bcd2bin) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x10a19016, __VMLINUX_SYMBOL_STR(cdrom_get_last_written) },
	{ 0xaa7a053f, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x59165bca, __VMLINUX_SYMBOL_STR(scsi_ioctl) },
	{ 0xbf4c34d6, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x93b9fb0b, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0x81f8216, __VMLINUX_SYMBOL_STR(scsi_block_when_processing_errors) },
	{ 0xb9e0d3c5, __VMLINUX_SYMBOL_STR(scsi_test_unit_ready) },
	{ 0xfed6ef59, __VMLINUX_SYMBOL_STR(scsi_init_io) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd4b99fe, __VMLINUX_SYMBOL_STR(cdrom_ioctl) },
	{ 0x6a3de312, __VMLINUX_SYMBOL_STR(blk_pm_runtime_init) },
	{ 0x74502618, __VMLINUX_SYMBOL_STR(register_cdrom) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x767a75ff, __VMLINUX_SYMBOL_STR(device_add_disk) },
	{ 0xcb92229a, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0x9b24bd7d, __VMLINUX_SYMBOL_STR(scsi_autopm_put_device) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xcf78e92, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0xbfd3aec8, __VMLINUX_SYMBOL_STR(scsi_mode_sense) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdrom";

