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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x9cef51a8, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xcb0ad105, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0xbc44a147, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x9f5a1e6c, __VMLINUX_SYMBOL_STR(wilc_netdev_cleanup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x59dea282, __VMLINUX_SYMBOL_STR(wilc_netdev_init) },
	{ 0x3cdcd3b6, __VMLINUX_SYMBOL_STR(wilc_handle_isr) },
	{ 0xc17b8191, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x1b933d3d, __VMLINUX_SYMBOL_STR(chip_wakeup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xbc1825b1, __VMLINUX_SYMBOL_STR(chip_allow_sleep) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe0561289, __VMLINUX_SYMBOL_STR(wilc_chip_sleep_manually) },
	{ 0xcd9e399f, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x7e500e79, __VMLINUX_SYMBOL_STR(host_wakeup_notify) },
	{ 0x979c2164, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x834654b0, __VMLINUX_SYMBOL_STR(host_sleep_notify) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x2210fb46, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x6e52c753, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x4863b88b, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0x4d8bd8a7, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x8a0c700c, __VMLINUX_SYMBOL_STR(sdio_release_host) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wilc1000";

