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
	{ 0xae64b44b, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0xb5233f3e, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x815131ba, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x703a13f8, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
	{ 0x2b90cdaa, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x183fa88b, __VMLINUX_SYMBOL_STR(mempool_alloc_slab) },
	{ 0x8a99a016, __VMLINUX_SYMBOL_STR(mempool_free_slab) },
	{ 0x71aa3ade, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x95ae17c6, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0x1cd0f6c0, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0xd49bd803, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x920664c8, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5fe8cd77, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x4d11b986, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x3aa5d21, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x5481567a, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4034828, __VMLINUX_SYMBOL_STR(system_freezable_wq) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0x2af14656, __VMLINUX_SYMBOL_STR(blk_mq_unique_tag) },
	{ 0x5fb20428, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x87da446c, __VMLINUX_SYMBOL_STR(virtqueue_kick_prepare) },
	{ 0x8b5cf2a4, __VMLINUX_SYMBOL_STR(virtqueue_notify) },
	{ 0x79cf82fd, __VMLINUX_SYMBOL_STR(virtqueue_add_sgs) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xbb152ef3, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0xa2b43768, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0xeb13295c, __VMLINUX_SYMBOL_STR(scsi_rescan_device) },
	{ 0x28959169, __VMLINUX_SYMBOL_STR(scsi_add_device) },
	{ 0x9c0e0963, __VMLINUX_SYMBOL_STR(scsi_remove_device) },
	{ 0x25622303, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc2917c16, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xadb0e247, __VMLINUX_SYMBOL_STR(scsi_device_lookup) },
	{ 0x7327ac5e, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0xd8985491, __VMLINUX_SYMBOL_STR(virtqueue_add_inbuf) },
	{ 0x5c265cba, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0xdf98c806, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x7de37172, __VMLINUX_SYMBOL_STR(virtqueue_enable_cb) },
	{ 0x7ba8f999, __VMLINUX_SYMBOL_STR(virtqueue_is_broken) },
	{ 0x8fbeb765, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0xc7d30250, __VMLINUX_SYMBOL_STR(virtqueue_disable_cb) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2f7e2e14, __VMLINUX_SYMBOL_STR(scmd_printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("virtio:d00000008v*");
