#include <iostream>
using namespace std;
// Code
int main () {
    int n,k;
    cin >>n>>k;
    cout <<n + (k % 10 + k / 100);
    return 0;
}