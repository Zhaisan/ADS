#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
vector<int> g[100];
int used[100]; 
int n, m, x, y;
bool check;
void dfs(int v, int c) { 
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
                check = false;

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
    check = true;

    for (int i = 0; i < n; i++) {
        if (used[i] == 0){
            dfs(i, 1);
        }
    }
    if(check){
        cout << "YES" << '\n';
        for(int i = 0; i < n; i++){
            if(used[i] == 2){
                cout << i + 1 << " ";
            }
        }
    }
    else{
        cout << "NO" << '\n';
    }
    

    return 0;
}