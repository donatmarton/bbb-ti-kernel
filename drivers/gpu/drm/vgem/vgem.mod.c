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
	{ 0x79afd04, __VMLINUX_SYMBOL_STR(drm_release) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5760c0d2, __VMLINUX_SYMBOL_STR(drm_dev_register) },
	{ 0x273f7f75, __VMLINUX_SYMBOL_STR(drm_gem_put_pages) },
	{ 0x89e0ce7b, __VMLINUX_SYMBOL_STR(drm_dev_alloc) },
	{ 0xc81b4ce5, __VMLINUX_SYMBOL_STR(drm_gem_free_mmap_offset) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xbed09bf2, __VMLINUX_SYMBOL_STR(drm_dev_unref) },
	{ 0x52efa5a8, __VMLINUX_SYMBOL_STR(drm_dev_unregister) },
	{ 0x2b8614fe, __VMLINUX_SYMBOL_STR(drm_gem_handle_create) },
	{ 0x105e50e1, __VMLINUX_SYMBOL_STR(dma_buf_put) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xce85ad30, __VMLINUX_SYMBOL_STR(drm_gem_object_release) },
	{ 0x4fca41b6, __VMLINUX_SYMBOL_STR(drm_read) },
	{ 0xa2cb5dc1, __VMLINUX_SYMBOL_STR(drm_gem_vm_open) },
	{ 0x4adde97d, __VMLINUX_SYMBOL_STR(vm_insert_page) },
	{ 0xdf3fbf78, __VMLINUX_SYMBOL_STR(drm_gem_vm_close) },
	{ 0x20645642, __VMLINUX_SYMBOL_STR(drm_debug) },
	{ 0x4ea1f5a2, __VMLINUX_SYMBOL_STR(drm_gem_object_free) },
	{ 0xcd27ea0c, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0x7c933759, __VMLINUX_SYMBOL_STR(drm_gem_mmap) },
	{ 0x704aec8a, __VMLINUX_SYMBOL_STR(drm_gem_object_lookup) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x931cc7d1, __VMLINUX_SYMBOL_STR(drm_gem_object_init) },
	{ 0x9f591008, __VMLINUX_SYMBOL_STR(drm_dev_set_unique) },
	{ 0xc0f86774, __VMLINUX_SYMBOL_STR(drm_gem_create_mmap_offset) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xc360e7e2, __VMLINUX_SYMBOL_STR(drm_ut_debug_printk) },
	{ 0x51ca06b3, __VMLINUX_SYMBOL_STR(drm_gem_get_pages) },
	{ 0x839bab53, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0xf245fc47, __VMLINUX_SYMBOL_STR(drm_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

