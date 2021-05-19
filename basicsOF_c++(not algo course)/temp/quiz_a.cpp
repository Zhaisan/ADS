#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int a,b,c;
    cin >> a >> b >> c;
    if( a==b && a==c && b==c ) {
      cout << "3";
    }
    if(a==b && b!=c && a!=c || a==c && a!=b && c!=b || b==c && b!=a && c!=a){
        cout << "2";
    }
    else if(a!=b && b!=c && c!=a) {
        cout << "0";

    }


  return 0;
}
