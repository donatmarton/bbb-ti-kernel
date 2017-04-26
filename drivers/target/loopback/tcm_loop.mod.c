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
	{ 0xa2b43768, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0xbea4899f, __VMLINUX_SYMBOL_STR(target_unregister_template) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xb5233f3e, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xa58d9fe2, __VMLINUX_SYMBOL_STR(target_register_template) },
	{ 0x7de37354, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x9ef08901, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0x132b9715, __VMLINUX_SYMBOL_STR(__root_device_register) },
	{ 0x71aa3ade, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xfb3976dc, __VMLINUX_SYMBOL_STR(root_device_unregister) },
	{ 0xaeed7e14, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0x2060d6e7, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x28959169, __VMLINUX_SYMBOL_STR(scsi_add_device) },
	{ 0xc2917c16, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x9c0e0963, __VMLINUX_SYMBOL_STR(scsi_remove_device) },
	{ 0xadb0e247, __VMLINUX_SYMBOL_STR(scsi_device_lookup) },
	{ 0x98ff3d8f, __VMLINUX_SYMBOL_STR(core_tpg_deregister) },
	{ 0xe2a6d3f5, __VMLINUX_SYMBOL_STR(transport_free_session) },
	{ 0x9578a530, __VMLINUX_SYMBOL_STR(transport_register_session) },
	{ 0xb0025d5, __VMLINUX_SYMBOL_STR(core_tpg_check_initiator_node_acl) },
	{ 0x3b5acf80, __VMLINUX_SYMBOL_STR(transport_init_session) },
	{ 0x6a630897, __VMLINUX_SYMBOL_STR(transport_deregister_session) },
	{ 0xdfff8b93, __VMLINUX_SYMBOL_STR(target_execute_cmd) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5fe8cd77, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x4d11b986, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2f7e2e14, __VMLINUX_SYMBOL_STR(scmd_printk) },
	{ 0xf029ca88, __VMLINUX_SYMBOL_STR(target_submit_cmd_map_sgls) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x912f7b12, __VMLINUX_SYMBOL_STR(transport_generic_handle_tmr) },
	{ 0x3285edb0, __VMLINUX_SYMBOL_STR(transport_lookup_tmr_lun) },
	{ 0x10055a67, __VMLINUX_SYMBOL_STR(core_tmr_alloc_req) },
	{ 0x481be75c, __VMLINUX_SYMBOL_STR(transport_init_se_cmd) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x55184b5d, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xf4b6cdae, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xc003bdee, __VMLINUX_SYMBOL_STR(transport_generic_free_cmd) },
	{ 0xe6657df, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x3aa5d21, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x5481567a, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0xb2797252, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0xd035cb86, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x684ff483, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x55051359, __VMLINUX_SYMBOL_STR(core_tpg_register) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x4fae3161, __VMLINUX_SYMBOL_STR(core_allocate_nexus_loss_ua) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";

