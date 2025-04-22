#include <iostream>
#include "04152025-1-test.h"
using namespace std;

int main() {
    test(3);
    Rectangle rt = Rectangle();
    cout << rt.area();

    // Person shawn = Person();
    // shawn.init("shawn", 11, 100);
    // // shawn.name = "shawn";
    // // shawn.age = 11;
    // // shawn.income_per_month = 100;

    Person shawn = Person(100, 11, "shawn");
    Person ben = Person(200, 11, "ben");

    // Person ben = Person();
    // ben.name = "ben";
    // shawn.age = 12;
    // ben.income_per_month = 200;

    if(shawn.salary_calculator(12) > ben.salary_calculator(12)){
        cout << "shawn has more money" << endl;
    }
    else{
        cout << "ben has more money" << endl;
    }
}

// Define a person class with 3 attributes
// income_per_month, age, name
// one function : salary_calculator(month)
// create 2 different person in the main
// and compare its salary per year