#ifndef __Circle_H
#define __Circle_H

#include "Shape.h"

#include <memory>

class Circle : public Shape {
public:
    Circle();
    void draw();

    static auto Create() {
        return std::make_unique<Circle>();
    }
};

#endif
