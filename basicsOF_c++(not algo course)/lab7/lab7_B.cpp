#include <iostream>
using namespace std;

void toBin(int x){
    if(x == 0)
        return;
    toBin(x / 2);
    cout << x % 2;
}

int main(){
    int n;
    cin >> n;
    toBin(n);
    return 0;
}