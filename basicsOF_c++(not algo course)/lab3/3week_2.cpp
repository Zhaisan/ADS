#include <iostream>
using namespace std;
// Positive Numbers
int main(){
    int n;
    cin >> n;
    int cnt = 0;
    int a[n];
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x>0){
            cnt++;
        
        }

    }
    cout << cnt << endl;
    return 0;
}