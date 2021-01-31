#include <bits/stdc++.h>

using namespace std;

bool prefix_function(string s, int len) {
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
        if (j == len)
            return true;
    }
    return false;
}

int main() {
    char c;
    string s, t;
    bool ok = false;

    while (true) {
        cin >> c >> s;
        if (c == 'A')
            t += s;
        else if (c == '?') {
            if (prefix_function(s + '#' + t, s.size()))
                cout << "Yes" << endl;
            else 
                cout << "No" << endl;    
        }       
    }

    return 0;
}