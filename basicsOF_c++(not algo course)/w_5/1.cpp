#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    string s;
    map <string,int> mp;
    while(cin >> s){
        mp[s]=mp[s]+1;

        
    }
    map<string,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        if(it->second>=2)
        cout << it->first << endl;
    }
    
    return 0;
}