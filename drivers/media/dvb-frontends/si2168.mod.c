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
	{ 0x703b5194, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xc619b572, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xb32b80cf, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x3743de2b, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xde0aeb10, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x83a82407, __VMLINUX_SYMBOL_STR(i2c_mux_add_adapter) },
	{ 0x2bd830a9, __VMLINUX_SYMBOL_STR(i2c_mux_alloc) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x6ee5e2fb, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x940f12ec, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfd3d2e9a, __VMLINUX_SYMBOL_STR(i2c_mux_del_adapters) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:si2168");
