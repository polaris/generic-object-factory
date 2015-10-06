#ifndef __ShapeFactory_H
#define __ShapeFactory_H

#include "Factory.h"
#include "Shape.h"

#include <functional>
#include <memory>

using ShapeFactory = Factory<int, std::function<std::unique_ptr<Shape> ()>>;

#endif
