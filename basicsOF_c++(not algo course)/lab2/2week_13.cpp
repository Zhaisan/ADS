#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    string str;
    
    int count=0;
    for(int i=0; i<n;i++){
        cin >> str[i];
        
        if(str[i]=='0')
            count++;
    }
    cout<<count;
    return 0;
}