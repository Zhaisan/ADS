#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    if(s.size()%2!=0){
    for(int i=s.size()/2+1;i<s.size();i++){
        cout << s[i];


    }
    for(int i=0;i<=s.size()/2;++i){
        cout << s[i];
        


    }
    }
    else{
        for(int i=s.size()/2;i<s.size();i++){
        cout << s[i];


    }
    for(int i=0;i<s.size()/2;++i){
        cout << s[i];
        


    }
    }
    cout << endl;
    return 0;
}