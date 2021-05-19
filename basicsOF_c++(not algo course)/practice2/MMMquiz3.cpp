#include <iostream>
#include <string>

using namespace std;
bool captain(string s){
    int cnt=0;
    int index=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='@'){
            index=i;
            break;
        }
        if(s[i]>='a' && s[i]<='z')
        cnt++;
    }
    if(cnt!=index || cnt==0)
    return false;
    cnt=0;
    int index2=0;
    for(int i=index+1;i<s.size();i++){
        if(s[i]=='.'){
            index2=i;
            break;
        }
        if(s[i]>='a' && s[i]<='z')
        cnt++;
    }
    if(cnt!=index2-index-1 || cnt==0)
    return false;
    cnt=0;
    for(int i=index2+1;i<s.size();i++){
        if(s[i]<'a' || s[i]>'z')
        return false;
        cnt++;
    }
    if(cnt>0)
    return true;
}
int main(){
    string s;
    cin >> s;
    if(captain(s)==true)
    cout << "Yes";
    else cout << "No";
    return 0;
}