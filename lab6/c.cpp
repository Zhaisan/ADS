#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

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

int main(){
    string s, t;
    cin >> s >> t;
    int m = t.size();

    s += "#" + t + t;
    
    vector<int> p = prefix_func(s);
    for(int i = 0; i < s.size(); i++){
        if(p[i] == m){
            cout << i - m - m;
            return 0;
        }
    }
    cout << -1;
    return 0;
}