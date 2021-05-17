#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int a[n],q=0;
    for(int i=0;i<n;i++){
     cin >> a[i];
    }
    int k;
    cin >>k;
    for(int i=n-1;i>0;i--){
        if(k>=1 && k<n-1 )
        q=i;
        cout << a[i] << endl << q;
    }
    


  
    
    return 0;
}
