#include <iostream>
#include <cmath>
using namespace std;
int main(){
    
    string s;
    int n;
    cin >> n;
    int a[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin >> a[i][j];



        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j][0]<a[i][0]){
                swap(a[j][0],a[i][0]);
                swap(a[j][1],a[i][1]);
                swap(a[j][2],a[i][2]);
            }
            if(a[j][0]==a[i][0]){
                if(a[j][1]<a[i][1]){
                swap(a[j][0],a[i][0]);
                swap(a[j][1],a[i][1]);
                swap(a[j][2],a[i][2]);
                }
                if(a[j][1]==a[i][1]){
                    if(a[j][2]<a[i][2]){
                swap(a[j][0],a[i][0]);
                swap(a[j][1],a[i][1]);
                swap(a[j][2],a[i][2]);
                }
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    

    
}
