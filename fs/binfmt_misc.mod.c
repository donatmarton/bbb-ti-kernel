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
	{ 0x234a9317, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0xd9e5aeb6, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x4b204e74, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x69c869b6, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0x368f8aa8, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x5346d702, __VMLINUX_SYMBOL_STR(unregister_binfmt) },
	{ 0x2093aae9, __VMLINUX_SYMBOL_STR(__register_binfmt) },
	{ 0xb6a475eb, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x42aa798f, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x3a7a414a, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xcdc49e19, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0x8b001af8, __VMLINUX_SYMBOL_STR(simple_pin_fs) },
	{ 0x40063b81, __VMLINUX_SYMBOL_STR(current_time) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0xac598406, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xaeb0a446, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0xc8339e24, __VMLINUX_SYMBOL_STR(string_unescape) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x69c03fc5, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x229b20b2, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x7cbdf731, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xdc1a78c, __VMLINUX_SYMBOL_STR(bin2hex) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x5143ea74, __VMLINUX_SYMBOL_STR(simple_release_fs) },
	{ 0xf4b90401, __VMLINUX_SYMBOL_STR(dput) },
	{ 0xc1dd64ea, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0xabfed5c8, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0xcab38ab1, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0xdfd61436, __VMLINUX_SYMBOL_STR(_raw_write_unlock) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd100acbd, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd680cd2b, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x25d0d7f0, __VMLINUX_SYMBOL_STR(simple_fill_super) },
	{ 0xebfb2697, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2b8b06d8, __VMLINUX_SYMBOL_STR(filp_clone_open) },
	{ 0x5c58c810, __VMLINUX_SYMBOL_STR(prepare_binprm) },
	{ 0xdcb0349b, __VMLINUX_SYMBOL_STR(sys_close) },
	{ 0xb58d9ddd, __VMLINUX_SYMBOL_STR(would_dump) },
	{ 0xbf5eb54, __VMLINUX_SYMBOL_STR(fd_install) },
	{ 0xa843805a, __VMLINUX_SYMBOL_STR(get_unused_fd_flags) },
	{ 0xf3e95326, __VMLINUX_SYMBOL_STR(search_binary_handler) },
	{ 0xa5a2f4ea, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x211b0c91, __VMLINUX_SYMBOL_STR(open_exec) },
	{ 0xbfaa7fc5, __VMLINUX_SYMBOL_STR(bprm_change_interp) },
	{ 0xcb1463e1, __VMLINUX_SYMBOL_STR(copy_strings_kernel) },
	{ 0x33ff49a8, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xd17b8878, __VMLINUX_SYMBOL_STR(remove_arg_zero) },
	{ 0x4bc9fa80, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

