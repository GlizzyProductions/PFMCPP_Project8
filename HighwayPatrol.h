#pragma once 
#include "Vehicle.h"

struct HighwayPatrol : public Vehicle 
{
    HighwayPatrol();

    //virtual ~HighwayPatrol() = default;
    HighwayPatrol(const HighwayPatrol&) = default;
    HighwayPatrol& operator=(const HighwayPatrol&) = default;

    void scanHighway(Highway* h);

    void pullOver( Vehicle* v, bool willArrest, Highway* h );

    int checkSpeed(Vehicle* v);

    //needed a virtual function to get rid og the warning.
    void setSpeed(int s) override;
};

