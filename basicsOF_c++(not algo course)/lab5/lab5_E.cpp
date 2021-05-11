#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin >>n;
    int a[n];
    int sum2=0;
    int sum1=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    
    for(int i=0;i<n;i++){
        if(i % 2 == 0)
            sum1 += a[i];
        else 
            sum2 += a[i];
    }

        if(sum1==sum2)
        cout << "YES";
        else 
        cout << "NO";
        
    
    
    
    

    

    
    return 0;
}