#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int n, x;
    cin >> n;
    deque<int> order;
    stack<int> side;
    order.push_back(0);
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == 1 || x - 1 == order.back())
            order.push_back(x);
        else 
            side.push(x);
    }
    int temp = order.back();
        while(!side.empty()) {
            if (side.top() != temp + 1) {
                cout << "no" << endl;
                return 0;
            }
            temp = side.top();
            side.pop();
        }
    cout << "yes" << endl;
    return 0;
}