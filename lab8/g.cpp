#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

char s[100][100];
bool used[100][100];
int n, m;
void dfs(int i, int j) {

    used[i][j] = 1;
    if(i - 1 != 0 and used[i - 1][j] == 0 and s[i - 1][j] == '#'){
        dfs(i - 1, j);
    }
    if(j - 1 != 0 and used[i][j - 1] == 0 and s[i][j - 1] == '#'){
        dfs(i, j - 1);
    }
    if(i != n and used[i + 1][j] == 0 and s[i + 1][j] == '#'){
        dfs(i + 1, j);
    }
    if(j != m and used[i][j + 1] == 0 and s[i][j + 1] == '#'){
        dfs(i, j + 1);
    }
        
}
int main () {
    int cnt = 0;
    cin >> n >> m;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            cin >> s[i][j];
        }
    }
 
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(s[i][j] == '#' and used[i][j] == false) {
                cnt++;
                dfs(i, j);
            }
        }
    }
    cout << cnt;
}