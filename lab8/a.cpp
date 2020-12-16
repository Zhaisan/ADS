#include <bits/stdc++.h>
#define zhaiss ios_base::sync_with_stdio(false); cin.tie(NULL)
typedef long long ll;

using namespace std;

int g[101][101];
int color[101];
int main(){
    zhaiss;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> g[i][j];

        } 
    }
    for(int i = 0; i < n; i++){
        cin >> color[i];
    }
    int result = 0; //количество плохих мостов
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(g[i][j] == 1){
                if(color[i] != color[j]){
                    result++;
                }
            }
        }
    }
    cout << result / 2;
    return 0;
}