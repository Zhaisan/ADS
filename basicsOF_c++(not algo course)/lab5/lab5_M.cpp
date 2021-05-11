#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    char c;
    int k;
    int cnt=0;
    cin >> s >> c >> k;
    for(int i=0;i<s.size();i++){
        if(s[i]==c)
        cnt++;
    }
    if(cnt==k)
    cout << "YES";
    else 
    cout << "NO";
    return 0;
}