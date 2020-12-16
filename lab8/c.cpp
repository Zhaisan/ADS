#include <bits/stdc++.h>
#define zhaiss ios_base::sync_with_stdio(false); cin.tie(NULL)
typedef long long ll;
using namespace std;

int g[101][101];
int used[100];

int n, v;

void dfs(int v) {
    used[v] = 1;
    for (int i = 0; i < n; i++){
        if (g[i][v] > 0 and used[i] == 0){
            dfs(i);
        }   
    }
}

int main() {
    cin >> n >> v;
    zhaiss;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){ 
        cin >> g[i][j];
        }
    }
    dfs(v - 1);
    int cnt = 0;
    for (int i = 0; i < n; i++){
        if (used[i] != 0){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}