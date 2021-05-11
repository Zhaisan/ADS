#include <iostream>
#include <string>
using namespace std;

bool isValid(string s, int c){
    int cnt=0;
    for(int i=0;i<s.size();++i){
        if(s[i] >= '0' && s[i] <= '9')
            cnt++;
    }
    if(cnt >= c)
        return true;
    return false;
}

int main(){
    string s;   
    int n;
    cin >> s >> n;
    if(isValid(s,n) == true)    
        cout << "YES";
    else
        cout << "NO";
    return 0;
}