#include <iostream>
#include <cmath>
using namespace std;
// Leap Year
int main () {
   int n;
   cin >> n;
   if(n%4==0 && n%100!=0 || n%400==0){

      cout << "YES";
   }
   else {
      cout << "NO";
   }
   return 0;
}
   






