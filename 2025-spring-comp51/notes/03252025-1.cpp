#include <iostream>
using namespace std;

void CountDown(int countInt) {
   if (countInt <= 0) {
      cout << "0\n";
   }
   else {
      cout << countInt << endl;
      CountDown(countInt - 1);
   }
}

void CountUp(int countInt) {
   if (countInt >= 10) {
      cout << "10\n";
   }
   else {
       cout << countInt << endl;
       CountUp(countInt + 1);
   }
}

void Count(int countInt, bool isCountDown){
    if (countInt <= 0) {
        isCountDown = false;
        Count(countInt + 1, isCountDown);
        cout << "0\n";
    }
    else if(countInt >= 10 && isCountDown == false){
        cout << "10\n";
    }
    else {
        if(isCountDown){
            cout << countInt << endl;
            Count(countInt - 1, isCountDown);
        }
        else{
            cout << countInt << endl;
            Count(countInt + 1, isCountDown);
        }
    }
}
// Write a program to count from 10 to 0 and 0 back to 10
int main() {
//   CountDown(10);
//    CountUp(0);
    bool isCountDown = true;
    Count(10, isCountDown); //10 ->0 -> 10
    return 0;
}
