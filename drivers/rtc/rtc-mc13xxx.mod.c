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
	{ 0xd945909, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xed62b40b, __VMLINUX_SYMBOL_STR(__platform_driver_probe) },
	{ 0xa59fe963, __VMLINUX_SYMBOL_STR(devm_rtc_device_register) },
	{ 0xe7df8f05, __VMLINUX_SYMBOL_STR(mc13xxx_irq_request) },
	{ 0x8caa767c, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe2fe8228, __VMLINUX_SYMBOL_STR(rtc_update_irq) },
	{ 0x5838f6c9, __VMLINUX_SYMBOL_STR(rtc_valid_tm) },
	{ 0x356461c8, __VMLINUX_SYMBOL_STR(rtc_time64_to_tm) },
	{ 0xe68183dd, __VMLINUX_SYMBOL_STR(mc13xxx_irq_status) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x4f2250ba, __VMLINUX_SYMBOL_STR(rtc_tm_to_time64) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x79e8bff2, __VMLINUX_SYMBOL_STR(mc13xxx_reg_write) },
	{ 0xf7b2a8ce, __VMLINUX_SYMBOL_STR(mc13xxx_reg_read) },
	{ 0x5b19634d, __VMLINUX_SYMBOL_STR(div_s64_rem) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xcddb5d00, __VMLINUX_SYMBOL_STR(mc13xxx_irq_free) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xcbb35a72, __VMLINUX_SYMBOL_STR(mc13xxx_unlock) },
	{ 0x9f68391a, __VMLINUX_SYMBOL_STR(mc13xxx_irq_mask) },
	{ 0xdba373a2, __VMLINUX_SYMBOL_STR(mc13xxx_irq_unmask) },
	{ 0x70cbfa66, __VMLINUX_SYMBOL_STR(mc13xxx_lock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mc13xxx-core";

MODULE_ALIAS("platform:mc13783-rtc");
MODULE_ALIAS("platform:mc13892-rtc");
MODULE_ALIAS("platform:mc34708-rtc");
