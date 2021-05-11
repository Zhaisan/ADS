#include  <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    char maxi=s[0];
    
    
    for(int i=0;i<s.size();i++){
        if(s[i]>maxi)
        maxi=s[i];
    }
    cout << maxi;

    
    return 0;
}