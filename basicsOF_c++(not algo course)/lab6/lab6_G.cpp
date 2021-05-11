#include <iostream>
#include <string>
using namespace std;

string removeVowels(string s){
    string res = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] != 'a' && s[i] != 'u' && s[i] != 'e' && s[i] != 'U')
            res += s[i];
    }
    return res;
}

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string s;
    string res = "";
    while(cin >> s){
        res += s + " ";
    }
    cout << removeVowels(res);
    return 0;
}