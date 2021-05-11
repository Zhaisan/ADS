#include <iostream>
#include <set>
using namespace std;
int main(){
    int n ;
    cin >> n;
    int a[n];
    set <int> s;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        s.insert(a[i]);
    }
    for(int i = 0; i <= s.size(); i++){
        cout << a[i] << " "; 
    }
    
    return 0;
}