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
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5f352a18, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0x8bb9b352, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x388d1e4d, __VMLINUX_SYMBOL_STR(gserial_connect) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x481ac3b0, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x87bc1537, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9b5894b0, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0x740b2b60, __VMLINUX_SYMBOL_STR(gserial_disconnect) },
	{ 0x692041fb, __VMLINUX_SYMBOL_STR(gs_alloc_req) },
	{ 0x5399a3c4, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x33bfdca2, __VMLINUX_SYMBOL_STR(gserial_alloc_line) },
	{ 0xf4ba9cc1, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe458c38f, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc7da6011, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb6652875, __VMLINUX_SYMBOL_STR(gserial_free_line) },
	{ 0x9f5a8f6c, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0xab318d93, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0xfb39f842, __VMLINUX_SYMBOL_STR(gs_free_req) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_serial";

