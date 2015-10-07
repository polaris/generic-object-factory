#ifndef __Shape_H
#define __Shape_H

#include "Factory.h"

#include <functional>
#include <memory>

class Shape {
public:
    using IdentifierType = int;
    using ProductCreatorType = std::function<std::unique_ptr<Shape> ()>;
    using Factory = Factory<IdentifierType, ProductCreatorType>;

    virtual ~Shape() {}
    virtual void draw() = 0;    
};

#endif
