
#include <bits/stdc++.h>
using namespace std;

int lower_bin_search(vector<int> &arr, int n){
    int l = 0, r = arr.size() - 1;
    while(r > l ){
        int mid = (l + r) / 2;
        if(arr[mid] < n){
            l = mid + 1;
        }
        else{
            r = mid;
        }
    }
    if(arr[l] == n){
        return l + 1;
    }
    else return 0;
}


int upper_bin_search(vector<int> &arr, int n){
    int l = 0, r = arr.size() - 1;
    while(r - l > 1){
        int mid = (l + r) / 2;
        if(arr[mid] <= n){
            l = mid;
        }
        else{
            r = mid - 1;
        }
    }
    if(arr[r] == n){
        return r + 1;
    }
    else if(arr[l] == n){
        return l + 1;
    }
    else return 0;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n), arr2(m);
    for(int i = 0;i < n;i++){
        cin >> arr1[i];
    }
    for(int i = 0;i < m;i++){
        cin >> arr2[i];
    }
    for(int i = 0; i < m; i++){
        int index1 = lower_bin_search(arr1, arr2[i]);
        int index2 = upper_bin_search(arr1, arr2[i]);
        if(index1 == 0 and index2 == 0){
            cout << 0 << '\n';
        }
        else{
            cout << index1 << " " << index2 << '\n';
        }
    }
    
    
    return 0;
}