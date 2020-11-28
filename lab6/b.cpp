#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

vector<int> prefix_func(string s) {
    int n = s.size();
    vector<int> p(n);
    p[0] = 0;
    for (int i = 1; i < n; i++) {
        int j = p[i - 1];
        while (j > 0 && s[j] != s[i]) 
            j = p[j - 1];
        if (s[j] == s[i])
            j++;
        p[i] = j;
    }
    return p;
}

int main(){
    string s;
    cin >> s;

    vector<int> p = prefix_func(s);

    int res = s.size() - p[s.size() - 1];
    
    if(s.size() % res == 0){
        cout << s.size() / res;
    }
    else {
        cout << 1;
    }
    return 0;
}