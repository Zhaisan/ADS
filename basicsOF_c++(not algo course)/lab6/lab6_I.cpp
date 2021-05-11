#include <iostream>
#include <string>
using namespace std;
string change(string s){
    for(int i=0;i<s.size();++i){
        if(i%2==0)
        // s[i]=s[i]-32;
        s[i] = toupper(s[i]);
    }
    return s;
}
int main(){
    string s;
    cin >> s;
    cout << change(s);

    return 0;
}