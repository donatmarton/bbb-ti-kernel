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
	{ 0xae64b44b, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0x703a13f8, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
	{ 0xcc1e8b1, __VMLINUX_SYMBOL_STR(hwrng_register) },
	{ 0x99a0d5dc, __VMLINUX_SYMBOL_STR(hwrng_unregister) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf2c482be, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xcc7508db, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7327ac5e, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0xd8985491, __VMLINUX_SYMBOL_STR(virtqueue_add_inbuf) },
	{ 0x5c265cba, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0xf9dd9922, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0xe3a825f1, __VMLINUX_SYMBOL_STR(wait_for_completion_killable) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd49bd803, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x9cbcaf26, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x8fbeb765, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rng-core";

MODULE_ALIAS("virtio:d00000004v*");
