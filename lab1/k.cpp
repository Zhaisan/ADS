#include <bits/stdc++.h>
using namespace std;

long long x;
void solve() {
    cin >> x;
    bool check = true;
    for(long long i = 2; i*i <= x; ++i){
        if(x % i == 0){
            check = false;
            break;
        }
    }
    if(check) cout << "prime";
    else cout << "composite";
    
}

int main() {
    int T=1;
    while(T--){
        solve();
        cout << "\n";
    }
}