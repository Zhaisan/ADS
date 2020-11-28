#include <bits/stdc++.h>

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

int main(){
    string s, t;
    cin >> s >> t;
    int m = t.size();
    t += "#" + s;
    vector<int> p = prefix_func(t);
    for(int i = 0; i < t.size(); i++){
        if(p[i] == m)
            cout << i - m - m << " ";
    }
    return 0;
}