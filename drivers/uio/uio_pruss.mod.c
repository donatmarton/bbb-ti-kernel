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
	{ 0x7e42e836, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xd945909, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x4a4a4bd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc9e4f0cb, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2f0664db, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x9d4068bf, __VMLINUX_SYMBOL_STR(devm_pinctrl_put) },
	{ 0x2cf249c1, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x5c1572b2, __VMLINUX_SYMBOL_STR(__uio_register_device) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0xec533192, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x4f161c0a, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x79c5a9f0, __VMLINUX_SYMBOL_STR(ioremap) },
	{ 0x4dea4684, __VMLINUX_SYMBOL_STR(dma_alloc_from_coherent) },
	{ 0x4bcc392a, __VMLINUX_SYMBOL_STR(gen_pool_dma_alloc) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8e376325, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x81e373bd, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x78165e70, __VMLINUX_SYMBOL_STR(of_property_read_string_helper) },
	{ 0x3e6ad362, __VMLINUX_SYMBOL_STR(of_count_phandle_with_args) },
	{ 0x1cf6555, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0x12de6373, __VMLINUX_SYMBOL_STR(pinctrl_select_state) },
	{ 0x99d85a6e, __VMLINUX_SYMBOL_STR(pinctrl_lookup_state) },
	{ 0xd288b34d, __VMLINUX_SYMBOL_STR(devm_pinctrl_get) },
	{ 0xa31e6915, __VMLINUX_SYMBOL_STR(of_address_to_resource) },
	{ 0x47249507, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xca72012e, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x822137e2, __VMLINUX_SYMBOL_STR(arm_heavy_mb) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x6aa005e8, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x2e1ca751, __VMLINUX_SYMBOL_STR(clk_put) },
	{ 0x7f6ca6f8, __VMLINUX_SYMBOL_STR(dma_release_from_coherent) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb2d614a7, __VMLINUX_SYMBOL_STR(uio_unregister_device) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=uio";

MODULE_ALIAS("of:N*T*Cti,pruss-v1*");
MODULE_ALIAS("of:N*T*Cti,pruss-v2*");

MODULE_INFO(srcversion, "4621C2E70A3C59C18E25B57");
