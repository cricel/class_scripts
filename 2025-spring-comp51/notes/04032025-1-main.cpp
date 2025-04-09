#include <iostream>
#include "04032025-1-rectangle.h"

int main() {
    Rectangle rect(5.0, 3.0);
    
    std::cout << "Area: " << rect.area() << std::endl;
    std::cout << "Perimeter: " << rect.perimeter() << std::endl;

    return 0;
}