#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
vector<ll> g[1000000];
int used[1000000];
int n, m;
int cnt = 0;
vector<ll> g_in[1000000];
void dfs(ll v) {
    used[v] = 1;
    for (int i = 0; i < g[v].size(); i++){
        if (used[g[v][i]] == 0){
            dfs(g[v][i]);
        }
    }
    g_in[cnt].push_back(v); //для элементов внутри каждого компонент

}

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for(int i = 0; i < n; i++){
        if(used[i] == 0){
            dfs(i);
            cnt++;
        }
    }
    cout << cnt << '\n';
    for(int i = 0; i < cnt; i++){
        cout << g_in[i].size() << '\n'; //размер каждого компонента
        for(int j = 0; j < g_in[i].size(); j++){
            // sort(g_in[i].begin(), g_in[i].end()); 
            cout << g_in[i][j] + 1 << " " ; //элементы внутри каждого компонента
        }
        cout << '\n';
    }
    return 0;
}