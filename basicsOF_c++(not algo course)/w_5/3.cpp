#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    int n;
    cin >> n;
    map <string,int> mp;
    for(int i=0;i<n;i++){
        string s;
        int x;
        cin >> s >> x;
        mp[s]=mp[s]+1;
    }
    bool check=false;
    map<string,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        if(it->second>1){
        cout << it->first << endl;
        check=true;
        }

        
        
    }
    if(check==false)
    cout << "NO";

    
    
    return 0;
}