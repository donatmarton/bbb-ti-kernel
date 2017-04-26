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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd54b7116, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_set_config_from_dai_data) },
	{ 0x6aa005e8, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x3956f164, __VMLINUX_SYMBOL_STR(snd_soc_set_runtime_hwparams) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xa79660e2, __VMLINUX_SYMBOL_STR(snd_hwparams_to_dma_slave_config) },
	{ 0xd2b88dd7, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_pointer) },
	{ 0x1d9e3edf, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_open_request_chan) },
	{ 0x486cdeb3, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_open) },
	{ 0x5682de26, __VMLINUX_SYMBOL_STR(dma_request_slave_channel) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7f6ca6f8, __VMLINUX_SYMBOL_STR(dma_release_from_coherent) },
	{ 0xc097332e, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0xc2c09103, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_platform) },
	{ 0x4dea4684, __VMLINUX_SYMBOL_STR(dma_alloc_from_coherent) },
	{ 0x71026dc3, __VMLINUX_SYMBOL_STR(omap_dma_filter_fn) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x23ad6387, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_get_chan) },
	{ 0x68a24153, __VMLINUX_SYMBOL_STR(snd_pcm_format_physical_width) },
	{ 0x8b91791a, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xaff92510, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_trigger) },
	{ 0xc696a030, __VMLINUX_SYMBOL_STR(dma_common_mmap) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xaa8361da, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_close_release_chan) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm-dmaengine,snd-soc-core,snd-pcm";

