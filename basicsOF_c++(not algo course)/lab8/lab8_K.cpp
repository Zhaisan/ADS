#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    int k;
    cin >> k;
    int sum = 0;
    sort(v.begin(),v.end());
    for(int i = v.size() - k; i < v.size(); i++){
        sum += v[i];
    }
    cout << sum << endl;

    
    

    return 0;
}