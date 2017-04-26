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
	{ 0xfbc8d1c8, __VMLINUX_SYMBOL_STR(of_translate_address) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7de37354, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x791901b0, __VMLINUX_SYMBOL_STR(irq_create_of_mapping) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5737dbdf, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xb2797252, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x79c5a9f0, __VMLINUX_SYMBOL_STR(ioremap) },
	{ 0x2060d6e7, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xabab5bb1, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xaeed7e14, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0xadeb807e, __VMLINUX_SYMBOL_STR(of_get_address) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x7c8e67a0, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1cf6555, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0x8ab672de, __VMLINUX_SYMBOL_STR(of_irq_parse_raw) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x63981ecb, __VMLINUX_SYMBOL_STR(of_irq_parse_one) },
	{ 0xd9ff3ac3, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x4f53c364, __VMLINUX_SYMBOL_STR(of_platform_default_populate) },
	{ 0x684ff483, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd035cb86, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x6c07d933, __VMLINUX_SYMBOL_STR(add_uevent_var) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

