#include <bits/stdc++.h>
using namespace std;
int letters[26];
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        string s;
        cin >> s;
        int k;
        k=i;
        for(int j=0;j<s.size();j++){
            if(letters[s[j]-'a']==k-1){
                letters[s[j]-'a']==k;
            }
        }
    }
    bool check=false;
    for(char c = 'a';c!='z'+1;c++){
        if(letters[c-'a']==n){
            check=true;
            cout << c << " ";
        }
    }
    if(check==false)
    cout << "NO COMMON CHARACTERS";
    return 0;

    
}