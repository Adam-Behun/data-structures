#include <iostream>
#include <cassert>
using namespace std;

double HrMinToMin(int origHours, int origMins){
    int totMinutes;

    totMinutes = origMins + (origHours * 60);

    return totMinutes;
}

int main(){

   cout << "Testing started" << endl;

   assert(HrMinToMin(0, 0) == 0);
   assert(HrMinToMin(0, 1)  == 1);
   assert(HrMinToMin(0, 99) == 99);
   assert(HrMinToMin(1, 0)  == 60);
   assert(HrMinToMin(5, 0)  == 300);
   assert(HrMinToMin(2, 30) == 150);
   // Many more test vectors would be typical...    

   cout << "Testing completed" << endl;

   return 0;
}