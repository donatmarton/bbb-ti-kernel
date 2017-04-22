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
	{ 0x967b93a4, __VMLINUX_SYMBOL_STR(hid_add_device) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x31087444, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0xe8080f08, __VMLINUX_SYMBOL_STR(hid_parse_report) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x72662feb, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5495392, __VMLINUX_SYMBOL_STR(hid_debug) },
	{ 0xd74bba11, __VMLINUX_SYMBOL_STR(hid_input_report) },
	{ 0x3d63db25, __VMLINUX_SYMBOL_STR(hid_report_raw_event) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xea259a28, __VMLINUX_SYMBOL_STR(greybus_register_driver) },
	{ 0x81cd95a0, __VMLINUX_SYMBOL_STR(greybus_deregister_driver) },
	{ 0x8974e92e, __VMLINUX_SYMBOL_STR(gb_operation_sync_timeout) },
	{ 0xe2608795, __VMLINUX_SYMBOL_STR(gb_connection_destroy) },
	{ 0x521cea4b, __VMLINUX_SYMBOL_STR(gb_operation_request_send_sync_timeout) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5ff25fea, __VMLINUX_SYMBOL_STR(hid_destroy_device) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x236413c4, __VMLINUX_SYMBOL_STR(hid_allocate_device) },
	{ 0x4f466aa8, __VMLINUX_SYMBOL_STR(gb_connection_enable) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc20fb595, __VMLINUX_SYMBOL_STR(gb_connection_create) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1412ba83, __VMLINUX_SYMBOL_STR(gb_connection_disable) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x2739c57f, __VMLINUX_SYMBOL_STR(gb_operation_put) },
	{ 0x62112121, __VMLINUX_SYMBOL_STR(gb_operation_create_flags) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=greybus";

