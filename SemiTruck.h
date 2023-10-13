#pragma once
#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& n);

    //Special member Functions.  See instruction 9) and note in main()
    //virtual ~SemiTruck() = default;
    SemiTruck(const SemiTruck&) = default;
    SemiTruck& operator=(const SemiTruck&) = default;

    void pullOver();

    void honkBigHorn(); 

    //needed a virtual function to get rid og the warning.
    void setSpeed(int s) override;
};
