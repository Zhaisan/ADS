#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    s=s+s[0];
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-i-1]){
        cout << "NO";
        return 0;
        }
    }
    cout << "YES";
    return 0;
}