#include <iostream>
using namespace;

int func(int x) {
    return x * 2;
}

int main() {
    int result = func(func(2));
    cout << result << endl;
    return 0;
}