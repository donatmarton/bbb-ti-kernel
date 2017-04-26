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
	{ 0x9ef08901, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x78165e70, __VMLINUX_SYMBOL_STR(of_property_read_string_helper) },
	{ 0x7de37354, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4c624872, __VMLINUX_SYMBOL_STR(of_property_read_u32_index) },
	{ 0x5210a5bf, __VMLINUX_SYMBOL_STR(hsi_board_list) },
	{ 0x9db634bf, __VMLINUX_SYMBOL_STR(of_modalias_node) },
	{ 0x4f161c0a, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc1fa4c36, __VMLINUX_SYMBOL_STR(atomic_notifier_chain_unregister) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xc494a967, __VMLINUX_SYMBOL_STR(atomic_notifier_call_chain) },
	{ 0xe8f0c061, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0xb2797252, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xaeb4e64d, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x45560b7e, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf080ed1a, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0xaeed7e14, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0x8b7245c2, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x9330cb9f, __VMLINUX_SYMBOL_STR(sg_alloc_table) },
	{ 0x2d9b9ea6, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x7c8e67a0, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x102a2d8b, __VMLINUX_SYMBOL_STR(atomic_notifier_chain_register) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5bdb768d, __VMLINUX_SYMBOL_STR(of_get_next_available_child) },
	{ 0xcd1e0d1, __VMLINUX_SYMBOL_STR(device_for_each_child) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xff58b518, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x684ff483, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xffdb82bc, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd035cb86, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x9e931cfd, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x6c07d933, __VMLINUX_SYMBOL_STR(add_uevent_var) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

