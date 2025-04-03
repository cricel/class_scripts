#include <iostream>
#include "04012025-1.h"

void test();
// write a example to define 2 function
// - printname(name) with one argument, and no return
// - add(num1, num2), return int of result
// call these 2 function in the main function

int main() {
    int num1 = 5;
    int num2 = 3;

    std::cout << "Addition: " << add(num1, num2) << std::endl;
    std::cout << "Subtraction: " << subtract(num1, num2) << std::endl;
    std::cout << "Multiplication: " << multiply(num1, num2) << std::endl;
    test();
    printname("shawn");
    add2(1,2);

    return 0;
}

void test(){
    std::cout << "hi";
}
