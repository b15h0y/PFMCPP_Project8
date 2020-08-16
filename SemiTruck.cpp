#include "SemiTruck.h"



SemiTruck::SemiTruck(const std::string& n) : Vehicle(n){}

SemiTruck::~SemiTruck() = default;
SemiTruck::SemiTruck(const SemiTruck&) = default;
SemiTruck& SemiTruck::operator = (const SemiTruck&) = default;

void SemiTruck::turnFrontLights()
{
    std::cout<< "[ Info ] SemiTruck Front Lights : ON \n" << std::endl;
}

void SemiTruck::pullOver()
{
    setSpeed(0);
    std::cout<< "[ Info ] SemiTruck speed is 0, Pulled-Over Successfully!\n" << std::endl;
}
