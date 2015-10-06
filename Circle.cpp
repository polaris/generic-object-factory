#include "Circle.h"
#include "Registrar.h"

#include <iostream>

Circle::Circle() {
    std::cout << "Circle::Circle" << std::endl;
}

void Circle::draw() {
    std::cout << "Circle::draw" << std::endl;
}

template class Registrar<Circle, 0>;
