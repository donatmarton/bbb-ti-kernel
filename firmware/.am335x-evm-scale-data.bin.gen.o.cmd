cmd_firmware/am335x-evm-scale-data.bin.gen.o := /home/marci/qt-build/linux/bb-kernel/dl/gcc-linaro-5.4.1-2017.01-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-gcc -Wp,-MD,firmware/.am335x-evm-scale-data.bin.gen.o.d  -nostdinc -isystem /home/marci/qt-build/linux/bb-kernel/dl/gcc-linaro-5.4.1-2017.01-x86_64_arm-linux-gnueabihf/bin/../lib/gcc/arm-linux-gnueabihf/5.4.1/include -I./arch/arm/include -Iarch/arm/include/generated/uapi -Iarch/arm/include/generated  -Iinclude -I./arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I./include/uapi -Iinclude/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian   -D__ASSEMBLY__ -fno-PIE -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -mthumb -Wa,-mimplicit-it=always -Wa,-mno-warn-deprecated -Wa,-mthumb -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float -fno-PIE  -DCC_HAVE_ASM_GOTO            -c -o firmware/am335x-evm-scale-data.bin.gen.o firmware/am335x-evm-scale-data.bin.gen.S

source_firmware/am335x-evm-scale-data.bin.gen.o := firmware/am335x-evm-scale-data.bin.gen.S

deps_firmware/am335x-evm-scale-data.bin.gen.o := \
  arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/cpu/v7m.h) \
    $(wildcard include/config/thumb2/kernel.h) \

firmware/am335x-evm-scale-data.bin.gen.o: $(deps_firmware/am335x-evm-scale-data.bin.gen.o)

$(deps_firmware/am335x-evm-scale-data.bin.gen.o):
