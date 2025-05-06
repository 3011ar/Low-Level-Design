#pragma once
#include "DriverStrategy.h"
#include <iostream>
using namespace std;

class NormalDriverStrategy : public DriverStrategy {
public:
    void drive() override {
        cout << "Normal Drive Capability" << endl;
    }
};
