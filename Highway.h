#pragma once

#include <vector>

struct HighwayPatrol;
struct Vehicle;
struct Highway
{
    void addVehicle(Vehicle* v);
    void removeVehicle(Vehicle* v);
    void changeSpeed(int newSpeed);

private:
    std::vector<Vehicle*> vehicles;
    void addVehicleInternal(Vehicle* v);
    void removeVehicleInternal(Vehicle* v);
    int speedLimit = 65;
    friend HighwayPatrol;

};
