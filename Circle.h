#ifndef __Circle_H
#define __Circle_H

#include "Shape.h"
#include "Creatable.h"

class Circle
: public Shape
, public Creatable<Circle> {
public:
    Circle();
    void draw();
};

#endif
