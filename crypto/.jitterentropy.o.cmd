cmd_crypto/jitterentropy.o := /home/marci/qt-build/linux/bb-kernel/dl/gcc-linaro-5.4.1-2017.01-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-gcc -Wp,-MD,crypto/.jitterentropy.o.d  -nostdinc -isystem /home/marci/qt-build/linux/bb-kernel/dl/gcc-linaro-5.4.1-2017.01-x86_64_arm-linux-gnueabihf/bin/../lib/gcc/arm-linux-gnueabihf/5.4.1/include -I./arch/arm/include -Iarch/arm/include/generated/uapi -Iarch/arm/include/generated  -Iinclude -I./arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I./include/uapi -Iinclude/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-PIE -fno-dwarf2-cfi-asm -fno-ipa-sra -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -mthumb -Wa,-mimplicit-it=always -Wa,-mno-warn-deprecated -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -fno-delete-null-pointer-checks -Wno-maybe-uninitialized -fno-PIE -O2 --param=allow-store-data-races=0 -Wframe-larger-than=1024 -fstack-protector-strong -Wno-unused-but-set-variable -fno-var-tracking-assignments -pg -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -Werror=incompatible-pointer-types -DCC_HAVE_ASM_GOTO -O0    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(jitterentropy)"  -D"KBUILD_MODNAME=KBUILD_STR(jitterentropy_rng)" -c -o crypto/.tmp_jitterentropy.o crypto/jitterentropy.c

source_crypto/jitterentropy.o := crypto/jitterentropy.c

deps_crypto/jitterentropy.o := \
    $(wildcard include/config/x86/tsc.h) \

crypto/jitterentropy.o: $(deps_crypto/jitterentropy.o)

$(deps_crypto/jitterentropy.o):
