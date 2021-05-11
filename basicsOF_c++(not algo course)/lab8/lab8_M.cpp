#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
set<int> s;
int a[10001];
int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
        s.insert(a[i]);
        
    }
    
    int sum = 0;
    for(int i = 0; i <= s.size(); i++){
        sum += a[i];
    }
    cout << sum << endl;

    return 0;
}