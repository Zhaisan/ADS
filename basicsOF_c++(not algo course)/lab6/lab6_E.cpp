#include <iostream>
#include <cmath>
using namespace std;

double hyp(double a, double b){
    double temp = sqrt(a * a + b * b);
    return temp;
}

int main(){
    double a, b;
    cin >> a >> b;
    cout << hyp(a,b);
    return 0;
}