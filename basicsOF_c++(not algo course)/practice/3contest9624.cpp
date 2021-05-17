#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    int k;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==k)
            k=1;
            cout << 0;
            else if(a[i][j]==0)
            
            cout << 1;
        }
    }
    return 0;
}