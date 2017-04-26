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
	{ 0x89cd8667, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x9d41e38f, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x47249507, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x5838ff3a, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8f7a5832, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xca72012e, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xac385690, __VMLINUX_SYMBOL_STR(devm_regulator_bulk_get) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x5278e086, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xe72c7c37, __VMLINUX_SYMBOL_STR(sysfs_notify) },
	{ 0xc652dafa, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0xf3b12552, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x906099bd, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x70dae047, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4dd95db, __VMLINUX_SYMBOL_STR(i2c_smbus_write_i2c_block_data) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x34317eea, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xd1b3c58f, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:bh1770glc");
MODULE_ALIAS("i2c:sfh7770");
