#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int cnt=0;
    int k;
    cin >> k;
    for(int i=0;i<n;i++){
        if(a[i]>k)
        cnt++;
    }
    cout << cnt ;
    return 0;
}