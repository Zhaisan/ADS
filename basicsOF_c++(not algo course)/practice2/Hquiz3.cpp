#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int lcm = max(a, b);
    int gcd = min(a, b);
    for(int i = lcm; ; i++){
        if(i % a == 0 && i % b == 0){
            lcm = i;
            break;
        }
    }
    for(int i = gcd; ; i--){
        if(a % i == 0 && b % i == 0){
            gcd = i;
            break;
        }
    }
    cout << lcm + gcd;
    return 0;
}