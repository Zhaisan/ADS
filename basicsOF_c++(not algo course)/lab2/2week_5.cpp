#include <iostream>
#include <cmath>
using namespace std;
// Which one
int main (){
    int a,b;
    cin >> a >> b;
    if(a>b){
        cout << "1";
    }
    else if(a<b){
        cout << "2";
    }
    else if(a==b){
        cout << 0;
    }
    return 0;
    
}
