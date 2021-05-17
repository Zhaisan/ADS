#include <bits/stdc++.h>
using namespace std;
    bool isPalin(string s){
        for(int i=0;i<=s.size()/2;i++){
            if(s[i]!=s[s.size()-1-i])
            return false;
        }
        return true;
    }
int main(){
    string s;
    cin >> s;
    do{
        if(isPalin(s)==true){
            cout << "ZA WARUDO TOKI WO TOMARE";
            return 0;
        }
    }
    while(next_permutation(s.begin(),s.end()));
    cout << "JOJO";
    return 0;
}