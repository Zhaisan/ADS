#include <iostream>
#include <string>
using namespace std;
int main() {
    string s,t;
    cin >> s >> t;
    int cnt1=0,cnt2=0;
    for(int i=0;i<s.size();++i){
        cnt1++;

    }
    for(int i=0;i<t.size();++i){
        cnt2++;
        
    }
    for(char i='a';i<='z';i++){
        if(cnt1 !=cnt2){
        cout << "NO";
        return 0;
        }
    }
    cout << "YES";
    return 0;
}