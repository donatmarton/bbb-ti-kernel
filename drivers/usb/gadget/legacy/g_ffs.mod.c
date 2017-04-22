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
	{ 0x23fa4443, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x5e2cca6d, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0xe34b5df8, __VMLINUX_SYMBOL_STR(param_ops_byte) },
	{ 0x75d3affc, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x820dcad, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x23a8e790, __VMLINUX_SYMBOL_STR(ffs_name_dev) },
	{ 0x3d2c192c, __VMLINUX_SYMBOL_STR(ffs_single_dev) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9136dcd6, __VMLINUX_SYMBOL_STR(usb_composite_probe) },
	{ 0xb3d41edf, __VMLINUX_SYMBOL_STR(usb_remove_function) },
	{ 0x99111502, __VMLINUX_SYMBOL_STR(usb_add_function) },
	{ 0x977fb8e8, __VMLINUX_SYMBOL_STR(usb_get_function) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf028fc8a, __VMLINUX_SYMBOL_STR(usb_otg_descriptor_init) },
	{ 0xfd1f530e, __VMLINUX_SYMBOL_STR(usb_otg_descriptor_alloc) },
	{ 0x5b06e16b, __VMLINUX_SYMBOL_STR(usb_composite_overwrite_options) },
	{ 0xbd6a4636, __VMLINUX_SYMBOL_STR(usb_add_config) },
	{ 0xcdb360e, __VMLINUX_SYMBOL_STR(usb_string_ids_tab) },
	{ 0x865a1d80, __VMLINUX_SYMBOL_STR(rndis_borrow_net) },
	{ 0xf3c8e493, __VMLINUX_SYMBOL_STR(gether_register_netdev) },
	{ 0x90c6d532, __VMLINUX_SYMBOL_STR(gether_set_gadget) },
	{ 0x230346aa, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0xa0aefd1b, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0x216ba1e7, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0x73b7e824, __VMLINUX_SYMBOL_STR(usb_get_function_instance) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xffb76eee, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x970b8835, __VMLINUX_SYMBOL_STR(usb_put_function) },
	{ 0xcad3bff8, __VMLINUX_SYMBOL_STR(usb_composite_unregister) },
	{ 0xb8e4fba7, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x14846fbb, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb_f_fs,libcomposite,usb_f_rndis,u_ether";

