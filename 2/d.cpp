#include <bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int> &a, int n){
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j]){
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
                // swap(a[i], a[j]);
    }
}
int n;
void solve() {
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(n==1){
        cout << -1;
        return;
    }
    if(n == 2){
        cout << -1 << '\n' << -1 ;
        return;
    }
    if( n>=3){
        cout << -1 << '\n' << -1 << '\n' << (long long)a[0]*(long long)a[1]*(long long)a[2] << '\n';
        for (int i = 3; i < n; i++){
            BubbleSort(a, i+1);
            unsigned long long sum = 1;
            for (int j = i; j > i-3; j--)
                sum *= a[j];
            cout << sum << '\n';
        }
    }  
}

int main() {
    

    int q = 1;
 
    while(q--){
        solve();
        cout << "\n";
    }
}