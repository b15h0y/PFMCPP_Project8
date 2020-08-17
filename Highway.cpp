#include "Highway.h"
#include "Motorcycle.h"
#include "Car.h"
#include "SemiTruck.h"
#include "Vehicle.h"
#include <algorithm>

#include <cassert>



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

    if (auto *motor = dynamic_cast<Motorcycle*>(v))
    {
        motor->lanesplitAndRace(100);
    }

    else if (auto *car = dynamic_cast<Car*>(v))
    {
        car->closeWindows();
    }

    else if (auto *semitruck = dynamic_cast<SemiTruck*>(v))
    {
        semitruck->toggleFrontLights(true);
    }

    /*
    depending on the derived type, call the member function that doesn't evade the cops. 
    */

}

void Highway::removeVehicleInternal(Vehicle* v)
{

    if (auto *motor = dynamic_cast<Motorcycle*> (v) )
    {
        motor->tryToEvade();
    }

    else if (auto *car = dynamic_cast<Car*> (v) )
    {
        car->tryToEvade();
    }

    else if (auto *semitruck = dynamic_cast<SemiTruck*> (v) )
    {
        semitruck->pullOver();
    }

    /*
    depending on the derived type, call the member function that tries to evade the cops. 

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
