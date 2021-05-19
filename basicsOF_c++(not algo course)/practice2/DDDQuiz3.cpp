#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i=1;
    while(true){
        int b=i;
        int nel=2*i;
        n-=b;
        if(n<=0){
            cout << "Bob";
            return 0;
        }
        n-=nel;
        if(n<=0){
            cout << "Nelson";
            return 0;
        }
        i++;

    }
    return 0;
}