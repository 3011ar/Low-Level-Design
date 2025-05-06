#pragma once
#include "Strategy/DriverStrategy.h"

class Vehicle {
protected:
    DriverStrategy* driveObject;

public:
    Vehicle(DriverStrategy* driveObj) : driveObject(driveObj) {}

    virtual ~Vehicle() {
        delete driveObject;
    }

    void drive() {
        driveObject->drive();
    }
};
