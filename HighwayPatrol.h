#pragma once 

#include "Vehicle.h"

struct Highway;
struct HighwayPatrol : public Vehicle
{
public:
    HighwayPatrol();
    HighwayPatrol(const HighwayPatrol&);
    ~HighwayPatrol() override;
    HighwayPatrol& operator=(const HighwayPatrol&);
    
    void scanHighway(Highway* h);
    void pullOver( Vehicle* v, bool willArrest, Highway* h );
};
