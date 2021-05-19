#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int x,y;
    x=y=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='U') y++;
        if(s[i]=='D') y--;
        if(s[i]=='L') x--;
        if(s[i]=='R') x++;
    }
    if(x==0 && y==0) cout << "True";
    else cout << "False";
    return 0;
}