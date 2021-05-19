#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;n!=0;i++){
        n-=i;
        if(n<=0){
            cout << "Bob";
            return 0;        }
        }
        n-=2*i;
        if(n<=0){
        cout << "Nelson";
        return 0;
        }
    }
    

