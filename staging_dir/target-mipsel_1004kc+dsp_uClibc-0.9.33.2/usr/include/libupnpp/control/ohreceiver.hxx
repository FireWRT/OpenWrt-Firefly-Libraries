/* Copyright (C) 2015 J.F.Dockes
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
#ifndef _OHRECEIVER_HXX_INCLUDED_
#define _OHRECEIVER_HXX_INCLUDED_

#include "libupnpp/config.h"

#include <string>                       // for string
#include <vector>                       // for vector

#include "libupnpp/control/service.hxx"
#include "libupnpp/control/ohplaylist.hxx"


namespace UPnPClient {

class UPnPDeviceDesc;
class UPnPServiceDesc;
class OHReceiver;

typedef STD_SHARED_PTR<OHReceiver> OHRCH;

/**
 * OHReceiver client class.
 */
class OHReceiver : public Service {
public:

    OHReceiver(const UPnPDeviceDesc& device, const UPnPServiceDesc& service)
        : Service(device, service) {
        registerCallback();
    }
    virtual ~OHReceiver() {
        unregisterCallback();
    }

    OHReceiver() {}

    /** Test service type from discovery message */
    static bool isOHRcService(const std::string& st);

    int play();
    int stop();
    int setSender(const std::string& uri, const std::string& meta);
    int sender(std::string& uri, std::string& meta);
    int protocolInfo(std::string *proto);
    int transportState(OHPlaylist::TPState *tps);

protected:
    /* My service type string */
    static const std::string SType;

private:
    void evtCallback(const STD_UNORDERED_MAP<std::string, std::string>&);
    void registerCallback();
};

} // namespace UPnPClient

#endif /* _OHRECEIVER_HXX_INCLUDED_ */
