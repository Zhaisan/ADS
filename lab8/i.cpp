#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main() {
    int n;
    cin >> n;
    bool a[n][n];
    vector<int> g[n];
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j ++){
        cin >> a[i][j];
        if (a[i][j]){
            g[i].push_back(j);
            }
        }
    }
    int x, y;
    cin >> x >> y;
    x--;
    y--;
    
    queue<int> q;
    q.push (x);
    vector<bool> used (n);
    vector<int> dist(n); 
    vector<int> temp(n);
    used[x] = true;
    temp[x] = -1;
    while (!q.empty()) {
        int v = q.front();
        q.pop();  
        for (int i = 0; i < g[v].size(); i++){
        int y = g[v][i];
        if (!used[y]) {
            used[y] = true;
            q.push(y);
            dist[y] = dist[v] + 1;
            temp[y] = v;
        }
        }
    }
    if (!used[y]){
        cout << -1;
        return 0;
    }
    vector<int> vec;
    for (int v = y; v != -1; v = temp[v])
        vec.push_back(v);
    if (vec.size() == 1){
        cout << 0 << '\n';
        return 0;
    }
    reverse(vec.begin(), vec.end());
    cout << vec.size() - 1 << '\n';
    for (int i = 0; i < vec.size(); i ++){
        cout << vec[i] + 1 << " ";
    }
    return 0;
}