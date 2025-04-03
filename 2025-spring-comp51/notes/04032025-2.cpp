
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

class FancyArr{
    public:
        int two_d_arr[3][3];
        int total = 0;
        int row = 0;

        void getInput(){
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    // cout << _two_d_arr[i][j];
                    cout << "Enter a Number at " << i << " " << j << ": ";
                    cin >> two_d_arr[i][j];
                } 
            }
        }

        // void sum(int _row){
        //     for (int i = 0; i < 3; i++){
        //         // cout << _two_d_arr[_row][i] << endl;
        //         total += two_d_arr[_row][i];
        //     }
        
        //     if(_row < 2){
        //         sum_region(two_d_arr, _row + 1, total);
        //     }
        // }

        void sum(){
            for (int i = 0; i < 3; i++){
                // cout << _two_d_arr[_row][i] << endl;
                total += two_d_arr[row][i];
            }
        
            if(row < 2){
                sum_region(two_d_arr, row + 1, total);
            }
            else{
                row = 0;
                total = 0;
            }
        }

        void display(){
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    cout << two_d_arr[i][j] << " ";
                } 
                cout <<endl;
            }
        }
};

int main() {
    FancyArr fancyArr;
    fancyArr.getInput();
    // fancyArr.sum(0);
    fancyArr.display();
    cout << fancyArr.total;

    // create a logic for each input, make sure it is smaller than 100
    // if it is bigger than 100, force the value to 100
    // at the end of sum, if the total is bigger than 800, ask user to re enter the value again



    // int two_d_arr[3][3]= {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9},
    // };

    // int total = 0;

    // // sum_region(two_d_arr, 0, total);
    // // cout << total; // output 45

    // InitArr(two_d_arr);
}