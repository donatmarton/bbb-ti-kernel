cmd_arch/arm/boot/dts/am335x-arduino-tre.dtb := mkdir -p arch/arm/boot/dts/ ; /home/marci/qt-build/linux/bb-kernel/dl/gcc-linaro-5.4.1-2017.01-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.am335x-arduino-tre.dtb.d.pre.tmp -nostdinc -I./arch/arm/boot/dts -I./arch/arm/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.am335x-arduino-tre.dtb.dts.tmp arch/arm/boot/dts/am335x-arduino-tre.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/am335x-arduino-tre.dtb -b 0 -i arch/arm/boot/dts/ -@ -Wno-unit_address_vs_reg -d arch/arm/boot/dts/.am335x-arduino-tre.dtb.d.dtc.tmp arch/arm/boot/dts/.am335x-arduino-tre.dtb.dts.tmp ; cat arch/arm/boot/dts/.am335x-arduino-tre.dtb.d.pre.tmp arch/arm/boot/dts/.am335x-arduino-tre.dtb.d.dtc.tmp > arch/arm/boot/dts/.am335x-arduino-tre.dtb.d

source_arch/arm/boot/dts/am335x-arduino-tre.dtb := arch/arm/boot/dts/am335x-arduino-tre.dts

deps_arch/arm/boot/dts/am335x-arduino-tre.dtb := \
  arch/arm/boot/dts/am33xx.dtsi \
  arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  arch/arm/boot/dts/include/dt-bindings/pinctrl/am33xx.h \
  arch/arm/boot/dts/include/dt-bindings/pinctrl/omap.h \
  arch/arm/boot/dts/skeleton.dtsi \
  arch/arm/boot/dts/am33xx-es2.dtsi \
  arch/arm/boot/dts/am33xx-clocks.dtsi \

arch/arm/boot/dts/am335x-arduino-tre.dtb: $(deps_arch/arm/boot/dts/am335x-arduino-tre.dtb)

$(deps_arch/arm/boot/dts/am335x-arduino-tre.dtb):
