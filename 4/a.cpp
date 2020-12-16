#include <bits/stdc++.h>
#define zhaiss ios_base::sync_with_stdio(false); cin.tie(NULL)
typedef long long ll;

using namespace std;
vector<ll> g[1000000];
int used[1000000];
int n, m;
int cnt = 0;
int mini = 1000000;
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
    zhaiss;
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
    for(int i = 0; i < cnt; i++){
        if(g_in[i].size() < mini){ //сравнивание каждого компонента с мини
            mini = g_in[i].size();
        }
        // cout << min(g_in[i].size(), g_in[i + 1].size());

        
    }
    cout << mini;
    return 0;
}