/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

// create a class called Laptop with attribute 
//    ram_size(int), disk_size(int), brand(string)
//create a function in the class call "addRam" with a argument as size of ram to add
//in the main logic, create 2 laptop with different config, and add ram to 1 laptop

class Box{
    public:
        int len = 3;
        int width = 5;
        int height = 6;
        
        int sizeofbox(){
            return len * width * height;
        }
};

int sizeofbox(int &len, int &width, int &height){
    return len * width * height;
}

int main()
{
    Box box_1;
    std::cout << box_1.sizeofbox() << std::endl;
    Box box_2;
    box_2.len = 4l
    std::cout << box_2.sizeofbox() << std::endl;
    
    int box_1_len = 3;
    int box_1_width = 4;
    int box_1_height = 5;
    
    int box_2_len = 2;
    int box_2_width = 4;
    int box_2_height = 5;
    
    std::cout << sizeofbox(box_1_len, box_1_width, box_2_height) << std::endl;
    std::cout << sizeofbox(box_2_len, box_2_width, box_2_height) << std::endl;
    
    box_2_len = 4;
    std::cout << sizeofbox(box_1_len, box_2_width, box_2_height) << std::endl;
}