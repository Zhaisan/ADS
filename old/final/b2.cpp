#include <bits/stdc++.h>

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

int main() {
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

    return 0;
}