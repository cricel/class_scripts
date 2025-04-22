#include <string>

void test(int);
void area();
class Rectangle {
    public:
        double width = 1;
        double height = 2;
        double area();
};

class Person{
    public:
        int income_per_month;
        int age;
        std::string name;

        Person(int _income_per_month, int _age, std::string _name);
        
        void init(int _income_per_month,
            int _age,
            int _name){
                income_per_month = _income_per_month;
                age = _age;
                name = _name;
            }
        int salary_calculator(int);
};