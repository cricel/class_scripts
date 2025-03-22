#include <iostream>
using namespace std;

int main() {
    // int array_a[3];

    // array_a[0] = 2;
    // array_a[1] = 3;

    // cout << array_a[1] << endl;
    // cout << array_a[2] << endl;

    // for (int i = 0; i < 4; i++){
    //     for (int j = 0; j < 4; j++){
    //         if(i == j){
    //             cout<< '*';
    //         }
    //         else{
    //             cout<< ' ';
    //         }
    //     }
    //     cout<<endl;
    // }

    
    // char array_a[4] = {'*', ' ', ' ', ' '};
    // int array_b[4] = {1,2,3,4};
    // for (int i = 0; i < 4; i++){
    //     cout<<array_a[i];
    // }

    //2D arrary
    char two_d_array[4][5] = {
        {'*', ' ', ' ', ' ', '1'},
        {' ', '*', ' ', ' ', '2'},
        {' ', ' ', '*', ' ', '3'},
        {' ', ' ', ' ', '*', '4'}
    };

    cout << two_d_array[0][0] << endl;
    cout << two_d_array[0][1] << endl;
    cout << "End" << endl;
}
