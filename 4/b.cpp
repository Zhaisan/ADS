#include <bits/stdc++.h>
#define zhaiss ios_base::sync_with_stdio(false); cin.tie(NULL)
typedef long long ll;

using namespace std;

int main(){
    int n, q; 
    zhaiss;
    cin >> n >> q;
    int g[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> g[i][j];
        }
    }
    while(q--){
        int a, b, c; 
        cin >> a >> b >> c;
        a--; 
        b--; 
        c--;
        if(g[a][b] == 0 or g[a][c] == 0  or g[b][c] == 0 or g[b][a] == 0 or g[c][b] == 0 or g[c][a] == 0){
            cout << "NO" << '\n';
        }
        else{ 
            cout << "YES" << '\n';
        }
    }
    return 0;
}