#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin >> n >> m;
    int a[n][m];
    int maxi=-1;
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]>maxi)
            maxi=a[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++){
            if(a[i][j]==maxi)
            cnt++;
            break;
        }
    }
    
    cout << cnt;

    return 0;
}