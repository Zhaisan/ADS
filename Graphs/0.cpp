#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

vector<int> g[100];
queue<int> q;
int used[100];
int dist[100];
int n, m, x , y;

int main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> x >> y;
        x--;
        y--;
        g[x].push_back(y);
        g[y].push_back(x);

    }
    q.push(0);
    dist[0] = 0;
    used[0] = true;
    while(!q.empty()){
        int v = q.front();
        for(int i = 0;i < g[v].size(); i++){
            int u = g[v][i];
            if(used[u] == false){
                used[u] = true;
                q.push(u);
                dist[u] = dist[v] + 1;


            }
        }
        q.pop();
    }

    for(int i = 0; i < n; i++){
        cout << i + 1 << " --- " << dist[i] << '\n';
    }


    return 0;
}