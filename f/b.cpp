#include <bits/stdc++.h>
#define zhaiss ios_base::sync_with_stdio(false); cin.tie(NULL)
typedef long long ll;

using namespace std;
vector<ll> g;
int cnt = 0;
int n, m;
bool check = true;

int dfs(int n , int m){
    g.push_back(m);
    cnt++;

    if(m % 2 == 0){
        dfs(n , m / 2);

    }
    else if(m % 2 !=0){
        dfs(n , m + 1 );

    }
    else if(m < n){
        return n - m;
        check = false;
        return 0;
    }
    else if(n == m){
        return 0;
    }




}
void go() {
    cin >> n >> m;
    dfs(n , m);
    if(check){
        cout << cnt - 1 << '\n' ;
        for(int i = g.size() - 2; i >= 0 ; i--){
            cout << g[i] << " ";
        }
    }

}

int main() {
    zhaiss;
    int T = 1;
    while(T--){
        go();
        cout << '\n';
    }
}