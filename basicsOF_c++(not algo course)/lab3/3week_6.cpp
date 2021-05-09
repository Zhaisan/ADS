// Positive Minimum
#include <iostream> 

using namespace std;


int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int min = 1000000000;
     for(int i=0; i<n; i++){
        if(a[i]<min && a[i] > 0)
        min = a[i];
    }
    cout << min << endl;
    return 0;
}