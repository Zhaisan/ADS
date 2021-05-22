#include <iostream>
#include <cmath>
using namespace std;
int twototen(int k){
    int res=0;
    int i=0;
    while(k>0){

        res+=k%10*pow(2,i);
        k/=10;
        i++;
        
    }
    return res;
}
int main(){
    int k;
    cin >> k;
    cout << twototen(k);

    return 0;
}