#include "SportsVehicle.h"
#include <iostream>
using namespace std;

int main() {
    Vehicle* vehicle = new SportsVehicle();
    vehicle->drive();
    delete vehicle;
    return 0;
}
