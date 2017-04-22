cmd_arch/arm/boot/dts/am572x-idk-lcd-osd101t2587.dtb := mkdir -p arch/arm/boot/dts/ ; /home/marci/ti-linux-kernel-dev/dl/gcc-linaro-6.3.1-2017.02-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.am572x-idk-lcd-osd101t2587.dtb.d.pre.tmp -nostdinc -I./arch/arm/boot/dts -I./arch/arm/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.am572x-idk-lcd-osd101t2587.dtb.dts.tmp arch/arm/boot/dts/am572x-idk-lcd-osd101t2587.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/am572x-idk-lcd-osd101t2587.dtb -b 0 -i arch/arm/boot/dts/ -@ -Wno-unit_address_vs_reg -d arch/arm/boot/dts/.am572x-idk-lcd-osd101t2587.dtb.d.dtc.tmp arch/arm/boot/dts/.am572x-idk-lcd-osd101t2587.dtb.dts.tmp ; cat arch/arm/boot/dts/.am572x-idk-lcd-osd101t2587.dtb.d.pre.tmp arch/arm/boot/dts/.am572x-idk-lcd-osd101t2587.dtb.d.dtc.tmp > arch/arm/boot/dts/.am572x-idk-lcd-osd101t2587.dtb.d

source_arch/arm/boot/dts/am572x-idk-lcd-osd101t2587.dtb := arch/arm/boot/dts/am572x-idk-lcd-osd101t2587.dts

deps_arch/arm/boot/dts/am572x-idk-lcd-osd101t2587.dtb := \
  arch/arm/boot/dts/am572x-idk-lcd-osd101t2045.dts \
  arch/arm/boot/dts/am572x-idk.dts \
  arch/arm/boot/dts/dra74x.dtsi \
  arch/arm/boot/dts/dra7.dtsi \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/include/dt-bindings/pinctrl/dra.h \
  arch/arm/boot/dts/omap4-cpu-thermal.dtsi \
  arch/arm/boot/dts/include/dt-bindings/thermal/thermal.h \
  arch/arm/boot/dts/omap5-gpu-thermal.dtsi \
  arch/arm/boot/dts/omap5-core-thermal.dtsi \
  arch/arm/boot/dts/dra7-dspeve-thermal.dtsi \
  arch/arm/boot/dts/dra7-iva-thermal.dtsi \
  arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  arch/arm/boot/dts/am57xx-idk-common.dtsi \
  arch/arm/boot/dts/am57xx-industrial-grade.dtsi \
  arch/arm/boot/dts/am57xx-idk-lcd-osd101t2045.dtsi \
  arch/arm/boot/dts/dra7xx-clocks.dtsi \

arch/arm/boot/dts/am572x-idk-lcd-osd101t2587.dtb: $(deps_arch/arm/boot/dts/am572x-idk-lcd-osd101t2587.dtb)

$(deps_arch/arm/boot/dts/am572x-idk-lcd-osd101t2587.dtb):
