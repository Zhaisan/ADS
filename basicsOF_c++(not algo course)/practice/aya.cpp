#include <iostream>
using namespace std;
int main() {
    int n,cnt1=0,cnt2=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0) {
            cnt1++;
            cout << a[i]<<" ";
        }
    
    }    
    cout<<endl;
    for(int i=0;i<n;i++){    
        if(a[i]%2 !=0){
            cnt2++;
            cout << a[i]<<" ";
        }


    }
    cout<<endl;
    if(cnt1>cnt2) cout << "YES"; 
    else cout <<  "NO";
    return 0;
}