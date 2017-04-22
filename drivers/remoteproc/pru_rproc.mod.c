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
	{ 0xd31ccb06, __VMLINUX_SYMBOL_STR(of_machine_is_compatible) },
	{ 0x1d810aa0, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xc7fd8e9, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x284b2c2a, __VMLINUX_SYMBOL_STR(rproc_free) },
	{ 0xbe2068f9, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x87eb09e3, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x40a9317a, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xba2708ac, __VMLINUX_SYMBOL_STR(pruss_cfg_set_gpmux) },
	{ 0x623c51ae, __VMLINUX_SYMBOL_STR(rproc_del) },
	{ 0xa7d99be2, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x5788a263, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x40f24b28, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xa563adc7, __VMLINUX_SYMBOL_STR(rproc_vq_interrupt) },
	{ 0x69e412be, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x837bc10d, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xb743dd09, __VMLINUX_SYMBOL_STR(simple_attr_read) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x85602013, __VMLINUX_SYMBOL_STR(mbox_request_channel) },
	{ 0x38316dbe, __VMLINUX_SYMBOL_STR(pruss_intc_configure) },
	{ 0x9e501f1e, __VMLINUX_SYMBOL_STR(rproc_alloc) },
	{ 0xcbc15637, __VMLINUX_SYMBOL_STR(simple_attr_release) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x131152af, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb743780f, __VMLINUX_SYMBOL_STR(platform_get_irq_byname) },
	{ 0xe305b54c, __VMLINUX_SYMBOL_STR(pruss_intc_unconfigure) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xb2cffb18, __VMLINUX_SYMBOL_STR(platform_get_resource_byname) },
	{ 0xbbc3f173, __VMLINUX_SYMBOL_STR(pruss_intc_trigger) },
	{ 0x99062aba, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xaa7d42d1, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb08a7203, __VMLINUX_SYMBOL_STR(rproc_add) },
	{ 0x31112e9, __VMLINUX_SYMBOL_STR(mbox_free_channel) },
	{ 0x36cf4f03, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x2deb66d0, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0x325a7389, __VMLINUX_SYMBOL_STR(simple_attr_open) },
	{ 0x689a8ed3, __VMLINUX_SYMBOL_STR(simple_attr_write) },
	{ 0x62432b2b, __VMLINUX_SYMBOL_STR(mbox_send_message) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pruss,pruss_intc";

MODULE_ALIAS("of:N*T*Cti,am3356-pru");
MODULE_ALIAS("of:N*T*Cti,am3356-pruC*");
MODULE_ALIAS("of:N*T*Cti,am4376-pru");
MODULE_ALIAS("of:N*T*Cti,am4376-pruC*");
MODULE_ALIAS("of:N*T*Cti,am5728-pru");
MODULE_ALIAS("of:N*T*Cti,am5728-pruC*");
MODULE_ALIAS("of:N*T*Cti,k2g-pru");
MODULE_ALIAS("of:N*T*Cti,k2g-pruC*");
