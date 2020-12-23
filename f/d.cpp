#include <bits/stdc++.h>
#define zhaiss ios_base::sync_with_stdio(false); cin.tie(NULL)
typedef long long ll;

using namespace std;

vector<int> prefix_func(string s) {

    int n = s.size();
    vector<int> p(n);
    p[0] = 0;
    
    for (int i = 1; i < n; i++) {
        int j = p[i - 1];
        while (j > 0 && s[j] != s[i]) 
            j = p[j - 1];
        if (s[j] == s[i])
            j++;
        p[i] = j;
    }
    return p;
}

void go() {
    int q;
    cin >> q;
    string s, t;
    cin >> s >> t;

    int m = t.size();

    s += "#" + t + t;
    
    vector<int> p = prefix_func(s);
    for(int i = 0; i < s.size(); i++){
        if(p[i] == m){
            cout << i - m - m;  
            return;
            
        }
    }
    cout << -1;
    
}

int main() {
    zhaiss;
    int T = 1;
    while(T--){
        go();
        cout << '\n';
    }
}