#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    // string s;
    // cin >> s;
    // for(int i=0;i<s.size()-1;i++){
    //     if(s[i]>s[i+1]){
    //         cout << "NO";
    //         return 0;
    //     }

    // }
    // cout << "YES";
    string s;
    cin  >> s;
    string s2=s;
    sort(s.begin(),s.end());
    if(s2==s)
    cout << "YES";
    
    else 
    cout << "NO";

    return 0;
}