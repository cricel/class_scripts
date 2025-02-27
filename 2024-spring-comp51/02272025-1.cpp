/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

// add a int type variable call "numOfBook" in Student class to keep track of how many
// book the student has.
// create another function call "buybook", eachtime calling that function will 
// cost $100 to buy a book
// in the main program, create 3 student and each gonna work for 2 hour, and 1 student
// gona buy 1 book, the other 2 buying book, and cout how many book each student have
class Student{
    public:
        std::string name = "xxx";
        int id = 0;
        int money = 0;
        
        void sayhello(){
            std::cout << name + " saying hello" << std::endl;
        }
        
        void workforonehour(){
            money = money + 100;
        }
};

int main()
{
    Student shawnStudent;
    shawnStudent.name = "shawn";
    Student TinaStudent;
    TinaStudent.name = "tina";
    std::cout<< shawnStudent.money << std::endl;
    std::cout<< TinaStudent.money << std::endl;
    shawnStudent.workforonehour();
    std::cout<< shawnStudent.money << std::endl;
    std::cout<< TinaStudent.money << std::endl;
    



    // std::string name1 = "shawn";
    // sayhello(name1);
    // name1 = "ben";
    // sayhello(name1);
    // std::string name2 = "tina";
    // sayhello(name2);
    // std::string name3 = "xxx";
    // name3 = "wfwef";
    // sayhello(name3);
    // std::string name4 = "yyy";
    // sayhello(name4);
    // name3 = "wefweff23";
    
    
    // int a = 3;
    // Student shawn;
    // std::cout << shawn.name << std::endl;
    // shawn.name = "shawn";
    // std::cout << shawn.name << std::endl;
    // std::cout << shawn.id << std::endl;
    // shawn.sayhello();
    
    
    
}