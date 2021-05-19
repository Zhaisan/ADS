// OD or EVEN
#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]%2==0) cout << "0" << " ";
            else cout << "1" << " ";
        }
        cout << endl;
    }
    return 0;
}
