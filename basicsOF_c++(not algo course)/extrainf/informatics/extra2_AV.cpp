#include <iostream>
using namespace std;
int main(){
    int n;
    int cnt=0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]==0)
        cnt++;
        
    }
    (cnt>0)?cout << "YES":cout << "NO";
    
    
    



        
        
    
    
    return 0;
}