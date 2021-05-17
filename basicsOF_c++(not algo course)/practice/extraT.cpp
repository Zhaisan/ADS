#include <iostream>
using namespace std;
int main () {
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[0][j]=1; a[i][0]=1;
             a[i][j]=a[i-1][j]+a[i][j-1];
        

        }
 }
 for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << a[i][j] << " ";
        }
        cout<< endl ;
 }                    
    return 0;
}