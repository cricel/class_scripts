#include <iostream>
using namespace std;

void aging(int &_age){
    _age = _age + 1;
}

void banking(int _age, int &_money){
    _money = _age * 10;
}

// int cal(int x){
//     int c = x * 19/2+1=4;
//     return c
// }

int main() {
    int age = 0;
    int bank_money = 0;
    
    while(age < 100){
        // cout << age << endl;
        aging(age);
        // cout << age << endl;
        banking(age, bank_money);
        age = age + 1;
    }
    cout << age << endl;
    cout << bank_money << endl;
}

// create a variable call age = 0;
// create a bank_money = 0
// create a function call aging, which update the age value by 1 every time run 
// create a function call banking, which gonne get money every year as the amount of "age * 10";
// in the main, write a logic with a loop, to loop 100 times, which make it 100 years old
// display the final money this guy has
