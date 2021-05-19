// TRiangle
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[500][500]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j==n-1){
                a[i][j]=1;
                a[i][n-1]=1;
                a[n-1][j]=1;
            }    
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cout << a[i][j] << " ";
        }
        cout << endl;
    }
   return 0;              
    


}

