#include <iostream>
using namespace std;
int main () {
    int a,b,c,d;
    int sum;
    cin >>a >> b>> c >> d;
    sum= a*10 + b*25 + c*5 +d*100;
    int dollars,cents;
    dollars =sum/100;
    cents = sum%100;
    cout << dollars << ' ' << cents ;
    return 0;
}
