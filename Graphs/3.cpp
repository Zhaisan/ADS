#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
//dfs проверка на двудольность
vector<int> g[100];
int used[100]; // used[i] = 0, used[i] = 1, used[i] = 2
int n, m, x, y;
bool ok;

void dfs(int v, int c) { // v -> 2 (color = 2) v -> u dfs(u, 1)
    used[v] = c;
    for (int i = 0; i < g[v].size(); i++) {
        int u = g[v][i];
        if (used[u] == 0) {
            dfs(u, 3 - c);
            // if(c == 1){  
            //     dfs(u, 2);
            // }                        
        } 
        else {
            if (used[u] == c){
                ok = false;

            // dfs(u, 1);
            }
        }
        
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        x--;
        y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    ok = true;

    for (int i = 0; i < n; i++) {
        if (used[i] == 0)
            dfs(i, 1);
    }

    if (ok){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}