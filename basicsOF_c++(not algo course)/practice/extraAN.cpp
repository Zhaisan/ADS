#include <iostream>
using namespace std;
int main () {
    int x,d,k;
    cin >> x >> d;
    int cnt = 0;
    while(x!=0){
        k=x%10;
        x/=10;
        if(k==d) cnt++;
    }
    cout<<cnt;

    return 0;
}