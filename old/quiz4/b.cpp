#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int main() {
   
    int n, x;
    cin >> n;
    queue<int> q;
    for (int i = 0; i < n; i++) {
        cin >> x;
        q.push(x);
        while (q.front() < x - 3000) {
            q.pop();
        }
        cout << q.size() << " ";
    }
}