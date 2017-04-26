#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2c197ea3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x5838ff3a, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xf3b12552, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0xa9f9666d, __VMLINUX_SYMBOL_STR(input_unregister_polled_device) },
	{ 0x63f21d84, __VMLINUX_SYMBOL_STR(param_get_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdfa24d1a, __VMLINUX_SYMBOL_STR(pm_runtime_barrier) },
	{ 0xa8cde9a7, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xb5a12ae1, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xb985bc87, __VMLINUX_SYMBOL_STR(input_register_polled_device) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x4f161c0a, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x47249507, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x5737dbdf, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0x4a254259, __VMLINUX_SYMBOL_STR(param_set_int) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x906099bd, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x33694668, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xf228c79, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xa01ec12f, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8f7a5832, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x9d9fdefd, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0xd7333a1b, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xabab5bb1, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x4157c3d, __VMLINUX_SYMBOL_STR(input_free_polled_device) },
	{ 0xca72012e, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x63dd363, __VMLINUX_SYMBOL_STR(pm_schedule_suspend) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xc652dafa, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0x2824746a, __VMLINUX_SYMBOL_STR(input_allocate_polled_device) },
	{ 0xd460a022, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xfe634f58, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x29923658, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xe2f01d5b, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf8e4433c, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=input-polldev";

