#ifndef __Rectangle_H
#define __Rectangle_H

#include "Shape.h"

#include <memory>

class Rectangle : public Shape {
public:
    Rectangle();
    void draw();

    static auto Create() {
        return std::make_unique<Rectangle>();
    }
};

#endif
