cmd_arch/arm/boot/dts/am437x-sk-evm.dtb := mkdir -p arch/arm/boot/dts/ ; /home/marci/ti-linux-kernel-dev/dl/gcc-linaro-6.3.1-2017.02-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.am437x-sk-evm.dtb.d.pre.tmp -nostdinc -I./arch/arm/boot/dts -I./arch/arm/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.am437x-sk-evm.dtb.dts.tmp arch/arm/boot/dts/am437x-sk-evm.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/am437x-sk-evm.dtb -b 0 -i arch/arm/boot/dts/ -@ -Wno-unit_address_vs_reg -d arch/arm/boot/dts/.am437x-sk-evm.dtb.d.dtc.tmp arch/arm/boot/dts/.am437x-sk-evm.dtb.dts.tmp ; cat arch/arm/boot/dts/.am437x-sk-evm.dtb.d.pre.tmp arch/arm/boot/dts/.am437x-sk-evm.dtb.d.dtc.tmp > arch/arm/boot/dts/.am437x-sk-evm.dtb.d

source_arch/arm/boot/dts/am437x-sk-evm.dtb := arch/arm/boot/dts/am437x-sk-evm.dts

deps_arch/arm/boot/dts/am437x-sk-evm.dtb := \
  arch/arm/boot/dts/am4372.dtsi \
  arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/arm-gic.h \
  arch/arm/boot/dts/include/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/include/dt-bindings/pinctrl/am43xx.h \
  arch/arm/boot/dts/include/dt-bindings/pwm/pwm.h \
  arch/arm/boot/dts/include/dt-bindings/input/input.h \
  arch/arm/boot/dts/include/dt-bindings/input/linux-event-codes.h \
  arch/arm/boot/dts/am43xx-clocks.dtsi \

arch/arm/boot/dts/am437x-sk-evm.dtb: $(deps_arch/arm/boot/dts/am437x-sk-evm.dtb)

$(deps_arch/arm/boot/dts/am437x-sk-evm.dtb):
