// A[0],A[2] ...
#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n;i++){
        cin >> a[i];

    }
    for(int i = 0; i<n;i +=2){
        cout << a[i] << " ";
    }
    
    return 0;
}