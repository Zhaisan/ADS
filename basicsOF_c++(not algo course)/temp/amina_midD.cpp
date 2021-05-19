// Sum in Array
#include <iostream>
using namespace std;
int main () {
    int n,k,b=1;
    cin >> n >> k;
    int a[n];
    for(int i=1;i<n;i++){
        cin >> a[i];

    }
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            if(a[i]+a[j]==k){
                b=777;
                break;

            }
        }
    }
    if(b==777) cout <<"YES";
    else cout << "NO";
    return 0;
}