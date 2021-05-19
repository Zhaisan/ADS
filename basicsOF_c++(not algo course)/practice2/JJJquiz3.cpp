#include <iostream>
using namespace std;
int seven(int k){
    int res=0;
    int i=1;
    while(k>0){
        res+=k%7*i;
        k/=7;
        i*=10;
    
    }
    return res;
}
int main(){
    int k;
    cin >> k;
    cout << seven(k);

    return 0;
}