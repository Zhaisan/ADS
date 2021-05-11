#include <iostream>
#include <string>
using namespace std;
bool secretbook(int a[],int n,int q){
    for(int i=0;i<n;i++){
     if(a[i]==q)
        return true;
    }
    return false;

}
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int q;
    cin >> q;
    if(secretbook(a,n,q)==true)
    cout << "YES";
    else 
    cout << "NO";

    return 0;
}