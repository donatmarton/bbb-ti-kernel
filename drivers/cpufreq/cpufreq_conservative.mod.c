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
	{ 0xd6ac7a3b, __VMLINUX_SYMBOL_STR(store_sampling_rate) },
	{ 0x48bd43d4, __VMLINUX_SYMBOL_STR(cpufreq_dbs_governor_limits) },
	{ 0x4393042, __VMLINUX_SYMBOL_STR(cpufreq_dbs_governor_stop) },
	{ 0xb5355cdb, __VMLINUX_SYMBOL_STR(cpufreq_dbs_governor_start) },
	{ 0xd5927d0e, __VMLINUX_SYMBOL_STR(cpufreq_dbs_governor_exit) },
	{ 0xff86c9f1, __VMLINUX_SYMBOL_STR(cpufreq_dbs_governor_init) },
	{ 0xcd1ee449, __VMLINUX_SYMBOL_STR(cpufreq_unregister_governor) },
	{ 0x29985b8a, __VMLINUX_SYMBOL_STR(cpufreq_register_governor) },
	{ 0xf2749bbd, __VMLINUX_SYMBOL_STR(gov_update_cpu_data) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xec1c7cd2, __VMLINUX_SYMBOL_STR(__cpufreq_driver_target) },
	{ 0xd8c37ba3, __VMLINUX_SYMBOL_STR(dbs_update) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

