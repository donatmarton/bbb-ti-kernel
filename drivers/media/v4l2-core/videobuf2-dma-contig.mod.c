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

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2c197ea3, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x689f370d, __VMLINUX_SYMBOL_STR(frame_vector_to_pages) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x52e96379, __VMLINUX_SYMBOL_STR(vb2_destroy_framevec) },
	{ 0x89cf4c4a, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x6aa005e8, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xb980a61f, __VMLINUX_SYMBOL_STR(dma_buf_detach) },
	{ 0x61f3a35d, __VMLINUX_SYMBOL_STR(set_page_dirty_lock) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe094ef39, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xab31d65a, __VMLINUX_SYMBOL_STR(vb2_create_framevec) },
	{ 0x94dd61df, __VMLINUX_SYMBOL_STR(dma_buf_vunmap) },
	{ 0x8f978cb3, __VMLINUX_SYMBOL_STR(dma_common_get_sgtable) },
	{ 0xef1e4705, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7f6ca6f8, __VMLINUX_SYMBOL_STR(dma_release_from_coherent) },
	{ 0x520c2a49, __VMLINUX_SYMBOL_STR(dma_buf_unmap_attachment) },
	{ 0x4dea4684, __VMLINUX_SYMBOL_STR(dma_alloc_from_coherent) },
	{ 0x9330cb9f, __VMLINUX_SYMBOL_STR(sg_alloc_table) },
	{ 0x5dede9b1, __VMLINUX_SYMBOL_STR(dma_buf_map_attachment) },
	{ 0xf9c0a008, __VMLINUX_SYMBOL_STR(dma_buf_export) },
	{ 0x7c8e67a0, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfcdc14d6, __VMLINUX_SYMBOL_STR(frame_vector_to_pfns) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd6d00698, __VMLINUX_SYMBOL_STR(dma_buf_attach) },
	{ 0xd9ff3ac3, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1e099f64, __VMLINUX_SYMBOL_STR(vb2_common_vm_ops) },
	{ 0x2bfe933c, __VMLINUX_SYMBOL_STR(sg_alloc_table_from_pages) },
	{ 0xc696a030, __VMLINUX_SYMBOL_STR(dma_common_mmap) },
	{ 0xffdb82bc, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xcef81206, __VMLINUX_SYMBOL_STR(dma_buf_vmap) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-memops";

