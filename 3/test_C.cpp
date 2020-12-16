#include<bits/stdc++.h>

using namespace std;

string getSub(int l,int r,string s) {
    string res="";

    for(int i=l;i<=r;i++) {
        res+=s[i];
    }

    return res;
}

string solve(vector<string>& v) {
    string res="";
    string s=v[0];
    string tmp;

    for(int i=0;i<s.size();i++) {
        for(int j=i;j<s.size();j++) {
            tmp=getSub(i,j,s);

            int u;
            for(u=1;u<v.size();u++) {
                if(v[u].find(tmp)==string::npos) {
                    break;
                }
            }

            if(u==v.size() && res.size()<tmp.size()) {
                res=tmp;
            }
        }
    }

    return res;
}

int main() {
    string s;
    int n;

    cin>>n;

    vector<string> v(n);

    for(int i=0;i<n;i++) {
        cin>>s;
        v[i]=s;
    }

    cout<<solve(v);



    return 0;
}