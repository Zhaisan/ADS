// Sum of Array
#include <iostream> 

using namespace std;



int main(){
    int n;
    cin >> n;
    int a;
    int cnt = 0;
    for(int i=0; i<n; i++){
        cin >> a;
        cnt = cnt+ a;
       
    }
     cout << cnt << endl;
    return 0;
}
