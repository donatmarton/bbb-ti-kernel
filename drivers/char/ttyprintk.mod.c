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
	{ 0x85f49cc5, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0x87fa0d94, __VMLINUX_SYMBOL_STR(tty_port_destroy) },
	{ 0x5ca92d40, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0xfadc5e02, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0x1ea6f9a0, __VMLINUX_SYMBOL_STR(tty_port_link_device) },
	{ 0x62d2911a, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0x6897aba7, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0x28b2e201, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x717037eb, __VMLINUX_SYMBOL_STR(tty_port_close) },
	{ 0xb3c56d19, __VMLINUX_SYMBOL_STR(tty_port_open) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

