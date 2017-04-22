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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x9cef51a8, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd2a1f7ca, __VMLINUX_SYMBOL_STR(spi_register_master) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe06355b7, __VMLINUX_SYMBOL_STR(spi_unregister_master) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x41a86047, __VMLINUX_SYMBOL_STR(spi_new_device) },
	{ 0x3689ceff, __VMLINUX_SYMBOL_STR(spi_alloc_master) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x8974e92e, __VMLINUX_SYMBOL_STR(gb_operation_sync_timeout) },
	{ 0x521cea4b, __VMLINUX_SYMBOL_STR(gb_operation_request_send_sync_timeout) },
	{ 0xf8dfe3ad, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd83a821a, __VMLINUX_SYMBOL_STR(spi_finalize_current_message) },
	{ 0xa0ff2bf3, __VMLINUX_SYMBOL_STR(gb_operation_get_payload_size_max) },
	{ 0x2739c57f, __VMLINUX_SYMBOL_STR(gb_operation_put) },
	{ 0x62112121, __VMLINUX_SYMBOL_STR(gb_operation_create_flags) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=greybus";

