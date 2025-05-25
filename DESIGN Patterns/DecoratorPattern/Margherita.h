#pragma once
#include "BasePizza.h"

class Margherita : public BasePizza {
public:
    int cost() const override {
        return 100;
    }
};
