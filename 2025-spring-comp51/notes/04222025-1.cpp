#include <iostream>
using namespace std;
#include<cstdlib>
#include "04222025.h"

int test(int _a, int _b){
    int c = _a + _b;
    return c;
}

void test1(int _a, int _b){
    int c = _a + _b;
}

int test2(int& _a, int _b){
    _a = 4;
    _b = 3;
    int c = _a + _b;
    return c;
}

int test3(int _a, int _b){
    _a = 4;
    _b = 3;
    int c = _a + _b;
    return c;
}

int test4(int _a, int _b = 9){
    int c = _a + _b;
    return c;
}

int test4(){
    int c = 1 + 2;
    return c;
}

class TestClass{
    public:
        int a = 1;
        int b = 2;
        int c = 3;

        TestClass(int _a, int _b){
            a = _a;
            b = _b;
        }

        TestClass(){
        }
        
        int add(){
            int c = a + b;
            return c;
        }
};

void CountDown(int countInt) {
    if (countInt <= 0) {
       cout << "Go!\n";
    }
    else {
       cout << countInt << endl;
       CountDown(countInt - 1);
    }
 }
 

// int test5(int, int);

// class TestClass1{
//     public:
//         int a = 1;
//         int b = 2;
//         int c = 3;

//         TestClass1(int, int);
//         TestClass1();
        
//         int add();
// };

int main() {
    bool d = true;
    string e = "hello";
    char f = 'a';
    float g = 0.1;
    int a = 3;
    int b = 2;
    int c = a + b;

    test5(1,2);

    // c = test(1, 2);
    // test(1, 2);
    // test1(1, 2);
    // a = 1;
    // b = 0;
    // c = 2;
    // c = test2(a, 2);
    // // c = test2(1, 2);

    // cout << a << endl;
    // cout << b << endl;
    // cout << c << endl;

    // a = 1;
    // b = 0;
    // c = 2;
    // c = test3(a, 2);

    // cout << a << endl;
    // cout << b << endl;
    // cout << c << endl;

    // a = 1;
    // b = 0;
    // c = 2;
    // c = test4(1);
    // cout << a << endl;
    // cout << b << endl;
    // cout << c << endl;

    // a = 1;
    // b = 0;
    // c = 2;
    // c = test4(1, 2);
    // cout << a << endl;
    // cout << b << endl;
    // cout << c << endl;

    // cout << test4(5,8) <<endl;
    // cout << test4() <<endl;

    // CountDown(2);

    // TestClass tc = TestClass();
    // cout << tc.add() << endl;

    // TestClass tc1 = TestClass();
    // tc1.a = 3;
    // tc1.b = 9;
    // cout << tc1.add() << endl;

    // TestClass tc2 = TestClass();
    // tc2.a = 7;
    // cout << tc2.add() << endl;

    // TestClass tc3 = TestClass(3, 9);
    // cout << tc3.add() << endl;

    // cout << "------" << endl;
    // int arr[10] = {1, 2, 3};

    // cout << arr[0] << endl;
    // cout << arr[3] << endl;
    // cout << arr[9] << endl;
    // cout << arr[12] << endl;
    
    // arr[7] = 89;
    // cout << arr[7] << endl;

    // TestClass arr1[2];
    // arr1[0] = TestClass();
    // arr1[1] = TestClass(1, 3);
    // arr1[2] = TestClass(4, 0);

    // vector<int> vec;
    // vec.push_back(1);
    // vec.push_back(3);

    // cout << vec[0] << endl;
    // cout << vec[1] << endl;
    // cout << vec[2] << endl;
    

    // a = 4;
    // if(a < 1){
    //     cout << "hello" << endl;
    // }
    // else if(a > 1){
    //     cout << "hihi" << endl;
    // }
    // else if(a > 2){
    //     cout << "hi" << endl;
    // }
    // else{
    //     cout << "bye" << endl;
    // }
    // if(a < 10){
    //     cout << "haha" << endl;
    // }

    // bool p = a < 10;
    // if(p){
    //     cout << "heyhey" << endl;
    // }
    // if(true){
    //     cout << "heyhey1" << endl;
    // }
    // if(false){
    //     cout << "heyhey2" << endl;
    // }

    // a = 4;
    // while(a > 0){
    //     a = a - 1;
    //     cout << a<< endl;
    // }

    // // int arr[1000] = {1, 2, 3};
    // while(true){
    //     a = a - 1;
    //     cout << a<< endl;

    //     if(a < -10){
    //         break;
    //     }
    // }

    // while(false){
    //     a = a - 1;
    //     cout << a<< endl;
    // }

    // for (int i = 0; i < 3; i++){
    //     cout << i << " ";
    //     cout << i << " ";
    //     cout << i << " ";
    // }

    // int i = 0;
    // while (i < 3)
    // {
    //     cout << i << " ";
    //     cout << i << " ";
    //     cout << i << " ";

    //     i++;
    // }

    // int arr[3] = {1, 2, 3};
    // int arr1[3][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9},
    // };

    // cout << arr[1] << endl;
    // cout << arr1[1] << endl;
    // cout << arr1[1][2] << endl;

    // for (int i = 0; i < 3; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << "----------" << endl;

    // for (int i = 0; i < 3; i++){
    //     for (int j = 0; j < 3; j++){
    //         cout << arr1[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    // int arr2[3][3][3];
    // for (int i = 0; i < 3; i++){
    //     for (int j = 0; j < 3; j++){
    //         for (int z = 0; z < 3; z++){
    //             cout << arr2[i][j][z] << " ";
    //         }
    //         cout << endl;
    //     }
    //     cout << endl;
    // }
    // cout << endl;
}


// int test5(int _a, int _b = 9){
//     int c = _a + _b;
//     return c;
// }

// TestClass1::TestClass1(int _a, int _b){
//     a = _a;
//     b = _b;
// }

// TestClass1::TestClass1(){
// }

// int TestClass1::add(){
//     int c = a + b;
//     return c;
// }