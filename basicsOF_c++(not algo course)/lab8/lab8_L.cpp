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
    cout << s.size();

    return 0;
}
