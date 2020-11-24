#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> first, second;
    int x;
    int cnt = 0;
    int n = 5;
    for (int i = 0; i < n; i++){
        cin >> x;
        first.push(x);
    }
    for (int i = 0; i < n; i++){
        cin >> x;
        second.push(x);
    }

    while (!first.empty() && !second.empty()){
        if (first.front() == 9 && second.front() == 0){
            second.push(first.front());
            second.push(second.front());
        }
        else if (first.front() == 0 && second.front() == 9){
            first.push(first.front());
            first.push(second.front());
        }
        else if (first.front() > second.front()){
            first.push(first.front());
            first.push(second.front());
        }
        else if (first.front() < second.front()){
            second.push(first.front());
            second.push(second.front());
        }
        second.pop();
        first.pop();
        cnt++;

        if (cnt >= 1000000){
            cout << "botva";
            return 0;
        }
    }

    if (!first.empty() && second.empty())
    cout << "first" << " " << cnt;
    else 
    cout << "second" << " " << cnt;
    
}