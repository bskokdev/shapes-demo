#include <vector>
#include <memory>
#include "Circle.h"
#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"


int main() {
    std::vector<std::unique_ptr<Shape>> shapes;

    shapes.push_back(std::make_unique<Circle>(5));
    shapes.push_back(std::make_unique<Rectangle>(5, 10));
    shapes.push_back(std::make_unique<Square>(5));

    for (auto &shape : shapes) {
        shape->calcArea();
        shape->calcPerimeter();
        shape->print();
    }

    return 0;
}
