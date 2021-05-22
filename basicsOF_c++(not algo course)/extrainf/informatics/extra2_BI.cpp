#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int x1=-1,x2;
    for (int i=0;i<s.size();i++){
        if (s[i]=='f') {
            x1=i;
            break;
        }
    }
    for (int i=s.size()-1;i>=0;i--){
        if (s[i]=='f') {
            x2=i;
            break;
        }
    }
    if (x1==-1) return 0;
    if (x1==x2) cout<<x1;
    else cout<<x1<<" "<<x2;
}