
#include <iostream>
using namespace std;

void sum_region(int _two_d_arr[3][3], int _row, int& _total){
    // calculate the total of each row,
    // use recusive function add up each row
    // cout << _two_d_arr[_row][1];
    for (int i = 0; i < 3; i++){
        // cout << _two_d_arr[_row][i] << endl;
        _total += _two_d_arr[_row][i];
    }

    if(_row < 2){
        sum_region(_two_d_arr, _row + 1, _total);
    }

    // cout << _total <<endl;
}
// create a function, to ask user input for each value in the 2d array
// and display the new 2d array value

void InitArr(int _two_d_arr[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            // cout << _two_d_arr[i][j];
            cout << "Enter a Number at " << i << " " << j << ": ";
            cin >> _two_d_arr[i][j];
        } 
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << _two_d_arr[i][j] << " ";
        } 
        cout <<endl;
    }
}

int main() {
    int two_d_arr[3][3]= {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    int total = 0;

    // sum_region(two_d_arr, 0, total);
    // cout << total; // output 45

    InitArr(two_d_arr);
}