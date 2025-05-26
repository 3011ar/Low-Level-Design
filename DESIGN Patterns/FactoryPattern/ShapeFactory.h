#pragma once
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include <string>
using namespace std;

class ShapeFactory {
public:
    Shape* getShape(const string& input) {
        if (input == "CIRCLE") {
            return new Circle();
        } else if (input == "RECTANGLE") {
            return new Rectangle();
        } else {
            return nullptr;
        }
    }
};
