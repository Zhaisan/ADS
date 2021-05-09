// Square
#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int a[500500];
    for(int i=1;i<=n;i++){
        cin >> a[n];
    }
    for(int i=1;i<=n;i++){
        a[i]=a[i]*a[i];
        cout << a[i] << ' ';
    }
    return 0;
}