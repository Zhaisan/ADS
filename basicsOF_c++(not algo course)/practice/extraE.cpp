#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    bool t=false ;
    for(int i=1;i<n-1;i++){
        if(a[i]<0 && a[i-1]<0 || a[i]>0 && a[i-1]>0)
        t=true;
        break;
    }
    if(t) {
        cout << "YES";

    }
    else {
        cout << "NO";
    }
    return 0;


}