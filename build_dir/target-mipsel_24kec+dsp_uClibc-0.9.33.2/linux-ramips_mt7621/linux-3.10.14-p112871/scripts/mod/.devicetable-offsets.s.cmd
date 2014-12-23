cmd_scripts/mod/devicetable-offsets.s := mipsel-openwrt-linux-uclibc-gcc -Wp,-MD,scripts/mod/.devicetable-offsets.s.d  -nostdinc -isystem /home/wengbj/project/openwrt-3.10/mtk/openwrt-3.10.14/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include -I/home/wengbj/project/openwrt-3.10/mtk/openwrt-3.10.14/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7621/linux-3.10.14-p112871/arch/mips/include -Iarch/mips/include/generated  -Iinclude -I/home/wengbj/project/openwrt-3.10/mtk/openwrt-3.10.14/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7621/linux-3.10.14-p112871/arch/mips/include/uapi -Iarch/mips/include/generated/uapi -I/home/wengbj/project/openwrt-3.10/mtk/openwrt-3.10.14/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7621/linux-3.10.14-p112871/include/uapi -Iinclude/generated/uapi -include /home/wengbj/project/openwrt-3.10/mtk/openwrt-3.10.14/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7621/linux-3.10.14-p112871/include/linux/kconfig.h -D__KERNEL__ -DVMLINUX_LOAD_ADDRESS=0xffffffff80001000 -DDATAOFFSET=0 -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -Wno-maybe-uninitialized -mno-check-zero-division -mabi=32 -G 0 -mno-abicalls -fno-pic -pipe -msoft-float -ffreestanding -march=mips32r2 -Wa,-mips32r2 -Wa,--trap -I/home/wengbj/project/openwrt-3.10/mtk/openwrt-3.10.14/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7621/linux-3.10.14-p112871/arch/mips/include/asm/mach-ralink -I/home/wengbj/project/openwrt-3.10/mtk/openwrt-3.10.14/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7621/linux-3.10.14-p112871/arch/mips/include/asm/mach-generic -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -g -femit-struct-debug-baseonly -fno-var-tracking -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(devicetable_offsets)"  -D"KBUILD_MODNAME=KBUILD_STR(devicetable_offsets)" -fverbose-asm -S -o scripts/mod/devicetable-offsets.s scripts/mod/devicetable-offsets.c

source_scripts/mod/devicetable-offsets.s := scripts/mod/devicetable-offsets.c

deps_scripts/mod/devicetable-offsets.s := \
  include/linux/kbuild.h \
  include/linux/mod_devicetable.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  include/uapi/linux/types.h \
  /home/wengbj/project/openwrt-3.10/mtk/openwrt-3.10.14/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7621/linux-3.10.14-p112871/arch/mips/include/asm/types.h \
    $(wildcard include/config/64bit/phys/addr.h) \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  /home/wengbj/project/openwrt-3.10/mtk/openwrt-3.10.14/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7621/linux-3.10.14-p112871/arch/mips/include/uapi/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  /home/wengbj/project/openwrt-3.10/mtk/openwrt-3.10.14/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7621/linux-3.10.14-p112871/arch/mips/include/uapi/asm/types.h \
  /home/wengbj/project/openwrt-3.10/mtk/openwrt-3.10.14/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7621/linux-3.10.14-p112871/include/uapi/linux/posix_types.h \
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  /home/wengbj/project/openwrt-3.10/mtk/openwrt-3.10.14/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7621/linux-3.10.14-p112871/arch/mips/include/uapi/asm/posix_types.h \
  /home/wengbj/project/openwrt-3.10/mtk/openwrt-3.10.14/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7621/linux-3.10.14-p112871/arch/mips/include/uapi/asm/sgidefs.h \
  /home/wengbj/project/openwrt-3.10/mtk/openwrt-3.10.14/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7621/linux-3.10.14-p112871/include/uapi/asm-generic/posix_types.h \
  include/linux/uuid.h \
  include/uapi/linux/uuid.h \
  include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
  /home/wengbj/project/openwrt-3.10/mtk/openwrt-3.10.14/staging_dir/toolchain-mipsel_24kec+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib/gcc/mipsel-openwrt-linux-uclibc/4.8.3/include/stdarg.h \
  include/uapi/linux/string.h \
  /home/wengbj/project/openwrt-3.10/mtk/openwrt-3.10.14/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7621/linux-3.10.14-p112871/arch/mips/include/asm/string.h \
    $(wildcard include/config/32bit.h) \
    $(wildcard include/config/cpu/r3000.h) \

scripts/mod/devicetable-offsets.s: $(deps_scripts/mod/devicetable-offsets.s)

$(deps_scripts/mod/devicetable-offsets.s):
