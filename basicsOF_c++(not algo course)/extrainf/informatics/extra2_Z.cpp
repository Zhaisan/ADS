#include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i=0;i<s.size()-1;i++){
        for(int j=i+1;j<s.size();j++){
            if(s[i]==s[j]){
            cout << s[i];
            return 0;
            }
        }
    }

    return 0;
}