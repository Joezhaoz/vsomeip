// Copyright (C) 2014-2017 Bayerische Motoren Werke Aktiengesellschaft (BMW AG)
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#ifndef VSOMEIP_CLIENT_ENDPOINT_HPP_
#define VSOMEIP_CLIENT_ENDPOINT_HPP_

#include "endpoint.hpp"

namespace vsomeip {

class client_endpoint : public virtual endpoint {
public:
    virtual ~client_endpoint() {}

    virtual bool get_remote_address(boost::asio::ip::address &_address) const = 0;
    virtual unsigned short get_remote_port() const = 0;
};

} // namespace vsomeip


#endif /* VSOMEIP_CLIENT_ENDPOINT_HPP_ */
