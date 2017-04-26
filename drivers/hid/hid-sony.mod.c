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
	{ 0xe6252d2c, __VMLINUX_SYMBOL_STR(ida_destroy) },
	{ 0x5d0b11d6, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x55281289, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5495392, __VMLINUX_SYMBOL_STR(hid_debug) },
	{ 0x33694668, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xfab079d1, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x340f03c7, __VMLINUX_SYMBOL_STR(hid_validate_values) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x749d8b81, __VMLINUX_SYMBOL_STR(power_supply_powers) },
	{ 0x5973edcd, __VMLINUX_SYMBOL_STR(power_supply_register) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x1eaa1bd4, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x2e0ffc60, __VMLINUX_SYMBOL_STR(power_supply_unregister) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xed932aa, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0xf2c482be, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0xcc7508db, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdb9abe93, __VMLINUX_SYMBOL_STR(input_ff_create_memless) },
	{ 0xd7333a1b, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0xefb6bf27, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0x60ebf412, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2b5e81eb, __VMLINUX_SYMBOL_STR(__hid_request) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1ca84e69, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x222a884d, __VMLINUX_SYMBOL_STR(power_supply_get_drvdata) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x54b0b3ea, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0xf228c79, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0005g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0003g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000024B");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000374");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000002");
MODULE_ALIAS("hid:b0003g*v0000054Cp00001000");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000306");
MODULE_ALIAS("hid:b0005g*v0000046Dp00000306");
MODULE_ALIAS("hid:b0005g*v00000609p00000306");
MODULE_ALIAS("hid:b0003g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0005g*v0000054Cp000005C4");
