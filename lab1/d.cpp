#include <bits/stdc++.h>
using namespace std;
int main(){
    queue<pair<int, string> > a, b, c;
    string s;
    int x;
    while(cin >> x){
        cin >> s;
        if (x == 9){
        a.push(make_pair(x, s));
        }else if (x == 10){
        b.push(make_pair(x, s));
        }else if (x == 11)
        c.push(make_pair(x, s));
    }
    while (!a.empty()){
        cout << a.front().first << " " << a.front().second << '\n';
        a.pop();
    }
    while (!b.empty()){
        cout << b.front().first << " " << b.front().second << '\n';
        b.pop();
    }
    while (!c.empty()){
        cout << c.front().first << " " << c.front().second << '\n';
        c.pop();
    }
    return 0;
}
