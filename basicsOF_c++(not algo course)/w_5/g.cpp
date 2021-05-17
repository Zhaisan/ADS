#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string,set<int> > mp;
    for(int i=0;i<n;i++){
        string s;
        int n;
        cin >> s >> n;
        set<int> st = mp[s];
        st.insert(n);
        mp[s]=st;
    }
    for(auto it = mp.begin();it!=mp.end();it++){
        set<int> st = it -> second;
        if(st.size()>=3){
            cout << it -> first << "+1" << endl;

        }
        else
        {
            cout << it -> first << "NO BONUS" << endl;
        }
        
        
    }
    return 0;
}