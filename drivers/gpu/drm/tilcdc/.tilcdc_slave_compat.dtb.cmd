cmd_drivers/gpu/drm/tilcdc/tilcdc_slave_compat.dtb := mkdir -p drivers/gpu/drm/tilcdc/ ; /home/marci/qt-build/linux/bb-kernel/dl/gcc-linaro-5.4.1-2017.01-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf-gcc -E -Wp,-MD,drivers/gpu/drm/tilcdc/.tilcdc_slave_compat.dtb.d.pre.tmp -nostdinc -I./arch/arm/boot/dts -I./arch/arm/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o drivers/gpu/drm/tilcdc/.tilcdc_slave_compat.dtb.dts.tmp drivers/gpu/drm/tilcdc/tilcdc_slave_compat.dts ; ./scripts/dtc/dtc -O dtb -o drivers/gpu/drm/tilcdc/tilcdc_slave_compat.dtb -b 0 -i drivers/gpu/drm/tilcdc/ -Wno-unit_address_vs_reg -d drivers/gpu/drm/tilcdc/.tilcdc_slave_compat.dtb.d.dtc.tmp drivers/gpu/drm/tilcdc/.tilcdc_slave_compat.dtb.dts.tmp ; cat drivers/gpu/drm/tilcdc/.tilcdc_slave_compat.dtb.d.pre.tmp drivers/gpu/drm/tilcdc/.tilcdc_slave_compat.dtb.d.dtc.tmp > drivers/gpu/drm/tilcdc/.tilcdc_slave_compat.dtb.d

source_drivers/gpu/drm/tilcdc/tilcdc_slave_compat.dtb := drivers/gpu/drm/tilcdc/tilcdc_slave_compat.dts

deps_drivers/gpu/drm/tilcdc/tilcdc_slave_compat.dtb := \

drivers/gpu/drm/tilcdc/tilcdc_slave_compat.dtb: $(deps_drivers/gpu/drm/tilcdc/tilcdc_slave_compat.dtb)

$(deps_drivers/gpu/drm/tilcdc/tilcdc_slave_compat.dtb):
