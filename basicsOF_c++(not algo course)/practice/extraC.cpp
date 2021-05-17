#include <iostream>
using namespace std;
int main() {
    int n;
    cin>> n;
    int cnt=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>0) {
            cnt ++;
        }
    }
     cout<<cnt;
    
    return 0;
}