#include <bits/stdc++.h>
#define zhaiss ios_base::sync_with_stdio(false); cin.tie(NULL)
typedef long long ll;

using namespace std;

int used[101];
vector<ll> g[101];


void dfs(int v) {
    used[v] = 1;
    for (int i = 0; i < g[v].size(); i++){
        if (used[g[v][i]] == 0){
            dfs(g[v][i]);
        }
    }
}

void go() {
    
    int n, m; 
    cin >> n >> m;
    int cnt = 0;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--; 
        y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    for (int i = 0; i < n; i++){
        if (used[i] == 0) {
            dfs(i);
            cnt++;
        }
    }

    cout << cnt - 1 << '\n';
    
}

int main() {
    zhaiss;
    int T = 1;
    while(T--){
        go();
        cout << '\n';
    }
}