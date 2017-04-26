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
	{ 0xec9dd16b, __VMLINUX_SYMBOL_STR(usb_serial_generic_tiocmiwait) },
	{ 0x9033e1ee, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0x4ad6184, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0x88beeeb5, __VMLINUX_SYMBOL_STR(usb_serial_generic_open) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x16b7c05d, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xec95edd3, __VMLINUX_SYMBOL_STR(usb_serial_generic_close) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x316bd21c, __VMLINUX_SYMBOL_STR(tty_encode_baud_rate) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0xf2997713, __VMLINUX_SYMBOL_STR(tty_termios_hw_change) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xd9165064, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0x655574c4, __VMLINUX_SYMBOL_STR(usb_serial_handle_dcd_change) },
	{ 0x6f6e5000, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x94e8602, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc4ad22c6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa333a9bd, __VMLINUX_SYMBOL_STR(usb_serial_handle_sysrq_char) },
	{ 0xc935c4b1, __VMLINUX_SYMBOL_STR(usb_serial_handle_break) },
	{ 0x8ef9c91, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x9ccfd892, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_flags) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v1934p0706d*dc*dsc*dp*ic*isc*ip*in*");
