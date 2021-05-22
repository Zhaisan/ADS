#include <iostream>
using namespace std;
//Количество элементов, больших предыдущего
int main() {
    int n;
    cin >> n;
    int a[n];
    int cnt=0;
    int max=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>a[0]){
            a[0]=a[i];
            cnt++;
        }
        else{
            a[0]=a[i];
        }
    }
    cout << cnt;
    return 0;
}