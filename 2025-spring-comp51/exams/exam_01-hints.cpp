#include <iostream>
using namespace std;
///////function call by value logic and return function logic//////////
int call_by_value(int a){
    a = 3;
    cout << a << endl; //will output 3
    return a;
}
///////function call by referen logic //////////
void call_by_reference(int &a){
    a = 3;
    cout << a << endl; //will output 3
    ///////for logic //////////
    int c = 0;
    for (int i=0; i<2; i++){
        c = c + 1;
    }
    cout << c << endl; //will output 2
    ///////while logic //////////
    int d = 0;
    int e = 0;
    while(e<2){
        d = d + 1;
        e = e + 1;
    }
    cout << d << endl; //will output 2
    ///////if logic //////////
    if(c == 2){
        cout << "good" << endl; //will trigger
    }
    else{
        cout << "bad" << endl; //will not trigger
    }
}
int main()
{
    int a = 0;
    int b;
    b = call_by_value(a);
    cout << a << endl; //will output 0
    cout << b << endl; //will output 3
    call_by_reference(a);
    cout << a << endl; //will output 3 
}