#ifndef __Shape_H
#define __Shape_H

class Shape {
public:
    virtual ~Shape() {}
    virtual void draw() = 0;    
};

#endif
