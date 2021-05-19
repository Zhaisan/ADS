#include <iostream>
using namespace std;
int main(){
    int l,r;
    cin >> l >> r;
    for(int i=l;i<=r;i++){
        if(i%7==1 || i%7==2 || i%7==5)
            cout << i << " ";
        
    }

    return 0;
}