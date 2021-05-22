#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b[m];
    for(int j=0;j<m;j++){
        cin >> b[j];
    }
    for(int i=0;i<n;i++){
        bool isFind=false;
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                isFind=true;
                break;
            }

        

        
        }
        if(isFind==false)
        cout << a[i] << " ";
    
    }
    cout << endl;
    return 0;

}