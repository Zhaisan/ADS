#include <bits/stdc++.h>
#define zhaiss ios_base::sync_with_stdio(false); cin.tie(NULL)
typedef long long ll;

using namespace std;

queue<int> q;

int x[1001]; 
int y[1001]; 
int temp[1001];

void bfs(int v, int n){
    q.push(v);
    while (!q.empty()){
        int v = q.front();
        q.pop();
        int res;
        for (int i = 0; i < n; i++){
            res = (abs(x[v] - x[i]) + abs(y[v] - y[i]));
            if (temp[i] > max(temp[v], res)){
                q.push(i);
                temp[i] = max(temp[v], res);
            }
            else{
                continue;
            }
        }
    }
    cout << temp[--n];
}

void qw(int n)
{
    for (int i = 0; i < n; i++){
        temp[i] = 1000000;
        cin >> x[i] >> y[i];
    }
    temp[0] = 0;
}

void go() {
    int n;
    cin >> n;
    qw(n);
    bfs(0, n);
    
}

int main() {
    zhaiss;
    int T = 1;
    while(T--){
        go();
        cout << '\n';
    }
}

