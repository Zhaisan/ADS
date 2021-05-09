#include <iostream>
#include <cmath>
using namespace std;
// Odd or Even
int main () {
    int n ;
    cin >> n;
    if(n%2==0){
        cout << "Even";
        }else if(n%2 !=0 ){
            cout << "Odd";
        }
            else if(n==0){
                cout << "None";
            }


    return 0;
}