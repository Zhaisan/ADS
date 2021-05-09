#include <iostream>
using namespace std;
// Position of maximum

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int max = -1000000000;
    int pos;
    for(int i=0; i<n; i++){
        if(a[i] > max){
        max = a[i];
        pos = i;
        }
    }
    cout << pos + 1 << endl;
    return 0;
}