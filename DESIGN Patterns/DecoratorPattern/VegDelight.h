#pragma once
#include "BasePizza.h"

class VegDelight : public BasePizza {
public:
    int cost() const override {
        return 120;
    }
};
