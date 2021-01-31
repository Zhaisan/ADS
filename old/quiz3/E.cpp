//String manipulation
#include <bits/stdc++.h>
using namespace std;
string forVowels(string s){
    string t = "";
    bool check = false;
    for(int i=0;i<s.size()/2;i++){
        if(s[i] == 'u' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'y' || s[i] == 'U' || s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'Y')
            continue;
        else t+=s[i];
    }
    if((t[0]<=90 && t[0]>=65) || (t[0]>=48 && t[0]<=57)) return t;
    else t[0] = (char)(t[0]-32);
    return t;
}

string forReverse(string s){
    string p = ""; 
    for(int i=s.size();i>=s.size()/2;i--){
        p+=s[i];
    }
    return p;
}
int main() {
    string s;
    cin>>s;
    cout<<forVowels(s) + forReverse(s);
    return 0;
}