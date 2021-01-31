#include <bits/stdc++.h>
#define zhaiss ios_base::sync_with_stdio(false); cin.tie(NULL)
typedef long long ll;

using namespace std;

vector<int> prefix_function(string s) {
    int n = s.size();
    vector<int> p(n, 0);
    for (int i = 1; i < n; i++) {
        int j = p[i - 1];

        if (s[i] >= 65 && s[i] <= 90)
                s[i] += 32;

        while (j > 0 && s[i] != s[j])
            j = p[j - 1];
        if (s[i] == s[j])
            j++;
        p[i] = j;
    }
    return p;
}
void go() {
    char c;
    string s, t, check;
    bool ok = false;

    while (true) {
        cin >> c >> s;
        if (c == 'A')
            t += s;
        else {
            ok = false;
            vector<int> p = prefix_function(s + '#' + t);
            for (int i = 0; i < p.size(); i++) {
                if (p[i] == s.size()) {
                    cout << "Yes" << endl;
                    ok = true;
                    break;
                }
            }
            if (!ok)
                cout << "No" << endl;
        }
    }
    
}

int main() {
    zhaiss;
    int T = 1;
    while(T--){
        go();
        cout << '\n';
    }
}