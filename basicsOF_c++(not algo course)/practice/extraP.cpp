#include <iostream>
using namespace std;
int main () {
    int n,m;
    cin >> n >> m;
    int a[n][m];
    int maxi=-1e9-15;
    int maxi2=-1e9-15;
    int q=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    int sum1=0;
    int sum2=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++){
            if(a[i][j]>maxi) maxi=a[i][j];q=i; 
            if(a[i][j]>maxi2 && maxi2==maxi)
        }
    }



    return 0;

}