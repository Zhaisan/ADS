#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, q;
    cin >> n >> q;
    long long a[n]; 
    long long a1[q][4];

    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }

    for(long long i = 0; i < q; i++){
        for(long long j = 0; j < 4; j++){
            cin >> a1[i][j];
        }
    }

    long long cnt = 0;
    long long s = 0;

    while(s != q){

        cnt = 0;
        
        for(long long i = 0; i < n; i++){
            if((a1[s][2] <= a[i] && a[i] <= a1[s][3]) || (a1[s][0] <= a[i] && a[i] <= a1[s][1])){
                
                cnt += 1;
                
            }
            
        }
        s += 1;
        
        cout << cnt << '\n';
        
        
    }
    return 0;
}