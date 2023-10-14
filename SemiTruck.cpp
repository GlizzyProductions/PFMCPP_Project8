#include "SemiTruck.h"
#include <iostream>

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) 
{
    
}

void SemiTruck::pullOver()
{
    setSpeed(0);
    std::cout << name << ": hello officer, is there problem?" << std::endl;
}

void SemiTruck::honkBigHorn()
{
    setSpeed(65);
    std::cout << name << "HONK! HONK!! HONK!!!" << std::endl;
}

void SemiTruck::setSpeed(int s)
{
    std::cout << "\nHighway is adjusting " << name << "'s speed to " << s << " mph" << std::endl;
    speed = s;
}
