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
	{ 0x66fb1de5, __VMLINUX_SYMBOL_STR(usb_serial_generic_unthrottle) },
	{ 0x553e7bee, __VMLINUX_SYMBOL_STR(usb_serial_generic_throttle) },
	{ 0xba735990, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0x63141942, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x94b180db, __VMLINUX_SYMBOL_STR(usb_reset_configuration) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x42211a09, __VMLINUX_SYMBOL_STR(tty_encode_baud_rate) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v084Fp0001d*dc*dsc*dp*ic*isc*ip*in*");
