#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPrime(int q){
    if(q==1) return false;
    if(q==0) return false;
    for(int i=2;i*i<=q;i++){
        if(q%i==0)
        return false;

    }
    return true;

}
int main() {
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i=0;i<n;i++)
    cin >> v[i];
    int k;
    cin >> k;
    int cnt=0;
    for(int i=0;i<v.size();i++){
        if(isPrime(v[i])==true && v[i]>k)
        cnt++;
    }
    cout << cnt;

    return 0;
}