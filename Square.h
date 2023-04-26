#ifndef SHAPES_SQUARE_H
#define SHAPES_SQUARE_H

#include "Rectangle.h"

/**
 * Square shape which inherits from Rectangle class
 * Square is a special case of Rectangle
 */
class Square : public Rectangle {
public:
    Square() = default;
    Square(double a);
};


#endif //SHAPES_SQUARE_H
