#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    char c;
    int l,r;
    
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]=='h'){
        l=i;
        break;
        }
    }
    for(int i= s.size()-1;i>=0;i-- ){
        if(s[i]=='h'){
        r=i;
        break;
        }
    }
    s.erase(s.begin()+l,s.begin()+r+1);
    cout << s << endl;
    
    
    
    
    
   return 0;
}