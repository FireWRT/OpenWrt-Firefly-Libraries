/* Copyright (C) 2014 J.F.Dockes
 *       This program is free software; you can redistribute it and/or modify
 *       it under the terms of the GNU General Public License as published by
 *       the Free Software Foundation; either version 2 of the License, or
 *       (at your option) any later version.
 *
 *       This program is distributed in the hope that it will be useful,
 *       but WITHOUT ANY WARRANTY; without even the implied warranty of
 *       MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *       GNU General Public License for more details.
 *
 *       You should have received a copy of the GNU General Public License
 *       along with this program; if not, write to the
 *       Free Software Foundation, Inc.,
 *       59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */
#ifndef _MEDIARENDERER_HXX_INCLUDED_
#define _MEDIARENDERER_HXX_INCLUDED_

#include <memory>
#include <string>
#include <vector>

#include "libupnpp/control/avtransport.hxx"
#include "libupnpp/control/device.hxx"
#include "libupnpp/control/ohplaylist.hxx"
#include "libupnpp/control/ohproduct.hxx"
#include "libupnpp/control/ohtime.hxx"
#include "libupnpp/control/ohvolume.hxx"
#include "libupnpp/control/renderingcontrol.hxx"
#include "libupnpp/control/ohreceiver.hxx"

namespace UPnPClient {

class MediaRenderer;
class UPnPDeviceDesc;

typedef STD_SHARED_PTR<MediaRenderer> MRDH;

class MediaRenderer : public Device {
public:
    /** Build from device description */
    MediaRenderer(const UPnPDeviceDesc& desc);

    ~MediaRenderer();

    /** Methods returning handles to the different services. May return null
        for unimplemented services. */
    RDCH rdc();
    AVTH avt();
    OHPRH ohpr();
    OHPLH ohpl();
    OHTMH ohtm();
    OHVLH ohvl();
    OHRCH ohrc();

    bool hasOpenHome();

    /** Retrieve device descriptions for devices looking like media
     * renderers. We return all devices implementing
     * either RenderingControl or OHProduct.
     */
    static bool getDeviceDescs(std::vector<UPnPDeviceDesc>& devices,
                               const std::string& friendlyName = "");
    static bool isMRDevice(const std::string& devicetype);

protected:

    static const std::string DType;
private:
    class Internal;
    Internal *m;
};

}

#endif /* _MEDIARENDERER_HXX_INCLUDED_ */
