#include <bits/stdc++.h>
using namespace std;
int x[2 * 100020], y[2 * 100020];
int xx, yy;
int n , k;
int fq(int s){
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        if(s >= x[i] and s >= y[i]){
            cnt++;
        }

    }
    if(cnt >= k) 
        return 1;
    return 0;
}
int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> xx >> yy;
        cin >> x[i] >> y[i];
    }
    int l = 0;
    int r = 1e9;
    while(l + 1 < r){
        int mid = (l + r) / 2;
        if(fq(mid) == 0){
            l = mid;
        }
        else{
            r = mid;
        }
    }
    cout << r;
    return 0;
}