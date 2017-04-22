cmd_arch/arm/boot/dts/am335x-boneblue.dtb := mkdir -p arch/arm/boot/dts/ ; /home/marci/ti-linux-kernel-dev/dl/gcc-linaro-6.3.1-2017.02-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.am335x-boneblue.dtb.d.pre.tmp -nostdinc -I./arch/arm/boot/dts -I./arch/arm/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.am335x-boneblue.dtb.dts.tmp arch/arm/boot/dts/am335x-boneblue.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/am335x-boneblue.dtb -b 0 -i arch/arm/boot/dts/ -@ -Wno-unit_address_vs_reg -d arch/arm/boot/dts/.am335x-boneblue.dtb.d.dtc.tmp arch/arm/boot/dts/.am335x-boneblue.dtb.dts.tmp ; cat arch/arm/boot/dts/.am335x-boneblue.dtb.d.pre.tmp arch/arm/boot/dts/.am335x-boneblue.dtb.d.dtc.tmp > arch/arm/boot/dts/.am335x-boneblue.dtb.d

source_arch/arm/boot/dts/am335x-boneblue.dtb := arch/arm/boot/dts/am335x-boneblue.dts

deps_arch/arm/boot/dts/am335x-boneblue.dtb := \
  arch/arm/boot/dts/am33xx.dtsi \
  arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  arch/arm/boot/dts/include/dt-bindings/pinctrl/am33xx.h \
  arch/arm/boot/dts/include/dt-bindings/pinctrl/omap.h \
  arch/arm/boot/dts/am335x-bone-common-no-capemgr.dtsi \
  arch/arm/boot/dts/include/dt-bindings/mfd/tps65217.h \
  arch/arm/boot/dts/am335x-bone-common-universal-pins.dtsi \
  arch/arm/boot/dts/am335x-boneblue-wl1835.dtsi \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/am33xx-clocks.dtsi \
  arch/arm/boot/dts/tps65217.dtsi \

arch/arm/boot/dts/am335x-boneblue.dtb: $(deps_arch/arm/boot/dts/am335x-boneblue.dtb)

$(deps_arch/arm/boot/dts/am335x-boneblue.dtb):
