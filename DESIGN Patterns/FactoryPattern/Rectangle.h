#pragma once
#include "Shape.h"
#include <iostream>

class Rectangle : public Shape {
public:
    void draw() override {
        std::cout << "rectangle" << std::endl;
    }
};
