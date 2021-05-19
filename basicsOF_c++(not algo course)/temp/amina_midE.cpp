#include <iostream>
using namespace std;
int main() {
    int n,sum=0;
    cin >> n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin >> a[n];
    }
    for(int i=1;i<=n;i++){
        sum=sum+(a[n]+i);
    }
    cout << sum;
    return 0;
}