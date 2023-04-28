#include "Circle.h"
#include <cmath>

Circle::Circle() : radius(0), d(0) {}

Circle::Circle(double radius) : radius(radius), d(2 * radius) {}

void Circle::calcArea() {
    this->area = M_PI * pow(this->radius, 2);
}

void Circle::calcPerimeter() {
    this->perimeter = M_PI * (this->d);
}