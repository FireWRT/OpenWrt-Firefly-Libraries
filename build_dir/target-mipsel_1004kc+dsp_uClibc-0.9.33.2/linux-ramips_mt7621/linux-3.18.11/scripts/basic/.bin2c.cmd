cmd_scripts/basic/bin2c := gcc -Wp,-MD,scripts/basic/.bin2c.d -O2 -I/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/host/include -I/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/host/usr/include -Wall -Wmissing-prototypes -Wstrict-prototypes   -I/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/host/include  -o scripts/basic/bin2c scripts/basic/bin2c.c  

source_scripts/basic/bin2c := scripts/basic/bin2c.c

deps_scripts/basic/bin2c := \
  /usr/include/stdc-predef.h \
  /usr/include/stdio.h \
  /usr/include/features.h \
  /usr/include/x86_64-linux-gnu/sys/cdefs.h \
  /usr/include/x86_64-linux-gnu/bits/wordsize.h \
  /usr/include/x86_64-linux-gnu/gnu/stubs.h \
  /usr/include/x86_64-linux-gnu/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h \
  /usr/include/x86_64-linux-gnu/bits/types.h \
  /usr/include/x86_64-linux-gnu/bits/typesizes.h \
  /usr/include/libio.h \
  /usr/include/_G_config.h \
  /usr/include/wchar.h \
  /usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h \
  /usr/include/x86_64-linux-gnu/bits/stdio_lim.h \
  /usr/include/x86_64-linux-gnu/bits/sys_errlist.h \
  /usr/include/x86_64-linux-gnu/bits/stdio.h \
  /usr/include/x86_64-linux-gnu/bits/stdio2.h \

scripts/basic/bin2c: $(deps_scripts/basic/bin2c)

$(deps_scripts/basic/bin2c):
