#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);

    string s;
    
    map<string,int> mp;
    vector <string> aida;
    vector <string> aizhan;
    int k=1;
    while(cin >> s){
        if(mp[s]==0){
            mp[s]=1;
            if(k==1)
            aida.push_back(s);
            else
            aizhan.push_back(s);

        }
        k=3-k;

        
    }
    cout << "Aida" << endl;
    for(int i=0;i<aida.size();i++)
    cout << aida[i] << endl;
    cout << "Aizhan" << endl;
    for(int i=0;i<aizhan.size();i++)
    cout << aizhan[i] << endl;

    return 0;
}