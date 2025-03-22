// write a menu program to execute different operation base on the menu options
// initial a variable a = 3, b = 5, c = 0
// 1. add operation (c = a + b)
// 2. minus operation (a = c - 2)
// 3. dispaly all variable value  // a=3, b=2, c=5
// 4. quit
//------

#include<iostream>;
using namespace std;

int main(){
    int a = 3;
    int b = 5;
    int c = 0;

    int option = 0;

    cout << "1. add operation" << endl;
    cout << "2. minus operation" << endl;
    cout << "3. dispaly all variable value" << endl;
    cout << "4. quit" << endl;
    cout << "select a option: ";
    cin >> option;

    while(option != 4){
        if(option == 1){
            c = a + b;
            cout << "c: " << c << endl;
        }
        else if(option == 2){
            a = c - 2;
            cout << "a: " << a << endl;
        }
        else if(option == 3){
            cout << "a: " << a;
            cout << " b: " << b;
            cout << " c: " << c << endl;
        }

        cout << "1. add operation" << endl;
        cout << "2. minus operation" << endl;
        cout << "3. dispaly all variable value" << endl;
        cout << "4. quit" << endl;
        cout << "select a option: ";
        cin >> option;
    }
}