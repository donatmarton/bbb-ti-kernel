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
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf06d95e3, __VMLINUX_SYMBOL_STR(cw1200_irq_handler) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf6b006ca, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0xc17b8191, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x94199677, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x69c03fc5, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0x70f4d6c2, __VMLINUX_SYMBOL_STR(cw1200_core_release) },
	{ 0x7c1f875e, __VMLINUX_SYMBOL_STR(cw1200_can_suspend) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2728864, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xcd9e399f, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x95e2051d, __VMLINUX_SYMBOL_STR(sdio_f0_writeb) },
	{ 0xc5e5f8b1, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x979c2164, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3310f0a0, __VMLINUX_SYMBOL_STR(sdio_align_size) },
	{ 0x830083e6, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2210fb46, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x732514b2, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x6e52c753, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x4863b88b, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0x4d8bd8a7, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x8aa2fe09, __VMLINUX_SYMBOL_STR(cw1200_core_probe) },
	{ 0xe6557692, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x8a0c700c, __VMLINUX_SYMBOL_STR(sdio_release_host) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cw1200_core";

