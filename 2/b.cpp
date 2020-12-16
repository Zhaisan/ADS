#include <bits/stdc++.h>

using namespace std;
void go(){

    int n;
    cin >> n;
    int a[n][3];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i][2] > a[j][2]){
                swap(a[i][0], a[j][0]);
                swap(a[i][1], a[j][1]);
                swap(a[i][2], a[j][2]);
            }
            else if(a[i][1] > a[j][1] and a[i][2] == a[j][2]){
                swap(a[i][0], a[j][0]);
                swap(a[i][1], a[j][1]);
                swap(a[i][2], a[j][2]);
            }
            else if(a[i][0] > a[j][0] and a[i][1] == a[j][1] and a[i][2] == a[j][2]){
                swap(a[i][0], a[j][0]);
                swap(a[i][1], a[j][1]);
                swap(a[i][2], a[j][2]);
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }

}
int main(){
    int q = 1;
    while(q--){
        go();
        cout << '\n';
    }
    
    return 0;
}