#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    
    int s = 0;
    for(int i = 2; i <= n; i++){
        int cnt = 0;
        for(int j = 2; j*j <= i; j++){
            if(i % j == 0) {
                cnt++;
            }
            
        }
        if(cnt == 1){
            s++;
        }
        
    }
    cout << s;
    
}

int main() {
    int T = 1;
    while(T--){
        solve();
        cout << '\n';
    }
}