#pragma once
#include "Vehicle.h"
#include "Strategy/SportsDriverStrategy.h"

class OffRoadVehicle : public Vehicle {
public:
    OffRoadVehicle() : Vehicle(new SportsDriverStrategy()) {}
};
