#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int cnt[26];
int main(){
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(cnt[s[i]-'A']==0){
            cout << s[i];
            cnt[s[i]-'A']=1;
        }
        
    }


    return 0;
}