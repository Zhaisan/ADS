#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    set <int> st;
    for(int i=0;i<n;i++){
        cin >> a[i];
           st.insert(a[i]);
    }
    if(n==st.size())
    cout << "YES";
    else
    {
        cout << "NO";
    }
    
 
    return 0;
}