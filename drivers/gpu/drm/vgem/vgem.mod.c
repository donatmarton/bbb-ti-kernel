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
	{ 0x303e9bc9, __VMLINUX_SYMBOL_STR(drm_gem_prime_export) },
	{ 0x601dac66, __VMLINUX_SYMBOL_STR(drm_release) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12d56c22, __VMLINUX_SYMBOL_STR(drm_dev_register) },
	{ 0x31e1fda7, __VMLINUX_SYMBOL_STR(drm_gem_put_pages) },
	{ 0xb1f11cda, __VMLINUX_SYMBOL_STR(drm_dev_alloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4657ebaa, __VMLINUX_SYMBOL_STR(fence_context_alloc) },
	{ 0x215888af, __VMLINUX_SYMBOL_STR(fence_default_wait) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7e2ade76, __VMLINUX_SYMBOL_STR(drm_dev_unref) },
	{ 0x3aa0b3d4, __VMLINUX_SYMBOL_STR(fence_signal) },
	{ 0xa192813b, __VMLINUX_SYMBOL_STR(idr_for_each) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8a6cd5c5, __VMLINUX_SYMBOL_STR(reservation_object_add_shared_fence) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xff8cbb1f, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xf19f6cdd, __VMLINUX_SYMBOL_STR(drm_dev_unregister) },
	{ 0xa14e5fee, __VMLINUX_SYMBOL_STR(drm_prime_pages_to_sg) },
	{ 0xa30f39d6, __VMLINUX_SYMBOL_STR(drm_gem_object_unreference_unlocked) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xd3c91e1b, __VMLINUX_SYMBOL_STR(drm_gem_handle_create) },
	{ 0x48eeabcc, __VMLINUX_SYMBOL_STR(vmap) },
	{ 0x7d00c0b8, __VMLINUX_SYMBOL_STR(shmem_read_mapping_page_gfp) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfdb032c8, __VMLINUX_SYMBOL_STR(drm_gem_object_release) },
	{ 0x75a5306d, __VMLINUX_SYMBOL_STR(drm_read) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xbfbcddf8, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x33ff49a8, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x945ef453, __VMLINUX_SYMBOL_STR(drm_gem_vm_open) },
	{ 0xd2fab0a1, __VMLINUX_SYMBOL_STR(drm_gem_vm_close) },
	{ 0xf3207539, __VMLINUX_SYMBOL_STR(drm_printk) },
	{ 0x16f69619, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0x78b578a1, __VMLINUX_SYMBOL_STR(drm_gem_mmap) },
	{ 0x95d4fc73, __VMLINUX_SYMBOL_STR(drm_clflush_pages) },
	{ 0x69995c0e, __VMLINUX_SYMBOL_STR(reservation_object_test_signaled_rcu) },
	{ 0x59aa14cf, __VMLINUX_SYMBOL_STR(fence_release) },
	{ 0x69cc7108, __VMLINUX_SYMBOL_STR(drm_gem_object_lookup) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf551cc8c, __VMLINUX_SYMBOL_STR(reservation_object_add_excl_fence) },
	{ 0xd45ca525, __VMLINUX_SYMBOL_STR(drm_gem_prime_handle_to_fd) },
	{ 0x2e30b5ba, __VMLINUX_SYMBOL_STR(drm_gem_object_init) },
	{ 0xab29d79f, __VMLINUX_SYMBOL_STR(drm_gem_create_mmap_offset) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x94961283, __VMLINUX_SYMBOL_STR(vunmap) },
	{ 0x8d134c39, __VMLINUX_SYMBOL_STR(idr_replace) },
	{ 0x1db7dc40, __VMLINUX_SYMBOL_STR(pgprot_kernel) },
	{ 0x3e884f4b, __VMLINUX_SYMBOL_STR(vm_get_page_prot) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf911e111, __VMLINUX_SYMBOL_STR(reservation_object_reserve_shared) },
	{ 0xae645d0, __VMLINUX_SYMBOL_STR(fence_init) },
	{ 0x528d0c14, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0x578cc625, __VMLINUX_SYMBOL_STR(fence_free) },
	{ 0x2143094b, __VMLINUX_SYMBOL_STR(drm_gem_get_pages) },
	{ 0xdae73214, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0xd3b5ddf9, __VMLINUX_SYMBOL_STR(drm_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

