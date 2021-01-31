#include <bits/stdc++.h>
typedef long long ll;

using namespace std;


int main() {
    int n, x;
    cin >> n;
    deque<int> deq;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.pb(x);
    }
    long long ans = 0;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        deq.push_back(v[i]);
    }
    while (deq.size() > 1) {
        ans += deq.front() + deq.back();
        deq.pop_back();
    }
    cout << ans;
}