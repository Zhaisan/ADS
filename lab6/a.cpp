#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int N = (int)1e5 + 5;

int p = 31;
int n;
int pw[N], h[N];


int main() {

    string s, t;
    cin >> s;
    cin >> t;
    int n = s.size();
    int m = t.size();

    pw[0] = 1;
    for (int i = 1; i <= n; i++) {
        pw[i] = pw[i-1] * p;
    }

    h[0] = 0;
    for (int i = 1; i <= n; i++) {
        h[i] = h[i - 1] + s[i-1] * pw[i-1];
    }
    
    int sum = 0;
    for (int i = 0; i < m; i++) {
        sum += t[i] * pw[i];
    }

    for (int i = 0; i + m - 1 < n; i++) {
        int hash_s = h[i + m];
        if (i)
            hash_s -= h[i];
        int hash_t = sum * pw[i];
        if (hash_s == hash_t) {
            cout << i << " ";
        }
    }


    return 0;
}