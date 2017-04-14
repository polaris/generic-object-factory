#ifndef __Rectangle_H
#define __Rectangle_H

#include "Shape.h"
#include "Creatable.h"

class Rectangle
: public Shape
, public Creatable<Rectangle> {
public:
    Rectangle();
    void draw();
};

#endif
