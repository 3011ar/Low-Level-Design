#pragma once
#include "Vehicle.h"
#include "Strategy/NormalDriverStrategy.h"

class GoodsVehicle : public Vehicle {
public:
    GoodsVehicle() : Vehicle(new NormalDriverStrategy()) {}
};
