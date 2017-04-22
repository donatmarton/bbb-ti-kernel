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
	{ 0x23d32333, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0x45411897, __VMLINUX_SYMBOL_STR(target_unregister_template) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x10ab577b, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x46add53d, __VMLINUX_SYMBOL_STR(target_register_template) },
	{ 0xb613656a, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0xcd6f8d90, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0x65bb4c27, __VMLINUX_SYMBOL_STR(__root_device_register) },
	{ 0xedf65a89, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xf1780432, __VMLINUX_SYMBOL_STR(root_device_unregister) },
	{ 0x3655bcb1, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0xce9e09ef, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x950f8c15, __VMLINUX_SYMBOL_STR(scsi_add_device) },
	{ 0xe5b05751, __VMLINUX_SYMBOL_STR(core_tpg_deregister) },
	{ 0xcff65047, __VMLINUX_SYMBOL_STR(target_alloc_session) },
	{ 0xabb6669b, __VMLINUX_SYMBOL_STR(transport_deregister_session) },
	{ 0x7c9c915a, __VMLINUX_SYMBOL_STR(target_execute_cmd) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x44142d4, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xaa3c87ff, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x352a82b, __VMLINUX_SYMBOL_STR(scmd_printk) },
	{ 0xb54f27e5, __VMLINUX_SYMBOL_STR(target_submit_cmd_map_sgls) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x8c4826c2, __VMLINUX_SYMBOL_STR(transport_generic_handle_tmr) },
	{ 0x4601fd06, __VMLINUX_SYMBOL_STR(transport_lookup_tmr_lun) },
	{ 0x22a5d072, __VMLINUX_SYMBOL_STR(core_tmr_alloc_req) },
	{ 0x297944e3, __VMLINUX_SYMBOL_STR(transport_init_se_cmd) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x666774aa, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xd26e0e90, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x235f39b4, __VMLINUX_SYMBOL_STR(transport_generic_free_cmd) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x40a9317a, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x3d31571a, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x5918fc55, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0x87715811, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x986abfdc, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4d72b5a7, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xe45ce71a, __VMLINUX_SYMBOL_STR(core_tpg_register) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xaa7a053f, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xbef84317, __VMLINUX_SYMBOL_STR(scsi_remove_device) },
	{ 0xcbbb13f7, __VMLINUX_SYMBOL_STR(scsi_device_lookup) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5eb0bb28, __VMLINUX_SYMBOL_STR(core_allocate_nexus_loss_ua) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x69c03fc5, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";

