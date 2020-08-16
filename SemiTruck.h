#pragma once

#include "Vehicle.h"

struct SemiTruck : Vehicle
{
    SemiTruck(const std::string& n);
    SemiTruck(const SemiTruck&);
    SemiTruck& operator=(const SemiTruck&);
    ~SemiTruck() override;    

    void toggleFrontLights(bool);
    void pullOver();

};
