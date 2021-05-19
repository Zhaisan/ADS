// High quality matrix
#include <iostream>
using namespace std;
int main () {
    int n,m,k,q=0;
    cin >> n >> m >> k;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<m;j++){
            if(a[i][j]==k){
                cnt++;
            }


        
        
        }
        if(cnt !=0) q++;

    }
    cout << q;

    return 0;
}
