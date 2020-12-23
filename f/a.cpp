#include <bits/stdc++.h>
#define zhaiss ios_base::sync_with_stdio(false); cin.tie(NULL)
typedef long long ll;

using namespace std;

bool is_ok(string s) {
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if(st.size() == 0){
            st.push(s[i]);
        }
        else if (st.top() == s[i])
            st.pop();
        else{
            st.push(s[i]);
        }
                        
    
    }
    if(st.size() == 0) {
        return true;
    }
    else{
        return false;
    }
}

void go() {
    string s;
    cin >> s;
    if (is_ok(s)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}

int main() {
    zhaiss;
    int T = 1;
    while(T--){
        go();
        cout << '\n';
    }
}