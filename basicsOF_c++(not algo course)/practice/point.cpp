#include <iostream>
#include <algorithm>
using namespace std;

int maxi[500][500];

int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i][0];
        maxi[i][0] = sum;
    }
    sum = 0;
    for(int i = 0; i < m; i++){
        sum += a[0][i];
        maxi[0][i] = sum;
    }
    for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++){
            int tempMaxi = max(maxi[i - 1][j], maxi[i][j - 1]);


            
            maxi[i][j] = tempMaxi + a[i][j];
        }
    }
    cout << maxi[n - 1][m - 1];
    return 0;
}