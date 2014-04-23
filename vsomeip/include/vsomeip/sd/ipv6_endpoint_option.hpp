//
// ipv6endpoint_option.hpp
//
// This file is part of the BMW Some/IP implementation.
//
// Copyright © 2013, 2014 Bayerische Motoren Werke AG (BMW).
// All rights reserved.
//

#ifndef VSOMEIP_SD_IPV6_ENDPOINT_OPTION_HPP
#define VSOMEIP_SD_IPV6_ENDPOINT_OPTION_HPP

#include <vsomeip/primitive_types.hpp>
#include <vsomeip/sd/option.hpp>

namespace vsomeip {
namespace sd {

class ipv6_endpoint_option
		: virtual public option {
public:
	virtual ~ipv6_endpoint_option() {};

	virtual const ipv6_address& get_address() const = 0;
	virtual void set_address(const ipv6_address &_address) = 0;

	virtual ip_port get_port() const = 0;
	virtual void set_port(ip_port _port) = 0;

	virtual ip_protocol get_protocol() const = 0;
	virtual void set_protocol(ip_protocol _protocol) = 0;
};

} // namespace sd
} // namespace vsomeip

#endif // VSOMEIP_SD_IPV6_ENDPOINT_OPTION_HPP