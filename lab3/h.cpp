#include <iostream>
#include <cmath>
using namespace std;
int main(){
    // int n ;
    // cin >> n;
    // int s;
    // s = pow(n, 0.5);
    // cout << s + 1;
    int n; 
    cin >> n;
    int i = 0;
    while (pow(2, i) < n){
        i++;
    }
    cout << i;


    return 0 ;
}