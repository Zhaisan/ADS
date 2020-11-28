// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, m;
//     cin >> n >> m;
//     int a[n][m];
//     for(int i = 0; i < n; ++i){
//         for(int j = 0; j < m; ++j){
//             cin >> a[i][j];
//         }
//     }
//     int cnt = 0;
//     int maxi = -1e6;
//     int mini = 1e6;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             if(a[i][j] < mini){
//                 mini = a[i][j];
//             }
//         }
//     }
//     for(int j = 0; j < m; j++){
//         for(int i = 0; i < n; i++){
//             if(a[i][j] > maxi){
//                 maxi = a[i][j];
//             }
//         }
//     }
//     for(int i = 0; i < n; ++i){
//         for(int j = 0; j < m; ++j){
//             if((a[i][j] == mini) and (a[i][j] == maxi)){
//                 cnt++;
//             }
//         }
//     }
//     cout << cnt ;

//     return 0;
// }
#include <iostream>
using namespace std;
 int main(){
    
    int n , m;
    cin >> n >> m;
    int a[n+1][m+1], mini[n+1], maxi[m+1];
    int cnt = 0;
    for(int i = 0; i < n;i++){
        mini[i] = 1e9;
    }
    for(int j = 0; j < m; j++){
        maxi[j] = -1e9;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
            mini[i] = min(mini[i], a[i][j]);
            maxi[j] = max(maxi[j], a[i][j]);
        }
    }
    
    for(int i= 0; i < n; i++){
        for(int j = 0;j < m; j++){
            if(a[i][j] == mini[i] && a[i][j] == maxi[j]){
                cnt++;
            }
        }
    }
    cout << cnt;
}