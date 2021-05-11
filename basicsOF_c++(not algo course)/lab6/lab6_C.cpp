#include <iostream>
#include <string>
using namespace std;
bool check[500500];
int same(int a[],int b[],int n){
    int cnt=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;j++){
            if(a[i]==b[j] && check[j] == false)
            
            {
                cnt++;
                b[j] = true;
                break;
            }
    

        }

    }
    return cnt;
}

int main(){
    int n;
    cin >> n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    
    }
    for(int i=0;i<n;++i){
        cin >> b[i];
    }
    cout << same(a,b,n);
    return 0;
}