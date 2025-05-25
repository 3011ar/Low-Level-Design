// Mushroom.h
#pragma once
#include "ToppingDecorator.h"

class Mushroom : public ToppingDecorator {
    BasePizza* pizza;

public:
    // Mushroom(BasePizza* base) : pizza(base) {}
    Mushroom(BasePizza* base) {
        pizza = base;
    }
    
    int cost() const override {
        return pizza->cost() + 15;
    }

    ~Mushroom() {
        delete pizza;
    }
};
