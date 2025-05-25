#pragma once
#include "BasePizza.h"

class Farmhouse : public BasePizza {
public:
    int cost() const override {
        return 200;
    }
};
