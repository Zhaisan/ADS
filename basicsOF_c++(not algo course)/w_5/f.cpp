#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,q;
    cin >> a >> b >> q;
    int mini=min(a,b);
    int cnt=0;
    for(int i=mini;i>=1;i--){
        if(a%i==0 && b%i==0){
            cnt++;
            if(cnt==q){
                cout << i;
                return 0;
            }
        }
    }
    

    return 0;
}