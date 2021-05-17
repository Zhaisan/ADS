#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin >> n >> m;
    int a[n][m];
    int max=0,b=0,q=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
            
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             if(a[i][j]>max){ max=a[i][j];
             b=i;
             q=j;
             }
        }


        
    }
    cout << max << endl << b << " " << q;
    return 0;
}