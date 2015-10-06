#include "ShapeFactory.h"

int main() {
    auto r1 = ShapeFactory::instance().create(0);
    auto r2 = ShapeFactory::instance().create(1);
    r1->draw();
    r2->draw();
}
