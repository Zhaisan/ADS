#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

vector<int> prefix_func(string s) {
    int n = s.size();
    vector<int> p(n);
    p[0] = 0;
    for (int i = 1; i < n; i++) {
        int j = p[i - 1];                    //0 1 2 3 4 5 6 7
        while (j > 0 && s[i] != s[j])        //a b a b a b c d
            j = p[j - 1];                    //0 0 1 2 3 4 0 0
        if (s[i] == s[j])
            j++;
        p[i] = j;
    }
    return p;
}

int main() {
    string s;
    int k;
    cin >> s >> k;
    
    for(int i = 0; i < k; i++){
        int cnt = 0;
        int l, r;
        cin >> l >> r;
        string s1;
        int dl = r - l + 1;
        s1 = s.substr(l - 1, dl) + "#" + s;
        vector<int> p = prefix_func(s1);
        for (int i = 0; i < p.size(); i++) {
            if (p[i] == dl){
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}