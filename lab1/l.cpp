#include <iostream>
typedef long long ll;
using namespace std;
ll gcd(ll a, ll b) {
    while (a > 0 && b > 0) {
        if (a > b)
            a = a % b;
        else
            b = b % a;        
    }

    // if (a > 0)
    //     return b;
    // return a;
    return a + b;
}

int main() {
    ll a, b;
    cin >> a >> b;
    cout << (a*b)/gcd(a, b);
    return 0;
}