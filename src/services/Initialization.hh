#ifndef RA_SERVICES_INITIALIZATION_HH
#define RA_SERVICES_INITIALIZATION_HH
#pragma once

#include <string>

namespace ra {
namespace services {

class Initialization
{
public:
    static void RegisterServices(const std::string& sClientName);

    static void Shutdown();
};

} // namespace services
} // namespace ra

#endif // !RA_SERVICES_INITIALIZATION_HH