#include <iostream>
using namespace std;
int main () {
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }

    int max=0,b=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
               
            sum+=a[i][j];

            
        }
        if(sum>max) max=sum,b=i;
    }

    cout<<max<<endl<<b;
    return 0;

}