#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int dist[101][101];
pair<int,int> p[101][101];

int n;

int main() {
    queue<pair<ll, ll>> q;
    int x[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
    int y[8] = {-1, 1, -2 ,2, -2, 2, -1, 1};
    cin >> n;
    for(int i = 0; i <= n; ++i){
        for(int j = 0; j <= n; ++j){
            dist[i][j] = 100;
        }
    }
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    dist[x1][y1] = 0; 

    q.push(make_pair(x1,y1));
    p[x1][y1].first = 0;
    p[x1][y1].second = 0;
    while(!q.empty()){
        int i = q.front().first;
        int j = q.front().second;
        q.pop();
        int u;
        int v;
        for(int k = 0; k < 8; k++){
            u = i + x[k];
            v = j + y[k];
            if(u > 0 and u <= n and v > 0 and v <= n and dist[u][v] > dist[i][j] + 1){
                dist[u][v] = dist[i][j] + 1;
                p[u][v] = {i,j};
                q.push(make_pair(u,v));
            }
        }
    }
    int temp_x = x2;
    int temp_y = y2;

    vector<pair <ll, ll> > vec;
    vec.push_back({x2,y2});

    
    while(p[temp_x][temp_y].first != 0 and p[temp_x][temp_y].second != 0){
        vec.push_back({p[temp_x][temp_y].first, p[temp_x][temp_y].second});
        int res_x = p[temp_x][temp_y].first;
        int res_y = p[temp_x][temp_y].second;
        temp_x = res_x;
        temp_y = res_y;
    }
    
    cout << dist[x2][y2] << '\n';
    for (int i = vec.size() - 1; i >= 0; i --){
        cout << vec[i].first << " " << vec[i].second << '\n';
    }
    return 0;
}