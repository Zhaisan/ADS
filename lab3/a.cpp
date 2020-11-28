#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int s;
    cin >> s;
    for(int i = 1; i <= n; i++){
        if(a[i] == s){
            cout << i << " ";
        }

    }
    return 0;
}