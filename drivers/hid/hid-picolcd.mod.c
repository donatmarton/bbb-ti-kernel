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
	{ 0x930284be, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x605d4ce7, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0x7129e5f8, __VMLINUX_SYMBOL_STR(hex_asc) },
	{ 0x9404cae6, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x60ebf412, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xf4cf9543, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x5de83ac7, __VMLINUX_SYMBOL_STR(framebuffer_release) },
	{ 0x1eaa1bd4, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x56878201, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x63e98b0d, __VMLINUX_SYMBOL_STR(fb_sys_read) },
	{ 0x22c75cfc, __VMLINUX_SYMBOL_STR(backlight_device_register) },
	{ 0xe6657df, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2b5e81eb, __VMLINUX_SYMBOL_STR(__hid_request) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x9590237e, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x724a5380, __VMLINUX_SYMBOL_STR(sys_copyarea) },
	{ 0x2fefcfbf, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x73d65cd, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0xefd63658, __VMLINUX_SYMBOL_STR(hid_debug_event) },
	{ 0x5495392, __VMLINUX_SYMBOL_STR(hid_debug) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xf228c79, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x664ca1c5, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4093d055, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xbb69c266, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x7e0b888f, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0xd7333a1b, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xed932aa, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0xa9375c98, __VMLINUX_SYMBOL_STR(hid_set_field) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x4f05d0c3, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xb65a5213, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xe0b5b15c, __VMLINUX_SYMBOL_STR(hid_alloc_report_buf) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x80dd7607, __VMLINUX_SYMBOL_STR(sys_fillrect) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6eba04b0, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x2ba05c80, __VMLINUX_SYMBOL_STR(sys_imageblit) },
	{ 0xabfcb4c3, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0xc27f2e57, __VMLINUX_SYMBOL_STR(fb_sys_write) },
	{ 0x8d221fda, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x87a10d5, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x70b268e7, __VMLINUX_SYMBOL_STR(framebuffer_alloc) },
	{ 0x7edaecef, __VMLINUX_SYMBOL_STR(fb_deferred_io_cleanup) },
	{ 0xac3472b3, __VMLINUX_SYMBOL_STR(fb_deferred_io_init) },
	{ 0x1ca84e69, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x963de423, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1d620657, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x55281289, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0xf84cc2e6, __VMLINUX_SYMBOL_STR(ir_raw_event_store) },
	{ 0xf9dd9922, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x9cbcaf26, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x5d0b11d6, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0x9fe2149b, __VMLINUX_SYMBOL_STR(backlight_device_unregister) },
	{ 0x70718b3e, __VMLINUX_SYMBOL_STR(ir_raw_event_handle) },
	{ 0x186115dc, __VMLINUX_SYMBOL_STR(hid_output_report) },
	{ 0x30c0ddd6, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0xc5862dd2, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v000004D8p0000C002");
MODULE_ALIAS("hid:b0003g*v000004D8p0000F002");
