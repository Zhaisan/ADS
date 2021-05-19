// interesting array
#include <iostream>
using namespace std;
int main() {
    int n,k=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[n];
    }
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]) k=0;
        else k++;
    }
    if(k==0) cout<<"Interesting";
    else cout<<"NOt interesting";
    return 0;
}