#include <iostream>
#include <string>
using namespace std;
bool isValidString(string s,int n){
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]-'0'>=0 && s[i]-'0'<=9){
            cnt++;
        }
        else cnt=0;
        if(cnt==n){
        return true;
        }

    }
    return false;
}
int main(){
    string s;
    int n;
    cin >> s >> n;
    if(isValidString(s,n)==true)
    cout << "Valid";
    else cout << "Not Valid";
    

    return 0;
}