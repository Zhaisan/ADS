#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

string g[100001];

int main(){
    int n, m;
    cin >> n >> m;
    for (int i = 1000; i < 100001; i++) {
        g[i] = " ";
    }
    queue <ll> q;
    g[n] = to_string(n) + '\n';
    q.push(n);
    while (g[m] == " "){
        int x = q.front(); 
        q.pop();
        if (x / 1000 != 9 and g[x + 1000] == " ") {
            q.push(1000 + x);
            g[x + 1000] = g[x] + to_string(x + 1000) + '\n';
        }
        if (x % 10 != 1 and g[x - 1] == " ") {
            q.push(x - 1);
            g[x - 1] = g[x] + to_string(x - 1) + '\n';
        }
        int res1 = (x % 10) * 1000 + x / 10;
        int res2 = ((x * 10) % 10000) + x / 1000;
        if (g[res1] == " "){
            q.push(res1);
            g[res1] = g[x] + to_string(res1) + '\n';
        }
        if (g[res2] == " "){
            q.push(res2);
            g[res2] = g[x] + to_string(res2) + '\n';
        }
    }
    cout << g[m];
    return 0;
}