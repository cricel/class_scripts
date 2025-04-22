#include <iostream>
using namespace std;
#include<cstdlib>
#include "04222025.h"

int test5(int _a, int _b = 9){
    int c = _a + _b;
    return c;
}

TestClass1::TestClass1(int _a, int _b){
    a = _a;
    b = _b;
}

TestClass1::TestClass1(){
}

int TestClass1::add(){
    int c = a + b;
    return c;
}