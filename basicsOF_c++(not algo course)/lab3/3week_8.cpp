// MaxToMin
#include <iostream> 

using namespace std;


int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int min = 1000000000, max =-1000000000;
     for(int i=0; i<n; i++){
        if(a[i]<min){
        min = a[i];    
        }
        if(a[i]>max){
            max = a[i];  
        }
    }

    for(int i=0; i<n; i++){
        if(a[i] == max){
            cout << min << " ";
        }
        else cout << a[i] << " ";
    }
    return 0;
}