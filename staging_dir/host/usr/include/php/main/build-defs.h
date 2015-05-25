/*                                                                -*- C -*-
   +----------------------------------------------------------------------+
   | PHP Version 5                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2007 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Stig Sæther Bakken <ssb@php.net>                             |
   +----------------------------------------------------------------------+
*/

/* $Id$ */

#define CONFIGURE_COMMAND " './configure'  '--target=mipsel-openwrt-linux' '--host=mipsel-openwrt-linux' '--build=x86_64-linux-gnu' '--program-prefix=' '--program-suffix=' '--prefix=/usr' '--exec-prefix=/usr' '--bindir=/usr/bin' '--sbindir=/usr/sbin' '--libexecdir=/usr/lib' '--sysconfdir=/etc' '--datadir=/usr/share' '--localstatedir=/var' '--mandir=/usr/man' '--infodir=/usr/info' '--disable-nls' '--enable-cli' '--enable-cgi' '--enable-fpm' '--enable-shared' '--disable-static' '--disable-rpath' '--disable-debug' '--without-pear' '--with-config-file-path=/etc' '--with-config-file-scan-dir=/etc/php5' '--disable-short-tags' '--with-zlib=/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr' '--with-zlib-dir=/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr' '--with-pcre-regex=/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr' '--disable-phar' '--enable-calendar=shared' '--enable-ctype=shared' '--with-curl=shared,/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr' '--enable-fileinfo=shared' '--with-gettext=shared,/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr/lib/libintl-full' '--enable-dom=shared' '--enable-exif=shared' '--enable-ftp=shared' '--with-gd=shared' '--without-freetype-dir' '--with-jpeg-dir=/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr' '--with-png-dir=/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr' '--without-xpm-dir' '--without-t1lib' '--enable-gd-native-ttf' '--disable-gd-jis-conv' '--with-gmp=shared,/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr' '--enable-hash=shared' '--with-iconv=shared,/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr/lib/libiconv-stub' '--enable-json=shared' '--with-ldap=shared,/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr' '--with-ldap-sasl=/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr' '--enable-mbstring=shared' '--enable-mbregex' '--with-mcrypt=shared,/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr' '--with-mysql=shared,/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr' '--with-mysqli=shared,/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr/bin/mysql_config' '--enable-opcache=shared' '--with-openssl=shared,/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr' '--with-kerberos=no' '--with-openssl-dir=/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr' '--enable-pcntl=shared' '--enable-pdo=shared' '--with-pdo-mysql=shared,/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr' '--with-pdo-pgsql=shared,/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr' '--with-pdo-sqlite=shared,/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr' '--with-pgsql=shared,/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr' '--enable-session=shared' '--enable-shmop=shared' '--enable-simplexml=shared' '--enable-soap=shared' '--enable-sockets=shared' '--with-sqlite3=shared,/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr' '--enable-sysvmsg=shared' '--enable-sysvsem=shared' '--enable-sysvshm=shared' '--enable-tokenizer=shared' '--enable-xml=shared,/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr' '--enable-xmlreader=shared,/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr' '--enable-xmlwriter=shared,/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr' '--enable-zip=shared' '--disable-filter' '--enable-libxml' '--with-libxml-dir=/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr/include/libxml2' '--with-system-tzdata' 'build_alias=x86_64-linux-gnu' 'host_alias=mipsel-openwrt-linux' 'target_alias=mipsel-openwrt-linux' 'CC=mipsel-openwrt-linux-uclibc-gcc' 'CFLAGS=-Os '-pipe' '-mmt' '-mips32r2' '-mtune=1004kc' '-fno-caller-saves' '-fhonour-copts' '-Wno-error=unused-but-set-variable' '-msoft-float' '-I/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr/lib/libiconv-stub/include' '-I/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr/lib/libintl-stub/include' 'LDFLAGS=-L/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr/lib '-L/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/lib' '-L/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/toolchain-mipsel_1004kc+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/usr/lib' '-L/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/toolchain-mipsel_1004kc+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/lib' '-L/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr/lib/libiconv-stub/lib' '-L/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr/lib/libintl-stub/lib' 'CPPFLAGS=-I/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr/include '-I/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/include' '-I/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/toolchain-mipsel_1004kc+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/usr/include' '-I/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/toolchain-mipsel_1004kc+dsp_gcc-4.8-linaro_uClibc-0.9.33.2/include' '-I/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr/lib/libiconv-stub/include' '-I/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr/lib/libintl-stub/include' 'CXX=mipsel-openwrt-linux-uclibc-g++' 'CXXFLAGS=-Os '-pipe' '-mmt' '-mips32r2' '-mtune=1004kc' '-fno-caller-saves' '-fhonour-copts' '-Wno-error=unused-but-set-variable' '-msoft-float' '-I/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr/lib/libiconv-stub/include' '-I/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr/lib/libintl-stub/include'"
#define PHP_ADA_INCLUDE		""
#define PHP_ADA_LFLAGS		""
#define PHP_ADA_LIBS		""
#define PHP_APACHE_INCLUDE	""
#define PHP_APACHE_TARGET	""
#define PHP_FHTTPD_INCLUDE      ""
#define PHP_FHTTPD_LIB          ""
#define PHP_FHTTPD_TARGET       ""
#define PHP_CFLAGS		"$(CFLAGS_CLEAN) -prefer-non-pic -static"
#define PHP_DBASE_LIB		""
#define PHP_BUILD_DEBUG		""
#define PHP_GDBM_INCLUDE	""
#define PHP_IBASE_INCLUDE	""
#define PHP_IBASE_LFLAGS	""
#define PHP_IBASE_LIBS		""
#define PHP_IFX_INCLUDE		""
#define PHP_IFX_LFLAGS		""
#define PHP_IFX_LIBS		""
#define PHP_INSTALL_IT		""
#define PHP_IODBC_INCLUDE	""
#define PHP_IODBC_LFLAGS	""
#define PHP_IODBC_LIBS		""
#define PHP_MSQL_INCLUDE	""
#define PHP_MSQL_LFLAGS		""
#define PHP_MSQL_LIBS		""
#define PHP_MYSQL_INCLUDE	"-I/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr/include/mysql"
#define PHP_MYSQL_LIBS		"-L/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr/lib/mysql -lmysqlclient "
#define PHP_MYSQL_TYPE		"external"
#define PHP_ODBC_INCLUDE	""
#define PHP_ODBC_LFLAGS		""
#define PHP_ODBC_LIBS		""
#define PHP_ODBC_TYPE		""
#define PHP_OCI8_SHARED_LIBADD 	""
#define PHP_OCI8_DIR			""
#define PHP_OCI8_ORACLE_VERSION		""
#define PHP_ORACLE_SHARED_LIBADD 	"@ORACLE_SHARED_LIBADD@"
#define PHP_ORACLE_DIR				"@ORACLE_DIR@"
#define PHP_ORACLE_VERSION			"@ORACLE_VERSION@"
#define PHP_PGSQL_INCLUDE	""
#define PHP_PGSQL_LFLAGS	""
#define PHP_PGSQL_LIBS		""
#define PHP_PROG_SENDMAIL	""
#define PHP_SOLID_INCLUDE	""
#define PHP_SOLID_LIBS		""
#define PHP_EMPRESS_INCLUDE	""
#define PHP_EMPRESS_LIBS	""
#define PHP_SYBASE_INCLUDE	""
#define PHP_SYBASE_LFLAGS	""
#define PHP_SYBASE_LIBS		""
#define PHP_DBM_TYPE		""
#define PHP_DBM_LIB		""
#define PHP_LDAP_LFLAGS		""
#define PHP_LDAP_INCLUDE	""
#define PHP_LDAP_LIBS		""
#define PHP_BIRDSTEP_INCLUDE     ""
#define PHP_BIRDSTEP_LIBS        ""
#define PEAR_INSTALLDIR         ""
#define PHP_INCLUDE_PATH	".:"
#define PHP_EXTENSION_DIR       "/usr/lib/php/extensions/no-debug-non-zts-20131226"
#define PHP_PREFIX              "/usr"
#define PHP_BINDIR              "/usr/bin"
#define PHP_SBINDIR             "/usr/sbin"
#define PHP_MANDIR              "/usr/man"
#define PHP_LIBDIR              "/usr/lib/php"
#define PHP_DATADIR             "/usr/share"
#define PHP_SYSCONFDIR          "/etc"
#define PHP_LOCALSTATEDIR       "/var"
#define PHP_CONFIG_FILE_PATH    "/etc"
#define PHP_CONFIG_FILE_SCAN_DIR    "/etc/php5"
#define PHP_SHLIB_SUFFIX        "so"
