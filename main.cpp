#include "Shape.h"

int main() {
    std::unique_ptr<Shape> r1 = Shape::Factory::instance().create<Shape>(0);
    std::unique_ptr<Shape> r2 = Shape::Factory::instance().create<Shape>(1);
    r1->draw();
    r2->draw();
}
