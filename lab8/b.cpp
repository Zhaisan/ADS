#include <bits/stdc++.h>
#define zhaiss ios_base::sync_with_stdio(false); cin.tie(NULL)
typedef long long ll;

using namespace std;

int g[101][101];

int main(){
    zhaiss;
    int n;
    cin >> n;
    int mini = 1000000;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> g[i][j];

        } 
    }
    int minpath[3];
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            for (int k = j + 1; k < n; k++){
                if (g[i][j] + g[i][k] + g[j][k] < mini) {
                    mini = g[i][j] + g[i][k] + g[j][k];
                    minpath[0] = i;
                    minpath[1] = j;
                    minpath[2] = k;
                }
            }
        }
    }
    for (int i = 0; i < 3; i++){ 
        cout << minpath[i] + 1 << " ";
    }
    return 0;
}