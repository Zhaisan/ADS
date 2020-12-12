#include <bits/stdc++.h>
#define zhaiss ios_base::sync_with_stdio(false); cin.tie(NULL)
typedef long long ll;

using namespace std;
int main(){
    zhaiss;
    string s;
    cin >> s;
    set<string> q;

    for(int i = 0; i < s.size(); i++){
        string x = " ";
        for(int j = i; j < s.size(); j++){
            x += s[j];
            q.insert(x);
        }
    }
    cout << q.size();
    return 0;
}