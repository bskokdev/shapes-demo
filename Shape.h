#ifndef SHAPES_SHAPE_H
#define SHAPES_SHAPE_H
#include <iostream>

/**
 * Abstract class for shapes
 */
class Shape {
protected:
    double area;
    double perimeter;
public:
    virtual void calcArea() = 0;

    virtual void calcPerimeter() = 0;

    virtual void print() {
        std::cout << "Area: " << this->area << std::endl;
        std::cout << "Perimeter: " << this->perimeter << std::endl;
        std::cout << "-------------------------" << std::endl;
    }
};


#endif //SHAPES_SHAPE_H
