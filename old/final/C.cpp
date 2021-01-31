#include <bits/stdc++.h>

using namespace std;
const int N = 1000;
int a[N][N], n, m;
queue<pair<int, int> > q;
void bfs(int row, int column, int step) {
    q.push(make_pair(row, column));
    a[row][column] = step;

    while (!q.empty()) {
        int i = q.front().first;
        int j = q.front().second;
        if (i - 1 != 0 && a[i - 1][j] == 0) {
            q.push(make_pair(i - 1, j));
            a[i - 1][j] = a[i][j] + 1;
        }
        if (i != n && a[i + 1][j] == 0) {
            q.push(make_pair(i + 1, j));
            a[i + 1][j] = a[i][j] + 1;
        }
        if (j - 1 != 0 && a[i][j - 1] == 0) {
            q.push(make_pair(i, j - 1));
            a[i][j - 1] = a[i][j] + 1;
        }
        if (j != m && a[i][j + 1] == 0) {
            q.push(make_pair(i, j + 1));
            a[i][j + 1] = a[i][j] + 1;
        }
        q.pop();
    }
    
}

int main() {
    int x1, x2, y1, y2;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) 
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    cin >> x1 >> y1 >> x2 >> y2;

    bfs(y1, x1, 1);

    if (a[y2][x2] > 0)
        cout << a[y2][x2] - 1;
    else 
        cout << -1;

    return 0;
}