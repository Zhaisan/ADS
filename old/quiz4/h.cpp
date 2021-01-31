#include <bits/stdc++.h>
typedef long long ll;


using namespace std;


vector<int> prefix_function(string s) {
    int n = s.size();
    vector<int> p(n);
    p[0] = 0;
    for (int i = 1; i < n; i++) {
        int j = p[i - 1];
        while (j > 0 && s[i] != s[j])
            j = p[j - 1];
        if (s[i] == s[j])
            j++;
        p[i] = j;
    }
    return p;
}

int main() {
 
    int a, b;
    string s1, s2;
    cin >> s1 >> s2;
    string temp = s1 + "#" + s2;
    vector<int> p = prefix_function(temp);
    a = p[p.size() - 1];
    temp = s2 + "#" + s1;
    p = prefix_function(temp);
    b = p[p.size() - 1];
    cout << max(a, b);
    return 0;
}