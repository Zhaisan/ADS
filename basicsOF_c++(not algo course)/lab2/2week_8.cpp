#include <iostream>
using namespace std;
// Interesting problem
int main () {
    int n;
    cin >> n;
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x%2==0){
            cnt1++;
        }
        else if (x%2!=0){
            cnt2++;
        }
    }
    cout << cnt1 << cnt2 << "";
    return 0;
}