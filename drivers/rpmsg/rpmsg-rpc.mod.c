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
	{ 0xe01615de, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x1b30ec10, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xf6789fdc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x314434df, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xf36454f1, __VMLINUX_SYMBOL_STR(dma_buf_detach) },
	{ 0x65e49ea8, __VMLINUX_SYMBOL_STR(rpmsg_send) },
	{ 0x2f21a813, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x2c988955, __VMLINUX_SYMBOL_STR(prepare_to_wait_exclusive) },
	{ 0xdbe8baac, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xa192813b, __VMLINUX_SYMBOL_STR(idr_for_each) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x81f3afb, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd8efa41a, __VMLINUX_SYMBOL_STR(dma_buf_kunmap) },
	{ 0xff8cbb1f, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x752aeb9e, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbe2b4186, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xc85bfc77, __VMLINUX_SYMBOL_STR(rpmsg_create_ept) },
	{ 0xb860d629, __VMLINUX_SYMBOL_STR(dma_buf_kmap) },
	{ 0x5a32f871, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xfd5683b9, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0xdbfbac54, __VMLINUX_SYMBOL_STR(dma_buf_put) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xdf284822, __VMLINUX_SYMBOL_STR(unregister_rpmsg_driver) },
	{ 0xa7dd3916, __VMLINUX_SYMBOL_STR(dma_buf_get) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfed0a669, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x30e63fd5, __VMLINUX_SYMBOL_STR(rproc_vdev_to_rproc_safe) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x29f48d23, __VMLINUX_SYMBOL_STR(rpmsg_destroy_ept) },
	{ 0xd25c89ea, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xbfbcddf8, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x7e3061cb, __VMLINUX_SYMBOL_STR(dma_buf_unmap_attachment) },
	{ 0xa09a2483, __VMLINUX_SYMBOL_STR(__register_rpmsg_driver) },
	{ 0x4e8ad3c8, __VMLINUX_SYMBOL_STR(rpmsg_send_offchannel) },
	{ 0x32907b91, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x9347e40, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xc2cbd642, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xcae9ad1c, __VMLINUX_SYMBOL_STR(dma_buf_begin_cpu_access) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x839a39ba, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x857b0b4c, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2005e93f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x69f55758, __VMLINUX_SYMBOL_STR(dma_buf_map_attachment) },
	{ 0xf8dfe3ad, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x4a6761ad, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6c6cdd4d, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0x147fb690, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd843fa3f, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xaf1c96a5, __VMLINUX_SYMBOL_STR(dma_buf_attach) },
	{ 0x657b2089, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x9c1d0fb4, __VMLINUX_SYMBOL_STR(virtio_rpmsg_get_vdev) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1fc4f4fe, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd5a5640, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xaa7d42d1, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x91f0bbb8, __VMLINUX_SYMBOL_STR(dma_buf_end_cpu_access) },
	{ 0x528d0c14, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0x9cfd625d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xccd54680, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xfdc20f2c, __VMLINUX_SYMBOL_STR(rproc_pa_to_da) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rpmsg_core,virtio_rpmsg_bus";

