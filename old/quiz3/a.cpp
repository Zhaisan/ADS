//Restore the string
#include <bits/stdc++.h>
#define zhaiss ios_base::sync_with_stdio(false); cin.tie(NULL)
typedef long long ll;
using namespace std;

int main(){
    ll n;
    cin >> n;
    ll  a[n];
    ll p = 1;
    ll sum = 0;
    for(int i = 0; i < n; i++){
        ll x;
        cin >> x;
        char c = (x - sum) / p + 97;
        p *= 2;
        sum = x;
        cout << c;
    }
    return 0;
}