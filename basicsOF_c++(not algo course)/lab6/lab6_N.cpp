#include <iostream>
using namespace std;

void transpose(int a[][10000], int n, int m){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    int a[n][10000];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    transpose(a, n, m);
    return 0;
}