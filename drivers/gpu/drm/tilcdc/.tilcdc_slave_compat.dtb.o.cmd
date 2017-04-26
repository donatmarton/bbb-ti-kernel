cmd_drivers/gpu/drm/tilcdc/tilcdc_slave_compat.dtb.o := /home/marci/qt-build/linux/bb-kernel/dl/gcc-linaro-5.4.1-2017.01-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-gcc -Wp,-MD,drivers/gpu/drm/tilcdc/.tilcdc_slave_compat.dtb.o.d  -nostdinc -isystem /home/marci/qt-build/linux/bb-kernel/dl/gcc-linaro-5.4.1-2017.01-x86_64_arm-linux-gnueabihf/bin/../lib/gcc/arm-linux-gnueabihf/5.4.1/include -I./arch/arm/include -Iarch/arm/include/generated/uapi -Iarch/arm/include/generated  -Iinclude -I./arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I./include/uapi -Iinclude/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian   -D__ASSEMBLY__ -fno-PIE -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -mthumb -Wa,-mimplicit-it=always -Wa,-mno-warn-deprecated -Wa,-mthumb -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float -fno-PIE  -DCC_HAVE_ASM_GOTO               -c -o drivers/gpu/drm/tilcdc/tilcdc_slave_compat.dtb.o drivers/gpu/drm/tilcdc/tilcdc_slave_compat.dtb.S

source_drivers/gpu/drm/tilcdc/tilcdc_slave_compat.dtb.o := drivers/gpu/drm/tilcdc/tilcdc_slave_compat.dtb.S

deps_drivers/gpu/drm/tilcdc/tilcdc_slave_compat.dtb.o := \
  arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/cpu/v7m.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  include/asm-generic/vmlinux.lds.h \
    $(wildcard include/config/hotplug/cpu.h) \
    $(wildcard include/config/memory/hotplug.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/kprobes.h) \
    $(wildcard include/config/event/tracing.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/ftrace/syscalls.h) \
    $(wildcard include/config/serial/earlycon.h) \
    $(wildcard include/config/clksrc/of.h) \
    $(wildcard include/config/irqchip.h) \
    $(wildcard include/config/common/clk.h) \
    $(wildcard include/config/of/iommu.h) \
    $(wildcard include/config/of/reserved/mem.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/cpu/idle.h) \
    $(wildcard include/config/acpi.h) \
    $(wildcard include/config/function/graph/tracer.h) \
    $(wildcard include/config/constructors.h) \
    $(wildcard include/config/generic/bug.h) \
    $(wildcard include/config/pm/trace.h) \
    $(wildcard include/config/blk/dev/initrd.h) \
  include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \

drivers/gpu/drm/tilcdc/tilcdc_slave_compat.dtb.o: $(deps_drivers/gpu/drm/tilcdc/tilcdc_slave_compat.dtb.o)

$(deps_drivers/gpu/drm/tilcdc/tilcdc_slave_compat.dtb.o):
