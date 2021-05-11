#include <iostream>
using namespace std;
int sum(int n){
    int k;
    int summa=0;
    while(n>0){
        k=n%10;
        n/=10;
        summa+=k;
       
    }
     return summa;
}
int main() {
    int n;
    cin >> n;
    cout << sum(n);

        
    

    
    return 0;
}
