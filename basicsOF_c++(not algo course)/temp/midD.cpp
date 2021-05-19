//Lucky number
#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    if((x%2==0 & x%5==0) || (x%2==0 & x%17==0) || (x%2==0 & x%19==0) || (x%5==0 & x%17==0) || (x%5==0 & x%19==0) || (x%17==0) & (x%19==0)){
        cout << "YES";

   }
    else {
    cout << "NO"; 
    }
    
    

        
        
 
  return 0;
    
}