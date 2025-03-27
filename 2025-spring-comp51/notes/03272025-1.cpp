// # Write a Person class that have 4 attributes
// # Money, first name, last name, daily salary
// # And a work() function, with 1 argument as how many day he have work
// # Inside the work function, you will calculate the salary as
// # (salary = day x daily salary, money = salary + money)

// # Create 2 person in the main code,
// # With initial value of
// # Shawn lin,$10/day,
// # Ben ben $20/day

// # then shawn work for 30 day and ben work for 15 day,
// # write a if statement to compare the money
// # Print out who have more money

#include <iostream>
using namespace std;
#include<cstdlib>

class Person{
public:
    int money = 0;
    string first_name = "";
    string last_name = "";
    int daily_salary = -1;
    
    void work(int day){
        int salary = daily_salary * day;
        money = money + salary;
    }
};

int main() {
    Person shawn;
    shawn.first_name = "Shawn";
    shawn.last_name = "lin";
    shawn.daily_salary = 10;
    
    Person ben;
    ben.first_name = "Ben";
    ben.last_name = "Ben";
    ben.daily_salary = 15;
    
    shawn.work(30);
    ben.work(15);
    
    if(shawn.money > ben.money){
        cout << "Shawn has more money";
    }
    else{
        cout << "Ben has more money";
    }
    
    // create a more random person
    // write a code to add this 4 person into a array
    // wirte a loop to loop through all their attriabute and check who has most daily_salary
    
    int int_arr[3] = {1, 2, 3};
    string str_arr[3] = {"1", "2", "3"};
    Person class_arr[2] = {shawn, ben};
    
    cout << int_arr[0];
    cout << class_arr[0].first_name;
}
