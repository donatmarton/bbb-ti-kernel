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
	{ 0xd945909, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4a4a4bd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xd65172e, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbada1fc0, __VMLINUX_SYMBOL_STR(memstick_add_host) },
	{ 0xca72012e, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xe564cc94, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xf9dd9922, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x3ec90c14, __VMLINUX_SYMBOL_STR(memstick_alloc_host) },
	{ 0x955cfbde, __VMLINUX_SYMBOL_STR(rtsx_usb_transfer_data) },
	{ 0x1f36272d, __VMLINUX_SYMBOL_STR(rtsx_usb_ep0_write_register) },
	{ 0x8deafbcd, __VMLINUX_SYMBOL_STR(rtsx_usb_ep0_read_register) },
	{ 0xd43a7083, __VMLINUX_SYMBOL_STR(rtsx_usb_get_rsp) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9cbcaf26, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x8c91ace0, __VMLINUX_SYMBOL_STR(memstick_detect_change) },
	{ 0xb877f52a, __VMLINUX_SYMBOL_STR(rtsx_usb_read_register) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xe7d8fbae, __VMLINUX_SYMBOL_STR(rtsx_usb_switch_clock) },
	{ 0xcc5c43d2, __VMLINUX_SYMBOL_STR(rtsx_usb_write_register) },
	{ 0x8a6dcba3, __VMLINUX_SYMBOL_STR(rtsx_usb_card_exclusive_check) },
	{ 0x47249507, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xdaa8f471, __VMLINUX_SYMBOL_STR(rtsx_usb_send_cmd) },
	{ 0x81a07154, __VMLINUX_SYMBOL_STR(rtsx_usb_add_cmd) },
	{ 0x5838ff3a, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xf3b12552, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x860380f3, __VMLINUX_SYMBOL_STR(memstick_free_host) },
	{ 0xd13aef0a, __VMLINUX_SYMBOL_STR(memstick_remove_host) },
	{ 0xd49bd803, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd0052250, __VMLINUX_SYMBOL_STR(memstick_next_req) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xa5c36b5, __VMLINUX_SYMBOL_STR(memstick_suspend_host) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x27e6d004, __VMLINUX_SYMBOL_STR(memstick_resume_host) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=memstick,rtsx_usb";

MODULE_ALIAS("platform:rtsx_usb_ms");
