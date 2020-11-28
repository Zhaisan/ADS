#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int maxi = -1000000;
    int mini = 1000000;
    int pos1,pos2;
    for(int i = 0; i < n; i++){
        if(a[i] > maxi){
            maxi = a[i];
            
        }
        if(a[i] < mini){
            mini = a[i];
        }
        
    }
    for(int i = 0; i < n; i++){
        if(a[i] == maxi){
            a[i] = mini;
        }
        cout << a[i] << " ";
    }
    


    return 0;
}