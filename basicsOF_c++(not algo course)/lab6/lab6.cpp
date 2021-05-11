#include <iostream>
using namespace std;
bool IsHE(int a[],int n,int x){
    for(int i=0;i<n;i++){
        if(x==a[i])
        return true;
    }
    return false;

}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int x;
    cin >> x;
    if(IsHE(a,n,x)==true)
        cout << "YES";
        else 
        cout << "NO";

        


    return 0;
}