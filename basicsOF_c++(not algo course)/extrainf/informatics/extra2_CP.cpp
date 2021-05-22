#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a,b,c;
    for(int i=0;i<n;i++){
        if((a^3+b^3+c^3==n)){
            cout << a << " " << b << " " << c  << " ";
        }
        

    }
    
        cout << "IMPOSSIBLE";
    return 0;
}