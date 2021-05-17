#include <iostream>
using namespace std;
int main () {
    int x,k;
    cin >> x;
    while(x!=0) {
        k=x%10;
        x /=10;
        
        cout << k;
   }


    return 0;
}