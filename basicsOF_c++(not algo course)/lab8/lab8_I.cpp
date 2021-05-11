#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> v;
    for(int i=0;i<n;i++){
        int t;
        cin >> t;
        v.push_back(t);
    }
    int k;
    cin >> k;
    int a;
    for(int i=0;i<v.size();i++){
        if(k==v[i]){
            a++;
        }
    }
    if(a>=1) cout << "yes";
    else cout << "no";