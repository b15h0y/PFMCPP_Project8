#include "SemiTruck.h"



SemiTruck::SemiTruck(const std::string& n) : Vehicle(n){}

SemiTruck::~SemiTruck() = default;
SemiTruck::SemiTruck(const SemiTruck&) = default;
SemiTruck& SemiTruck::operator = (const SemiTruck&) = default;

void SemiTruck::toggleFrontLights( bool state_)
{
    std::string status = state_ ? "ON" : "OFF";
    std::cout<< "[ Info ] SemiTruck Front Lights : " << status << "\n" << std::endl;
}

void SemiTruck::pullOver()
{
    setSpeed(0);
    std::cout<< "[ Info ] SemiTruck speed is 0, Pulled-Over Successfully!\n" << std::endl;
}
