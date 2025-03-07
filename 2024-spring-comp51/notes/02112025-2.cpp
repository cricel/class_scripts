#include <iostream>

void cal(){
    int c = 3 + 2;
    std::cout << c << std::endl;
}
void cal(int a_input){
    int c = a_input + 2;
    std::cout << c << std::endl;
}
int main() {
    int a = 3;
    int b = 4;
    cal();
    cal(a);
}
