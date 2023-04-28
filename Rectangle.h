#ifndef SHAPES_RECTANGLE_H
#define SHAPES_RECTANGLE_H


#include "Shape.h"

/**
 * Rectangle shape which inherits from Shape class
 */
class Rectangle : public Shape {
protected:
    double a;
    double b;
public:
    Rectangle();

    Rectangle(double a, double b);

    void calcArea() override;

    void calcPerimeter() override;
};


#endif //SHAPES_RECTANGLE_H
