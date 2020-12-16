#include <bits/stdc++.h> 

using namespace std;


int main() {
    deque<int> dq;
    int q;
    cin >> q;
    bool reverse = true;
    for(int i = 0; i < q; i++) {
        int x, y;
        cin >> x;
        if(x == 1) {
            cin >> y;
        }
        if(x == 1) {
            if(reverse) {
                dq.push_back(y);
            }
            else {
                dq.push_front(y);
            }
        }
        else {
            reverse = !reverse;
        }
    }
    if(reverse) {
        while (!dq.empty())
        {
            cout << dq.front() <<  " ";
            dq.pop_front();
        }
        
    }
    else{
        while (!dq.empty())
        {
            cout << dq.back() <<  " ";
            dq.pop_back();
        }
        
    }
    return 0;
}