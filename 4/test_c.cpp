#include <bits/stdc++.h>
#define zhaiss ios_base::sync_with_stdio(false); cin.tie(NULL)
typedef long long ll;

using namespace std;

int g[1001][1001];
int d[1001][1001];
int main () {
    zhaiss;
    int n, m;
    cin >> n >> m;

    int g[n + 2][m + 2];
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j) {
            d[i][j] = 33333333;
            cin >> g[i][j];
        }
    }
    int tm = 0;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            if(g[i][j] == 2) {
                queue <pair <int,int> > q;
                q.push({i, j});
                d[i][j] = 0;
                while(q.size()) {
                    int delx[] = {0, 0, -1, 1};
                    int dely[] = {-1, 1, 0, 0};
                    int x = q.front().first;
                    int y = q.front().second;
                    for(int k = 0; k < 4; ++k) {
                        int newx = x + delx[k];
                        int newy = y + dely[k];
                        if(a[newx][newy] == 1 && d[newx][newy] > d[x][y] + 1) {
                            d[newx] [newy] = d[x][y]+ 1;
                            q.push({newx, newy});
                        }
                    }
                    q.pop();
                }
            }
        }
    }
    for(int i = 1; i <= r; ++i)
        for(int j = 1; j <= c; ++j)
            if(g[i][j] == 1)
                tm = max(tm, d[i][j]);

    if(tm == 33333333)
        tm = -1;
    cout << tm;
}