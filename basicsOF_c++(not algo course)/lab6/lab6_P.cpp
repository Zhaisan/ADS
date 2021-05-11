#include <iostream>
using namespace std;
int pos(int n){
    if(n < 0) return -1 * n;
}
int main(){
    int n;
    cin >> n;
    cout << pos(n);
    return 0;
}