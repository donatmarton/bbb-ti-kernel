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
	{ 0x9cef51a8, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7fe09968, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_set_config_from_dai_data) },
	{ 0xbdb5f786, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x714aaf2b, __VMLINUX_SYMBOL_STR(snd_soc_set_runtime_hwparams) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xa3df31ff, __VMLINUX_SYMBOL_STR(snd_hwparams_to_dma_slave_config) },
	{ 0x2d61ea2a, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_pointer) },
	{ 0x5c3af2b0, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_open_request_chan) },
	{ 0x8c390120, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_open) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xaa06d07, __VMLINUX_SYMBOL_STR(dma_request_slave_channel) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9e42ced7, __VMLINUX_SYMBOL_STR(dma_release_from_coherent) },
	{ 0x7a7e5eec, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0xf4dc0347, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_platform) },
	{ 0xa5df318d, __VMLINUX_SYMBOL_STR(dma_alloc_from_coherent) },
	{ 0xd6ac13d0, __VMLINUX_SYMBOL_STR(omap_dma_filter_fn) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x35811ee4, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_get_chan) },
	{ 0x68a24153, __VMLINUX_SYMBOL_STR(snd_pcm_format_physical_width) },
	{ 0xfb59a5b7, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x7e8dc8c, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_trigger) },
	{ 0x604c663c, __VMLINUX_SYMBOL_STR(dma_common_mmap) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x5edb9bb1, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_close_release_chan) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm-dmaengine,snd-soc-core,snd-pcm";

