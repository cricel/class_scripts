#include <iostream>

void print_menu(){
    std::cout << "enter a value: " << std::endl;
    std::cout << "1. add" << std::endl;
    std::cout << "2. minus" << std::endl;
    std::cout << "3. print" << std::endl;
    std::cout << "4. quit" << std::endl;
}
void add_function(int input_base){
    int result = -1;
    result = 3 + input_base;
    std::cout << result << std::endl;
}
void minus_function(int input_base){
    int result = -1;
    result = input_base - 5;
    std::cout << result << std::endl;
}
void simple_print(int input_base){
    std::cout << input_base << std::endl;
}
int main() {
    int base = 4;
    int input_raw;
    print_menu();
    std::cin >> input_raw;

    while (input_raw != 4)
    {
        if(input_raw == 1){
            add_function(base);
        }
        else if(input_raw == 2){
            minus_function(base);
        }
        else if(input_raw == 3){
            simple_print(base);
        }
        print_menu();
        std::cin >> input_raw;
    }
}
