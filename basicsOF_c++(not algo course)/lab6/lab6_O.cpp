#include <iostream>
using namespace std;
bool lucky(int n){
    int k,q;
    int sum=0;
    q=n%10;
    if(q==0)
    return true;
    
    while(n>0){
    k=n%10;
        n/=10;
        sum+=k;
    }
    if(sum%q==0){
            return true;
    }
    return false;
    
}
int main(){
    int n;
    cin >> n;

    if(lucky(n)==true)
    cout << "YES";
    else cout << "NO";
    return 0;
}