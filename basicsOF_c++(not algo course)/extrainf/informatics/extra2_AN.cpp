#include <iostream>
using namespace std;
int main(){
    int n;
    int k;
    cin >> n;
    for(int i=n;i>1;i--){
        if(n%i==0)
        k=i;
        
    }
    cout << k;
    return 0;
}