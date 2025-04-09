#include "04032025-1-rectangle.h"
#include "04032025-1-header-2.h"

Rectangle::Rectangle(double w, double h) {
    width = w;
    height = h;
}

double Rectangle::area() const {
    return width * height;
}

double Rectangle::perimeter() const {
    return 2 * (width + height);
}