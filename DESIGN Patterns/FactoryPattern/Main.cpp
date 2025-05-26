#include "ShapeFactory.h"

int main() {
    ShapeFactory shapeFactoryObj;
    Shape* shapeObj = shapeFactoryObj.getShape("CIRCLE");

    if (shapeObj) {
        shapeObj->draw();
        delete shapeObj;
    }

    return 0;
}
