#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    int maxi1=-1e9-15,maxi2=-1e9-15;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]>maxi1){
            maxi2=maxi1;
            maxi1=a[i][j];
            }
            else if(a[i][j]>maxi2 && maxi2!=maxi1){
                
            }

        }
    }        

        

    return 0;
}