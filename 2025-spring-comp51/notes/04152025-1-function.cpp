#include <iostream>
#include "04152025-1-test.h"
using namespace std;

void test(int _a){
    cout << "hello: " << _a << endl;
}

double Rectangle::area(){
    return width * height;
}

int Person::salary_calculator(int _month){
    return income_per_month * 12;
}