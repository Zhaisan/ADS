// Sum I..r
#include <iostream> 

using namespace std;
// lab3 task 6


int main(){
    int n, l, r;
    cin >>n >> l >> r; 
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int sum = 0;

    for(int i=l-1; i<r; i++){
        sum += a[i];
    }

    cout << sum << endl;
    return 0;
}

