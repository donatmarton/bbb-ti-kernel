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
	{ 0x4123a956, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0xa634b079, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x1460dfc0, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0xaa3f7ca3, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0x2aadd6e5, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xeaad6112, __VMLINUX_SYMBOL_STR(unregister_binfmt) },
	{ 0xbb7f1edd, __VMLINUX_SYMBOL_STR(__register_binfmt) },
	{ 0x46701a7, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xde158532, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xceaa752d, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x71239367, __VMLINUX_SYMBOL_STR(simple_pin_fs) },
	{ 0x45f64ccb, __VMLINUX_SYMBOL_STR(current_fs_time) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x7fc085f3, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x4c3c0238, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0xc8339e24, __VMLINUX_SYMBOL_STR(string_unescape) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5dd81c4f, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xdc1a78c, __VMLINUX_SYMBOL_STR(bin2hex) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xf57d0554, __VMLINUX_SYMBOL_STR(simple_release_fs) },
	{ 0xe7fcc45d, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x2d435e6c, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0xbe5cd90e, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xefe1b74e, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x5d5666b5, __VMLINUX_SYMBOL_STR(simple_fill_super) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa8286421, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbb6c614b, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xe14dd60a, __VMLINUX_SYMBOL_STR(would_dump) },
	{ 0x1a1eb6b7, __VMLINUX_SYMBOL_STR(fd_install) },
	{ 0xa843805a, __VMLINUX_SYMBOL_STR(get_unused_fd_flags) },
	{ 0xdcb0349b, __VMLINUX_SYMBOL_STR(sys_close) },
	{ 0xdad4101f, __VMLINUX_SYMBOL_STR(search_binary_handler) },
	{ 0xe574c4d, __VMLINUX_SYMBOL_STR(prepare_binprm) },
	{ 0xe7960db1, __VMLINUX_SYMBOL_STR(open_exec) },
	{ 0x33a53501, __VMLINUX_SYMBOL_STR(bprm_change_interp) },
	{ 0x2cef1836, __VMLINUX_SYMBOL_STR(copy_strings_kernel) },
	{ 0x394fd24c, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x6a54557, __VMLINUX_SYMBOL_STR(remove_arg_zero) },
	{ 0x706c5a65, __VMLINUX_SYMBOL_STR(preempt_count_sub) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0xf229424a, __VMLINUX_SYMBOL_STR(preempt_count_add) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

