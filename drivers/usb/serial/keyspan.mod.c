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
	{ 0x9033e1ee, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0x4ad6184, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0xa08d5701, __VMLINUX_SYMBOL_STR(ezusb_fx1_ihex_firmware_download) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x55da3d4e, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x92495ba5, __VMLINUX_SYMBOL_STR(usb_serial_port_softint) },
	{ 0x9ccfd892, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_flags) },
	{ 0x8ef9c91, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x69c6c5, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0xfa5aa1d9, __VMLINUX_SYMBOL_STR(tty_port_tty_hangup) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x900f303a, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x46f344d6, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x16b7c05d, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x71d463ea, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x316bd21c, __VMLINUX_SYMBOL_STR(tty_encode_baud_rate) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xc4ad22c6, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial,ezusb";

MODULE_ALIAS("usb:v06CDp0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp010Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0118d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp011Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0113d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp011Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0112d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0107d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp010Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0119d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0121d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp011Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp010Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0115d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0135d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp010Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp012Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0131d*dc*dsc*dp*ic*isc*ip*in*");
