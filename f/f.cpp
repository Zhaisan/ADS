#include <bits/stdc++.h>
#define zhaiss ios_base::sync_with_stdio(false); cin.tie(NULL)
typedef long long ll;

using namespace std;
int n; 
void go() {
    
    cin >> n; 
    int temp[n]; 

    int a[n]; 

    for(int i = 0; i < n; i++){ 
        cin >> a[i]; 
        temp[i] = a[i]; 

        if(i > 0){
            temp[i] += temp[i - 1];
        } 
    } 
    vector<int> vec;
    vec.push_back(0); 

    for(int i = 0; i < n; i++){
        vec.push_back(temp[i]); 
    }
    sort(vec.begin(), vec.end()); 
    
    int res = 1000000; 
    for(int i = 1; i < n + 1; ++i){
        res = min(res, vec[i] - vec[i - 1]);
    }
    cout << res; 
}

int main() {
    zhaiss;
    int T = 1;
    while(T--){
        go();
        cout << '\n';
    }
}