#include "Rectangle.h"

Rectangle::Rectangle(double a, double b) {
    this->a = a;
    this->b = b;
}

void Rectangle::calcArea() {
    this->area = this->a * this->b;
}

void Rectangle::calcPerimeter() {
    this->perimeter = 2 * (this->a + this->b);
}

