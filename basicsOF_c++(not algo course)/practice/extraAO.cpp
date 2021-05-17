#include <iostream>
using namespace std;
int main () {
    int x,k,sum=0;

    cin >> x;
    while( x!=0){
        k=x%10;
        x/=10;
        sum +=k;



    
    }
    cout << sum;

    return 0;
}