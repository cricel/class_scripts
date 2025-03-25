#include <iostream>
using namespace std;
#include<cstdlib>

void searchArray(int array_input[3][3], int x, int y){
    if(x < 3){
        if(y < 3){
            if(array_input[x][y] == 1){
                cout << "at location :" << x << " " << y << "has a value of 1" << endl;
            }
            y += 1;
        }
        else{
            y = 0;
            x += 1;
        }
        searchArray(array_input, x, y);
    }
}

int main() {
    srand(0);
    int a_arr[3][3];
    for(int i=0; i< 3; i++){
        for(int j=0; j< 3; j++){
            a_arr[i][j] = rand() % 10;
        }
    }
    
    for(int i=0; i< 3; i++){
        for(int j=0; j< 3; j++){
            cout << a_arr[i][j];
        }
        cout << endl;
    }
    
    searchArray(a_arr, 0, 0);
//    if(a_arr[1][0] == 2){
//        cout << "at location :" << 1 << " " << 1 << "has a value of 2" << endl;
//    }
}
