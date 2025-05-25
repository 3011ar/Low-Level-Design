#pragma once
#include "ToppingDecorator.h"

class ExtraCheese : public ToppingDecorator {
    BasePizza* pizza;

public:
    ExtraCheese(BasePizza* base) : pizza(base) {}

    int cost() const override {
        return pizza->cost() + 10;
    }

    ~ExtraCheese() {
        delete pizza;
    }
};
