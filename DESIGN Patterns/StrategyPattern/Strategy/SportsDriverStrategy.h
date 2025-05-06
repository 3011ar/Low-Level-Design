#pragma once
#include "DriverStrategy.h"
#include <iostream>
using namespace std;

class SportsDriverStrategy : public DriverStrategy {
public:
    void drive() override {
        cout << "Sports Drive Capability" << endl;
    }
};
