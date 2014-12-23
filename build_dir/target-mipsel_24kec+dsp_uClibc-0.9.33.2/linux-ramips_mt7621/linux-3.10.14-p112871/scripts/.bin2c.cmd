cmd_scripts/bin2c := gcc -Wp,-MD,scripts/.bin2c.d -O2 -I/home/wengbj/project/openwrt-3.10/mtk/openwrt-3.10.14/staging_dir/host/include -Wall -Wmissing-prototypes -Wstrict-prototypes   -I/home/wengbj/project/openwrt-3.10/mtk/openwrt-3.10.14/staging_dir/host/include -I/home/wengbj/project/openwrt-3.10/mtk/openwrt-3.10.14/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/linux-ramips_mt7621/linux-3.10.14-p112871/tools/include  -o scripts/bin2c scripts/bin2c.c  

source_scripts/bin2c := scripts/bin2c.c

deps_scripts/bin2c := \
  /usr/include/stdio.h \
  /usr/include/features.h \
  /usr/include/x86_64-linux-gnu/bits/predefs.h \
  /usr/include/x86_64-linux-gnu/sys/cdefs.h \
  /usr/include/x86_64-linux-gnu/bits/wordsize.h \
  /usr/include/x86_64-linux-gnu/gnu/stubs.h \
  /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-linux-gnu/4.6/include/stddef.h \
  /usr/include/x86_64-linux-gnu/bits/types.h \
  /usr/include/x86_64-linux-gnu/bits/typesizes.h \
  /usr/include/libio.h \
  /usr/include/_G_config.h \
  /usr/include/wchar.h \
  /usr/lib/gcc/x86_64-linux-gnu/4.6/include/stdarg.h \
  /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
  /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
  /usr/include/x86_64-linux-gnu/bits/stdio.h \
  /usr/include/x86_64-linux-gnu/bits/stdio2.h \

scripts/bin2c: $(deps_scripts/bin2c)

$(deps_scripts/bin2c):
