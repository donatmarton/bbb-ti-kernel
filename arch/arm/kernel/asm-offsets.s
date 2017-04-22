	.arch armv7-a
	.eabi_attribute 20, 1	@ Tag_ABI_FP_denormal
	.eabi_attribute 21, 1	@ Tag_ABI_FP_exceptions
	.eabi_attribute 23, 3	@ Tag_ABI_FP_number_model
	.eabi_attribute 24, 1	@ Tag_ABI_align8_needed
	.eabi_attribute 25, 1	@ Tag_ABI_align8_preserved
	.eabi_attribute 26, 2	@ Tag_ABI_enum_size
	.eabi_attribute 30, 2	@ Tag_ABI_optimization_goals
	.eabi_attribute 34, 1	@ Tag_CPU_unaligned_access
	.eabi_attribute 18, 4	@ Tag_ABI_PCS_wchar_t
	.file	"asm-offsets.c"
@ GNU C89 (Linaro GCC 6.3-2017.02) version 6.3.1 20170109 (arm-linux-gnueabihf)
@	compiled by GNU C version 4.8.4, GMP version 6.1.0, MPFR version 3.1.4, MPC version 1.0.3, isl version none
@ GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
@ options passed:  -nostdinc -I ./arch/arm/include
@ -I ./arch/arm/include/generated/uapi -I ./arch/arm/include/generated
@ -I ./include -I ./arch/arm/include/uapi -I ./include/uapi
@ -I ./include/generated/uapi -imultilib . -imultiarch arm-linux-gnueabihf
@ -iprefix /home/marci/ti-linux-kernel-dev/dl/gcc-linaro-6.3.1-2017.02-x86_64_arm-linux-gnueabihf/bin/../lib/gcc/arm-linux-gnueabihf/6.3.1/
@ -isysroot /home/marci/ti-linux-kernel-dev/dl/gcc-linaro-6.3.1-2017.02-x86_64_arm-linux-gnueabihf/bin/../arm-linux-gnueabihf/libc
@ -D __KERNEL__ -D __LINUX_ARM_ARCH__=7 -U arm -D CC_HAVE_ASM_GOTO
@ -D KBUILD_BASENAME="asm_offsets" -D KBUILD_MODNAME="asm_offsets"
@ -isystem /home/marci/ti-linux-kernel-dev/dl/gcc-linaro-6.3.1-2017.02-x86_64_arm-linux-gnueabihf/bin/../lib/gcc/arm-linux-gnueabihf/6.3.1/include
@ -include ./include/linux/kconfig.h -MD arch/arm/kernel/.asm-offsets.s.d
@ arch/arm/kernel/asm-offsets.c -mlittle-endian -mapcs -mno-sched-prolog
@ -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -marm -march=armv7-a
@ -mfloat-abi=soft -mtune=cortex-a9 -mtls-dialect=gnu
@ -auxbase-strip arch/arm/kernel/asm-offsets.s -O2 -Wall -Wundef
@ -Wstrict-prototypes -Wno-trigraphs -Werror=implicit-function-declaration
@ -Wno-format-security -Wno-frame-address -Wframe-larger-than=1024
@ -Wno-unused-but-set-variable -Wunused-const-variable=0
@ -Wdeclaration-after-statement -Wno-pointer-sign -Werror=implicit-int
@ -Werror=strict-prototypes -Werror=date-time
@ -Werror=incompatible-pointer-types -std=gnu90 -p -fno-strict-aliasing
@ -fno-common -fno-PIE -fno-dwarf2-cfi-asm -fno-ipa-sra -funwind-tables
@ -fno-delete-null-pointer-checks -fstack-protector-strong
@ -fno-omit-frame-pointer -fno-optimize-sibling-calls
@ -fno-var-tracking-assignments -fno-strict-overflow -fconserve-stack
@ -fverbose-asm --param allow-store-data-races=0
@ options enabled:  -faggressive-loop-optimizations -falign-jumps
@ -falign-labels -falign-loops -fauto-inc-dec -fbranch-count-reg
@ -fcaller-saves -fchkp-check-incomplete-type -fchkp-check-read
@ -fchkp-check-write -fchkp-instrument-calls -fchkp-narrow-bounds
@ -fchkp-optimize -fchkp-store-bounds -fchkp-use-static-bounds
@ -fchkp-use-static-const-bounds -fchkp-use-wrappers
@ -fcombine-stack-adjustments -fcompare-elim -fcprop-registers
@ -fcrossjumping -fcse-follow-jumps -fdefer-pop -fdevirtualize
@ -fdevirtualize-speculatively -fearly-inlining
@ -feliminate-unused-debug-types -fexpensive-optimizations
@ -fforward-propagate -ffunction-cse -fgcse -fgcse-lm -fgnu-runtime
@ -fgnu-unique -fguess-branch-probability -fhoist-adjacent-loads -fident
@ -fif-conversion -fif-conversion2 -findirect-inlining -finline
@ -finline-atomics -finline-functions-called-once -finline-small-functions
@ -fipa-cp -fipa-cp-alignment -fipa-icf -fipa-icf-functions
@ -fipa-icf-variables -fipa-profile -fipa-pure-const -fipa-reference
@ -fira-hoist-pressure -fira-share-save-slots -fira-share-spill-slots
@ -fisolate-erroneous-paths-dereference -fivopts -fkeep-static-consts
@ -fleading-underscore -flifetime-dse -flra-remat -flto-odr-type-merging
@ -fmath-errno -fmerge-constants -fmerge-debug-strings
@ -fmove-loop-invariants -foptimize-strlen -fpartial-inlining -fpeephole
@ -fpeephole2 -fplt -fprefetch-loop-arrays -fprofile -freg-struct-return
@ -freorder-blocks -freorder-functions -frerun-cse-after-loop
@ -fsched-critical-path-heuristic -fsched-dep-count-heuristic
@ -fsched-group-heuristic -fsched-interblock -fsched-last-insn-heuristic
@ -fsched-pressure -fsched-rank-heuristic -fsched-spec
@ -fsched-spec-insn-heuristic -fsched-stalled-insns-dep -fschedule-insns
@ -fschedule-insns2 -fsection-anchors -fsemantic-interposition
@ -fshow-column -fsigned-zeros -fsplit-ivs-in-unroller -fsplit-wide-types
@ -fssa-backprop -fssa-phiopt -fstack-protector-strong -fstdarg-opt
@ -fstrict-volatile-bitfields -fsync-libcalls -fthread-jumps
@ -ftoplevel-reorder -ftrapping-math -ftree-bit-ccp -ftree-builtin-call-dce
@ -ftree-ccp -ftree-ch -ftree-coalesce-vars -ftree-copy-prop -ftree-cselim
@ -ftree-dce -ftree-dominator-opts -ftree-dse -ftree-forwprop -ftree-fre
@ -ftree-loop-if-convert -ftree-loop-im -ftree-loop-ivcanon
@ -ftree-loop-optimize -ftree-parallelize-loops= -ftree-phiprop -ftree-pre
@ -ftree-pta -ftree-reassoc -ftree-scev-cprop -ftree-sink -ftree-slsr
@ -ftree-sra -ftree-switch-conversion -ftree-tail-merge -ftree-ter
@ -ftree-vrp -funit-at-a-time -funwind-tables -fverbose-asm
@ -fzero-initialized-in-bss -mapcs-frame -marm -mglibc -mlittle-endian
@ -mpic-data-is-text-relative -munaligned-access -mvectorize-with-neon-quad

	.syntax divided
	.macro	it, cond
	.endm
	.macro	itt, cond
	.endm
	.macro	ite, cond
	.endm
	.macro	ittt, cond
	.endm
	.macro	itte, cond
	.endm
	.macro	itet, cond
	.endm
	.macro	itee, cond
	.endm
	.macro	itttt, cond
	.endm
	.macro	ittte, cond
	.endm
	.macro	ittet, cond
	.endm
	.macro	ittee, cond
	.endm
	.macro	itett, cond
	.endm
	.macro	itete, cond
	.endm
	.macro	iteet, cond
	.endm
	.macro	iteee, cond
	.endm

	.arm
	.syntax unified
	.section	.text.startup,"ax",%progbits
	.align	2
	.global	main
	.syntax unified
	.arm
	.fpu softvfp
	.type	main, %function
main:
	.fnstart
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	.movsp ip
	mov	ip, sp	@,
	push	{fp, ip, lr, pc}	@
	.pad #4
	.save {fp, ip, lr}
	.setfp fp, ip, #-4
	sub	fp, ip, #4	@,,
	push	{lr}
	bl	__gnu_mcount_nc
	.syntax divided
@ 63 "arch/arm/kernel/asm-offsets.c" 1
	
->TSK_ACTIVE_MM #828 offsetof(struct task_struct, active_mm)	@
@ 0 "" 2
@ 65 "arch/arm/kernel/asm-offsets.c" 1
	
->TSK_STACK_CANARY #936 offsetof(struct task_struct, stack_canary)	@
@ 0 "" 2
@ 67 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 68 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_FLAGS #0 offsetof(struct thread_info, flags)	@
@ 0 "" 2
@ 69 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_PREEMPT #4 offsetof(struct thread_info, preempt_count)	@
@ 0 "" 2
@ 70 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_ADDR_LIMIT #8 offsetof(struct thread_info, addr_limit)	@
@ 0 "" 2
@ 71 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_TASK #12 offsetof(struct thread_info, task)	@
@ 0 "" 2
@ 72 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_CPU #16 offsetof(struct thread_info, cpu)	@
@ 0 "" 2
@ 73 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_CPU_DOMAIN #20 offsetof(struct thread_info, cpu_domain)	@
@ 0 "" 2
@ 74 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_CPU_SAVE #24 offsetof(struct thread_info, cpu_context)	@
@ 0 "" 2
@ 75 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_USED_CP #76 offsetof(struct thread_info, used_cp)	@
@ 0 "" 2
@ 76 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_TP_VALUE #92 offsetof(struct thread_info, tp_value)	@
@ 0 "" 2
@ 77 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_FPSTATE #104 offsetof(struct thread_info, fpstate)	@
@ 0 "" 2
@ 79 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_VFPSTATE #248 offsetof(struct thread_info, vfpstate)	@
@ 0 "" 2
@ 81 "arch/arm/kernel/asm-offsets.c" 1
	
->VFP_CPU #272 offsetof(union vfp_state, hard.cpu)	@
@ 0 "" 2
@ 85 "arch/arm/kernel/asm-offsets.c" 1
	
->TI_THUMBEE_STATE #528 offsetof(struct thread_info, thumbee_state)	@
@ 0 "" 2
@ 93 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 94 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R0 #0 offsetof(struct pt_regs, ARM_r0)	@
@ 0 "" 2
@ 95 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R1 #4 offsetof(struct pt_regs, ARM_r1)	@
@ 0 "" 2
@ 96 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R2 #8 offsetof(struct pt_regs, ARM_r2)	@
@ 0 "" 2
@ 97 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R3 #12 offsetof(struct pt_regs, ARM_r3)	@
@ 0 "" 2
@ 98 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R4 #16 offsetof(struct pt_regs, ARM_r4)	@
@ 0 "" 2
@ 99 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R5 #20 offsetof(struct pt_regs, ARM_r5)	@
@ 0 "" 2
@ 100 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R6 #24 offsetof(struct pt_regs, ARM_r6)	@
@ 0 "" 2
@ 101 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R7 #28 offsetof(struct pt_regs, ARM_r7)	@
@ 0 "" 2
@ 102 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R8 #32 offsetof(struct pt_regs, ARM_r8)	@
@ 0 "" 2
@ 103 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R9 #36 offsetof(struct pt_regs, ARM_r9)	@
@ 0 "" 2
@ 104 "arch/arm/kernel/asm-offsets.c" 1
	
->S_R10 #40 offsetof(struct pt_regs, ARM_r10)	@
@ 0 "" 2
@ 105 "arch/arm/kernel/asm-offsets.c" 1
	
->S_FP #44 offsetof(struct pt_regs, ARM_fp)	@
@ 0 "" 2
@ 106 "arch/arm/kernel/asm-offsets.c" 1
	
->S_IP #48 offsetof(struct pt_regs, ARM_ip)	@
@ 0 "" 2
@ 107 "arch/arm/kernel/asm-offsets.c" 1
	
->S_SP #52 offsetof(struct pt_regs, ARM_sp)	@
@ 0 "" 2
@ 108 "arch/arm/kernel/asm-offsets.c" 1
	
->S_LR #56 offsetof(struct pt_regs, ARM_lr)	@
@ 0 "" 2
@ 109 "arch/arm/kernel/asm-offsets.c" 1
	
->S_PC #60 offsetof(struct pt_regs, ARM_pc)	@
@ 0 "" 2
@ 110 "arch/arm/kernel/asm-offsets.c" 1
	
->S_PSR #64 offsetof(struct pt_regs, ARM_cpsr)	@
@ 0 "" 2
@ 111 "arch/arm/kernel/asm-offsets.c" 1
	
->S_OLD_R0 #68 offsetof(struct pt_regs, ARM_ORIG_r0)	@
@ 0 "" 2
@ 112 "arch/arm/kernel/asm-offsets.c" 1
	
->PT_REGS_SIZE #72 sizeof(struct pt_regs)	@
@ 0 "" 2
@ 113 "arch/arm/kernel/asm-offsets.c" 1
	
->SVC_DACR #72 offsetof(struct svc_pt_regs, dacr)	@
@ 0 "" 2
@ 114 "arch/arm/kernel/asm-offsets.c" 1
	
->SVC_ADDR_LIMIT #76 offsetof(struct svc_pt_regs, addr_limit)	@
@ 0 "" 2
@ 115 "arch/arm/kernel/asm-offsets.c" 1
	
->SVC_REGS_SIZE #80 sizeof(struct svc_pt_regs)	@
@ 0 "" 2
@ 116 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 118 "arch/arm/kernel/asm-offsets.c" 1
	
->L2X0_R_PHY_BASE #0 offsetof(struct l2x0_regs, phy_base)	@
@ 0 "" 2
@ 119 "arch/arm/kernel/asm-offsets.c" 1
	
->L2X0_R_AUX_CTRL #4 offsetof(struct l2x0_regs, aux_ctrl)	@
@ 0 "" 2
@ 120 "arch/arm/kernel/asm-offsets.c" 1
	
->L2X0_R_TAG_LATENCY #8 offsetof(struct l2x0_regs, tag_latency)	@
@ 0 "" 2
@ 121 "arch/arm/kernel/asm-offsets.c" 1
	
->L2X0_R_DATA_LATENCY #12 offsetof(struct l2x0_regs, data_latency)	@
@ 0 "" 2
@ 122 "arch/arm/kernel/asm-offsets.c" 1
	
->L2X0_R_FILTER_START #16 offsetof(struct l2x0_regs, filter_start)	@
@ 0 "" 2
@ 123 "arch/arm/kernel/asm-offsets.c" 1
	
->L2X0_R_FILTER_END #20 offsetof(struct l2x0_regs, filter_end)	@
@ 0 "" 2
@ 124 "arch/arm/kernel/asm-offsets.c" 1
	
->L2X0_R_PREFETCH_CTRL #24 offsetof(struct l2x0_regs, prefetch_ctrl)	@
@ 0 "" 2
@ 125 "arch/arm/kernel/asm-offsets.c" 1
	
->L2X0_R_PWR_CTRL #28 offsetof(struct l2x0_regs, pwr_ctrl)	@
@ 0 "" 2
@ 126 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 129 "arch/arm/kernel/asm-offsets.c" 1
	
->MM_CONTEXT_ID #360 offsetof(struct mm_struct, context.id.counter)	@
@ 0 "" 2
@ 130 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 132 "arch/arm/kernel/asm-offsets.c" 1
	
->VMA_VM_MM #32 offsetof(struct vm_area_struct, vm_mm)	@
@ 0 "" 2
@ 133 "arch/arm/kernel/asm-offsets.c" 1
	
->VMA_VM_FLAGS #40 offsetof(struct vm_area_struct, vm_flags)	@
@ 0 "" 2
@ 134 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 135 "arch/arm/kernel/asm-offsets.c" 1
	
->VM_EXEC #4 VM_EXEC	@
@ 0 "" 2
@ 136 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 137 "arch/arm/kernel/asm-offsets.c" 1
	
->PAGE_SZ #4096 PAGE_SIZE	@
@ 0 "" 2
@ 138 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 139 "arch/arm/kernel/asm-offsets.c" 1
	
->SYS_ERROR0 #10420224 0x9f0000	@
@ 0 "" 2
@ 140 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 141 "arch/arm/kernel/asm-offsets.c" 1
	
->SIZEOF_MACHINE_DESC #104 sizeof(struct machine_desc)	@
@ 0 "" 2
@ 142 "arch/arm/kernel/asm-offsets.c" 1
	
->MACHINFO_TYPE #0 offsetof(struct machine_desc, nr)	@
@ 0 "" 2
@ 143 "arch/arm/kernel/asm-offsets.c" 1
	
->MACHINFO_NAME #4 offsetof(struct machine_desc, name)	@
@ 0 "" 2
@ 144 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 145 "arch/arm/kernel/asm-offsets.c" 1
	
->PROC_INFO_SZ #52 sizeof(struct proc_info_list)	@
@ 0 "" 2
@ 146 "arch/arm/kernel/asm-offsets.c" 1
	
->PROCINFO_INITFUNC #16 offsetof(struct proc_info_list, __cpu_flush)	@
@ 0 "" 2
@ 147 "arch/arm/kernel/asm-offsets.c" 1
	
->PROCINFO_MM_MMUFLAGS #8 offsetof(struct proc_info_list, __cpu_mm_mmu_flags)	@
@ 0 "" 2
@ 148 "arch/arm/kernel/asm-offsets.c" 1
	
->PROCINFO_IO_MMUFLAGS #12 offsetof(struct proc_info_list, __cpu_io_mmu_flags)	@
@ 0 "" 2
@ 149 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 157 "arch/arm/kernel/asm-offsets.c" 1
	
->CPU_SLEEP_SIZE #36 offsetof(struct processor, suspend_size)	@
@ 0 "" 2
@ 158 "arch/arm/kernel/asm-offsets.c" 1
	
->CPU_DO_SUSPEND #40 offsetof(struct processor, do_suspend)	@
@ 0 "" 2
@ 159 "arch/arm/kernel/asm-offsets.c" 1
	
->CPU_DO_RESUME #44 offsetof(struct processor, do_resume)	@
@ 0 "" 2
@ 165 "arch/arm/kernel/asm-offsets.c" 1
	
->SLEEP_SAVE_SP_SZ #8 sizeof(struct sleep_save_sp)	@
@ 0 "" 2
@ 166 "arch/arm/kernel/asm-offsets.c" 1
	
->SLEEP_SAVE_SP_PHYS #4 offsetof(struct sleep_save_sp, save_ptr_stash_phys)	@
@ 0 "" 2
@ 167 "arch/arm/kernel/asm-offsets.c" 1
	
->SLEEP_SAVE_SP_VIRT #0 offsetof(struct sleep_save_sp, save_ptr_stash)	@
@ 0 "" 2
@ 169 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 170 "arch/arm/kernel/asm-offsets.c" 1
	
->DMA_BIDIRECTIONAL #0 DMA_BIDIRECTIONAL	@
@ 0 "" 2
@ 171 "arch/arm/kernel/asm-offsets.c" 1
	
->DMA_TO_DEVICE #1 DMA_TO_DEVICE	@
@ 0 "" 2
@ 172 "arch/arm/kernel/asm-offsets.c" 1
	
->DMA_FROM_DEVICE #2 DMA_FROM_DEVICE	@
@ 0 "" 2
@ 173 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 174 "arch/arm/kernel/asm-offsets.c" 1
	
->CACHE_WRITEBACK_ORDER #6 __CACHE_WRITEBACK_ORDER	@
@ 0 "" 2
@ 175 "arch/arm/kernel/asm-offsets.c" 1
	
->CACHE_WRITEBACK_GRANULE #64 __CACHE_WRITEBACK_GRANULE	@
@ 0 "" 2
@ 176 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 184 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 186 "arch/arm/kernel/asm-offsets.c" 1
	
->VDSO_DATA_SIZE #4096 sizeof(union vdso_data_store)	@
@ 0 "" 2
@ 189 "arch/arm/kernel/asm-offsets.c" 1
	
->
@ 0 "" 2
@ 64 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_SDCFG_VAL_OFFSET #0 offsetof(struct emif_regs_amx3, emif_sdcfg_val)	@
@ 0 "" 2
@ 66 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_TIMING1_VAL_OFFSET #4 offsetof(struct emif_regs_amx3, emif_timing1_val)	@
@ 0 "" 2
@ 68 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_TIMING2_VAL_OFFSET #8 offsetof(struct emif_regs_amx3, emif_timing2_val)	@
@ 0 "" 2
@ 70 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_TIMING3_VAL_OFFSET #12 offsetof(struct emif_regs_amx3, emif_timing3_val)	@
@ 0 "" 2
@ 72 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_REF_CTRL_VAL_OFFSET #16 offsetof(struct emif_regs_amx3, emif_ref_ctrl_val)	@
@ 0 "" 2
@ 74 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_ZQCFG_VAL_OFFSET #20 offsetof(struct emif_regs_amx3, emif_zqcfg_val)	@
@ 0 "" 2
@ 76 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_PMCR_VAL_OFFSET #24 offsetof(struct emif_regs_amx3, emif_pmcr_val)	@
@ 0 "" 2
@ 78 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_PMCR_SHDW_VAL_OFFSET #28 offsetof(struct emif_regs_amx3, emif_pmcr_shdw_val)	@
@ 0 "" 2
@ 80 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_RD_WR_LEVEL_RAMP_CTRL_OFFSET #32 offsetof(struct emif_regs_amx3, emif_rd_wr_level_ramp_ctrl)	@
@ 0 "" 2
@ 82 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_RD_WR_EXEC_THRESH_OFFSET #36 offsetof(struct emif_regs_amx3, emif_rd_wr_exec_thresh)	@
@ 0 "" 2
@ 84 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_COS_CONFIG_OFFSET #40 offsetof(struct emif_regs_amx3, emif_cos_config)	@
@ 0 "" 2
@ 86 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_PRIORITY_TO_COS_MAPPING_OFFSET #44 offsetof(struct emif_regs_amx3, emif_priority_to_cos_mapping)	@
@ 0 "" 2
@ 88 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_CONNECT_ID_SERV_1_MAP_OFFSET #48 offsetof(struct emif_regs_amx3, emif_connect_id_serv_1_map)	@
@ 0 "" 2
@ 90 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_CONNECT_ID_SERV_2_MAP_OFFSET #52 offsetof(struct emif_regs_amx3, emif_connect_id_serv_2_map)	@
@ 0 "" 2
@ 92 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_OCP_CONFIG_VAL_OFFSET #56 offsetof(struct emif_regs_amx3, emif_ocp_config_val)	@
@ 0 "" 2
@ 94 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_LPDDR2_NVM_TIM_OFFSET #60 offsetof(struct emif_regs_amx3, emif_lpddr2_nvm_tim)	@
@ 0 "" 2
@ 96 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_LPDDR2_NVM_TIM_SHDW_OFFSET #64 offsetof(struct emif_regs_amx3, emif_lpddr2_nvm_tim_shdw)	@
@ 0 "" 2
@ 98 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_DLL_CALIB_CTRL_VAL_OFFSET #68 offsetof(struct emif_regs_amx3, emif_dll_calib_ctrl_val)	@
@ 0 "" 2
@ 100 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_DLL_CALIB_CTRL_VAL_SHDW_OFFSET #72 offsetof(struct emif_regs_amx3, emif_dll_calib_ctrl_val_shdw)	@
@ 0 "" 2
@ 102 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_DDR_PHY_CTLR_1_OFFSET #76 offsetof(struct emif_regs_amx3, emif_ddr_phy_ctlr_1)	@
@ 0 "" 2
@ 104 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_EXT_PHY_CTRL_VALS_OFFSET #80 offsetof(struct emif_regs_amx3, emif_ext_phy_ctrl_vals)	@
@ 0 "" 2
@ 106 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_REGS_AMX3_SIZE #560 sizeof(struct emif_regs_amx3)	@
@ 0 "" 2
@ 108 "./include/linux/ti-emif-sram.h" 1
	
->
@ 0 "" 2
@ 110 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_PM_BASE_ADDR_VIRT_OFFSET #0 offsetof(struct ti_emif_pm_data, ti_emif_base_addr_virt)	@
@ 0 "" 2
@ 112 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_PM_BASE_ADDR_PHYS_OFFSET #4 offsetof(struct ti_emif_pm_data, ti_emif_base_addr_phys)	@
@ 0 "" 2
@ 114 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_PM_CONFIG_OFFSET #8 offsetof(struct ti_emif_pm_data, ti_emif_sram_config)	@
@ 0 "" 2
@ 116 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_PM_REGS_VIRT_OFFSET #12 offsetof(struct ti_emif_pm_data, regs_virt)	@
@ 0 "" 2
@ 118 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_PM_REGS_PHYS_OFFSET #16 offsetof(struct ti_emif_pm_data, regs_phys)	@
@ 0 "" 2
@ 120 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_PM_DATA_SIZE #20 sizeof(struct ti_emif_pm_data)	@
@ 0 "" 2
@ 122 "./include/linux/ti-emif-sram.h" 1
	
->
@ 0 "" 2
@ 124 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_PM_SAVE_CONTEXT_OFFSET #0 offsetof(struct ti_emif_pm_functions, save_context)	@
@ 0 "" 2
@ 126 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_PM_RESTORE_CONTEXT_OFFSET #4 offsetof(struct ti_emif_pm_functions, restore_context)	@
@ 0 "" 2
@ 128 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_PM_ENTER_SR_OFFSET #8 offsetof(struct ti_emif_pm_functions, enter_sr)	@
@ 0 "" 2
@ 130 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_PM_EXIT_SR_OFFSET #12 offsetof(struct ti_emif_pm_functions, exit_sr)	@
@ 0 "" 2
@ 132 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_PM_ABORT_SR_OFFSET #16 offsetof(struct ti_emif_pm_functions, abort_sr)	@
@ 0 "" 2
@ 134 "./include/linux/ti-emif-sram.h" 1
	
->EMIF_PM_FUNCTIONS_SIZE #20 sizeof(struct ti_emif_pm_functions)	@
@ 0 "" 2
@ 85 "./include/linux/platform_data/pm33xx.h" 1
	
->AMX3_PM_WFI_FLAGS_OFFSET #0 offsetof(struct am33xx_pm_sram_data, wfi_flags)	@
@ 0 "" 2
@ 87 "./include/linux/platform_data/pm33xx.h" 1
	
->AMX3_PM_L2_AUX_CTRL_VAL_OFFSET #4 offsetof(struct am33xx_pm_sram_data, l2_aux_ctrl_val)	@
@ 0 "" 2
@ 89 "./include/linux/platform_data/pm33xx.h" 1
	
->AMX3_PM_L2_PREFETCH_CTRL_VAL_OFFSET #8 offsetof(struct am33xx_pm_sram_data, l2_prefetch_ctrl_val)	@
@ 0 "" 2
@ 91 "./include/linux/platform_data/pm33xx.h" 1
	
->AMX3_PM_SRAM_DATA_SIZE #12 sizeof(struct am33xx_pm_sram_data)	@
@ 0 "" 2
@ 93 "./include/linux/platform_data/pm33xx.h" 1
	
->
@ 0 "" 2
@ 95 "./include/linux/platform_data/pm33xx.h" 1
	
->AMX3_PM_RO_SRAM_DATA_VIRT_OFFSET #0 offsetof(struct am33xx_pm_ro_sram_data, amx3_pm_sram_data_virt)	@
@ 0 "" 2
@ 97 "./include/linux/platform_data/pm33xx.h" 1
	
->AMX3_PM_RO_SRAM_DATA_PHYS_OFFSET #4 offsetof(struct am33xx_pm_ro_sram_data, amx3_pm_sram_data_phys)	@
@ 0 "" 2
@ 99 "./include/linux/platform_data/pm33xx.h" 1
	
->AMX3_PM_RTC_BASE_VIRT_OFFSET #8 offsetof(struct am33xx_pm_ro_sram_data, rtc_base_virt)	@
@ 0 "" 2
@ 101 "./include/linux/platform_data/pm33xx.h" 1
	
->AMX3_PM_RO_SRAM_DATA_SIZE #12 sizeof(struct am33xx_pm_ro_sram_data)	@
@ 0 "" 2
	.arm
	.syntax unified
	mov	r0, #0	@,
	ldmfd	sp, {fp, sp, pc}	@
	.fnend
	.size	main, .-main
	.ident	"GCC: (Linaro GCC 6.3-2017.02) 6.3.1 20170109"
	.section	.note.GNU-stack,"",%progbits
