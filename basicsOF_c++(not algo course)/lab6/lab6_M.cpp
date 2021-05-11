#include <iostream>
#include <algorithm>
using namespace std;
void reve(int a[],int n){
    for(int i=n-1;i>=0;i--)
    cout << a[i] << " ";
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    cin >> a[i];
    reve(a,n);

    return 0;
}
    