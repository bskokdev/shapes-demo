#include <iostream>
#include <vector>
#include "Circle.h"
#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"


/**
 * Clean memory from vector of shapes
 * @param shapes vector of shapes
 */
void cleanMemory(std::vector<Shape*> shapes) {
    for(Shape* shape : shapes) {
        delete shape;
    }
}

int main() {
    std::vector<Shape*> shapes;

    shapes.push_back(new Circle(5));
    shapes.push_back(new Rectangle(5, 10));
    shapes.push_back(new Square(5));

    for (Shape* shape : shapes) {
        shape->calcArea();
        shape->calcPerimeter();
        shape->print();
    }

    cleanMemory(shapes);
    return 0;
}
