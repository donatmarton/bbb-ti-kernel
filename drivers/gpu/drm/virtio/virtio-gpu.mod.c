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
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x303e9bc9, __VMLINUX_SYMBOL_STR(drm_gem_prime_export) },
	{ 0x601dac66, __VMLINUX_SYMBOL_STR(drm_release) },
	{ 0x66fa3ca5, __VMLINUX_SYMBOL_STR(drm_fb_helper_set_par) },
	{ 0x55e0ac7a, __VMLINUX_SYMBOL_STR(ttm_pool_populate) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x76c79487, __VMLINUX_SYMBOL_STR(ttm_dma_tt_init) },
	{ 0x12d56c22, __VMLINUX_SYMBOL_STR(drm_dev_register) },
	{ 0xe5a1c92b, __VMLINUX_SYMBOL_STR(drm_atomic_helper_update_plane) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x37ca2123, __VMLINUX_SYMBOL_STR(drm_atomic_helper_crtc_duplicate_state) },
	{ 0x7b7bcfed, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xb1f11cda, __VMLINUX_SYMBOL_STR(drm_dev_alloc) },
	{ 0x921ea593, __VMLINUX_SYMBOL_STR(drm_fb_helper_initial_config) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0xefe21d65, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x7b30d359, __VMLINUX_SYMBOL_STR(drm_mode_config_cleanup) },
	{ 0x76bbe451, __VMLINUX_SYMBOL_STR(drm_mode_config_reset) },
	{ 0xfa4d9dc8, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_reset) },
	{ 0x33c3bc35, __VMLINUX_SYMBOL_STR(drm_atomic_helper_commit_hw_done) },
	{ 0xba4f8273, __VMLINUX_SYMBOL_STR(drm_set_preferred_mode) },
	{ 0x6326f410, __VMLINUX_SYMBOL_STR(drm_atomic_helper_page_flip) },
	{ 0x8c414ba7, __VMLINUX_SYMBOL_STR(ttm_bo_validate) },
	{ 0x4d4996c4, __VMLINUX_SYMBOL_STR(ttm_bo_init) },
	{ 0x365c8ef2, __VMLINUX_SYMBOL_STR(drm_fb_helper_debug_leave) },
	{ 0xa4fcf73, __VMLINUX_SYMBOL_STR(drm_cvt_mode) },
	{ 0x18b20aeb, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x3daac317, __VMLINUX_SYMBOL_STR(get_task_comm) },
	{ 0x4657ebaa, __VMLINUX_SYMBOL_STR(fence_context_alloc) },
	{ 0xaf6d6978, __VMLINUX_SYMBOL_STR(drm_helper_probe_single_connector_modes) },
	{ 0x40a9317a, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x346127a7, __VMLINUX_SYMBOL_STR(drm_global_item_ref) },
	{ 0x215888af, __VMLINUX_SYMBOL_STR(fence_default_wait) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x323152b4, __VMLINUX_SYMBOL_STR(drm_kms_helper_hotplug_event) },
	{ 0xcaf2f606, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0x7e2ade76, __VMLINUX_SYMBOL_STR(drm_dev_unref) },
	{ 0xd00f9404, __VMLINUX_SYMBOL_STR(drm_encoder_init) },
	{ 0xb9e3aa25, __VMLINUX_SYMBOL_STR(drm_atomic_helper_crtc_reset) },
	{ 0x1a869af2, __VMLINUX_SYMBOL_STR(drm_universal_plane_init) },
	{ 0xe498586c, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x645de547, __VMLINUX_SYMBOL_STR(drm_connector_cleanup) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x51b652f, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x68799abc, __VMLINUX_SYMBOL_STR(ttm_bo_default_swap_lru_tail) },
	{ 0x83eb06ea, __VMLINUX_SYMBOL_STR(drm_fb_helper_unregister_fbi) },
	{ 0xd481f066, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_duplicate_state) },
	{ 0x2836b815, __VMLINUX_SYMBOL_STR(ttm_bo_default_lru_tail) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xbde639aa, __VMLINUX_SYMBOL_STR(drm_fb_helper_pan_display) },
	{ 0x30210bc, __VMLINUX_SYMBOL_STR(ttm_mem_global_init) },
	{ 0xf9661e3, __VMLINUX_SYMBOL_STR(drm_atomic_helper_set_config) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xc7c53e43, __VMLINUX_SYMBOL_STR(ttm_mem_global_release) },
	{ 0xd0d31103, __VMLINUX_SYMBOL_STR(drm_mode_connector_attach_encoder) },
	{ 0x96731205, __VMLINUX_SYMBOL_STR(ttm_bo_unref) },
	{ 0x429be6d3, __VMLINUX_SYMBOL_STR(remove_conflicting_framebuffers) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0xdd9f3e5c, __VMLINUX_SYMBOL_STR(virtqueue_add_sgs) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x46ce0b01, __VMLINUX_SYMBOL_STR(ttm_bo_add_to_lru) },
	{ 0xbe2b4186, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xa30f39d6, __VMLINUX_SYMBOL_STR(drm_gem_object_unreference_unlocked) },
	{ 0xf9a9ffb3, __VMLINUX_SYMBOL_STR(drm_helper_mode_fill_fb_struct) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9067c807, __VMLINUX_SYMBOL_STR(drm_crtc_init_with_planes) },
	{ 0x5fc42dd4, __VMLINUX_SYMBOL_STR(drm_put_dev) },
	{ 0x1f1101ee, __VMLINUX_SYMBOL_STR(drm_atomic_helper_plane_reset) },
	{ 0xd3c91e1b, __VMLINUX_SYMBOL_STR(drm_gem_handle_create) },
	{ 0x607998f5, __VMLINUX_SYMBOL_STR(ttm_bo_kmap) },
	{ 0xcd64a356, __VMLINUX_SYMBOL_STR(drm_fb_helper_fill_var) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x3f5047c3, __VMLINUX_SYMBOL_STR(virtqueue_disable_cb) },
	{ 0xb456eb80, __VMLINUX_SYMBOL_STR(ttm_eu_fence_buffer_objects) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xfdb032c8, __VMLINUX_SYMBOL_STR(drm_gem_object_release) },
	{ 0x75a5306d, __VMLINUX_SYMBOL_STR(drm_read) },
	{ 0x818ccec3, __VMLINUX_SYMBOL_STR(ttm_bo_dma_acc_size) },
	{ 0xd9e5aeb6, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xb5fed273, __VMLINUX_SYMBOL_STR(ttm_bo_init_mm) },
	{ 0x68a625ba, __VMLINUX_SYMBOL_STR(ttm_bo_wait) },
	{ 0xbfbcddf8, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x151728bb, __VMLINUX_SYMBOL_STR(ttm_bo_device_init) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x8177fceb, __VMLINUX_SYMBOL_STR(drm_fb_helper_release_fbi) },
	{ 0xad2fb5d8, __VMLINUX_SYMBOL_STR(drm_debugfs_create_files) },
	{ 0x483b21ab, __VMLINUX_SYMBOL_STR(drm_connector_init) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x67047d2f, __VMLINUX_SYMBOL_STR(drm_fb_helper_prepare) },
	{ 0x32907b91, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x529fe2ba, __VMLINUX_SYMBOL_STR(fence_signal_locked) },
	{ 0xbd5dd9f2, __VMLINUX_SYMBOL_STR(ttm_eu_backoff_reservation) },
	{ 0x51876cce, __VMLINUX_SYMBOL_STR(virtqueue_get_vring_size) },
	{ 0x5b425c35, __VMLINUX_SYMBOL_STR(drm_gem_prime_fd_to_handle) },
	{ 0xf3207539, __VMLINUX_SYMBOL_STR(drm_printk) },
	{ 0x16f69619, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0xb9e2cb, __VMLINUX_SYMBOL_STR(drm_fb_helper_sys_imageblit) },
	{ 0x360014f4, __VMLINUX_SYMBOL_STR(drm_gem_prime_import) },
	{ 0x92d5875d, __VMLINUX_SYMBOL_STR(drm_atomic_helper_plane_duplicate_state) },
	{ 0xdf3f61ab, __VMLINUX_SYMBOL_STR(drm_atomic_helper_wait_for_vblanks) },
	{ 0xbb1cb22e, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_destroy_state) },
	{ 0xc7ad691f, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0xaebff0f0, __VMLINUX_SYMBOL_STR(drm_atomic_helper_check) },
	{ 0x7be71c5a, __VMLINUX_SYMBOL_STR(ttm_bo_del_sub_from_lru) },
	{ 0xaeb4d783, __VMLINUX_SYMBOL_STR(drm_atomic_helper_commit) },
	{ 0x85d472aa, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8ac0717e, __VMLINUX_SYMBOL_STR(drm_fb_helper_check_var) },
	{ 0x59aa14cf, __VMLINUX_SYMBOL_STR(fence_release) },
	{ 0x72d44692, __VMLINUX_SYMBOL_STR(drm_fb_helper_blank) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xeffb4fed, __VMLINUX_SYMBOL_STR(drm_atomic_helper_commit_modeset_disables) },
	{ 0xd7f70bf5, __VMLINUX_SYMBOL_STR(drm_crtc_send_vblank_event) },
	{ 0x69cc7108, __VMLINUX_SYMBOL_STR(drm_gem_object_lookup) },
	{ 0x1717fcba, __VMLINUX_SYMBOL_STR(drm_gem_handle_delete) },
	{ 0x52d91bec, __VMLINUX_SYMBOL_STR(drm_add_modes_noedid) },
	{ 0xa231daf8, __VMLINUX_SYMBOL_STR(ttm_eu_reserve_buffers) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd575b730, __VMLINUX_SYMBOL_STR(drm_fb_helper_alloc_fbi) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xf551cc8c, __VMLINUX_SYMBOL_STR(reservation_object_add_excl_fence) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xc44abf95, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_dpms) },
	{ 0xd45ca525, __VMLINUX_SYMBOL_STR(drm_gem_prime_handle_to_fd) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2b737f8f, __VMLINUX_SYMBOL_STR(drm_connector_unregister) },
	{ 0x2e30b5ba, __VMLINUX_SYMBOL_STR(drm_gem_object_init) },
	{ 0x4f22c747, __VMLINUX_SYMBOL_STR(drm_encoder_cleanup) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x2a726122, __VMLINUX_SYMBOL_STR(ttm_bo_device_release) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x88199286, __VMLINUX_SYMBOL_STR(drm_crtc_cleanup) },
	{ 0x763728c, __VMLINUX_SYMBOL_STR(drm_atomic_helper_commit_planes) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x28d6861d, __VMLINUX_SYMBOL_STR(__vmalloc) },
	{ 0xd920fc7f, __VMLINUX_SYMBOL_STR(drm_atomic_helper_crtc_destroy_state) },
	{ 0x451692cb, __VMLINUX_SYMBOL_STR(drm_mode_config_init) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x661fbb17, __VMLINUX_SYMBOL_STR(ttm_dma_tt_fini) },
	{ 0x88b46722, __VMLINUX_SYMBOL_STR(drm_helper_hpd_irq_event) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3927bf54, __VMLINUX_SYMBOL_STR(ww_mutex_unlock) },
	{ 0x62b7f2c8, __VMLINUX_SYMBOL_STR(drm_atomic_helper_cleanup_planes) },
	{ 0x1db7dc40, __VMLINUX_SYMBOL_STR(pgprot_kernel) },
	{ 0x1859f48e, __VMLINUX_SYMBOL_STR(sg_alloc_table_from_pages) },
	{ 0x76266b53, __VMLINUX_SYMBOL_STR(drm_debugfs_remove_files) },
	{ 0x241a061f, __VMLINUX_SYMBOL_STR(drm_fb_helper_fini) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x9cd60539, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0x40c9147a, __VMLINUX_SYMBOL_STR(drm_atomic_helper_disable_plane) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x543b7d6f, __VMLINUX_SYMBOL_STR(drm_fb_helper_sys_fillrect) },
	{ 0x5cf59609, __VMLINUX_SYMBOL_STR(ttm_bo_global_init) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x23c9d9b9, __VMLINUX_SYMBOL_STR(drm_mode_probed_add) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1c063098, __VMLINUX_SYMBOL_STR(drm_fb_helper_setcmap) },
	{ 0x2f37dd29, __VMLINUX_SYMBOL_STR(drm_framebuffer_init) },
	{ 0xae645d0, __VMLINUX_SYMBOL_STR(fence_init) },
	{ 0x528d0c14, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0x650f2d53, __VMLINUX_SYMBOL_STR(ttm_pool_unpopulate) },
	{ 0x73502a13, __VMLINUX_SYMBOL_STR(drm_fb_helper_sys_copyarea) },
	{ 0x3b5d91d3, __VMLINUX_SYMBOL_STR(drm_fb_helper_fill_fix) },
	{ 0xcbf36496, __VMLINUX_SYMBOL_STR(drm_connector_register) },
	{ 0x3ac1fef9, __VMLINUX_SYMBOL_STR(drm_mode_legacy_fb_format) },
	{ 0x5db16d84, __VMLINUX_SYMBOL_STR(drm_atomic_helper_commit_modeset_enables) },
	{ 0xef003ddf, __VMLINUX_SYMBOL_STR(virtqueue_enable_cb) },
	{ 0x67b1d568, __VMLINUX_SYMBOL_STR(ttm_bo_global_release) },
	{ 0xb035dc98, __VMLINUX_SYMBOL_STR(drm_fb_helper_debug_enter) },
	{ 0xdae73214, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0x2a6a5a8e, __VMLINUX_SYMBOL_STR(drm_fb_helper_init) },
	{ 0x63d776f2, __VMLINUX_SYMBOL_STR(drm_fb_helper_single_add_all_connectors) },
	{ 0xd3b5ddf9, __VMLINUX_SYMBOL_STR(drm_open) },
	{ 0xfccafb1, __VMLINUX_SYMBOL_STR(drm_global_item_unref) },
	{ 0x24cef7c2, __VMLINUX_SYMBOL_STR(drm_atomic_helper_plane_destroy_state) },
	{ 0x70ee0c0e, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
	{ 0xe16024d0, __VMLINUX_SYMBOL_STR(drm_framebuffer_cleanup) },
	{ 0x48146899, __VMLINUX_SYMBOL_STR(ttm_bo_mmap) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ttm";

MODULE_ALIAS("virtio:d00000010v*");
