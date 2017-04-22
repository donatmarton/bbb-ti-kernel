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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x9cef51a8, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x4c591bb0, __VMLINUX_SYMBOL_STR(sg_pcopy_to_buffer) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xa6046c14, __VMLINUX_SYMBOL_STR(mmc_detect_change) },
	{ 0x6e0f1e8c, __VMLINUX_SYMBOL_STR(gb_gbphy_register_driver) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x31087444, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0xc384db5d, __VMLINUX_SYMBOL_STR(mmc_free_host) },
	{ 0xcd255ed4, __VMLINUX_SYMBOL_STR(sg_pcopy_from_buffer) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x1b71398f, __VMLINUX_SYMBOL_STR(gb_connection_disable_rx) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x72662feb, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xf62a9d43, __VMLINUX_SYMBOL_STR(gb_gbphy_deregister_driver) },
	{ 0x7c69a729, __VMLINUX_SYMBOL_STR(gb_connection_enable_tx) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x8974e92e, __VMLINUX_SYMBOL_STR(gb_operation_sync_timeout) },
	{ 0xe2608795, __VMLINUX_SYMBOL_STR(gb_connection_destroy) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x521cea4b, __VMLINUX_SYMBOL_STR(gb_operation_request_send_sync_timeout) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5453083e, __VMLINUX_SYMBOL_STR(mmc_add_host) },
	{ 0x91052afb, __VMLINUX_SYMBOL_STR(mmc_alloc_host) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x4f466aa8, __VMLINUX_SYMBOL_STR(gb_connection_enable) },
	{ 0x283ace95, __VMLINUX_SYMBOL_STR(mmc_remove_host) },
	{ 0xc20fb595, __VMLINUX_SYMBOL_STR(gb_connection_create) },
	{ 0x1412ba83, __VMLINUX_SYMBOL_STR(gb_connection_disable) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xa0ff2bf3, __VMLINUX_SYMBOL_STR(gb_operation_get_payload_size_max) },
	{ 0x2739c57f, __VMLINUX_SYMBOL_STR(gb_operation_put) },
	{ 0xa975bf80, __VMLINUX_SYMBOL_STR(mmc_request_done) },
	{ 0x62112121, __VMLINUX_SYMBOL_STR(gb_operation_create_flags) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gb-gbphy,greybus";

