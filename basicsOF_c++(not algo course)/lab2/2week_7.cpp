#include <iostream>
using namespace std;
// MAXi
int main (){
    int n;
    cin >> n;
    int maxi = 0;
    for (int i=0;i<n;i++){
        int x;
        cin >> x;
        maxi = max(maxi, x);

    }
    cout << maxi;





    return 0; 
}