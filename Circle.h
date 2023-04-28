#ifndef SHAPES_CIRCLE_H
#define SHAPES_CIRCLE_H


#include "Shape.h"
#include "Math.h"

/**
 * Circle shape inherited from Shape
 * @see Shape
 */
class Circle : public Shape {
private:
    double radius;
    double d;
public:
    Circle();

    explicit Circle(double radius);

    void calcArea() override;

    void calcPerimeter() override;
};


#endif //SHAPES_CIRCLE_H
