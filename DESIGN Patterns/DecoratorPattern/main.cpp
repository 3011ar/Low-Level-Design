#include <iostream>
#include "Margherita.h"
#include "ExtraCheese.h"
#include "Mushroom.h"

int main() {
    // Margherita + ExtraCheese
    BasePizza* pizza1 = new ExtraCheese(new Margherita());
    std::cout << "Pizza1 Cost: " << pizza1->cost() << std::endl;
    delete pizza1;

    // Margherita + ExtraCheese + Mushroom
    BasePizza* pizza2 = new Mushroom(new ExtraCheese(new Margherita()));
    std::cout << "Pizza2 Cost: " << pizza2->cost() << std::endl;
    delete pizza2;

    return 0;
}
