#include "Highway.h"
#include "Vehicle.h"
#include <cassert>
#include "Car.h"
#include "Motorcycle.h"
void Highway::changeSpeed(int newSpeed)
{
    speedLimit = newSpeed;
    for( auto* vehicle : vehicles )
    {
        vehicle->setSpeed(speedLimit);
    }
}

void Highway::addVehicleInternal(Vehicle* v)
{
    assert(false);
    Car* car = dynamic_cast<Car*>(v);
    if(car != nullptr)
    {
        car->closeWindows();
    }

    Motorcycle* moto = dynamic_cast<Motorcycle*>(v);
    if(moto != nullptr)
    {
        moto->lanesplitAndRace(80);
    }
    /*
    depending on the derived type, call the member function that doesn't evade the cops. 
    do not call `setSpeed`.  Pick a different function.
    */
}

void Highway::removeVehicleInternal(Vehicle* v)
{
    assert(false);
    Car* car = dynamic_cast<Car*>(v);
    if(car != nullptr)
    {
        car->tryToEvade();
    }

    Motorcycle* moto = dynamic_cast<Motorcycle*>(v);
    if(moto != nullptr)
    {
        moto->tryToEvade();
    }
    /*
    depending on the derived type, call the member function that tries to evade the cops. 
    do not call `setSpeed`.  Pick a different function.
    trucks pull over, but cars and bikes try to evade!!
    */
}

void Highway::addVehicle(Vehicle* v)
{
    vehicles.push_back(v);
    addVehicleInternal(v);
}
void Highway::removeVehicle(Vehicle* v)
{
    vehicles.erase(std::remove(vehicles.begin(), 
                               vehicles.end(), 
                               v), 
                   vehicles.end());
    removeVehicleInternal(v);
}

