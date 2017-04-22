cmd_arch/arm/boot/dts/am437x-sbc-t43.dtb := mkdir -p arch/arm/boot/dts/ ; /home/marci/ti-linux-kernel-dev/dl/gcc-linaro-6.3.1-2017.02-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.am437x-sbc-t43.dtb.d.pre.tmp -nostdinc -I./arch/arm/boot/dts -I./arch/arm/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.am437x-sbc-t43.dtb.dts.tmp arch/arm/boot/dts/am437x-sbc-t43.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/am437x-sbc-t43.dtb -b 0 -i arch/arm/boot/dts/ -@ -Wno-unit_address_vs_reg -d arch/arm/boot/dts/.am437x-sbc-t43.dtb.d.dtc.tmp arch/arm/boot/dts/.am437x-sbc-t43.dtb.dts.tmp ; cat arch/arm/boot/dts/.am437x-sbc-t43.dtb.d.pre.tmp arch/arm/boot/dts/.am437x-sbc-t43.dtb.d.dtc.tmp > arch/arm/boot/dts/.am437x-sbc-t43.dtb.d

source_arch/arm/boot/dts/am437x-sbc-t43.dtb := arch/arm/boot/dts/am437x-sbc-t43.dts

deps_arch/arm/boot/dts/am437x-sbc-t43.dtb := \
  arch/arm/boot/dts/am437x-cm-t43.dts \
  arch/arm/boot/dts/include/dt-bindings/pinctrl/am43xx.h \
  arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/am4372.dtsi \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  arch/arm/boot/dts/compulab-sb-som.dtsi \
  arch/arm/boot/dts/am43xx-clocks.dtsi \

arch/arm/boot/dts/am437x-sbc-t43.dtb: $(deps_arch/arm/boot/dts/am437x-sbc-t43.dtb)

$(deps_arch/arm/boot/dts/am437x-sbc-t43.dtb):
