#include "Rectangle.h"
#include "Registrar.h"
#include "ShapeFactory.h"

#include <iostream>

Rectangle::Rectangle() {
    std::cout << "Rectangle::Rectangle" << std::endl;
}

void Rectangle::draw() {
    std::cout << "Rectangle::draw" << std::endl;
}

template class Registrar<Rectangle, ShapeFactory, ShapeFactory::identifier_type, 1>;
