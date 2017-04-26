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
	{ 0xd109e4f8, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x8fcbec05, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x54614509, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x11b8fd43, __VMLINUX_SYMBOL_STR(param_ops_byte) },
	{ 0x29923658, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x543e49f1, __VMLINUX_SYMBOL_STR(ffs_name_dev) },
	{ 0x6abb7821, __VMLINUX_SYMBOL_STR(ffs_single_dev) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x5ad8a375, __VMLINUX_SYMBOL_STR(usb_composite_probe) },
	{ 0x670dac1e, __VMLINUX_SYMBOL_STR(usb_remove_function) },
	{ 0x520256ce, __VMLINUX_SYMBOL_STR(usb_add_function) },
	{ 0x695a150c, __VMLINUX_SYMBOL_STR(usb_get_function) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb9f2b2ab, __VMLINUX_SYMBOL_STR(usb_composite_overwrite_options) },
	{ 0xf3147d0d, __VMLINUX_SYMBOL_STR(usb_add_config) },
	{ 0x58c4ebc2, __VMLINUX_SYMBOL_STR(usb_string_ids_tab) },
	{ 0x31ee3dd3, __VMLINUX_SYMBOL_STR(rndis_borrow_net) },
	{ 0x34bd1d0c, __VMLINUX_SYMBOL_STR(gether_register_netdev) },
	{ 0x8ea7aac3, __VMLINUX_SYMBOL_STR(gether_set_gadget) },
	{ 0x2dd9ebbc, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0x82b504bc, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0xde09007c, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0xb5fb848b, __VMLINUX_SYMBOL_STR(usb_get_function_instance) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x87bc1537, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x475fbd3f, __VMLINUX_SYMBOL_STR(usb_put_function) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x228eccc7, __VMLINUX_SYMBOL_STR(usb_composite_unregister) },
	{ 0x9e931cfd, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x2d9b9ea6, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb_f_fs,libcomposite,usb_f_rndis,u_ether";

