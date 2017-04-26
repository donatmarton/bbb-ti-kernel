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
	{ 0x2af1882e, __VMLINUX_SYMBOL_STR(ath6kl_core_destroy) },
	{ 0x7b8c3a36, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd2a941d4, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x57ee55e6, __VMLINUX_SYMBOL_STR(ath6kl_hif_intr_bh_handler) },
	{ 0x70f51fd3, __VMLINUX_SYMBOL_STR(ath6kl_core_cleanup) },
	{ 0x189c3a74, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x91cfb84a, __VMLINUX_SYMBOL_STR(ath6kl_hif_rw_comp_handler) },
	{ 0xc133dc2e, __VMLINUX_SYMBOL_STR(ath6kl_core_create) },
	{ 0x4193a774, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x8c25dc87, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x47e4111d, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x66ab6152, __VMLINUX_SYMBOL_STR(mmc_wait_for_cmd) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x51e77c97, __VMLINUX_SYMBOL_STR(pfn_valid) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x7439eeeb, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x56b29ec, __VMLINUX_SYMBOL_STR(mmc_wait_for_req) },
	{ 0xcb014460, __VMLINUX_SYMBOL_STR(ath6kl_err) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xa6f66cc1, __VMLINUX_SYMBOL_STR(ath6kl_warn) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x429becd9, __VMLINUX_SYMBOL_STR(mmc_set_data_timeout) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xc04d92ed, __VMLINUX_SYMBOL_STR(ath6kl_cfg80211_suspend) },
	{ 0x4775b51d, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0x5f311bd3, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x738fd001, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x6113ff0, __VMLINUX_SYMBOL_STR(ath6kl_cfg80211_resume) },
	{ 0x88d78bf2, __VMLINUX_SYMBOL_STR(ath6kl_stop_txrx) },
	{ 0xdabbafae, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x52e49dc, __VMLINUX_SYMBOL_STR(ath6kl_core_init) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x8a7d1c31, __VMLINUX_SYMBOL_STR(high_memory) },
	{ 0xcaa1a2be, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x24ad3ca8, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x8f4c6363, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x1e62356a, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0xf8b91fc8, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x9fdaa7fb, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{  0xaaa35, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xa9ab9f51, __VMLINUX_SYMBOL_STR(sdio_release_host) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath6kl_core";

MODULE_ALIAS("sdio:c*v0271d0300*");
MODULE_ALIAS("sdio:c*v0271d0301*");
MODULE_ALIAS("sdio:c*v0271d0400*");
MODULE_ALIAS("sdio:c*v0271d0401*");
MODULE_ALIAS("sdio:c*v0271d0402*");
