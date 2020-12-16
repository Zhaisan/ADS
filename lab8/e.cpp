#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int g[100][100];
int used[100];
int n;

void dfs(int v){
    used[v] = 1;
    for (int i = 0; i < n; i++){
        if (g[i][v] > 0 && used[i] == 0){
            dfs(i);
        }
    }
}

int main() {
    bool check = true;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) {
            cin >> g[i][j];
            if (g[i][j] > 0){
                cnt++;
            }
        }
    
    dfs(0);
    

    for (int i = 0; i < n; i++){
        if (used[i] == 0){
            check = false;
        }
    }
    if (cnt / 2 != n - 1 or check == false){
        cout << "NO";
    }else{
        cout << "YES";
    }
    return 0;
}