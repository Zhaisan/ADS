// LCM
#include <iostream>
using namespace std;
int main () {
    int a,b;
    cin >> a >> b;
    int min=10000;

    for( int i=1;i<=a*b;i++){
        if(i%a==0 && i%b==0 && i<min)
        min=i;
    }
    cout << min << " ";

    return 0;

}