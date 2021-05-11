#include <iostream>
using namespace std;

int sum(int a, int b){
    return a + b;
}

int main(){
    int a, b;
    cin >> a >> b;
    int t = sum(a, b);
    cout << sum(a, b);
    return 0;
}