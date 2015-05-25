#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "websockets" for configuration "Release"
set_property(TARGET websockets APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(websockets PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr/lib/libz.so;/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr/lib/libssl.so;/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr/lib/libcrypto.so;dl;m"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libwebsockets.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS websockets )
list(APPEND _IMPORT_CHECK_FILES_FOR_websockets "${_IMPORT_PREFIX}/lib/libwebsockets.a" )

# Import target "websockets_shared" for configuration "Release"
set_property(TARGET websockets_shared APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(websockets_shared PROPERTIES
  IMPORTED_LINK_INTERFACE_LIBRARIES_RELEASE "/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr/lib/libz.so;/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr/lib/libssl.so;/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/target-mipsel_1004kc+dsp_uClibc-0.9.33.2/usr/lib/libcrypto.so;dl;m"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libwebsockets.so.5"
  IMPORTED_SONAME_RELEASE "libwebsockets.so.5"
  )

list(APPEND _IMPORT_CHECK_TARGETS websockets_shared )
list(APPEND _IMPORT_CHECK_FILES_FOR_websockets_shared "${_IMPORT_PREFIX}/lib/libwebsockets.so.5" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
