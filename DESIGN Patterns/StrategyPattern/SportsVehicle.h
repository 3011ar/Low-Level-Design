#pragma once
#include "Vehicle.h"
#include "Strategy/SportsDriverStrategy.h"

class SportsVehicle : public Vehicle {
public:
    SportsVehicle() : Vehicle(new SportsDriverStrategy()) {}
};
