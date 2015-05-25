import sys
import gdb

# Update module path.
dir_ = '/home/wbj/project/mt7621/firewrt_build_all_app/FireWRT-OpenWrt-Firefly-FireWRT-SDK/staging_dir/host/share/glib-2.0/gdb'
if not dir_ in sys.path:
    sys.path.insert(0, dir_)

from gobject import register
register (gdb.current_objfile ())
