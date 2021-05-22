#include <iostream>
using namespace std;
int main(){
    long n;
    long cnt=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        if(n%i==0)
        cnt++;
        
    }
    cout << cnt ;
    return 0;
}