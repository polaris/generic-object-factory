#include "Shape.h"

int main() {
    auto r1 = Shape::Factory::instance().create(0);
    auto r2 = Shape::Factory::instance().create(1);
    r1->draw();
    r2->draw();
}
