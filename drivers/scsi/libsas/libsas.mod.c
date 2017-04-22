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
	{ 0x10ab577b, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x25190e47, __VMLINUX_SYMBOL_STR(ata_std_prereset) },
	{ 0xc429b018, __VMLINUX_SYMBOL_STR(ata_port_wait_eh) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x23d32333, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0x5d170d71, __VMLINUX_SYMBOL_STR(sas_remove_children) },
	{ 0xd6286ac, __VMLINUX_SYMBOL_STR(sas_release_transport) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb8eec98b, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x292db41e, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x49612c98, __VMLINUX_SYMBOL_STR(blk_abort_request) },
	{ 0x73394d43, __VMLINUX_SYMBOL_STR(scsi_block_requests) },
	{ 0xab2bb062, __VMLINUX_SYMBOL_STR(ata_std_sched_eh) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x9fd8bb1e, __VMLINUX_SYMBOL_STR(sas_port_free) },
	{ 0x1c1e6de, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x2026cb2a, __VMLINUX_SYMBOL_STR(sas_phy_add) },
	{ 0x356f5c26, __VMLINUX_SYMBOL_STR(scsi_unblock_requests) },
	{ 0x16401799, __VMLINUX_SYMBOL_STR(ata_sas_slave_configure) },
	{ 0x41f19a68, __VMLINUX_SYMBOL_STR(ata_scsi_cmd_error_handler) },
	{ 0x31fc7719, __VMLINUX_SYMBOL_STR(sas_port_add_phy) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x8e40d3d1, __VMLINUX_SYMBOL_STR(sas_rphy_free) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x829848d0, __VMLINUX_SYMBOL_STR(sas_port_delete_phy) },
	{ 0xb0d7a0b9, __VMLINUX_SYMBOL_STR(sas_rphy_add) },
	{ 0x4a877ba2, __VMLINUX_SYMBOL_STR(ata_sas_port_suspend) },
	{ 0x142484ca, __VMLINUX_SYMBOL_STR(ata_sas_port_init) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xf5c11f3f, __VMLINUX_SYMBOL_STR(sas_port_delete) },
	{ 0xfc11aa5a, __VMLINUX_SYMBOL_STR(ata_sas_async_probe) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xb2b9a56, __VMLINUX_SYMBOL_STR(sas_attach_transport) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x49163ab3, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0x80826694, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x17a720e2, __VMLINUX_SYMBOL_STR(sas_rphy_delete) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x3a8c3ae5, __VMLINUX_SYMBOL_STR(ata_sas_port_stop) },
	{ 0xbd94e524, __VMLINUX_SYMBOL_STR(scsi_queue_work) },
	{ 0xad1642cf, __VMLINUX_SYMBOL_STR(sas_expander_alloc) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xade055cc, __VMLINUX_SYMBOL_STR(sas_read_port_mode_page) },
	{ 0xbe2b4186, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xbf32482c, __VMLINUX_SYMBOL_STR(sas_end_device_alloc) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x5fcc77bb, __VMLINUX_SYMBOL_STR(ata_std_error_handler) },
	{ 0x24d193eb, __VMLINUX_SYMBOL_STR(ata_scsi_port_error_handler) },
	{ 0xa390d030, __VMLINUX_SYMBOL_STR(ata_sas_port_start) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x5c8be477, __VMLINUX_SYMBOL_STR(ata_std_qc_defer) },
	{ 0xd26e0e90, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x78e6a5e7, __VMLINUX_SYMBOL_STR(sas_port_mark_backlink) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x38b95476, __VMLINUX_SYMBOL_STR(sas_port_add) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x85825898, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xf811e69d, __VMLINUX_SYMBOL_STR(scsi_eh_flush_done_q) },
	{ 0xf180089f, __VMLINUX_SYMBOL_STR(ata_port_schedule_eh) },
	{ 0xb1c0c1c2, __VMLINUX_SYMBOL_STR(async_schedule_domain) },
	{ 0xd97307cf, __VMLINUX_SYMBOL_STR(ata_sas_port_alloc) },
	{ 0xed555eab, __VMLINUX_SYMBOL_STR(ata_noop_qc_prep) },
	{ 0xfcdcd17e, __VMLINUX_SYMBOL_STR(scsi_eh_finish_cmd) },
	{ 0xad86d0a9, __VMLINUX_SYMBOL_STR(sas_phy_free) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x666774aa, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x73c832f2, __VMLINUX_SYMBOL_STR(ata_dev_classify) },
	{ 0xf8dfe3ad, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6cd21997, __VMLINUX_SYMBOL_STR(ata_tf_to_fis) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xb7483eb7, __VMLINUX_SYMBOL_STR(sas_phy_alloc) },
	{ 0xa2d7eefd, __VMLINUX_SYMBOL_STR(ata_wait_after_reset) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x657b2089, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xedf65a89, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x26c90ea4, __VMLINUX_SYMBOL_STR(scsi_eh_get_sense) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x82701365, __VMLINUX_SYMBOL_STR(int_to_scsilun) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x2dd0e016, __VMLINUX_SYMBOL_STR(ata_sas_port_resume) },
	{ 0x53627c75, __VMLINUX_SYMBOL_STR(sas_port_get_phy) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x39446ace, __VMLINUX_SYMBOL_STR(scsi_eh_ready_devs) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6ca4bf88, __VMLINUX_SYMBOL_STR(async_synchronize_full_domain) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9304b6, __VMLINUX_SYMBOL_STR(ata_tf_from_fis) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x26bd3f99, __VMLINUX_SYMBOL_STR(sas_port_alloc) },
	{ 0x887bc606, __VMLINUX_SYMBOL_STR(ata_host_init) },
	{ 0xfd620903, __VMLINUX_SYMBOL_STR(flush_kernel_dcache_page) },
	{ 0xde0aeb10, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x8536628d, __VMLINUX_SYMBOL_STR(scsi_schedule_eh) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xaa7d42d1, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xb4182b37, __VMLINUX_SYMBOL_STR(ata_std_postreset) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xe0744c61, __VMLINUX_SYMBOL_STR(sas_rphy_unlink) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xc500a48d, __VMLINUX_SYMBOL_STR(ata_sas_queuecmd) },
	{ 0xa3bd6e4c, __VMLINUX_SYMBOL_STR(ata_sas_port_destroy) },
	{ 0xa38602cd, __VMLINUX_SYMBOL_STR(drain_workqueue) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x4503cce3, __VMLINUX_SYMBOL_STR(sas_rphy_remove) },
	{ 0x3743de2b, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x4e766640, __VMLINUX_SYMBOL_STR(ata_sas_scsi_ioctl) },
	{ 0xd654359c, __VMLINUX_SYMBOL_STR(__ata_change_queue_depth) },
	{ 0x5034475d, __VMLINUX_SYMBOL_STR(ata_qc_complete) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_transport_sas";

