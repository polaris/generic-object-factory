#include "Shape.h"

int main() {
    auto r1 = Shape::FactoryType::instance().create(0);
    auto r2 = Shape::FactoryType::instance().create(1);
    r1->draw();
    r2->draw();
}
