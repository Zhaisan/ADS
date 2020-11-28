#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    for(int i = 0; i < k; i++){
        int qwe;
        cin >> qwe;
    
    int check = false;
    int l = 0;
    int r = n;
    int mid;

    
        

    
    while((l <= r) && (check != true)){
        mid = (l + r) / 2;
        if(a[mid] == qwe) check = true;
        if(a[mid] > qwe) r = mid - 1;
        else l = mid + 1;

    }
    if(check){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    }



    return 0;
}