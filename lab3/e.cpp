// #include <iostream>
// using namespace std;
// int main(){
//     int n ;
//     cin >> n;
//     int a[n];
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }
//     int maxi = -1000000;

//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
set<int> s;
int a[10001];
int main() {
    int n;
    cin >> n;
  
    for(int i = 0; i < n; i ++) {
        cin >> a[i];
        s.insert(a[i]);
    
        
    }
    set<int>::iterator it = s.end();
    cout<<*(--(--it)) ;
    
   


    

    return 0;
}