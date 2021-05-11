#include <iostream>
using namespace std;

int counter(int x){
    if(x == 0)
        return 0;
    if(x % 2 == 0)
        return 1 + counter(x / 10);
    else 
        return 0 + counter(x / 10);
}

int main(){
    int n;
    cin >> n;
    cout << counter(n);
    return 0;
}