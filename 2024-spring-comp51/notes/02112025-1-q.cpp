#include <iostream>

int main() {
    int base = 4;
    int input_raw;
    std::cout << "enter a value: " << std::endl;
    std::cout << "1. add" << std::endl;
    std::cout << "2. minus" << std::endl;
    std::cout << "3. print" << std::endl;
    std::cout << "4. quit" << std::endl;
    std::cin >> input_raw;

    while (input_raw != 4)
    {
        if(input_raw == 1){
            int result = -1;
            result = 3 + base;
            std::cout << result << std::endl;
        }
        else if(input_raw == 2){
            int result = -1;
            result = base - 5;
            std::cout << result << std::endl;
        }
        else if(input_raw == 3){
            std::cout << base << std::endl;
        }
        std::cout << "enter a value: " << std::endl;
        std::cout << "1. add" << std::endl;
        std::cout << "2. minus" << std::endl;
        std::cout << "3. print" << std::endl;
        std::cout << "4. quit" << std::endl;
        std::cin >> input_raw;
    }
}
