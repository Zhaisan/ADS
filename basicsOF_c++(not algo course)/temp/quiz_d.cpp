#include <iostream>

using namespace std;
int main () {
    int n,k,cnt=0;
    cin >> n;
    for(int x = 0;x<n;x++) {
        cin >> k;
        bool isPrime = true;
        for(int i = 2; i*i <= k; i++){
            if(k%i== 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime == true){
            cnt++;
        }

    }
    cout << cnt;

  
   

    return 0;
}